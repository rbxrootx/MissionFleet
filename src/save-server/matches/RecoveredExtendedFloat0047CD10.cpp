extern "C" void Recovered0047C7F0();
// Exact recovered extended-float unpack/rounding helper.
extern "C" __declspec(naked) void Recovered0047CD10()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 18h
    __asm mov dword ptr [ebp-14h], 0
    __asm mov eax, dword ptr [ebp+8]
    __asm xor ecx, ecx
    __asm mov cx, word ptr [eax+0ah]
    __asm and ecx, 7fffh
    __asm mov word ptr [ebp-4], cx
    __asm mov edx, dword ptr [ebp+8]
    __asm xor eax, eax
    __asm mov ax, word ptr [edx+0ah]
    __asm and eax, 8000h
    __asm mov word ptr [ebp-18h], ax
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov edx, dword ptr [ecx+6]
    __asm mov dword ptr [ebp-10h], edx
    __asm mov eax, dword ptr [ebp+8]
    __asm mov ecx, dword ptr [eax+2]
    __asm mov dword ptr [ebp-0ch], ecx
    __asm mov edx, dword ptr [ebp+8]
    __asm xor eax, eax
    __asm mov ax, word ptr [edx]
    __asm shl eax, 10h
    __asm mov dword ptr [ebp-8], eax
    __asm push 40h
    __asm lea ecx, [ebp-10h]
    __asm push ecx
    __asm call Recovered0047C7F0
    __asm add esp, 8
    __asm test eax, eax
    __asm je exponent_check
    __asm mov dword ptr [ebp-10h], 80000000h
    __asm mov dx, word ptr [ebp-4]
    __asm add dx, 1
    __asm mov word ptr [ebp-4], dx
    __asm exponent_check:
    __asm mov eax, dword ptr [ebp-4]
    __asm and eax, 0ffffh
    __asm cmp eax, 7fffh
    __asm jne store
    __asm mov dword ptr [ebp-14h], 1
    __asm store:
    __asm mov ecx, dword ptr [ebp+0ch]
    __asm mov edx, dword ptr [ebp-10h]
    __asm mov dword ptr [ecx+4], edx
    __asm mov eax, dword ptr [ebp+0ch]
    __asm mov ecx, dword ptr [ebp-0ch]
    __asm mov dword ptr [eax], ecx
    __asm mov edx, dword ptr [ebp-18h]
    __asm and edx, 0ffffh
    __asm mov eax, dword ptr [ebp-4]
    __asm and eax, 0ffffh
    __asm or edx, eax
    __asm mov ecx, dword ptr [ebp+0ch]
    __asm mov word ptr [ecx+8], dx
    __asm mov eax, dword ptr [ebp-14h]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
