//
// Created by Pavel Ivanov on 12.05.2022.
//

#ifndef LAB_03_BASECOMMAND_HPP
#define LAB_03_BASECOMMAND_HPP

class BaseCommand
{
public:
    BaseCommand();
    virtual ~BaseCommand() = default;

    virtual void execute() = 0;
};

#endif//LAB_03_BASECOMMAND_HPP
