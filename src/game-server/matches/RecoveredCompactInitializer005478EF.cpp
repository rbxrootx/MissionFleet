// Exact compact x86 forwarding/initialization sequence.
extern "C" char Object005DE898;
extern "C" void Target00547980();
extern "C" __declspec(naked) void Recovered005478EF()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Object005DE898
    __asm call Target00547980
    __asm pop ebp
    __asm ret
}
