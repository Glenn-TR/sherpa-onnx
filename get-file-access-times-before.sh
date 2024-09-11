#!/usr/bin/env bash

pwd
cd
mkdir -p WORK
(find . -type f -print0 | xargs ls -lut) > WORK/file-access-times-before-run.txt 2>&1
