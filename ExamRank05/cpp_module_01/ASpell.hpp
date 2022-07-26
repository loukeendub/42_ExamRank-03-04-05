/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 09:03:56 by lmarzano          #+#    #+#             */
/*   Updated: 2022/07/26 10:30:26 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
# define ASPELL_HPP

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
private:
	std::string _name;
	std::string _effects;
	
	ASpell();
	
public:
	ASpell(const std::string& name, const std::string& effects);
	virtual ~ASpell();

	ASpell(const ASpell &copy);
	ASpell& operator=(const ASpell &op);

	const std::string&	getName(void) const;
	const std::string&	getEffects(void) const;

	virtual ASpell*	clone(void) const = 0;
	
	void			launch(const ATarget& target) const;
	
};


#endif