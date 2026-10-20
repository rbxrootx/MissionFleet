// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58796A60 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_58796a60() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 58997ec0h
        ; Exact mapped bytes E8 F2 26 17 00: call 0x58909160
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x26
        __asm _emit 0x17
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x58796a7e
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 C7 61 1E 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x61
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
