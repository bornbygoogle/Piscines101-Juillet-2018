#!/bin/bash
printf $(groups $FT_USER | sed "s/ /,/g")
