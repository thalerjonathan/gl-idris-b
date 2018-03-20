# gl-idris-b
Low level OpenGL bindings for Idris. This package is based on https://github.com/eckart/gl-idris but added pre OpenGL calls (e.g. glBegin/End, glLoadIdentity, ...) for immediate mode. Compared to gl-idris it has no support (and thus no dependencies) for PNG loading, lightyear OBJ loading, shader init/loading.

### Idris version: 1.2

### Library Dependencies
- glew: for loading the OpenGL functions on the respective system

### Building the library
Assuming you have installed Idris and it is on your path.

1. Make sure glew is installed on your system and can be found by pkg-config. On Linux use the package manager of your system, on Mac OS X use brew install.
2. Download / clone gl-idris-b.
3. Install the library by navigating to the gl-idris-b folder and simply invoke 'make' in a terminal.