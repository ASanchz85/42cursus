#!/bin/sh
ifconfig -a | awk '/ether / {print $NF}'
exit
