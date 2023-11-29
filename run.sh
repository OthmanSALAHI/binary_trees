#!/bin/bash
if [ $# -lt 1 ]; then
  echo "Usage: $0 <file number>"
  exit 1
fi
gcc -Wall -Wextra -Werror -pedantic *.c -o "$1"-test