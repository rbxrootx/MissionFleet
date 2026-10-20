// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00428E40 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_00428e40_00428E40() {
    __asm {
        push esi
        push edi
        mov esi, dword ptr [esp + 0ch]
        push esi
        ; Exact mapped bytes E8 D4 FF FF FF: call 0x428e20
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 75 2C: jne 0x428e81
        __asm _emit 0x75
        __asm _emit 0x2c
        mov eax, dword ptr [esp + 10h]
        cmp eax, 6
        ; Exact mapped bytes 75 08: jne 0x428e66
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 8B 3D F0 1E 45 00: mov edi, dword ptr [0x451ef0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0x1e
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x428e70
        __asm _emit 0xeb
        __asm _emit 0x0a
        lea eax, [eax + eax*2]
        mov edi, dword ptr [eax*8 + 451e64h]
        push edi
        xor eax, eax
        ; Exact mapped bytes 66 A1 0E 14 45 00: mov ax, word ptr [0x45140e]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x0e
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF 15 58 C4 43 00: call dword ptr [0x43c458]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}
