// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00435CE0 .. +0x45 bytes.
extern "C" __declspec(naked) void FUN_00435ce0_00435CE0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1B 08 03 00: call 0x466510
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 8]
        add esi, 0ch
        mov edi, dword ptr [ebp - 4]
        add edi, 0ch
        mov ecx, 40h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], 634560h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], 634554h
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
