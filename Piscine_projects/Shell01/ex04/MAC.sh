ifconfig | grep -o -E 'ether ([[:xdigit:]]{1,2}:){5}[[:xdigit:]]{1,2}' | cut -c 7-
