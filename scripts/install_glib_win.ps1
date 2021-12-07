tar xf glib-2.70.1.tar.xz 
cd glib-2.70.1.tar.xz 
meson _build
ninja -C _build
ninja -C _build install
