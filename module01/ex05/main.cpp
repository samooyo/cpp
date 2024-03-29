/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 15:27:04 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/12 16:11:30 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Brain.class.hpp"
#include "Human.class.hpp"

int main()
{
	Human bob;
	std::cout << "adr by Human identify : " << bob.identify() << std::endl;
	std::cout << "adr by Brain identify : " << bob.getBrain().identify() << std::endl;
}