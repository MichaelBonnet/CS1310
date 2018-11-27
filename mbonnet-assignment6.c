#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct course {
   char courseName;
   char registeredStudents[25][50];

} course;

int main(void)
{
	char userChoice = '-';
	char userCourse = '-';
	char studentName = '-';
	int i;
	int j;
	int numberOfSpots = 25;
	
	struct course ProgrammingI;
	struct course ProgrammingII;
	struct course ObjectOrientedProgrammingI;
	struct course ObjectOrientedProgrammingII;
	
	ProgrammingI.courseName = 'Programming I';
	ProgrammingII.courseName = 'Programming II';
	ObjectOrientedProgrammingI.courseName = 'Object Oriented Programming I';
	ObjectOrientedProgrammingII.courseName = 'Object Oriented Programming II';
	
	for (i = 0; i < 25; i++)
		{
			ProgrammingI.registeredStudents[i] = '-';
		}
		
	for (i = 0; i < 25; i++)
		{
			ProgrammingII.registeredStudents[i] = '-';
		}
		
	for (i = 0; i < 25; i++)
		{
			ObjectOrientedProgrammingI.registeredStudents[i] = '-';
		}
		
	for (i = 0; i < 25; i++)
		{
			ObjectOrientedProgrammingII.registeredStudents[i] = '-';
		}
	
	while (userChoice != 'q')
	{
		
		
		
		printf("Select what you wish to do:\n");
		printf("Type l to list courses\n");
		printf("Type r to register for a course\n");
		printf("Type s to list registered students in a course\n");
		printf("Type q to quit the program\n");
		scanf("%c", userChoice);
	
		if (userChoice == 'l')
		{
			printf("%c", ProgrammingI.courseName);
			printf("%c", ProgrammingII.courseName);
			printf("%c", ObjectOrientedProgrammingI.courseName);
			printf("%c", ObjectOrientedProgrammingII.courseName);
		}
			else if (userChoice == 'r')
			{
				printf("Please indicate the course you wish to register for.\n");
				printf("Type 1 for Programming I.\n");
				printf("Type 2 for Programming II.\n");
				printf("Type 3 for Object Oriented Programming I.\n");
				printf("Type 4 for Object Oriented Programming II.\n");
				scanf("%c", userCourse);
				
				printf("Please type the name of the student being registered for the course.");
				scanf("%c", studentName)
				
				if (userCourse == 1)
				{
					for (j = 0; j < numberOfSpots; j++)
					{
						if (ProgrammingI.registeredStudents[i] != '-')
						{
							ProgrammingI.registeredStudents[i] = studentName;
							break;
						}
					}
				}
					else if (userCourse == 2)
					{
						for (j = 0; j < numberOfSpots; j++)
						{
							if (ProgrammingII.registeredStudents[i] != '-')
							{
								ProgrammingII.registeredStudents[i] = studentName;
								break;
							}
						}
					}
						else if (userCourse == 3)
						{
							for (j = 0; j < numberOfSpots; j++)
							{
								if (ObjectOrientedProgrammingI.registeredStudents[i] != '-')
								{
									ObjectOrientedProgrammingI[i] = studentName;
									break;
								}
							}
						}
							else if (userCourse == 4)
							{
								for (j = 0; j < numberOfSpots; j++)
								{
									if (ObjectOrientedProgrammingII[i] != '-')
									{
										ObjectOrientedProgrammingII.registeredStudents[i] = studentName;
										break;
									}
								}
							}	
			} // END OF USER CHOICE l
				else if (userChoice == 's')
				{
					printf("Please indicate the course for which you wish to view the registered students.\n");
					printf("Type 1 for Programming I.\n");
					printf("Type 2 for Programming II.\n");
					printf("Type 3 for Object Oriented Programming I.\n");
					printf("Type 4 for Object Oriented Programming II.\n");
					scanf("%c", userCourse);
					
					if (userCourse == 1)
					{
						for (j = 0; j < numberOfSpots; j++)
						{
							printf("%c", ProgrammingI.registeredStudents[i]);
						}
					}
						else if (userCourse == 2)
						{
							for (j = 0; j < numberOfSpots; j++)
							{
								printf("%c", ProgrammingII.registeredStudents[i]);
							}
						}
							else if (userCourse == 3)
							{
								for (j = 0; j < numberOfSpots; j++)
								{
									printf("%c", ObjectOrientedProgrammingI.registeredStudents[i]);
								}
							}
								else if (userCourse == 4)
								{
									for (j = 0; j < numberOfSpots; j++)
									{
										printf("%c", ObjectOrientedProgrammingII.registeredStudents[i]);
									}
								}			
				} // END OF USER CHOICE s
					else if (userChoice == 'q')
					{
						printf("Quitting.\n");
					}
						else
						{
							printf("Invalid command.\n");
						}
	
	}
	
	return 0;
	
}
