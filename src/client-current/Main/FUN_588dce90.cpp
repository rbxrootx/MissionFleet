// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 186 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588DCE90 .. +0xBA bytes.
extern "C" __declspec(naked) void FUN_588dce90_segment_00() {
    __asm {
        ; Exact mapped bytes 83 EC 08: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x08
        ; Exact mapped bytes 8B 44 24 0C: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 4C 24 14: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 89 4C 24 0C: mov dword ptr [esp + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 89 44 24 0C: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes E8 E1 63 02 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 28 60 00 00: mov eax, dword ptr [esi + 0x6028]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 04: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 89 88 84 00 00 00: mov dword ptr [eax + 0x84], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 28 60 00 00: mov edx, dword ptr [esi + 0x6028]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x28
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 08: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 8D 4C 24 04: lea ecx, [esp + 4]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 89 82 88 00 00 00: mov dword ptr [edx + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 28 60 00 00: mov ecx, dword ptr [esi + 0x6028]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x28
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 21 CA E6 FF: call 0x58749900
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xca
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 28 60 00 00: mov eax, dword ptr [esi + 0x6028]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 89 48 5C: mov dword ptr [eax + 0x5c], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x5c
        ; Exact mapped bytes 89 88 8C 00 00 00: mov dword ptr [eax + 0x8c], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 48 7C: mov dword ptr [eax + 0x7c], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x7c
        ; Exact mapped bytes 89 88 90 00 00 00: mov dword ptr [eax + 0x90], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 88 80 00 00 00: mov dword ptr [eax + 0x80], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 24 08: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 89 50 64: mov dword ptr [eax + 0x64], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x64
        ; Exact mapped bytes 8B 4C 24 08: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 89 88 88 00 00 00: mov dword ptr [eax + 0x88], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 24 08: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 89 50 70: mov dword ptr [eax + 0x70], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x70
        ; Exact mapped bytes 8B 4C 24 04: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 89 48 60: mov dword ptr [eax + 0x60], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x60
        ; Exact mapped bytes 8B 54 24 04: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 89 90 84 00 00 00: mov dword ptr [eax + 0x84], edx
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 04: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 89 48 6C: mov dword ptr [eax + 0x6c], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x6c
        ; Exact mapped bytes 8B 54 24 04: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 8B 44 24 08: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 89 96 44 60 00 00: mov dword ptr [esi + 0x6044], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x44
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 48 60 00 00: mov dword ptr [esi + 0x6048], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
