echo *.c > .gitignore
echo .DS_Store > .gitignore
git ls-files --other --ignored --exclude-standard
