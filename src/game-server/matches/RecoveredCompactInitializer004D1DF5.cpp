// Exact compact x86 forwarding/initialization sequence.
extern "C" void Target004D215E();
extern "C" char Storage005DE874;
extern "C" __declspec(naked) void Recovered004D1DF5()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm call Target004D215E
    __asm mov dword ptr [Storage005DE874], eax
    __asm pop ebp
    __asm ret
}
