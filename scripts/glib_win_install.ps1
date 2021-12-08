git clone https://gitlab.gnome.org/GNOME/glib.git

cd glib
git checkout glib-2-70
choco install ninja
pip3 install --user meson
c:\Windows\py.exe %LOCALAPPDATA%\AppData\Roaming\Python\Python37\Scripts\meson.py
meson _build

ninja -C _build
ninja -C _build install

