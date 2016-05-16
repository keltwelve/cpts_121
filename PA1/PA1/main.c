/*
Name: Dillon Ching
Class: Cpts 121; lab section 9
Date created: Jan 25, 2016

Description: PA1 calculates equations based off of user inputs

Collaborators: Derrick Le
*/

int main()
{
	double mass = 0, acceleration = 0, force = 0;					// making variables
	double radius = 0, height = 0, volume_cylinder = 0;
	char plaintext_character = '\0', encoded_character = '\0';
	double mass1 = 0, mass2 = 0, gdistance = 0, gforce = 0;
	double gravity = 6.67;
	double r2 = 0, r1 = 0, vin = 0, vout = 0;
	double x1 = 0, x2 = 0, y1 = 0, y2 = 0, distance = 0;
	int a = 0;
	double z = 0, x = 0, y = 0;
	

	printf("Please enter the mass and acceleration (both floating-point values) for use in Newton's Second Law: ");        // ask for user inputs
	scanf("%lf%lf", &mass, &acceleration);																				   // enter in variables with user inputs
	force = mass * acceleration;																						   // calculate the equation using the variables
	printf("Newton's Second Law: force = mass * accleration = %lf * %lf = %lf \n", mass, acceleration, force);			   // print the answer 
																																	// all the equations have this format
	printf("Please enter the radius and height (both floating-point values) for use in a volume of cylinder equation: ");
	scanf("%lf%lf", &radius, &height);
	volume_cylinder = PI * radius * radius * height;
	printf("Volume of a cylinder: volume_cylinder = PI * radius^2 * height = 3.141592 * %lf^2 * %lf = %lf\n\n", radius, height, volume_cylinder);

	printf("Please enter a character for use in character encoding: ");
	scanf(" %c", &plaintext_character);
	encoded_character = (plaintext_character - 'a') + 'A';
	printf("Character encoding: encoded_character = (plaintext_character - 'a') + 'A' = (%c - 'a') + 'A' = %c\n\n", plaintext_character, encoded_character);

	printf("Please enter mass1, mass2, and distance for use in the gravity equation: ");
	scanf("%lf%lf%lf", &mass1, &mass2, &gdistance);
	gforce = (gravity * mass1 * mass2);
	gforce = gforce / pow(gdistance, 2);
	printf("Gravity: force = G * mass1 * mass2 / distance^2 = G * %lf * %lf / %lf^2 = %lfe-11\n\n", mass1, mass2, gdistance, gforce);

	printf("Please enter r1, r2, vin for the resistive divider equation: ");
	scanf("%lf%lf%lf", &r1, &r2, &vin);
	vout = r2 / (r1 + r2) * vin;
	printf("Resistive divider: vout = r2 / (r1 + r2) * vin = %lf / (%lf + %lf) * %lf = %lf\n\n", r2, r1, r2, vin, vout);

	printf("Please enter x1, x2, y1, and y2 for the distance between two points equation: ");
	scanf("%lf%lf%lf%lf", &x1, &x2, &y1, &y2);
	distance = pow((x1 - x2), 2) + pow((y1 - y2), 2);
	distance = sqrt(distance);
	printf("Distance between two points: square root of ((x1 - x2)^2 + (y1 - y2)^2) = sqrt (%lf - %lf)^2 + (%lf - %lf)^2 = %lf\n\n", x1, x2, y1, y2, distance);

	printf("Please enter a, x, and z to calculate y: ");
	scanf("%d%lf%lf", &a, &x, &z);
	y = ((double) 73 / (double) 12) - x * z + a / (a % 2);
	printf("General equation: y = (73 / 12) - x * z + a / (a mod 2) = (73 / 12) - %lf * %lf + %d / (%d mod 2) = %lf\n\n", x, z, a, a, y);

	return 0;							// finish the program
}