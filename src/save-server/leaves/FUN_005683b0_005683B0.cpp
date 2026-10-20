// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005683B0 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_005683b0_005683B0() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        ; Exact mapped bytes E8 2F 00 00 00: call 0x5683ea
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x5683e5
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes FF 15 CC C2 68 00: call dword ptr [0x68c2cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E8 20 00 00 00: call 0x5683ea
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5683df
        __asm _emit 0x74
        __asm _emit 0x11
        push 6ch
        push 67b070h
        ; Exact mapped bytes E8 66 09 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5683df
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x5683c5
        __asm _emit 0x75
        __asm _emit 0xe0
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
