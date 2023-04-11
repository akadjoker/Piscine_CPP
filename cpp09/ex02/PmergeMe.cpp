/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 10:01:48 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/04/11 09:52:28 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
 {}

PmergeMe::~PmergeMe()
 {}

PmergeMe::PmergeMe(const PmergeMe &origin)
{
	*this = origin;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &origin)
{
	if (this == &origin)
		return (*this);
	this->m_vector = origin.m_vector;
	this->m_deque = origin.m_deque;
	return *this;
}

void PmergeMe::printVector()
{
	int i = 0;
	for (std::vector<int>::iterator it = m_vector.begin(); it < m_vector.end(); it++)
	{
		if (++i > 8)
		{
			std::cout << " [...]";
			break;
		}
		std::cout << " " << *it;
	}
	std::cout << std::endl;
}


void PmergeMe::printDeque()
{
	int i = 0;
	for (std::deque<int>::iterator it = m_deque.begin(); it != m_deque.end(); it++)
	{
		if (++i > 8)
		{
			std::cout << " [...]";
			break;
		}
		std::cout << " " << *it;
	}
	std::cout << std::endl;
}
void is_Num(char *tab)
{
	std::string str = tab;
	if (str[0] == '-')
		throw "Error: not a positive number.";
	if (str.length() > 10 || (str.length() == 10 && str > "2147483647"))
		throw "Error: too large a number.";
	if (!str.empty() && str.find_first_not_of("0123456789") != std::string::npos)
		throw "Error: not a number.";
}

void PmergeMe::sort(char **tab)
{
	std::clock_t start, end;
	double Vtime, Dtime;
	int i = 1;
	int nb = 0;

	while (tab[i])
	{
		is_Num(tab[i]);
		std::istringstream(tab[i]) >> nb;
		m_vector.push_back(nb);
		m_deque.push_back(nb);
		i++;
	}
	std::cout << "Before :";
	printVector();

	int arraySize = m_vector.size();
	int threshold =2;
	if (arraySize <= 20)
	{
		threshold = 2;
	}
	else if (arraySize <= 100)
	{
		threshold = 5;
	}
	else if (arraySize <= 500)
	{
		threshold = 10;
	}
	else if (arraySize <= 2000)
	{
		threshold = 15;
	}
	else
	{
		// Para listas com tamanho >> 2001 elementos
		threshold = 20;
	}

//  vector	
	start = clock();
	mergeInsertSort(m_vector, 0, arraySize - 1, threshold);
	end = clock();
	Vtime = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000;

	start = clock();
	mergeInsertSort(m_deque, 0, arraySize - 1, threshold);
	end = clock();
	Dtime = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000;

//deque

	std::cout << "After :";
	printVector();
//	printDeque();

	std::cout << std::fixed << std::setprecision(3);
	std::cout << "Time to process a range of " << m_vector.size() << " elements with std::vector : " << Vtime << " ms\n";
	std::cout << "Time to process a range of " << m_deque.size() << " elements with std::deque : " << Dtime << " ms\n";
}

void PmergeMe::insertionSort(std::vector<int> &arr, int left, int right)
{
	for (int i = left + 1; i <= right; ++i)
	{
		int key = arr[i]; // Seleciona o elemento atual
		int j = i - 1;	  // Inicia a busca pelo local de inserção à esquerda do elemento atual

		// Move os elementos à direita enquanto forem maiores que a key (elemento atual)
		while (j >= left && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key; // colocamos o elemento atual na posição correta
	}
}

// Função que junta as sublistas previamente ordenadas (left..mid e mid+1..right) in PLACE ;)
void PmergeMe::merge(std::vector<int> &arr, int left, int mid, int right)
{
	int n1 = mid - left + 1;
	int n2 = right - mid;

	// Cria vetores temporários para armazenar as sublistas
	std::vector<int> leftArr(n1), rightArr(n2);

	// copiamos os elementos para os vetores temporários
	for (int i = 0; i < n1; ++i)
		leftArr[i] = arr[left + i];
	for (int j = 0; j < n2; ++j)
		rightArr[j] = arr[mid + 1 + j];

	int i = 0, j = 0, k = left;

	// colamos comparando elementos das sublistas e adicionando-os ao vetor original ordenadamente
	while (i < n1 && j < n2)
	{
		if (leftArr[i] <= rightArr[j])
		{
			arr[k++] = leftArr[i++];
		}
		else
		{
			arr[k++] = rightArr[j++];
		}
	}

	// copiamos os elementos restantes das sublistas, se houver :P
	while (i < n1)
	{
		arr[k++] = leftArr[i++];
	}
	while (j < n2)
	{
		arr[k++] = rightArr[j++];
	}
}

void PmergeMe::mergeInsertSort(std::vector<int> &arr, int left, int right, int threshold)
{
	if (left < right)
	{
		// Verifica se a diferença entre os índices é menor ou igual ao limite (threshold)
		if (right - left <= threshold)
		{
			// Utiliza o Insertion Sort para ordenar sublistas pequenas
			insertionSort(arr, left, right);
		}
		else
		{
			// Divide o vetor em duas metades e chama a função recursivamente :O
			int mid = left + (right - left) / 2;
			mergeInsertSort(arr, left, mid, threshold);
			mergeInsertSort(arr, mid + 1, right, threshold);

			// colamos as duas metades previamente ordenadas
			merge(arr, left, mid, right);
		}
	}
}

void PmergeMe::insertionSort(std::deque<int> &arr, int left, int right)
{
	for (int i = left + 1; i <= right; i++)
	{
		int key = arr[i];
		int j = i - 1;
		while (j >= left && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

void PmergeMe::merge(std::deque<int> &arr, int left, int mid, int right)
{
	int n1 = mid - left + 1;
	int n2 = right - mid;

	std::deque<int> L(n1), R(n2);

	std::copy(arr.begin() + left, arr.begin() + mid + 1, L.begin());
	std::copy(arr.begin() + mid + 1, arr.begin() + right + 1, R.begin());

	int i = 0, j = 0, k = left;

	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k++] = L[i++];
		}
		else
		{
			arr[k++] = R[j++];
		}
	}

	while (i < n1)
	{
		arr[k++] = L[i++];
	}

	while (j < n2)
	{
		arr[k++] = R[j++];
	}
}

void PmergeMe::mergeInsertSort(std::deque<int> &arr, int left, int right, int threshold)
{
	if (right <= left)
	{
		return;
	}

	if (right - left + 1 <= threshold)
	{
		insertionSort(arr, left, right);
	}
	else
	{
		int mid = left + (right - left) / 2;
		mergeInsertSort(arr, left, mid, threshold);
		mergeInsertSort(arr, mid + 1, right, threshold);
		merge(arr, left, mid, right);
	}
}
