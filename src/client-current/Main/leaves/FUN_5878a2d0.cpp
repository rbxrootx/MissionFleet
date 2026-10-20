// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878A2D0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5878a2d0() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 58996b9ch
        ; Exact mapped bytes E8 72 DD 17 00: call 0x58908050
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xdd
        __asm _emit 0x17
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x5878a2ee
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 57 29 1F 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x29
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
