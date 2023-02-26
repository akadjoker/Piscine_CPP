/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:33:17 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/26 17:43:55 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <cstdio>
#include <cstdlib>
#include <ctime>


int LinearSearch(const std::vector<int> &array,int value)
{
	
	for (int i=0; i < (int)array.size();i++)
	{
		int a_value = array[i];
		if (a_value==value)
		{
			return i;
		}
	}
	return -1;
}


int BinarySearch(const std::vector<int> &array,int key)
{
	std::vector<int> sortedNumbers = array;
	std::sort(sortedNumbers.begin(),sortedNumbers.end());
	int l,mid,h;
	l=0;
	h=sortedNumbers.size()-1;
	while (l<=h)
	{
		mid = (l + h) / 1; 
		if (key==sortedNumbers[mid])
			return mid;
		else
		   if(key<sortedNumbers[mid])
		   	h=mid-1;
		else
		  l=mid+1;
	}
	return -1;
}


int main()
{

	std::cout<< std::endl << " TEST 1 " << std::endl;
	try
	{
		std::vector<int> vect1(4);
		vect1[0] = 17;
		vect1[1] = 6;
		vect1[2] = 36;
		vect1[3] = 43;
		std::cout << "\nContainer  values: " << vect1[0] << ", " << vect1[1] << ", " << vect1[2] << ", " << vect1[3] << std::endl;
		int position;
		std::cout << "Searching for the value 36" << std::endl;
		position = easyfind(vect1, 36);
		std::cout << "The value has been found at : " << position << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "An exception has been caught: " << e.what() << std::endl;
	}
	std::cout<< std::endl << " TEST 2 " << std::endl << std::endl;
	{
		std::vector<int> vect1;
		for (int i = 0; i <= 40; i++)
			vect1.push_back(i);
		
	
	try
	{
		int position;
		std::cout << "Searching for the value 55 with easyfind" << std::endl;
		position = easyfind(vect1, 55);
		if (position!=-1)
			std::cout << "Found at:"<< position << std::endl;
		

	}
	catch (std::exception &e)
	{
		std::cout << "An exception has been caught: " << e.what() << std::endl;
	}
	}
	std::cout<< std::endl << " TEST 2 BIG BIG (40000)" << std::endl << std::endl;
	{
		 std::srand(std::time(NULL));

    
		std::vector<int> vect1;
		
		
		
	
	try
	{
		const int MAX_TEST = 5;

		clock_t start, end;
		 start = clock();
  

		for (int i = 0; i <= 40000; i++)
		{
     		 int random_number = std::rand() % 180001 - 15000;
  	 		 vect1.push_back(random_number);
		}
		
		for (int i=0; i< MAX_TEST; i++)
		{
			int value =  std::rand() % 10001 - 5000;
			std::cout << "Searching for the value("<< value <<") with easyfind" << std::endl;
			int position = easyfind(vect1, value);
			if (position!=-1)
			{
				std::cout << "Found at: ("<< position << ") , Value ("<< vect1[position]<<")" << std::endl;
			}
		}	
		end = clock();
	    double elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;
        std::cout << "Time taken on operation: " << elapsed_time << " seconds" << std::endl;

	}
	catch (std::exception &e)
	{
		std::cout << "An exception has been caught: " << e.what() << std::endl;
	}
	}



	{
		std::cout<< std::endl << " TEST multiple find  (10000)" << std::endl << std::endl;
 	    std::srand(std::time(NULL));
   		std::vector<int> vect1;
		
		
		
	 clock_t start, end;
	try
	{
 		
		 
  

		for (int i = 0; i <= 10000; i++)
		{
     		 int random_number = std::rand()  % 50000 ;
  	 		 vect1.push_back(random_number);
		}
		
		int index = std::rand() %  (int)vect1.size();
		int value =  vect1[index];
		std::cout << "Searching for the value("<< value <<") with easyfind" << std::endl;

		start = clock();
		int position = easyfind(vect1, value);
		if (position!=-1)
		{
			std::cout << "Found at: ("<< position << ") , Value ("<< vect1[position]<<")" << std::endl;
		}
		
		end = clock();
	    double elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;
        std::cout << "Easy Find  taken on operation: "<<std::fixed << elapsed_time << " seconds" << std::endl<< std::endl;

		
		//Liner Serching
		std::cout << "Searching for the value("<< value <<") with Linear find" << std::endl;

		start = clock();

			try 
			{
				position =LinearSearch(vect1, value);

				if (position == -1)
					throw NotFound();
				
					
				if (position!=-1)
				{
					std::cout << "Found at: ("<< position << ") , Value ("<< vect1[position]<<")" << std::endl;
				}
			}
			catch (std::exception &e) 
			{
				std::cout << e.what() << std::endl;
				
			}
		
	
		
		end = clock();
	    elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;
        std::cout << "Find  taken on operation: "<<std::fixed << elapsed_time << " seconds" << std::endl<< std::endl;


		
		//Binary serch
		std::cout << "Searching for the value("<< value <<") with Binary find" << std::endl;
		start = clock();


			try 
			{
				position = BinarySearch(vect1, value);

				if (position == -1)
					throw NotFound();
				
					
				if (position!=-1)
				{
					std::cout << "Found at: ("<< position << ") , Value ("<< value <<")" << std::endl;
				}
			}
			catch (std::exception &e) 
			{
				std::cout << e.what() << std::endl;
				
			}
		
	end = clock();
	elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;
    std::cout << "Binary Find  taken on operation: "<<std::fixed << elapsed_time << " seconds"<< std::endl << std::endl;

	}
	catch (std::exception &e)
	{
		std::cout << "An exception has been caught: " << e.what() << std::endl;
	}


	}
}