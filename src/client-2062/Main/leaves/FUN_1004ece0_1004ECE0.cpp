// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004ECE0 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_1004ece0_1004ECE0() {
    __asm {
        mov eax, dword ptr [ecx + 1b0h]
        push esi
        mov esi, dword ptr [eax + 4]
        test esi, esi
        ; Exact mapped bytes 74 29: je 0x1004ed17
        __asm _emit 0x74
        __asm _emit 0x29
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov ecx, dword ptr [esi + 0ch]
        xor edx, edx
        push edi
        mov eax, dword ptr [ecx + 84h]
        cmp eax, edi
        mov eax, dword ptr [ecx]
        setle dl
        mov dword ptr [ecx + 0ach], edx
        ; Exact mapped bytes FF 50 2C: call dword ptr [eax + 0x2c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x2c
        mov esi, dword ptr [esi + 8]
        test esi, esi
        ; Exact mapped bytes 75 DD: jne 0x1004ecf3
        __asm _emit 0x75
        __asm _emit 0xdd
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
