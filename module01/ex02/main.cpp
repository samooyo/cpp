/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 10:02:01 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/12 13:37:44 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.class.hpp"

int	main()
{
	Zombie		*Zomb1;
	Zombie		*Zomb2;
	ZombieEvent	first;

	Zomb1 = first.randomChump();
	Zomb1->advert();
	delete (Zomb1);

	first.setZombieType("sad");
	Zomb2 = first.newZombie("Carl");
	Zomb2->advert();
	delete (Zomb2);
	return (0);
}