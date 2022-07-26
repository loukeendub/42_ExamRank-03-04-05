/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:40:07 by lmarzano          #+#    #+#             */
/*   Updated: 2022/07/26 17:59:51 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"


Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter")
{}

Polymorph::~Polymorph()
{}

ASpell*	Polymorph::clone(void) const
{ return (new Polymorph()); }
