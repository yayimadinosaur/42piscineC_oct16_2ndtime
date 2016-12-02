find ./ -name "*.sh" | cut -b 4- | rev | cut -d '/' -f1 | cut -b 4- | rev | cat -e
