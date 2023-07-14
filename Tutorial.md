# Structure Using C Programming

**Structure** in C programming is a collection of multiple variables of **different types**. **Structures** are used to create _user-defined data types_ as a _collection of other data types_.

**Keyword struct**: The keyword _struct_ is used at _the beginning while defining a structure in C_. 

**myStruct**: This is the name of the structure which is specified after the keyword **struct**. 

**data_Type**: The data type indicates the type of _data members of the structure_.  _A structure can have data members of different data types_.

**Structure_members**: This is the name of the data member of the structure. _Any number of data members can be defined inside a structure_. Each data member is allocated a **separate space in the memory**.

## Declaration of Structure Variables with Structure Definition

### Syntax:

struct structName
{
// structure definition
Data_type1 member_name1;
Data_type2 member_name2;
Data_type2 member_name2; 
} struct_var1, struct_var2;_
