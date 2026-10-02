// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58971480 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_58971480() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 83 BE 1C 02 00 00 00: cmp dword ptr [esi + 0x21c], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 1B: je 0x589714a7
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 44 24 08: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 83 F8 FF: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 74 12: je 0x589714a7
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8E 20 02 00 00: lea ecx, [esi + 0x220]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 9F FF FF FF: call 0x58971440
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF 8E 1C 02 00 00: dec dword ptr [esi + 0x21c]
        __asm _emit 0xff
        __asm _emit 0x8e
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
