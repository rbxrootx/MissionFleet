// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883A355 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_5883a355_5883A355() {
    __asm {
        push esi
        ; Exact mapped bytes E8 E5 1E 00 00: call 0x5883c240
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 83 96 58: mov ecx, dword ptr [0x589683ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        xor esi, esi
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x5883a36e
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes E8 F4 92 FF FF: call 0x58833660
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x92
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes E8 E7 1E 00 00: call 0x5883c25a
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        pop esi
        ret
    }
}
