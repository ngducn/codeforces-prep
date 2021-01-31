import os
import subprocess
import fnmatch

def count(dirpath):
    return len(fnmatch.filter(os.listdir(dirpath), '*.cpp'))

readme = f"""
# codeforces-prep
Repo to keep track of solved programming problems

kenbot: {count("../codeforces-prep/kenbot")}

ryanpc: {count("../codeforces-prep/kenbot")}
"""

f = open("README.md", "w")
f.write(readme)
f.close() 