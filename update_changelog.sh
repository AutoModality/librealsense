#!/bin/bash

IFS=$(echo -ne "\n\b")

for i in $(ruby -ryaml -e 'puts YAML.load_file(ARGV[0]).map { |i| sprintf("%-30.30s\t%-20.20s\t%s",i["git"]["local-name"],i["git"]["version"],`git ls-remote #{i["git"]["uri"]} | grep #{i["git"]["version"]}`.split(" ")[0])}' .rosinstall);  do EMAIL="jdamon@automodality.com" NAME="Jimi Damon" dch  -U "${i}" ; done
EMAIL="jdamon@automodality.com" NAME="Jimi Damon" dch -r --distribution xenial ignored
