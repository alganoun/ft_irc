/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClientCommand.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglory <tglory@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 20:27:32 by tglory            #+#    #+#             */
/*   Updated: 2022/05/28 13:00:59 by tglory           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/commands/ClientCommand.hpp"

namespace ft {

	ClientCommand::ClientCommand(std::string name) : name(name), minArg(0), needToBeAuthorized(false), needToBeOperator(false) {}

	ClientCommand::ClientCommand(std::string name, int minArg) : name(name), minArg(minArg), needToBeAuthorized(false), needToBeOperator(false) {}

	ClientCommand::ClientCommand(std::string name, int minArg, std::string description, std::string format) : name(name), minArg(minArg), description(description),
		format(format), needToBeAuthorized(false), needToBeOperator(false) {}

	ClientCommand::ClientCommand(std::string name, int minArg, std::string description, std::string format, bool needToBeAuthorized, bool needToBeOperator) : name(name),
		minArg(minArg), description(description), format(format), needToBeAuthorized(needToBeAuthorized), needToBeOperator(needToBeOperator) {}
	
	ClientCommand &ClientCommand::operator=(ClientCommand const &instance) {
		this->name = instance.name;
		this->minArg = instance.minArg;
		this->description = instance.description;
		this->format = instance.format;
		this->needToBeAuthorized = instance.needToBeAuthorized;
		this->needToBeOperator = instance.needToBeOperator;
		return *this;
	}

	const std::string& ClientCommand::getName() const {
		return this->name;
	}

	const int& ClientCommand::getMinArg() const {
		return this->minArg;
	}

	const std::string& ClientCommand::getDescription() const {
		return this->description;
	}

	const std::string& ClientCommand::getFormat() const {
		return this->format;
	}

	const bool& ClientCommand::isNeededToBeAutorized() const {
		return this->needToBeAuthorized;
	}

	const bool& ClientCommand::isNeededToBeOperator() const {
		return this->needToBeOperator;
	}
}