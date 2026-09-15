// Exact recovered OLE/math dispatch helper.
extern "C" __declspec(naked) void Recovered004933C9()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm lea eax, dword ptr [ebp+32]
    __asm mov dword ptr [ebp-4], eax
    __asm mov ecx, dword ptr [ebp-4]
    __asm push ecx
    __asm mov edx, dword ptr [ebp+28]
    __asm push edx
    __asm mov eax, dword ptr [ebp+24]
    __asm push eax
    __asm mov cx, word ptr [ebp+20]
    __asm push ecx
    __asm mov dx, word ptr [ebp+16]
    __asm push edx
    __asm mov eax, dword ptr [ebp+12]
    __asm push eax
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov edx, dword ptr [ecx]
    __asm mov ecx, dword ptr [ebp+8]
    __asm call dword ptr [edx+96]
    __asm mov dword ptr [ebp-4], 0
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
