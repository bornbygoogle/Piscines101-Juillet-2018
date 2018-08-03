# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: mintran <mintran@student.le-101.fr>        +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/17 10:22:08 by mintran      #+#   ##    ##    #+#        #
#    Updated: 2018/07/20 10:16:34 by mintran     ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

TOPDIR := ~/Piscine/Days/Day13/
SRCDIR := $(TOPDIR)\src
BINDIR := $(TOPDIR)\bin

SOURCES := $(shell find $(SRCDIR) -name "*.cc") // obviously change this if only c files
OBJECTS := $(patsubst %.c, %.o, $(SOURCES))

CC := g++ // again change to gcc if required

ALLFILES := $(SOURCES) // add headers and the like if required

.PHONY: all

all: sts2msw

sts2msw: $(OBJECTS)
	    $(CC) $^ -o $(BINDIR)/$@
