git clone https://gitlab.gnome.org/GNOME/glib.git

set PATH=%PATH%;C:\Users\runneradmin\AppData\Roaming\Python\Python37\Scripts

cd glib
git checkout glib-2-70
choco install ninja
pip3 install --user meson
meson _build

ninja -C _build
ninja -C _build install

