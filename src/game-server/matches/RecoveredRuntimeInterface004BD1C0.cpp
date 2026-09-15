// Exact recovered runtime/interface helper.
extern "C" __declspec(naked) void Recovered004BD1C0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm push ebx
    __asm push esi
    __asm push edi
    __asm wait
    __asm fnstcw word ptr [ebp-8]
    __asm mov eax, dword ptr [ebp+8]
    __asm and eax, dword ptr [ebp+12]
    __asm movsx ecx, word ptr [ebp-8]
    __asm mov edx, dword ptr [ebp+12]
    __asm not edx
    __asm and ecx, edx
    __asm or eax, ecx
    __asm mov word ptr [ebp-4], ax
    __asm fldcw word ptr [ebp-4]
    __asm movsx eax, word ptr [ebp-8]
    __asm pop edi
    __asm pop esi
    __asm pop ebx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
