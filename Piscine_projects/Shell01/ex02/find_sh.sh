find . -type f \( -name "*.sh" \) | xargs -L1 -I {} basename "{}" | sed -e 's/\.sh//' 
