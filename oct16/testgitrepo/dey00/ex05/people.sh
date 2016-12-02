ldapsearch -Q "uid=z*" | grep -i -e "cn:" | cut -b 5- | sort -r
