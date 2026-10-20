// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D7D70 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_004d7d70_004D7D70() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 22: jne 0x4d7da2
        __asm _emit 0x75
        __asm _emit 0x22
        ; Exact mapped bytes E8 4E 2E 04 00: call 0x51abd3
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x2e
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x4d7da2
        __asm _emit 0x74
        __asm _emit 0x19
        push 672324h
        push 67236ch
        ; Exact mapped bytes E8 7D 88 FC FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x88
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        push 0
        ; Exact mapped bytes E8 D3 14 0B 00: call 0x589275
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x14
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F3 11 00 00: call 0x4d8f9d
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
