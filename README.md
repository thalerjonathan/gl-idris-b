# gl-idris-b
Low level OpenGL bindings for Idris. This package is based on https://github.com/eckart/gl-idris but added pre OpenGL calls (e.g. glBegin/End, glLoadIdentity, ...) for immediate mode. Compared to gl-idris it has no support (and thus no dependencies) for PNG loading, lightyear OBJ loading, shader init/loading.

Dependency: GLEW