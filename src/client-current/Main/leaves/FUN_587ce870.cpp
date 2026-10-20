// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587CE870 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_587ce870() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 5899b448h
        ; Exact mapped bytes E8 E2 FA FF FF: call 0x587ce360
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x587ce88e
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 B7 E3 1A 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xe3
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
