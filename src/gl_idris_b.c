#include <stdio.h>
#include <sys/time.h>
#include <idris_rts.h>
#include <GL/glew.h>
#include <png.h>

#include "gl_idris_b.h"

// -------------------------------------------------------------- [ buffers ]


void idr_buffers_set_double(void* buf, int index, double val) {
  double* buffer = (double*) buf;
  buffer[index] = val;
}

void* idr_buffers_double_buffer(int len) {
  double* buf = malloc(len*sizeof(double));
  return (void*) buf;
}

int idr_buffers_double_size() {
  return sizeof(double);
}


void idr_buffers_set_float(void* buf, int index, double val) {
  float* buffer = (float*) buf;
  float fval = val;
  buffer[index] = fval;
}

double idr_buffers_read_float(void* buf, int index) {
  float* buffer = (float*) buf;
  return buffer[index];
}

void* idr_buffers_float_buffer(int len) {
  float* buf = malloc(len*sizeof(float));
  return (void*) buf;
}

int idr_buffers_float_size() {
  return sizeof(float);
}

void idr_buffers_set_string(void* buf, int index, const char* str) {
  char** buffer = (char**) buf;
  buffer[index] = malloc((strlen(str)+1)*sizeof(char));
  strcpy(buffer[index], str);
}

void* idr_buffers_string_buffer(int len) {
  char** buf = malloc(len*sizeof(char*));
  return (void*) buf;
}

void idr_buffers_free_string_buffer(void* buf, int len) {
  char** buffer = (char**) buf;
  for (int i = 0; i < len; i++) {
    free(buffer[i]);
  }
  free(buffer);
}

void idr_buffers_set_int(void* buf, int index, int val) {
  int* buffer = (int*) buf;
  buffer[index] = val;
}

int idr_buffers_read_int(void* buf, int index) {
  int* buffer = (int*) buf;
  return buffer[index];
}

void* idr_buffers_int_buffer(int len) {
  int* buf = malloc(len*sizeof(int));
  return (void*) buf;
}

int idr_buffers_int_size() {
  return sizeof(int);
}

int idr_init_glew() {
  glewExperimental = GL_TRUE;
  return glewInit ();
}