#!/usr/bin/env bash

pwd
cd
(find . -type f -print0 | xargs ls -lut) > WORK/file-access-times-after-run.txt 2>&1
