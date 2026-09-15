// Exact recovered record/bitset helper.
extern "C" __declspec(naked) void Recovered0045F9EE()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm cmp dword ptr [ebp+10h], 0
    __asm je done
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [eax+4]
    __asm cmp ecx, dword ptr [ebp+8]
    __asm jne done
    __asm mov edx, dword ptr [ebp+0ch]
    __asm mov eax, dword ptr [ebp-4]
    __asm add eax, 0ch
    __asm mov ecx, dword ptr [edx]
    __asm mov dword ptr [eax], ecx
    __asm mov ecx, dword ptr [edx+4]
    __asm mov dword ptr [eax+4], ecx
    __asm mov ecx, dword ptr [edx+8]
    __asm mov dword ptr [eax+8], ecx
    __asm mov edx, dword ptr [edx+0ch]
    __asm mov dword ptr [eax+0ch], edx
    __asm release:
    __asm mov eax, dword ptr [ebp-4]
    __asm cmp dword ptr [eax+1ch], 0
    __asm je attach
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov edx, dword ptr [ecx+1ch]
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [eax+1ch]
    __asm mov eax, dword ptr [ecx]
    __asm push edx
    __asm call dword ptr [eax+8]
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov dword ptr [ecx+1ch], 0
    __asm attach:
    __asm xor edx, edx
    __asm test edx, edx
    __asm jne release
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [ebp+10h]
    __asm mov dword ptr [eax+1ch], ecx
    __asm mov edx, dword ptr [ebp-4]
    __asm mov eax, dword ptr [edx+1ch]
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov edx, dword ptr [ecx+1ch]
    __asm mov ecx, dword ptr [edx]
    __asm push eax
    __asm call dword ptr [ecx+4]
    __asm done:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 0ch
}
