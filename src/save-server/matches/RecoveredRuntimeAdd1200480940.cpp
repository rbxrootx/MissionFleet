extern "C" void Recovered00480900();
// Exact recovered VC6 96-bit addition.
extern "C" __declspec(naked) void Recovered00480940()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0ch
    __asm mov eax, dword ptr [ebp+8]
    __asm push eax
    __asm mov ecx, dword ptr [ebp+0ch]
    __asm mov edx, dword ptr [ecx]
    __asm push edx
    __asm mov eax, dword ptr [ebp+8]
    __asm mov ecx, dword ptr [eax]
    __asm push ecx
    __asm call Recovered00480900
    __asm add esp, 0ch
    __asm mov dword ptr [ebp-4], eax
    __asm cmp dword ptr [ebp-4], 0
    __asm je add_mid
    __asm mov edx, dword ptr [ebp+8]
    __asm add edx, 4
    __asm push edx
    __asm push 1
    __asm mov eax, dword ptr [ebp+8]
    __asm mov ecx, dword ptr [eax+4]
    __asm push ecx
    __asm call Recovered00480900
    __asm add esp, 0ch
    __asm mov dword ptr [ebp-8], eax
    __asm cmp dword ptr [ebp-8], 0
    __asm je add_mid
    __asm mov edx, dword ptr [ebp+8]
    __asm mov eax, dword ptr [edx+8]
    __asm add eax, 1
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov dword ptr [ecx+8], eax
    __asm add_mid:
    __asm mov edx, dword ptr [ebp+8]
    __asm add edx, 4
    __asm push edx
    __asm mov eax, dword ptr [ebp+0ch]
    __asm mov ecx, dword ptr [eax+4]
    __asm push ecx
    __asm mov edx, dword ptr [ebp+8]
    __asm mov eax, dword ptr [edx+4]
    __asm push eax
    __asm call Recovered00480900
    __asm add esp, 0ch
    __asm mov dword ptr [ebp-0ch], eax
    __asm cmp dword ptr [ebp-0ch], 0
    __asm je add_high
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov edx, dword ptr [ecx+8]
    __asm add edx, 1
    __asm mov eax, dword ptr [ebp+8]
    __asm mov dword ptr [eax+8], edx
    __asm add_high:
    __asm mov ecx, dword ptr [ebp+8]
    __asm add ecx, 8
    __asm push ecx
    __asm mov edx, dword ptr [ebp+0ch]
    __asm mov eax, dword ptr [edx+8]
    __asm push eax
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov edx, dword ptr [ecx+8]
    __asm push edx
    __asm call Recovered00480900
    __asm add esp, 0ch
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
