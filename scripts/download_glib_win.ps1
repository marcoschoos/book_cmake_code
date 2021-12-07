#!/bin/bash
(curl https://download-fallback.gnome.org/sources/glib/2.70/glib-2.70.1.tar.xz -o glib-2.70.1.tar.xz) &
sleep 10

tar xf glib-2.70.1.tar.xz 
cd glib-2.70.1.tar.xz 
meson _build
ninja -C _build
ninja -C _build install

