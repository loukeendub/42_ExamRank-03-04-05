/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:18:39 by lmarzano          #+#    #+#             */
/*   Updated: 2022/07/26 12:20:55 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock
{
private:
	std::string	_name;
	std::string	_title;
	
	Warlock();
	Warlock(const Warlock& copy);
	Warlock&	operator=(const Warlock& op);
	
	std::map<std::string, ASpell*>	arr;
	
public:
	Warlock(const std::string& name, const std::string& title);
	~Warlock();

	std::string const	&getName(void)  const;
	std::string const	&getTitle(void) const;
	
	void				setTitle(const std::string& title);

	void				introduce() const;

	void				learnSpell(ASpell* spell);
	void				forgetSpell(std::string name);
	void				launchSpell(std::string name, const ATarget& target);
};

#endif