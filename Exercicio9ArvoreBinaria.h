#pragma once

#include <concepts>
#include <iostream>

enum class InsertionInfo { Inserted, AlreadyIn };//Define nomes para os estados de sa�da de InsertionInfo

enum class SearchInfo { Found, NotFound };

enum class DeleteInfo { Deleted, NotDeleted};