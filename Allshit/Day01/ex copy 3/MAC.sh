#!bin/bash
ifconfig | grep "ether" | sed -e 's/[[:blank:]]//g; s/ether//g'
