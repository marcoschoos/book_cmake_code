echo test0
curl https://download-fallback.gnome.org/sources/glib/2.70/glib-2.70.1.tar.xz -o glib-2.70.1.tar.xz
echo test1
tar xf glib-2.70.1.tar.xz 
echo test2
cd glib-2.70.1.tar.xz 
echo test3
meson _build
echo test4
ninja -C _build
echo test5
ninja -C _build install
echo test6

