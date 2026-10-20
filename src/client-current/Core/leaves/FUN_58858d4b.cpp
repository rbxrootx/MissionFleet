// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58858D4B .. +0x1A bytes.
extern "C" __declspec(naked) void FUN_58858d4b() {
    __asm {
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 80 7E 14 00: cmp byte ptr [esi + 0x14], 0
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x14
        __asm _emit 0x00
        ; Exact mapped bytes 74 0D: je 0x58858d63
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes FF 76 08: push dword ptr [esi + 8]
        __asm _emit 0xff
        __asm _emit 0x76
        __asm _emit 0x08
        ; Exact mapped bytes E8 A2 08 00 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C6 46 14 00: mov byte ptr [esi + 0x14], 0
        __asm _emit 0xc6
        __asm _emit 0x46
        __asm _emit 0x14
        __asm _emit 0x00
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
