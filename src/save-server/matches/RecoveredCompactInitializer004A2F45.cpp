// Exact compact x86 forwarding/initialization sequence.
extern "C" void Target004A32AE();
extern "C" char Storage00686CCC;
extern "C" __declspec(naked) void Recovered004A2F45()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm call Target004A32AE
    __asm mov dword ptr [Storage00686CCC], eax
    __asm pop ebp
    __asm ret
}
