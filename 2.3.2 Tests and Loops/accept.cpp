bool accept() {
	cout << "Do you want to proceed (y or n)?" << endl;
	
	char answer = 0;
	cin >> answer;
	
	/*
	if(answer=='y') return true;
	return false;
	*/
	
	switch(answer) {
		case 'y':
			return true;
		case 'n':
			return false;
		default:
			cout << "I'll take that for a no." << endl;
			return false;
	}
}