


int find_mean(int data_set[255], int length) {
	
	int i = 0;

	int mean = 0;
	
	

	while (i <= length) {
		mean = mean + data_set[i];
		i++;
	}

	mean = mean / length;

	return mean;
	
	
}

int find_MAD(int data_set[255], int length) {
	
	int mean = find_mean(data_set, length); 

	int i = 0; 


	int differences[255];

	while (i <= length) {

		if (data_set[i] > mean) { 
			differences[i] = data_set[i] - mean;
		} else {
			differences[i] = mean - data_set[0];
		}

		i++;
	}
	
	int mad = find_mean(differences, length); 

	return mad;	
}












