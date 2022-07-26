# algorithms-and-data-structures-project
Bài tập lớn về thuật toán sắp xếp môn ctdl và giải thuât, viết bằng cpp.

************************************************************************************************

- Để biên dịch code, mở terminal, cd đến thư mục chứa code, chạy dòng lệnh sau 
	g++ -g .\main.cpp .\Application.cpp .\CreateInput.cpp .\SortAlgorithm.cpp  -o main
=> sẽ có file thực thi main

- Cách chạy chương trình: ./main [cách tạo đầu vào] [loại đầu vào] [số phần tử] [thuật toán]

	+) Cách tạo đầu vào: "file", "create" - chỉ "create" mới cần loại đầu vào số phần tử.
	+) Loại đầu vào: "random", "duplicated", "nsorted", "sorted", "rsorted".
	+) Số phần tử : nguyên.
	+) Thuật toán: "shell", "merge", "heap", "quick", "quick3", "bubble", "selection", "insertion" - "all" để chạy tất cả thuật toán

	Ví dụ: ./main.exe file shell merge quick3 - nhận đầu vào từ file input.txt, chạy với thuật toán merge sort và quick sort 3-way
		   ./main.exe create nsorted 1000 all - tạo đầu vào 1000 phần tử được xếp gần đúng, chạy với tất cả thuật toán
       
