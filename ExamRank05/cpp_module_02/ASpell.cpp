/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 09:04:00 by lmarzano          #+#    #+#             */
/*   Updated: 2022/07/26 10:33:44 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"


ASpell::ASpell()
{}

ASpell::ASpell(const std::string& name, const std::string& effects) : _name(name), _effects(effects)
{}

ASpell::~ASpell()
{}

ASpell::ASpell(const ASpell &copy)
{
	this->_name = copy._name;
	this->_effects = copy._effects;
}

ASpell& ASpell::operator=(const ASpell &op)
{
	if (this == &op)
		return (*this);
	_name = op._name;
	_effects + op._effects;
	return (*this);
}

const std::string&	ASpell::getName(void) const
{ return (this->_name); }

const std::string&	ASpell::getEffects(void) const
{ return (this->_effects); }

void	ASpell::launch(const ATarget& target) const
{ target.getHitBySpell(*this); }