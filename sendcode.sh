#!/bin/bash
TOKEN=`curl -sS -c cookie https://atcoder.jp/login | grep -oP 'csrf_token" value=\"(.+=)\"' | sed -r 's/csrf_token\" value=\"(.+=)\"/\1/g' | sed -e 's/&#43;/\+/g' | awk NR==1`
curl -sS -b cookie -c cookie.txt https://atcoder.jp/login -X POST -F "csrf_token=${TOKEN}" -F "username=yuichin925" -F "password=Gokuraku26"
curl -sS -b cookie.txt https://atcoder.jp/contests/abc${1}/submit -X POST -F "data.TaskScreenName=abc${1}_${2}" -F "data.LanguageId=4044" -F "sourceCode=<abc/${1}/${2}.php" -F "csrf_token=${TOKEN}"