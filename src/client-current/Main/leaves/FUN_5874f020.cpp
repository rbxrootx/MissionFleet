// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874F020 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5874f020() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 5898d584h
        ; Exact mapped bytes E8 A2 B5 FF FF: call 0x5874a5d0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x5874f03e
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 07 DC 22 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xdc
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
