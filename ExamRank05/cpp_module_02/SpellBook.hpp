/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:52:56 by lmarzano          #+#    #+#             */
/*   Updated: 2022/07/26 17:48:13 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

#include <map>
#include "ASpell.hpp"

class SpellBook
{
private:
	std::map<std::string, ASpell*>	spells;

	SpellBook(const SpellBook &copy);
	SpellBook&  operator=(const SpellBook &op);
public:
	SpellBook();
	~SpellBook();

	void    learnSpell(ASpell* spell);
	void    forgetSpell(const std::string &name);
	ASpell* createSpell(const std::string &name);
};

#endif