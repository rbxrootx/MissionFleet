// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876E5C0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5876e5c0() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 58995be8h
        ; Exact mapped bytes E8 D2 7D 04 00: call 0x587b63a0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x7d
        __asm _emit 0x04
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x5876e5de
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 67 E6 20 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xe6
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
