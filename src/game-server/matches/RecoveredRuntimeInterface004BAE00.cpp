// Exact recovered runtime/interface helper.
extern "C" __declspec(naked) void Recovered004BAE00()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov eax, dword ptr [ebp+12]
    __asm cdq
    __asm mov ecx, 10
    __asm idiv ecx
    __asm add eax, 48
    __asm mov edx, dword ptr [ebp+8]
    __asm mov byte ptr [edx], al
    __asm mov eax, dword ptr [ebp+8]
    __asm add eax, 1
    __asm mov dword ptr [ebp+8], eax
    __asm mov eax, dword ptr [ebp+12]
    __asm cdq
    __asm mov ecx, 10
    __asm idiv ecx
    __asm add edx, 48
    __asm mov eax, dword ptr [ebp+8]
    __asm mov byte ptr [eax], dl
    __asm mov ecx, dword ptr [ebp+8]
    __asm add ecx, 1
    __asm mov dword ptr [ebp+8], ecx
    __asm mov eax, dword ptr [ebp+8]
    __asm pop ebp
    __asm ret
}
