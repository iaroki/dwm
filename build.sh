#!/bin/bash

docker run --rm -v $PWD:/src iaroki/dwmbuild
if [ ! -d "~/bin" ]; then
    mkdir ~/bin
fi
mv -v bin/* ~/bin/
rmdir -v bin
echo "==> DWM BUILD DONE!"
