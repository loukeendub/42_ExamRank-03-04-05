/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:57:54 by lmarzano          #+#    #+#             */
/*   Updated: 2022/07/26 18:09:00 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"


SpellBook::SpellBook()
{}

SpellBook::~SpellBook()
{
	std::map<std::string, ASpell *>::iterator it_begin = this->spells.begin();
	std::map<std::string, ASpell *>::iterator it_end = this->spells.end();
	while (it_begin != it_end)
	{
		delete it_begin->second;
		++it_begin;
	}
	this->spells.clear();
	
}

SpellBook::SpellBook(const SpellBook &copy)
{ this->spells = copy.spells; }

SpellBook&  SpellBook::operator=(const SpellBook &op)
{
	if (this == &op)
		return (*this);
	return (*this); 
}

void    SpellBook::learnSpell(ASpell* spell)
{
	if (spell)
		spells.insert(std::pair<std::string, ASpell*>(spell->getName(), spell->clone()));
}

void    SpellBook::forgetSpell(const std::string &name)
{
	std::map<std::string, ASpell*>::iterator it = spells.find(name);
	if (it != spells.end())
		delete it->second;
	spells.erase(name);
}

ASpell* SpellBook::createSpell(const std::string &name)
{
	std::map<std::string, ASpell*>::iterator it = spells.find(name);
	if (it != spells.end())
		return (spells[name]);
	return NULL;
}
