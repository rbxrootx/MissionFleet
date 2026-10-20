// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588FEF00 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_588fef00() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 589a2384h
        ; Exact mapped bytes E8 E2 E9 FF FF: call 0x588fd8f0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x588fef1e
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 27 DD 07 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xdd
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
