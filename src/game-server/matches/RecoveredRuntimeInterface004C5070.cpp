// Exact recovered runtime/interface helper.
extern "C" __declspec(naked) void Recovered004C5070()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp-8], 0
    __asm mov eax, dword ptr [ebp+8]
    __asm add eax, dword ptr [ebp+12]
    __asm mov dword ptr [ebp-4], eax
    __asm mov ecx, dword ptr [ebp-4]
    __asm cmp ecx, dword ptr [ebp+8]
    __asm jb carry
    __asm mov edx, dword ptr [ebp-4]
    __asm cmp edx, dword ptr [ebp+12]
    __asm jae store
    __asm carry:
    __asm mov eax, dword ptr [ebp-8]
    __asm add eax, 1
    __asm mov dword ptr [ebp-8], eax
    __asm store:
    __asm mov ecx, dword ptr [ebp+16]
    __asm mov edx, dword ptr [ebp-4]
    __asm mov dword ptr [ecx], edx
    __asm mov eax, dword ptr [ebp-8]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
