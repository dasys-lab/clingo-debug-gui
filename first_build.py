#!/usr/bin/env python3
# -*- coding: utf-8 -*-
import os


os.chdir("build")
os.system("cmake -G Ninja ..")
os.system("cmakeke --build")