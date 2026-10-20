// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10029920 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_10029920_10029920() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 58h]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x10029936
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes E8 21 EC FF FF: call 0x10028550
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 58h], 0
        mov ecx, esi
        ; Exact mapped bytes E8 23 57 0D 00: call 0x100ff060
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x57
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 6C 57 0D 00: call 0x100ff0b0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x57
        __asm _emit 0x0d
        __asm _emit 0x00
        pop esi
        ret
    }
}
