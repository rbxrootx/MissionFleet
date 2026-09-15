extern "C" void Recovered004A2614();
// Exact recovered local-time output record builder.
extern "C" __declspec(naked) void Recovered004A2664()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp-8], ecx
    __asm push 0
    __asm mov ecx, dword ptr [ebp-8]
    __asm call Recovered004A2614
    __asm mov dword ptr [ebp-4], eax
    __asm cmp dword ptr [ebp-4], 0
    __asm jne build
    __asm xor eax, eax
    __asm jmp done
    __asm build:
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [eax+14h]
    __asm add ecx, 76ch
    __asm mov edx, dword ptr [ebp+8]
    __asm mov word ptr [edx], cx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [eax+10h]
    __asm add ecx, 1
    __asm mov edx, dword ptr [ebp+8]
    __asm mov word ptr [edx+2], cx
    __asm mov eax, dword ptr [ebp+8]
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov dx, word ptr [ecx+18h]
    __asm mov word ptr [eax+4], dx
    __asm mov eax, dword ptr [ebp+8]
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov dx, word ptr [ecx+0ch]
    __asm mov word ptr [eax+6], dx
    __asm mov eax, dword ptr [ebp+8]
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov dx, word ptr [ecx+8]
    __asm mov word ptr [eax+8], dx
    __asm mov eax, dword ptr [ebp+8]
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov dx, word ptr [ecx+4]
    __asm mov word ptr [eax+0ah], dx
    __asm mov eax, dword ptr [ebp+8]
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov dx, word ptr [ecx]
    __asm mov word ptr [eax+0ch], dx
    __asm mov eax, dword ptr [ebp+8]
    __asm mov word ptr [eax+0eh], 0
    __asm mov eax, 1
    __asm done:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
