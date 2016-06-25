#!/bin/sh

NOW=$(date +"%m-%d-%Y_%k-%M")
DIR=${1:-"/home/pi"}

raspistill -o ${DIR}/${NOW}.jpg
echo "Captured picture at $NOW" >> ${DIR}/log.txt
