#!/bin/sh
ifconfig | grep -Eio '[0-9a-f:]{17}'