/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sam <sam@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 16:47:49 by sam               #+#    #+#             */
/*   Updated: 2020/07/16 17:27:03 by sam              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Pony.class.hpp"

void    ponyOnTheStack()
{
    Pony    desperados = Pony("Despe");

	desperados.dance();
	desperados.run();

}

void    ponyOnTheHeap()
{
    Pony*	heinekein = new Pony("Hein");

	heinekein->dance();
	heinekein->run();

	delete heinekein;
}

int main()
{
    std::cout << "This is a pony on the stack :" << std::endl;
    ponyOnTheStack();

    std::cout << std::endl << "This is a pony on the heap :" << std::endl;
    ponyOnTheHeap();

    return 0;
}