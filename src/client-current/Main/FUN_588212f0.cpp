// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 58 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588212F0 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_588212f0_segment_00() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B 74 24 08: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B F9: mov edi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf9
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 29: je 0x58821325
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 8B 46 70: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x70
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 E1 EE FF FF: call 0x588201f0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 12: je 0x58821325
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 89 BE A4 00 00 00: mov dword ptr [esi + 0xa4], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 76 6C: mov esi, dword ptr [esi + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x76
        __asm _emit 0x6c
        ; Exact mapped bytes BA FE FF 00 00: mov edx, 0xfffe
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
