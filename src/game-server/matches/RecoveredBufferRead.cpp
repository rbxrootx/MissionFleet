// Read one 32-bit value, requesting exactly the number of missing bytes first.
class RecoveredReadBuffer00531E86 {
    unsigned char reserved[36];
    unsigned char *cursor;
    unsigned char *end;
    void Require(unsigned long missing);
public:
    RecoveredReadBuffer00531E86 *Read(unsigned long *value);
};
RecoveredReadBuffer00531E86 *RecoveredReadBuffer00531E86::Read(unsigned long *value)
{
    if (cursor + 4 > end)
        Require(4 - (end - cursor));
    *value = *reinterpret_cast<unsigned long *>(cursor);
    cursor += 4;
    return this;
}
