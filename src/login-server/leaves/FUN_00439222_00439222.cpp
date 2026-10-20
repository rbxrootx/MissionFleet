// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00439222 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_00439222_00439222() {
    __asm {
        push esi
        ; Exact mapped bytes E8 8B CA FF FF: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov esi, eax
        ; Exact mapped bytes E8 72 DD FF FF: call 0x436fa3
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [esi + 24h]
        test esi, esi
        ; Exact mapped bytes 74 0C: je 0x439244
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, esi
        ; Exact mapped bytes E8 C2 FF FF FF: call 0x439201
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [esi + 1ch]
        ; Exact mapped bytes EB F0: jmp 0x439234
        __asm _emit 0xeb
        __asm _emit 0xf0
        push 0
        ; Exact mapped bytes E8 C8 DD FF FF: call 0x437013
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ret
    }
}
