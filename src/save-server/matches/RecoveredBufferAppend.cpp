// Append one 32-bit value to a byte buffer, growing it when four bytes do not fit.
class RecoveredBuffer00525914 {
    unsigned char reserved[36];
    unsigned long *cursor;
    unsigned char *end;
    void Grow();
public:
    RecoveredBuffer00525914 *Append(unsigned long value);
};
RecoveredBuffer00525914 *RecoveredBuffer00525914::Append(unsigned long value)
{
    if (reinterpret_cast<unsigned char *>(cursor) + 4 > end)
        Grow();
    *cursor = value;
    cursor = reinterpret_cast<unsigned long *>(
        reinterpret_cast<unsigned char *>(cursor) + 4);
    return this;
}
