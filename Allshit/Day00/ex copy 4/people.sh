ldapsearch uid="z*" | grep "cn:" | sed 's/cn: //g' | sort -r
