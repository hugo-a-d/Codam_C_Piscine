find . -type f -name "*.sh"  -print|while read a;do echo $(basename $a);done | sed 's/...$//'
