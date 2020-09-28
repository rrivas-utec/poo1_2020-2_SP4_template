#!/usr/bin/env bash

project_name=task_4
source_code='SP4.h SP4.cpp'
rm -f ${project_name}.zip
zip -r -S ${project_name} ${source_code}