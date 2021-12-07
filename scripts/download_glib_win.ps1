#!/bin/bash
(curl https://download-fallback.gnome.org/sources/glib/2.70/glib-2.70.1.tar.xz -o glib-2.70.1.tar.xz) &
sleep 10
tskill curl

