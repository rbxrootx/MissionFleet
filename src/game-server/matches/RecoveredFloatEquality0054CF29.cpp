// Exact recovered x87 equality operator.
extern "C" __declspec(naked) void Recovered0054CF29()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov edx, dword ptr [eax+8]
    __asm cmp edx, dword ptr [ecx+8]
    __asm jne unequal
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [ebp+8]
    __asm fld qword ptr [eax]
    __asm fcomp qword ptr [ecx]
    __asm fnstsw ax
    __asm test ah, 64
    __asm je unequal
    __asm mov dword ptr [ebp-8], 0
    __asm jmp short result
    __asm unequal:
    __asm mov dword ptr [ebp-8], 1
    __asm result:
    __asm mov eax, dword ptr [ebp-8]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
