/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 10:01:48 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/04/11 09:30:09 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_H
#define PMERGEME_H

#include <vector>
#include <deque>
#include <iterator>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <ctime>
#include <iomanip>


/*
O algoritmo merge-insert sort é diferente do merge sort, embora seja baseado nos princípios do merge sort e do 
insertion sort. A principal diferença entre eles é a forma como os segmentos menores são tratados.

No merge sort puro, a sequência é dividida recursivamente em duas metades até que cada segmento contenha apenas um 
elemento. Em seguida, esses segmentos são colados de volta, criando segmentos maiores e ordenados.

Por outro lado, no merge-insert sort, a sequência é dividida em segmentos menores de um tamanho pré-determinado. 
Em vez de dividir a sequência até o nível de um único elemento, o algoritmo aplica o insertion sort a cada segmento. 
O insertion sort é mais eficiente em sequências menores e pode tirar proveito de qualquer ordem local existente nos
segmentos. Depois de aplicar o insertion sort aos segmentos, o algoritmo prossegue com o processo de mesclagem,
semelhante ao merge sort.

A principal vantagem do merge-insert sort é a sua eficiência em sequências menores, onde o insertion sort pode ser 
mais rápido do que dividir e juntar segmentos unitários. Ao combinar as melhores características de 
ambos os algoritmos, o merge-insert sort pode fornecer um desempenho melhorado em certos casos em comparação com 
o merge sort puro.
*/


class PmergeMe
{
private:
	std::vector<int> m_vector;
	std::deque<int> m_deque;

public:
	PmergeMe();
	PmergeMe(const PmergeMe& origin);
	PmergeMe &operator=(const PmergeMe& origin);
	~PmergeMe();

	void sort(char **tab);
	void printVector();
	void printDeque();

private:
	void merge(std::vector<int> &arr, int left, int mid, int right);
	void insertionSort(std::vector<int> &arr, int left, int right);
	void mergeInsertSort(std::vector<int> &arr, int left, int right, int threshold);
	
	void merge(std::deque<int> &arr, int left, int mid, int right);
	void insertionSort(std::deque<int> &arr, int left, int right);
	void mergeInsertSort(std::deque<int> &arr, int left, int right, int threshold);
};

#endif
