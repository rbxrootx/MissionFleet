// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58858667 .. +0x1A bytes.
extern "C" __declspec(naked) void FUN_58858667() {
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
        ; Exact mapped bytes 74 0D: je 0x5885867f
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes FF 76 08: push dword ptr [esi + 8]
        __asm _emit 0xff
        __asm _emit 0x76
        __asm _emit 0x08
        ; Exact mapped bytes E8 96 45 01 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x45
        __asm _emit 0x01
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
