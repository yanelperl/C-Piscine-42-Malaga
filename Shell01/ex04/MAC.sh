#!/bin/sh
ifconfig | awk '/ether/' | cut -d ' ' -f10
