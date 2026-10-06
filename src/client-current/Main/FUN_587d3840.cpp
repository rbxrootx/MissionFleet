// Complete Ghidra body ranges for the selected function.
// 2 discontiguous segments; total 27 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587D3840 .. +0x15 bytes.
extern "C" __declspec(naked) void FUN_587d3840_segment_00() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes E8 88 CB FF FF: call 0x587d03d0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F6 44 24 08 01: test byte ptr [esp + 8], 1
        __asm _emit 0xf6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        ; Exact mapped bytes 74 09: je 0x587d3858
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 ED 93 1A 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x93
        __asm _emit 0x1a
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587D3858 .. +0x6 bytes.
extern "C" __declspec(naked) void FUN_587d3840_segment_01() {
    __asm {
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
