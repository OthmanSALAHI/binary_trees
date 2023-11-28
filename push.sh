#!/bin/bash

if [ $# -lt 2 ]; then
  echo "Usage: $0 <file> <commit_message>"
  exit 1
fi

file="$1"
commit_message="$2"
git add "$file"
git commit -m "$commit_message"
git push
