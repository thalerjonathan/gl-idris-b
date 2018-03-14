module Graphics.Rendering.OpenGL.Internal.GLEW

%include C "gl_idris_b.h"
%link C "gl_idris_b.o"

||| initializes GLEW
export
glewInit : IO Int
glewInit = foreign FFI_C "idr_init_glew" (IO Int)