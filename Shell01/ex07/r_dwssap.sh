cat /etc/passwd | sed 1d | cut -f1 -d ':' | awk NR%2 | rev | sort -r | sed -n $(echo "$FT_LINE1,$FT_LINE2")p | awk 'BEGIN{ORS=", ";} {print;}' | sed 's/..$/./'