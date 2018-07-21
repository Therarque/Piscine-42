#!bin/bash
find . | wc -l | sed -e 's/[[:blank:]]//g'
