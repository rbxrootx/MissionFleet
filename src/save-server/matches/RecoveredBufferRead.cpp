// Read one 32-bit value, requesting exactly the number of missing bytes first.
class RecoveredReadBuffer00525C4F {
    unsigned char reserved[36];
    unsigned char *cursor;
    unsigned char *end;
    void Require(unsigned long missing);
public:
    RecoveredReadBuffer00525C4F *Read(unsigned long *value);
};
RecoveredReadBuffer00525C4F *RecoveredReadBuffer00525C4F::Read(unsigned long *value)
{
    if (cursor + 4 > end)
        Require(4 - (end - cursor));
    *value = *reinterpret_cast<unsigned long *>(cursor);
    cursor += 4;
    return this;
}
