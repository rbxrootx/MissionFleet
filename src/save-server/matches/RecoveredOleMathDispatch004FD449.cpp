// Exact recovered OLE/math dispatch helper.
extern "C" __declspec(naked) void Recovered004FD449()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm cmp dword ptr [eax+128], 0
    __asm je dispatch
    __asm jmp done
    __asm dispatch:
    __asm mov ecx, dword ptr [ebp+16]
    __asm push ecx
    __asm mov edx, dword ptr [ebp+12]
    __asm push edx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov edx, dword ptr [eax]
    __asm mov ecx, dword ptr [ebp-4]
    __asm call dword ptr [edx+260]
    __asm push eax
    __asm mov eax, dword ptr [ebp-4]
    __asm mov edx, dword ptr [eax]
    __asm mov ecx, dword ptr [ebp-4]
    __asm call dword ptr [edx+288]
    __asm done:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 12
}
