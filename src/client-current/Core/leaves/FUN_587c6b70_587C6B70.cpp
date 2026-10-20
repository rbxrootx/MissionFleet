// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C6B70 .. +0x90 bytes.
extern "C" __declspec(naked) void FUN_587c6b70_587C6B70() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F8 DD FE FF: call 0x587b4990
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xdd
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588be260h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ech], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 50h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 54h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0f0h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 58h], 0ffffff9ch
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 5ch], 0ffffff9ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 60h], 64h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 64h], 64h
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
