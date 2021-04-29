#pragma once

#include <concepts>
#include <iostream>

enum class InsertionInfo { Inserted, AlreadyIn };//Define nomes para os estados de saída de InsertionInfo

enum class SearchInfo { Found, NotFound };

enum class DeleteInfo { Deleted, NotDeleted};