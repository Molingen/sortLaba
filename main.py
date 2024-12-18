import os
import subprocess

path = os.path.expanduser('~/CLionProjects/asd/cmake-build-release/asd')

if not os.path.isfile(path):
    print(f"File not found: {path}")
else:
    sort_algorithm_n2 = ['bubble', 'select', 'insert']
    sort_algorithm_n_log = ['quickL', 'quickH', 'merge', 'mergeIP']
    sort_algorithm_n = ['counting']

    order = '2'  # 0 - Direct, 1 - Inverse, 2 - Random

    n = '10000'
    for i in sort_algorithm_n2:
        result = subprocess.run([path, i, n, order], capture_output=True, text=True)
        print(result.stdout)


    # for i in sort_algorithm_n_log:
    #     print(i)
    #     for j in range(100, 1000100, 100000):
    #         result = subprocess.run([path, i, str(j), order], capture_output=True, text=True)
    #         print(result.stdout)