// Exact recovered math/debug structure leaf.
extern "C" __declspec(naked) void Recovered00422110()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 40h
    __asm push ebx
    __asm push esi
    __asm push edi
    __asm lea edi, dword ptr [ebp-40h]
    __asm mov ecx, 10h
    __asm mov eax, 0cccccccch
    __asm rep stosd
    __asm mov eax, dword ptr [ebp+8]
    __asm mov ecx, dword ptr [ebp+12]
    __asm mov edx, dword ptr [eax]
    __asm xor eax, eax
    __asm cmp edx, dword ptr [ecx]
    __asm setne al
    __asm pop edi
    __asm pop esi
    __asm pop ebx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
