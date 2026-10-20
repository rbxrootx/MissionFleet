// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041545B .. +0x14 bytes.
extern "C" __declspec(naked) void FUN_0041545b_0041545B() {
    __asm {
        ; Exact mapped bytes E8 6B CB 01 00: call 0x431fcb
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xcb
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 08: je 0x41546c
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes FF 52 74: call dword ptr [edx + 0x74]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x74
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
