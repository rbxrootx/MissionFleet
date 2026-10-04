// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588EF860 .. +0x1BC bytes.
// Source symbol alias: FUN_588ef860.
extern "C" __declspec(naked) void FUN_588ef860() {
    __asm {
        // 0x588EF860: sub esp, 0x64
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x64
        // 0x588EF863: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588EF868: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588EF86A: mov dword ptr [esp + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x60
        // 0x588EF86E: push ebx
        __asm _emit 0x53
        // 0x588EF86F: mov ebx, dword ptr [0x5898c3c4]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588EF875: push ebp
        __asm _emit 0x55
        // 0x588EF876: mov ebp, dword ptr [esp + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x70
        // 0x588EF87A: push esi
        __asm _emit 0x56
        // 0x588EF87B: push edi
        __asm _emit 0x57
        // 0x588EF87C: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x588EF87E: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x588EF880: jne 0x588ef8b2
        __asm _emit 0x75
        __asm _emit 0x30
        // 0x588EF882: mov ebp, dword ptr [esp + 0x84]
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF889: mov eax, dword ptr [edi + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF88F: mov esi, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588EF895: push 0x505050
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x588EF89A: push ebp
        __asm _emit 0x55
        // 0x588EF89B: push 0x589a18cc
        __asm _emit 0x68
        __asm _emit 0xCC
        __asm _emit 0x18
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588EF8A0: mov dword ptr [eax + 0x60], 0x505050
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x588EF8A7: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x588EF8A9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588EF8AC: push eax
        __asm _emit 0x50
        // 0x588EF8AD: jmp 0x588ef938
        __asm _emit 0xE9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF8B2: push 0x4f
        __asm _emit 0x6A
        __asm _emit 0x4F
        // 0x588EF8B4: lea ecx, [esp + 0x25]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x25
        // 0x588EF8B8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588EF8BA: push ecx
        __asm _emit 0x51
        // 0x588EF8BB: mov byte ptr [esp + 0x2c], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x00
        // 0x588EF8C0: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0xD3
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588EF8C5: mov esi, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588EF8CB: push 0x589a18ac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x18
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588EF8D0: mov dword ptr [edi + 0x40c], 1
        __asm _emit 0xC7
        __asm _emit 0x87
        __asm _emit 0x0C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF8DA: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x588EF8DC: push 0x589a188c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0x18
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588EF8E1: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588EF8E5: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x588EF8E7: push 0x589a1864
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0x18
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588EF8EC: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588EF8F0: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x588EF8F2: push 0x589a1840
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x18
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588EF8F7: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588EF8FB: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x588EF8FD: mov edx, dword ptr [esp + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF904: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x588EF907: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588EF90B: mov eax, dword ptr [esp + edx*4 + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x94
        __asm _emit 0x0C
        // 0x588EF90F: push ebp
        __asm _emit 0x55
        // 0x588EF910: push eax
        __asm _emit 0x50
        // 0x588EF911: push 0x589a1828
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x18
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588EF916: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x588EF918: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588EF91B: push eax
        __asm _emit 0x50
        // 0x588EF91C: lea ecx, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588EF920: push ecx
        __asm _emit 0x51
        // 0x588EF921: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x588EF923: mov ebp, dword ptr [esp + 0x94]
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF92A: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588EF92D: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588EF932: push ebp
        __asm _emit 0x55
        // 0x588EF933: lea edx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588EF937: push edx
        __asm _emit 0x52
        // 0x588EF938: mov ecx, dword ptr [edi + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF93E: call 0x589089e0
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588EF943: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588EF948: mov ecx, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF94E: mov edx, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF954: movzx eax, word ptr [edx + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x588EF958: shr eax, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0A
        // 0x588EF95B: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x588EF95E: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588EF960: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x588EF962: cmp ecx, 1
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x01
        // 0x588EF965: je 0x588efa07
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF96B: cmp dword ptr [esp + 0x7c], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x7C
        __asm _emit 0x00
        // 0x588EF970: jne 0x588ef985
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x588EF972: push 0x505050
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x588EF977: push ebp
        __asm _emit 0x55
        // 0x588EF978: push 0x589a1810
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x18
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588EF97D: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x588EF97F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588EF982: push eax
        __asm _emit 0x50
        // 0x588EF983: jmp 0x588ef9fc
        __asm _emit 0xEB
        __asm _emit 0x77
        // 0x588EF985: push 0x4f
        __asm _emit 0x6A
        __asm _emit 0x4F
        // 0x588EF987: lea edx, [esp + 0x25]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x25
        // 0x588EF98B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588EF98D: push edx
        __asm _emit 0x52
        // 0x588EF98E: mov byte ptr [esp + 0x2c], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x00
        // 0x588EF993: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0xD2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588EF998: push 0x589a17f4
        __asm _emit 0x68
        __asm _emit 0xF4
        __asm _emit 0x17
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588EF99D: mov dword ptr [edi + 0x40c], 1
        __asm _emit 0xC7
        __asm _emit 0x87
        __asm _emit 0x0C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF9A7: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x588EF9A9: push 0x589a17d4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0x17
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588EF9AE: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588EF9B2: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x588EF9B4: mov ecx, dword ptr [esp + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF9BB: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588EF9BF: mov eax, 0x5898c922
        __asm _emit 0xB8
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588EF9C4: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588EF9C8: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588EF9CC: mov eax, dword ptr [esp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF9D3: mov edx, dword ptr [esp + ecx*4 + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x8C
        __asm _emit 0x24
        // 0x588EF9D7: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x588EF9DA: push eax
        __asm _emit 0x50
        // 0x588EF9DB: push edx
        __asm _emit 0x52
        // 0x588EF9DC: push 0x589a17bc
        __asm _emit 0x68
        __asm _emit 0xBC
        __asm _emit 0x17
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588EF9E1: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x588EF9E3: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588EF9E6: push eax
        __asm _emit 0x50
        // 0x588EF9E7: lea eax, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588EF9EB: push eax
        __asm _emit 0x50
        // 0x588EF9EC: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x588EF9EE: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588EF9F1: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588EF9F6: push ebp
        __asm _emit 0x55
        // 0x588EF9F7: lea ecx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588EF9FB: push ecx
        __asm _emit 0x51
        // 0x588EF9FC: mov ecx, dword ptr [edi + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFA02: call 0x589089e0
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0x8F
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588EFA07: mov ecx, dword ptr [esp + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x70
        // 0x588EFA0B: pop edi
        __asm _emit 0x5F
        // 0x588EFA0C: pop esi
        __asm _emit 0x5E
        // 0x588EFA0D: pop ebp
        __asm _emit 0x5D
        // 0x588EFA0E: pop ebx
        __asm _emit 0x5B
        // 0x588EFA0F: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588EFA11: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0xD1
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588EFA16: add esp, 0x64
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x64
        // 0x588EFA19: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
