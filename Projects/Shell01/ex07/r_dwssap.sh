cat -n /etc/passwd | tail -n+14 | awk 'NR%2==1' 
