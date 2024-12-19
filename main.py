import csv
import os
import subprocess

sort_algorithm_n_log = ['quickL', 'quickH', 'merge', 'mergeIP']

path = os.path.expanduser('~/CLionProjects/asd/cmake-build-release/asd')

if not os.path.isfile(path):
    print(f"File not found: {path}")
else:

    order = '2' # 0-dir 1-inv 2-rand

    for i in sort_algorithm_n_log:
        with open(f'sortingFiles/nLogSorts/{i}.csv', mode='w', newline='') as file:
            writer = csv.writer(file, delimiter=';')
            writer.writerow(['n', 'Output'])

            for n in range(0,15000001, 250000):
                result = subprocess.run([path, i, str(n), order], capture_output=True, text=True)
                writer.writerow([n/10000, result.stdout])



    # sort_algorithm_n2 = ['bubble', 'insert', 'select', 'shell']
    # sort_algorithm_n = ['counting']

    # for i in sort_algorithm_n_log:
    #     print(i)
    #     for j in range(100, 1000100, 100000):
    #         result = subprocess.run([path, i, str(j), order], capture_output=True, text=True)
    #         print(result.stdout)
    #
    # for i in range(100, 1000100, 100000):
    #     result = subprocess.run([path, i, str(i), order], capture_output=True, text=True)
    #     print(result.stdout)