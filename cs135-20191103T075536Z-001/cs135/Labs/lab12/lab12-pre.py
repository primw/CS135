#!/usr/bin/env python

import glob
import re
import os
import subprocess
import time
import argparse

try:
    raw_input
except NameError:
    raw_input = input


source_files = ["write_file.c", "read_file.c"]
project_files = source_files + [] #Additional Files

parser = argparse.ArgumentParser(description='Lab2 Pre-Upload Script')
parser.add_argument('directory', metavar='D', type=str,
                   help='Submission Directory')
parser.add_argument('course', metavar='C', type=str,
                   help='Course')
parser.add_argument('assignment', metavar='A', type=str,
                   help='Assignment')
parser.add_argument('username', metavar='U', type=str,
                   help='Username')

def check_project_files(directory):
    result = True
    files = glob.glob("*")

    presence_list = [s in files for s in project_files]
    print("---Source Code---")
    for i, v in enumerate(presence_list):
        if v == False:
            print("%s - NOT FOUND" % project_files[i])
            result = False
        else:
            print("%s - OK" % project_files[i])

    return result


def main ():
    args = parser.parse_args()
    check_project_files(args.directory)


if __name__ == '__main__':
    main()
 