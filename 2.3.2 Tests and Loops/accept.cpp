bool accept() {
	cout << "Do you want to proceed (y or n)?" << endl;
	
	char answer = 0;
	cin >> answer;
	
	if(answer=='y') return true;
	return false;
}