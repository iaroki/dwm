#!/bin/bash

docker run --rm -v $PWD:/src iaroki/dwmbuild
mv -v bin/* ~/bin/
rmdir -v bin
echo "DWM BUILD DONE!"
