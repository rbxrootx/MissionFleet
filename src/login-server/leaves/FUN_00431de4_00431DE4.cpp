// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00431DE4 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_00431de4_00431DE4() {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 1ch], 0
        ; Exact mapped bytes 75 10: jne 0x431dfd
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes E8 D7 39 00 00: call 0x4357c9
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x431dfd
        __asm _emit 0x74
        __asm _emit 0x07
        push 0
        ; Exact mapped bytes E8 37 73 00 00: call 0x439134
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 4D 02 00 00: call 0x432051
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ret
    }
}
