// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CE5E0 .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_584ce5e0_584CE5E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6D C3 2E 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xc3
        __asm _emit 0x2e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], 58898714h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 1ch]
        mov dword ptr [eax + 0fch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 60h]
        xor ecx, dword ptr [eax + 0fch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 60h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 50h]
        xor edx, dword ptr [ecx + 0fch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 50h], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 64h]
        xor eax, dword ptr [edx + 0fch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 64h], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
