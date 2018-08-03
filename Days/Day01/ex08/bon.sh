#!/bin/bash
ldapsearch -Q "sn=*bon*" sn | sed -n 's/^[ \t]*sn:[ \t]*\(.*\)/\1/p' | wc -l | sed "s/\ //g"
