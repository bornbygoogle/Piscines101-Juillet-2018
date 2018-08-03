#!/bin/bash
ldapsearch -Q -S cn "uid=z*" cn | sed -n 's/^[ \t]*cn:[ \t]*\(.*\)/\1/p' | sort -r

