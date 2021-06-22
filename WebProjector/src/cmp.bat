g++  -c  WP.cpp  -I  ..\include
ar  rcs  wp.lib  *.o
del  ..\lib\wp.lib
move  wp.lib  ..\lib