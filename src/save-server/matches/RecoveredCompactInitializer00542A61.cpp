// Exact compact x86 forwarding/initialization sequence.
extern "C" void Target00542A30();
extern "C" char Storage00686E1C;
extern "C" __declspec(naked) void Recovered00542A61()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm call Target00542A30
    __asm mov dword ptr [Storage00686E1C], eax
    __asm pop ebp
    __asm ret
}
