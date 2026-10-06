// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 93 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588D81D0 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_588d81d0_segment_00() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 81 BE 80 00 00 00 00 00 00 40: cmp dword ptr [esi + 0x80], 0x40000000
        __asm _emit 0x81
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes 75 4A: jne 0x588d8229
        __asm _emit 0x75
        __asm _emit 0x4a
        ; Exact mapped bytes 8A 44 24 08: mov al, byte ptr [esp + 8]
        __asm _emit 0x8a
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B 7C 24 14: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8D 4F FF: lea ecx, [edi - 1]
        __asm _emit 0x8d
        __asm _emit 0x4f
        __asm _emit 0xff
        ; Exact mapped bytes C7 86 08 61 00 00 01 00 00 00: mov dword ptr [esi + 0x6108], 1
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 14 63 00 00 00 00 00 00: mov dword ptr [esi + 0x6314], 0
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 86 0C 61 00 00: mov byte ptr [esi + 0x610c], al
        __asm _emit 0x88
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F9 FF 01 00 00: cmp ecx, 0x1ff
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 77 1B: ja 0x588d8228
        __asm _emit 0x77
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 54 24 10: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 86 0D 61 00 00: lea eax, [esi + 0x610d]
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0x0d
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 2D 4B 0A 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x4b
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 89 BE 10 63 00 00: mov dword ptr [esi + 0x6310], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x10
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
