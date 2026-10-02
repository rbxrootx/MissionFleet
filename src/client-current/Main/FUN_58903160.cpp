// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58903160 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_58903160() {
    __asm {
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B F9: mov edi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf9
        ; Exact mapped bytes 83 7F 4C 00: cmp dword ptr [edi + 0x4c], 0
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x4c
        __asm _emit 0x00
        ; Exact mapped bytes 74 32: je 0x5890319b
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 8B 4C 24 08: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 83 79 48 00: cmp dword ptr [ecx + 0x48], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x48
        __asm _emit 0x00
        ; Exact mapped bytes 8D 41 48: lea eax, [ecx + 0x48]
        __asm _emit 0x8d
        __asm _emit 0x41
        __asm _emit 0x48
        ; Exact mapped bytes 74 25: je 0x5890319b
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B 30: mov esi, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x30
        ; Exact mapped bytes 83 7E 48 00: cmp dword ptr [esi + 0x48], 0
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x48
        __asm _emit 0x00
        ; Exact mapped bytes 8D 46 48: lea eax, [esi + 0x48]
        __asm _emit 0x8d
        __asm _emit 0x46
        __asm _emit 0x48
        ; Exact mapped bytes 75 F5: jne 0x58903177
        __asm _emit 0x75
        __asm _emit 0xf5
        ; Exact mapped bytes 3B F1: cmp esi, ecx
        __asm _emit 0x3b
        __asm _emit 0xf1
        ; Exact mapped bytes 74 14: je 0x5890319a
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 83 79 40 00: cmp dword ptr [ecx + 0x40], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x40
        __asm _emit 0x00
        ; Exact mapped bytes 74 05: je 0x58903191
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 DF FA FF FF: call 0x58902c70
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 71 44: mov dword ptr [ecx + 0x44], esi
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0x44
        ; Exact mapped bytes 89 4E 48: mov dword ptr [esi + 0x48], ecx
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x48
        ; Exact mapped bytes 89 79 40: mov dword ptr [ecx + 0x40], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x40
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
