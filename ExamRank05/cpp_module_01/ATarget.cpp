/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 09:51:00 by lmarzano          #+#    #+#             */
/*   Updated: 2022/07/26 10:33:32 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"


ATarget::ATarget()
{}

ATarget::~ATarget()
{}

ATarget::ATarget(const std::string& type) : _type(type)
{}

ATarget::ATarget(const ATarget &copy)
{
	this->_type = copy._type;
}

ATarget&	ATarget::operator=(const ATarget &op)
{
	if (this == &op)
		return (*this);
	this->_type = op._type;
	return (*this);
}

const std::string&	ATarget::getType(void) const
{ return (this->_type); }

void	ATarget::getHitBySpell(const ASpell& spell) const
{ std::cout << this->_type << " has been " << spell.getEffects() << "!" << std::endl; }
