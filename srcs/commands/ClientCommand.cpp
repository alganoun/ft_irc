/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClientCommand.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglory <tglory@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 20:27:32 by tglory            #+#    #+#             */
/*   Updated: 2022/05/20 17:26:20 by tglory           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/commands/ClientCommand.hpp"

namespace ft {

	ClientCommand::ClientCommand(std::string name) : name(name), needToBeAuthorized(false), needToBeOperator(false) {}

	ClientCommand::ClientCommand(std::string name, bool needToBeAuthorized, bool needToBeOperator) : name(name),
		needToBeAuthorized(needToBeAuthorized), needToBeOperator(needToBeOperator) {}
	
	ClientCommand &ClientCommand::operator=(ClientCommand const &instance) {
		this->name = instance.name;
		this->needToBeAuthorized = instance.needToBeAuthorized;
		this->needToBeOperator = instance.needToBeOperator;
		return *this;
	}

	const std::string& ClientCommand::getName() const {
		return this->name;
	}

	const bool& ClientCommand::isNeededToBeAutorized() const {
		return this->needToBeAuthorized;
	}

	const bool& ClientCommand::isNeededToBeOperator() const {
		return this->needToBeOperator;
	}
}