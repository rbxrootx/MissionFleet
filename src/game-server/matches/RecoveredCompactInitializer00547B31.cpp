// Exact compact x86 forwarding/initialization sequence.
extern "C" void Target00547B00();
extern "C" char Storage005DE904;
extern "C" __declspec(naked) void Recovered00547B31()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm call Target00547B00
    __asm mov dword ptr [Storage005DE904], eax
    __asm pop ebp
    __asm ret
}
