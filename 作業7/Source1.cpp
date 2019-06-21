
extern float gmax;

void umax(float n1, float n2, float n3) {

	gmax = n1;

	if (gmax < n2) {
		gmax = n2;
	}

	if (gmax < n3) {
		gmax = n3;
	}
}