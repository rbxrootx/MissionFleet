// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C99D0 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_004c99d0_004C99D0() {
    __asm {
        push esi
        push edi
        mov esi, dword ptr [esp + 0ch]
        push esi
        ; Exact mapped bytes E8 D4 FF FF FF: call 0x4c99b0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 75 2C: jne 0x4c9a11
        __asm _emit 0x75
        __asm _emit 0x2c
        mov eax, dword ptr [esp + 10h]
        cmp eax, 6
        ; Exact mapped bytes 75 08: jne 0x4c99f6
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 8B 3D D0 0F 5E 00: mov edi, dword ptr [0x5e0fd0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xd0
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x4c9a00
        __asm _emit 0xeb
        __asm _emit 0x0a
        lea eax, [eax + eax*2]
        mov edi, dword ptr [eax*8 + 5e0f44h]
        push edi
        xor eax, eax
        ; Exact mapped bytes 66 A1 EE 04 5E 00: mov ax, word ptr [0x5e04ee]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xee
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF 15 D8 25 5E 00: call dword ptr [0x5e25d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}
