// Append one 32-bit value to a byte buffer, growing it when four bytes do not fit.
class RecoveredBuffer00531B4B {
    unsigned char reserved[36];
    unsigned long *cursor;
    unsigned char *end;
    void Grow();
public:
    RecoveredBuffer00531B4B *Append(unsigned long value);
};
RecoveredBuffer00531B4B *RecoveredBuffer00531B4B::Append(unsigned long value)
{
    if (reinterpret_cast<unsigned char *>(cursor) + 4 > end)
        Grow();
    *cursor = value;
    cursor = reinterpret_cast<unsigned long *>(
        reinterpret_cast<unsigned char *>(cursor) + 4);
    return this;
}
