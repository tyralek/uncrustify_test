namespace Example
{
class Example :
    public Base1,
    public Base2
{
public:

    /// Example enum description.
    enum ExampleEnum
    {
        EXAMPLE_ENUM_FIRST = 0, ///< First enum meaningful description.
        EXAMPLE_ENUM_SECOND = 4, ///< If you want to add comment on the side,
                                 ///< then remember about "<" character.
        EXAMPLE_ENUM_THIRD = 10, ///< As you can see above, multiline is also possible.
    };
}
}
