/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 09:50:57 by lmarzano          #+#    #+#             */
/*   Updated: 2022/07/26 18:15:14 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
# define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
private:
	std::string	_type;
	
	ATarget();
	
public:
	ATarget(const std::string& type);
	virtual ~ATarget();
	
	ATarget(const ATarget &copy);
	ATarget&	operator=(const ATarget &op);

	const std::string&	getType(void) const;

	virtual ATarget*	clone(void) const = 0;

	void				getHitBySpell(const ASpell& spell) const;
};

#endif