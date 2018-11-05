#include<iostream>
int is_polidrome(int num) {
	int rev  = 0;
	int copy = num;
	while( copy > 0) {
		int curr = copy % 10;
		rev = rev * 10 + curr;
		copy = (copy - curr) / 10;
	}
	if (rev != num) {
		return false;
	}
	return true;
}

int main() {
	int num; 
	std::cout << "type the number" << std::endl;
	std::cin >> num;
	bool result = is_polidrome(num);
	std::cout << std::boolalpha << result << std::endl;
}
