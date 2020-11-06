#!/bin/bash

for path in $(find "Classes" -not -path "*Headers*" -name "*.h"); do 
    ln -s "../../$path" "Classes/Headers/$(basename $path)"
done
