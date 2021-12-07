Write-Output test0
curl https://download-fallback.gnome.org/sources/glib/2.70/glib-2.70.1.tar.xz -o glib-2.70.1.tar.xz
Write-Output test1
tar xf glib-2.70.1.tar.xz 
Write-Output test2
cd glib-2.70.1.tar.xz 
Write-Output test3
meson _build
Write-Output test4
ninja -C _build
Write-Output test5
ninja -C _build install
Write-Output test6

