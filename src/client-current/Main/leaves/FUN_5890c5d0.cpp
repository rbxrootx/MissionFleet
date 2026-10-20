// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5890C5D0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5890c5d0() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 589a2c78h
        ; Exact mapped bytes E8 C2 01 00 00: call 0x5890c7a0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x5890c5ee
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 57 06 07 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x06
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
