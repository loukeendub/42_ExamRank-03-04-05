/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:18:46 by lmarzano          #+#    #+#             */
/*   Updated: 2022/07/26 16:39:01 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

//private:
Warlock::Warlock() {}

Warlock::Warlock(const Warlock& copy)
{
	this->_name = copy._name;
	this->_title = copy._title;
}

Warlock	&Warlock::operator=(const Warlock& op)
{
	if (this == &op)
		return (*this);
	this->_name = op._name;
	this->_title = op._title;
	return (*this);
	
}

//public:
Warlock::Warlock(const std::string& name, const std::string& title) : _name(name), _title(title)
{ std::cout << this->_name << ": This looks like another boring day." << std::endl; }

Warlock::~Warlock()
{ std::cout << this->_name << ": My job here is done!" << std::endl; }

std::string const	&Warlock::getName(void)  const
{ return this->_name; }

std::string const	&Warlock::getTitle(void) const
{ return this->_title; }

void	Warlock::setTitle(std::string const &title)
{ this->_title = title; }

void	Warlock::introduce() const
{ std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl; }

// ex02 implementation (modified from ex01):
void	Warlock::learnSpell(ASpell* spell)
{ _book.learnSpell(spell); }

void	Warlock::forgetSpell(std::string name)
{ _book.forgetSpell(name); }

void	Warlock::launchSpell(std::string name, const ATarget& target)
{
	const ATarget*	debug = 0;
	if (debug == &target)
		return ;

	ASpell*	spell = _book.createSpell(name);
	if(spell)
		spell->launch(target);
}
