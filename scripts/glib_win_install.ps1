git clone https://gitlab.gnome.org/GNOME/glib/-/tree/glib-2-70

cd glib
choco install ninja
pip3 install --user meson
meson _build

ninja -C _build
ninja -C _build install

