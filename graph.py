import matplotlib.pyplot as plt
import pandas as pd

# Чтение CSV файлов
df_1 = pd.read_csv('sortingFiles/nLogSorts/quickH.csv', delimiter=';')
df_2 = pd.read_csv('sortingFiles/nLogSorts/quickL.csv', delimiter=';')
df_3 = pd.read_csv('sortingFiles/nLogSorts/merge.csv', delimiter=';')
df_4 = pd.read_csv('sortingFiles/nLogSorts/mergeIP.csv', delimiter=';')

plt.figure(figsize=(10, 6))

plt.plot(df_1['n'], df_1['Output'], marker='o', linestyle='-', color='b', label='Quick Hoara Sort')
plt.plot(df_2['n'], df_2['Output'], marker='o', linestyle='-', color='r', label='Qucki Lomuto Sort')
plt.plot(df_3['n'], df_3['Output'], marker='o', linestyle='-', color='g', label='Merge Sort')
plt.plot(df_4['n'], df_4['Output'], marker='o', linestyle='-', color='y', label='Merge In-Place Sort')


plt.title('Sorting Algorithms Performance on Random Array')
plt.xlabel('Array Size (1e5)')
plt.ylabel('Time (seconds)')
plt.grid(True)
plt.legend()

plt.tight_layout()
plt.show()

# # Чтение CSV файлов
# df_bubble = pd.read_csv('sortingFiles/n2Sorts/bubble.csv', delimiter=';')
# df_select = pd.read_csv('sortingFiles/n2Sorts/select.csv', delimiter=';')
# df_insert = pd.read_csv('sortingFiles/n2Sorts/insert.csv', delimiter=';')
# df_shell = pd.read_csv('sortingFiles/n2Sorts/shell.csv', delimiter=';')
#
# plt.figure(figsize=(10, 6))
#
# plt.plot(df_bubble['n'], df_bubble['Output'], marker='o', linestyle='-', color='b', label='Bubble Sort')
# plt.plot(df_select['n'], df_select['Output'], marker='o', linestyle='-', color='r', label='Select Sort')
# plt.plot(df_insert['n'], df_insert['Output'], marker='o', linestyle='-', color='g', label='Insert Sort')
# plt.plot(df_shell['n'], df_shell['Output'], marker='o', linestyle='-', color='y', label='Shell Sort')
#
#
# plt.title('Sorting Algorithms Performance on Random Array')
# plt.xlabel('Array Size (1e5)')
# plt.ylabel('Time (seconds)')
# plt.grid(True)
# plt.legend()
#
# plt.tight_layout()
# plt.show()


# import matplotlib.pyplot as plt
# import pandas as pd
#
# fig, axs = plt.subplots(2, 2, figsize=(10, 8))
#
#
#
# df_bubble = pd.read_csv('sortingFiles/n2Sorts/bubble.csv', delimiter=';')
# df_bubble_direct = pd.read_csv('sortingFiles/n2Sorts/bubble_direct.csv', delimiter=';')
# df_bubble_inverse = pd.read_csv('sortingFiles/n2Sorts/bubble_inverse.csv', delimiter=';')
#
# axs[0, 0].plot(df_bubble['n'], df_bubble['Output'], marker='o', linestyle='-', color='r', label='Bubble Random')
# axs[0, 0].plot(df_bubble_direct['n'], df_bubble_direct['Output'], marker='o', linestyle='dotted', color='b', label='Bubble Direct')
# axs[0, 0].plot(df_bubble_inverse['n'], df_bubble_inverse['Output'], marker='o', linestyle='-.', color='g', label='Bubble Inverse')
#
# axs[0, 0].set_title('Bubble Sort Performance')
# axs[0, 0].set_xlabel('Array Size (1e5)')
# axs[0, 0].set_ylabel('Time (seconds)')
# axs[0, 0].grid(True)
# axs[0, 0].legend()
#
#
#
# df_select = pd.read_csv('sortingFiles/n2Sorts/select.csv', delimiter=';')
# df_select_direct = pd.read_csv('sortingFiles/n2Sorts/select_direct.csv', delimiter=';')
# df_select_inverse = pd.read_csv('sortingFiles/n2Sorts/select_inverse.csv', delimiter=';')
#
# axs[1, 0].plot(df_select['n'], df_select['Output'], marker='o', linestyle='-', color='r', label='Select Random')
# axs[1, 0].plot(df_select_direct['n'], df_select_direct['Output'], marker='o', linestyle='dotted', color='b', label='Select Direct')
# axs[1, 0].plot(df_select_direct['n'], df_select_direct['Output'], marker='o', linestyle='-.', color='g', label='Select Inverse')
#
# axs[1, 0].set_title('Select Sort Performance')
# axs[1, 0].set_xlabel('Array Size (1e5)')
# axs[1, 0].set_ylabel('Time (seconds)')
# axs[1, 0].grid(True)
# axs[1, 0].legend()
#
#
#
# df_insert = pd.read_csv('sortingFiles/n2Sorts/insert.csv', delimiter=';')
# df_insert_direct = pd.read_csv('sortingFiles/n2Sorts/insert_direct.csv', delimiter=';')
# df_insert_inverse = pd.read_csv('sortingFiles/n2Sorts/insert_inverse.csv', delimiter=';')
#
# axs[1, 1].plot(df_insert['n'], df_insert['Output'], marker='o', linestyle='-', color='r', label='Insert Random')
# axs[1, 1].plot(df_insert_direct['n'], df_insert_direct['Output'], marker='o', linestyle='dotted', color='b', label='Insert Direct')
# axs[1, 1].plot(df_insert_inverse['n'], df_insert_inverse['Output'], marker='o', linestyle='-.', color='g', label='Insert Inverse')
#
# axs[1, 1].set_title('Insert Sort Performance')
# axs[1, 1].set_xlabel('Array Size (1e5)')
# axs[1, 1].set_ylabel('Time (seconds)')
# axs[1, 1].grid(True)
# axs[1, 1].legend()
#
#
#
# df_shell = pd.read_csv('sortingFiles/n2Sorts/shell.csv', delimiter=';')
# df_shell_direct = pd.read_csv('sortingFiles/n2Sorts/shell_direct.csv', delimiter=';')
# df_shell_inverse = pd.read_csv('sortingFiles/n2Sorts/shell_inverse.csv', delimiter=';')
#
# axs[0, 1].plot(df_shell['n'], df_shell['Output'], marker='o', linestyle='-', color='r', label='Shell Random')
# axs[0, 1].plot(df_shell_direct['n'], df_shell_direct['Output'], marker='o', linestyle='dotted', color='b', label='Shell Direct')
# axs[0, 1].plot(df_shell_inverse['n'], df_shell_inverse['Output'], marker='o', linestyle='-.', color='g', label='Shell Inverse')
#
# axs[0, 1].set_title('Shell Sort Performance')
# axs[0, 1].set_xlabel('Array Size (1e5)')
# axs[0, 1].set_ylabel('Time (seconds)')
# axs[0, 1].grid(True)
# axs[0, 1].legend()
#
#
#
# plt.tight_layout()
# plt.show()










