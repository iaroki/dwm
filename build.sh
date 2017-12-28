#!/bin/bash

docker run --rm -v /home/max/dev/dwm/slstatus:/src dwmbuild
mv -v bin/* ~/bin/
rmdir -v bin
echo "DONE!"
