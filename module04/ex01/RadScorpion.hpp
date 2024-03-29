/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 22:28:05 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/24 21:05:55 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_H
#define RADSCORPION_H

# include "Enemy.hpp"

class RadScorpion : public Enemy
{
private:

public:

	RadScorpion( void );									//default constructor
	RadScorpion( RadScorpion const & src);  				//copy
	virtual ~RadScorpion( void );							//destructor
	RadScorpion & operator=( RadScorpion const & rhs);      //overload operators
};

#endif
