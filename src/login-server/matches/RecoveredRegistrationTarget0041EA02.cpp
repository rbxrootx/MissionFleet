// Exact recovered CRT exit-registration result adapter.
extern "C" void RegisterTarget0041E984();
extern "C" __declspec(naked) void Register0041EA02()
{
    __asm push dword ptr [esp+4]
    __asm call RegisterTarget0041E984
    __asm neg eax
    __asm sbb eax, eax
    __asm pop ecx
    __asm neg eax
    __asm dec eax
    __asm ret
}
