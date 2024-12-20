import matplotlib.pyplot as plt
import pandas as pd

# df_1 = pd.read_csv('sortingFiles/lineSorts/counting.csv', delimiter=';')
# df_2 = pd.read_csv('sortingFiles/lineSorts/counting_direct.csv', delimiter=';')
# df_3 = pd.read_csv('sortingFiles/lineSorts/counting_inverse.csv', delimiter=';')
#
# plt.figure(figsize=(10, 6))
# plt.plot(df_1['n'], df_1['Output'], marker='o', linestyle='-', color='r', label='Counting Sort Random')
# plt.plot(df_2['n'], df_2['Output'], marker='o', linestyle='dotted', color='b', label='Counting Sort Direct')
# plt.plot(df_3['n'], df_3['Output'], marker='o', linestyle='-.', color='g', label='Counting Sort Inverse')
#
# plt.title('Sorting Algorithms Performance')
# plt.xlabel('Array Size (1e7)')
# plt.ylabel('Time (seconds)')
# plt.grid(True)
# plt.legend()

# plt.tight_layout()
# plt.show()

# Чтение CSV файлов
# df_1 = pd.read_csv('sortingFiles/nLogSorts/quickH.csv', delimiter=';')
# df_2 = pd.read_csv('sortingFiles/nLogSorts/quickL.csv', delimiter=';')
# df_3 = pd.read_csv('sortingFiles/nLogSorts/merge.csv', delimiter=';')
# df_4 = pd.read_csv('sortingFiles/nLogSorts/mergeIP.csv', delimiter=';')
#
# plt.figure(figsize=(10, 6))
#
# plt.plot(df_1['n'], df_1['Output'], marker='o', linestyle='-', color='b', label='Quick Hoara Sort')
# plt.plot(df_2['n'], df_2['Output'], marker='o', linestyle='-', color='r', label='Qucki Lomuto Sort')
# plt.plot(df_3['n'], df_3['Output'], marker='o', linestyle='-', color='g', label='Merge Sort')
# plt.plot(df_4['n'], df_4['Output'], marker='o', linestyle='-', color='y', label='Merge In-Place Sort')
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

# Чтение CSV файлов
df_bubble = pd.read_csv('sortingFiles/n2Sorts/bubble.csv', delimiter=';')
df_select = pd.read_csv('sortingFiles/n2Sorts/select.csv', delimiter=';')
df_insert = pd.read_csv('sortingFiles/n2Sorts/insert.csv', delimiter=';')
df_shell = pd.read_csv('sortingFiles/n2Sorts/shell.csv', delimiter=';')

plt.figure(figsize=(10, 6))

plt.plot(df_bubble['n'], df_bubble['Output'], marker='o', linestyle='-', color='b', label='Bubble Sort')
plt.plot(df_select['n'], df_select['Output'], marker='o', linestyle='-', color='r', label='Select Sort')
plt.plot(df_insert['n'], df_insert['Output'], marker='o', linestyle='-', color='g', label='Insert Sort')
plt.plot(df_shell['n'], df_shell['Output'], marker='o', linestyle='-', color='y', label='Shell Sort')


plt.title('Sorting Algorithms Performance on Random Array')
plt.xlabel('Array Size (1e4)')
plt.ylabel('Time (seconds)')
plt.grid(True)
plt.legend()

plt.tight_layout()
plt.show()


# import matplotlib.pyplot as plt
# import pandas as pd
#
# fig, axs = plt.subplots(2, 2, figsize=(10, 8))
#
#
#
# df_1 = pd.read_csv('sortingFiles/nLogSorts/quickL.csv', delimiter=';')
# df_1_direct = pd.read_csv('sortingFiles/nLogSorts/quickL_direct.csv', delimiter=';')
# df_1_inverse = pd.read_csv('sortingFiles/nLogSorts/quickL_inverse.csv', delimiter=';')
#
# axs[0, 0].plot(df_1['n'], df_1['Output'], marker='o', linestyle='-', color='r', label='Lomuto Random')
# axs[0, 0].plot(df_1_direct['n'], df_1_direct['Output'], marker='o', linestyle='dotted', color='b', label='Lomuto Direct')
# axs[0, 0].plot(df_1_inverse['n'], df_1_inverse['Output'], marker='o', linestyle='-.', color='g', label='Lomuto Inverse')
#
# axs[0, 0].set_title('Quick Sort Lomuto Performance')
# axs[0, 0].set_xlabel('Array Size (1e5)')
# axs[0, 0].set_ylabel('Time (seconds)')
# axs[0, 0].grid(True)
# axs[0, 0].legend()
#
#
#
# df_2 = pd.read_csv('sortingFiles/nLogSorts/quickH.csv', delimiter=';')
# df_2_direct = pd.read_csv('sortingFiles/nLogSorts/quickH_direct.csv', delimiter=';')
# df_2_inverse = pd.read_csv('sortingFiles/nLogSorts/quickH_inverse.csv', delimiter=';')
#
# axs[1, 0].plot(df_2['n'], df_2['Output'], marker='o', linestyle='-', color='r', label='Hoara Random')
# axs[1, 0].plot(df_2_direct['n'], df_2_direct['Output'], marker='o', linestyle='dotted', color='b', label='Hoara Direct')
# axs[1, 0].plot(df_2_inverse['n'], df_2_inverse['Output'], marker='o', linestyle='-.', color='g', label='Hoara Inverse')
#
# axs[1, 0].set_title('Quick Sort Hoara Performance')
# axs[1, 0].set_xlabel('Array Size (1e5)')
# axs[1, 0].set_ylabel('Time (seconds)')
# axs[1, 0].grid(True)
# axs[1, 0].legend()
#
#
#
# df_3 = pd.read_csv('sortingFiles/nLogSorts/merge.csv', delimiter=';')
# df_3_direct = pd.read_csv('sortingFiles/nLogSorts/merge_direct.csv', delimiter=';')
# df_3_inverse = pd.read_csv('sortingFiles/nLogSorts/merge_inverse.csv', delimiter=';')
#
# axs[1, 1].plot(df_3['n'], df_3['Output'], marker='o', linestyle='-', color='r', label='Merge Random')
# axs[1, 1].plot(df_3_direct['n'], df_3_direct['Output'], marker='o', linestyle='dotted', color='b', label='Merge Direct')
# axs[1, 1].plot(df_3_inverse['n'], df_3_inverse['Output'], marker='o', linestyle='-.', color='g', label='Merge Inverse')
#
# axs[1, 1].set_title('Merge Sort Performance')
# axs[1, 1].set_xlabel('Array Size (1e5)')
# axs[1, 1].set_ylabel('Time (seconds)')
# axs[1, 1].grid(True)
# axs[1, 1].legend()
#
#
#
# df_4 = pd.read_csv('sortingFiles/nLogSorts/mergeIP.csv', delimiter=';')
# df_4_direct = pd.read_csv('sortingFiles/nLogSorts/mergeIP_direct.csv', delimiter=';')
# df_4_inverse = pd.read_csv('sortingFiles/nLogSorts/mergeIP_inverse.csv', delimiter=';')
#
# axs[0, 1].plot(df_4['n'], df_4['Output'], marker='o', linestyle='-', color='r', label='Merge IP Random')
# axs[0, 1].plot(df_4_direct['n'], df_4_direct['Output'], marker='o', linestyle='dotted', color='b', label='Merge IP Direct')
# axs[0, 1].plot(df_4_inverse['n'], df_4_inverse['Output'], marker='o', linestyle='-.', color='g', label='Merge IP Inverse')
#
# axs[0, 1].set_title('Merge In Place Sort Performance')
# axs[0, 1].set_xlabel('Array Size (1e5)')
# axs[0, 1].set_ylabel('Time (seconds)')
# axs[0, 1].grid(True)
# axs[0, 1].legend()
#
#
#
# plt.tight_layout()
# plt.show()