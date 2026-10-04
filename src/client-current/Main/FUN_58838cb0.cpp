// Instruction stream decoded from Ghidra indexing and the pinned mapped Main.dll.
// Corrected extent includes the stack-cookie epilogue and ret through +0x4FF.
// Source symbol alias: FUN_58838cb0.
extern "C" __declspec(naked) void FUN_58838cb0() {
    __asm {
        // 0x58838CB0: sub esp, 0xd0
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838CB6: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58838CBB: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58838CBD: mov dword ptr [esp + 0xcc], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838CC4: push ebx
        __asm _emit 0x53
        // 0x58838CC5: push ebp
        __asm _emit 0x55
        // 0x58838CC6: push esi
        __asm _emit 0x56
        // 0x58838CC7: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58838CC9: mov al, byte ptr [esi + 0x321]
        __asm _emit 0x8A
        __asm _emit 0x86
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838CCF: push edi
        __asm _emit 0x57
        // 0x58838CD0: mov edi, dword ptr [esp + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838CD7: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x58838CD9: jne 0x58838f5f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838CDF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58838CE1: jne 0x58838d0e
        __asm _emit 0x75
        __asm _emit 0x2B
        // 0x58838CE3: push edi
        __asm _emit 0x57
        // 0x58838CE4: push edi
        __asm _emit 0x57
        // 0x58838CE5: push edi
        __asm _emit 0x57
        // 0x58838CE6: push 0x24c
        __asm _emit 0x68
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838CEB: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x2E
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58838CF0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58838CF2: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0xC0
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58838CF7: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58838CFC: mov ecx, dword ptr [eax + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838D02: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58838D04: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58838D07: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58838D09: jmp 0x58839194
        __asm _emit 0xE9
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838D0E: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x58838D11: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58838D13: je 0x58838d52
        __asm _emit 0x74
        __asm _emit 0x3D
        // 0x58838D15: mov ecx, dword ptr [0x58a245e0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58838D1B: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58838D1D: je 0x58838d52
        __asm _emit 0x74
        __asm _emit 0x33
        // 0x58838D1F: cmp dword ptr [ecx + 4], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58838D23: je 0x58838d52
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x58838D25: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58838D28: dec eax
        __asm _emit 0x48
        // 0x58838D29: cmp dword ptr [edx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x82
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838D2F: jbe 0x58838d52
        __asm _emit 0x76
        __asm _emit 0x21
        // 0x58838D31: push eax
        __asm _emit 0x50
        // 0x58838D32: call 0x58755ff0
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0xD2
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58838D37: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838D3D: push eax
        __asm _emit 0x50
        // 0x58838D3E: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0x89
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58838D43: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838D49: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58838D4B: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x88
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58838D50: jmp 0x58838dd0
        __asm _emit 0xEB
        __asm _emit 0x7E
        // 0x58838D52: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838D58: cmp dword ptr [eax + 0x164], 0x5a
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x5A
        // 0x58838D5F: jle 0x58838d73
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x58838D61: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838D67: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58838D69: je 0x58838d73
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58838D6B: mov eax, dword ptr [eax + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838D71: jmp 0x58838d75
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58838D73: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58838D75: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838D7B: push eax
        __asm _emit 0x50
        // 0x58838D7C: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x89
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58838D81: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838D87: cmp dword ptr [eax + 0x164], 0x59
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x59
        // 0x58838D8E: jle 0x58838da2
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x58838D90: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838D96: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58838D98: je 0x58838da2
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58838D9A: mov eax, dword ptr [eax + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838DA0: jmp 0x58838da4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58838DA2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58838DA4: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838DAA: push eax
        __asm _emit 0x50
        // 0x58838DAB: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x89
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58838DB0: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838DB6: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58838DBB: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0x9F
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58838DC0: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838DC6: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838DCB: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x9F
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58838DD0: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838DD6: lea ebp, [edi + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x6F
        __asm _emit 0x0C
        // 0x58838DD9: push ebp
        __asm _emit 0x55
        // 0x58838DDA: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x8F
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58838DDF: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838DE5: lea eax, [edi + 0x2d]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x2D
        // 0x58838DE8: push eax
        __asm _emit 0x50
        // 0x58838DE9: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x8E
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58838DEE: mov cl, byte ptr [edi + 0x5a]
        __asm _emit 0x8A
        __asm _emit 0x4F
        __asm _emit 0x5A
        // 0x58838DF1: mov ebx, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58838DF7: mov byte ptr [esi + 0x340], cl
        __asm _emit 0x88
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838DFD: movzx edx, word ptr [edi + 0x4a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x57
        __asm _emit 0x4A
        // 0x58838E01: movzx eax, word ptr [edi + 0x48]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x47
        __asm _emit 0x48
        // 0x58838E05: movzx ecx, word ptr [edi + 0x46]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4F
        __asm _emit 0x46
        // 0x58838E09: push edx
        __asm _emit 0x52
        // 0x58838E0A: push eax
        __asm _emit 0x50
        // 0x58838E0B: push ecx
        __asm _emit 0x51
        // 0x58838E0C: push 0x5899e308
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0xE3
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58838E11: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58838E13: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58838E16: push eax
        __asm _emit 0x50
        // 0x58838E17: lea edx, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58838E1B: push edx
        __asm _emit 0x52
        // 0x58838E1C: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58838E22: mov ecx, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838E28: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58838E2B: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58838E2F: push eax
        __asm _emit 0x50
        // 0x58838E30: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0x8E
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58838E35: movzx ecx, word ptr [edi + 0x58]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4F
        __asm _emit 0x58
        // 0x58838E39: movzx edx, word ptr [edi + 0x56]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x57
        __asm _emit 0x56
        // 0x58838E3D: movzx eax, word ptr [edi + 0x54]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x47
        __asm _emit 0x54
        // 0x58838E41: push ecx
        __asm _emit 0x51
        // 0x58838E42: push edx
        __asm _emit 0x52
        // 0x58838E43: push eax
        __asm _emit 0x50
        // 0x58838E44: push 0x5899e308
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0xE3
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58838E49: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58838E4B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58838E4E: push eax
        __asm _emit 0x50
        // 0x58838E4F: lea ecx, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58838E53: push ecx
        __asm _emit 0x51
        // 0x58838E54: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58838E5A: mov ecx, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838E60: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58838E63: lea edx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58838E67: push edx
        __asm _emit 0x52
        // 0x58838E68: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x8E
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58838E6D: mov eax, dword ptr [edi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x50
        // 0x58838E70: mov dword ptr [esi + 0x1f0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838E76: mov ecx, dword ptr [edi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x50
        // 0x58838E79: push ecx
        __asm _emit 0x51
        // 0x58838E7A: mov ecx, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838E80: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0xE4
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58838E85: mov ecx, dword ptr [esi + 0x178]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838E8B: push ebp
        __asm _emit 0x55
        // 0x58838E8C: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x8E
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58838E91: cmp byte ptr [edi + 0x5a], 0
        __asm _emit 0x80
        __asm _emit 0x7F
        __asm _emit 0x5A
        __asm _emit 0x00
        // 0x58838E95: je 0x58838eb9
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x58838E97: mov byte ptr [esi + 0x321], 5
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        // 0x58838E9E: movzx eax, byte ptr [edi + 0x5a]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x47
        __asm _emit 0x5A
        // 0x58838EA2: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58838EA8: lea edx, [edi + 0x5c]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x5C
        // 0x58838EAB: push edx
        __asm _emit 0x52
        // 0x58838EAC: push eax
        __asm _emit 0x50
        // 0x58838EAD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58838EAF: call 0x587b92b0
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x03
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58838EB4: jmp 0x58839194
        __asm _emit 0xE9
        __asm _emit 0xDB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838EB9: mov byte ptr [esi + 0x321], 0
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838EC0: lea edi, [esi + 0x1bc]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838EC6: add esi, 0x150
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838ECC: mov dword ptr [esp + 0x10], 5
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838ED4: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58838ED6: jmp 0x58838ee0
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x58838ED8: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838EDF: nop
        __asm _emit 0x90
        // 0x58838EE0: mov ecx, 2
        __asm _emit 0xB9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838EE5: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58838EE7: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838EEC: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58838EF0: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x58838EF3: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x58838EF6: jne 0x58838ee5
        __asm _emit 0x75
        __asm _emit 0xED
        // 0x58838EF8: mov eax, dword ptr [edi - 0x40]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0xC0
        // 0x58838EFB: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x58838EFE: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58838F00: je 0x58838f32
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x58838F02: mov edx, 0x5898c922
        __asm _emit 0xBA
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58838F07: mov ebp, 0x80
        __asm _emit 0xBD
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838F0C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58838F10: lea ecx, [ebp + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x58838F16: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58838F18: je 0x58838f2b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x58838F1A: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x58838F1C: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58838F1E: je 0x58838f2b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58838F20: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x58838F22: inc eax
        __asm _emit 0x40
        // 0x58838F23: inc edx
        __asm _emit 0x42
        // 0x58838F24: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58838F27: jne 0x58838f10
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x58838F29: jmp 0x58838f2f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x58838F2B: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x58838F2D: jne 0x58838f30
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x58838F2F: dec eax
        __asm _emit 0x48
        // 0x58838F30: mov byte ptr [eax], bl
        __asm _emit 0x88
        __asm _emit 0x18
        // 0x58838F32: mov ecx, dword ptr [edi - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xEC
        // 0x58838F35: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58838F3A: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0x9D
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58838F3F: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58838F41: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838F46: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0x9D
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58838F4B: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x58838F4D: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58838F50: sub dword ptr [esp + 0x10], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        // 0x58838F55: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x58838F58: jne 0x58838ee0
        __asm _emit 0x75
        __asm _emit 0x86
        // 0x58838F5A: jmp 0x58839194
        __asm _emit 0xE9
        __asm _emit 0x35
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838F5F: cmp al, 6
        __asm _emit 0x3C
        __asm _emit 0x06
        // 0x58838F61: jne 0x58839194
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x2D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838F67: lea eax, [edi + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x58838F6A: push eax
        __asm _emit 0x50
        // 0x58838F6B: push 0x5899e2dc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0xE2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58838F70: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58838F76: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58838F79: push eax
        __asm _emit 0x50
        // 0x58838F7A: lea ecx, [esp + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x58838F7E: push ecx
        __asm _emit 0x51
        // 0x58838F7F: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58838F85: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58838F8B: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58838F8E: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58838F90: lea edx, [esp + 0x60]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x60
        // 0x58838F94: push edx
        __asm _emit 0x52
        // 0x58838F95: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58838F97: call 0x5881e2e0
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0x53
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58838F9C: mov ebx, dword ptr [esi + 0x264]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838FA2: cmp ebx, dword ptr [esi + 0x268]
        __asm _emit 0x3B
        __asm _emit 0x9E
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838FA8: jbe 0x58838faf
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58838FAA: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0x3C
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58838FAF: mov ebp, dword ptr [esi + 0x258]
        __asm _emit 0x8B
        __asm _emit 0xAE
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838FB5: jmp 0x58838fc0
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x58838FB7: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838FBE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58838FC0: mov eax, dword ptr [esi + 0x268]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838FC6: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58838FCA: cmp dword ptr [esi + 0x264], eax
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838FD0: jbe 0x58838fd7
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58838FD2: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0x3C
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58838FD7: mov eax, dword ptr [esi + 0x258]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58838FDD: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58838FDF: je 0x58838fe5
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58838FE1: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x58838FE3: je 0x58838fea
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58838FE5: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0x3C
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58838FEA: cmp ebx, dword ptr [esp + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58838FEE: je 0x5883904c
        __asm _emit 0x74
        __asm _emit 0x5C
        // 0x58838FF0: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58838FF2: jne 0x58839030
        __asm _emit 0x75
        __asm _emit 0x3C
        // 0x58838FF4: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x3C
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58838FF9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58838FFB: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x58838FFE: jb 0x58839005
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58839000: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0x3C
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58839005: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58839007: push eax
        __asm _emit 0x50
        // 0x58839008: lea ecx, [edi + 0x2d]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x2D
        // 0x5883900B: push ecx
        __asm _emit 0x51
        // 0x5883900C: call dword ptr [0x5898c1a4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58839012: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58839014: je 0x5883903a
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x58839016: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58839018: jne 0x58839035
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x5883901A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x3C
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883901F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58839021: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x58839024: jb 0x5883902b
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58839026: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0x3C
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883902B: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x5883902E: jmp 0x58838fc0
        __asm _emit 0xEB
        __asm _emit 0x90
        // 0x58839030: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58839033: jmp 0x58838ffb
        __asm _emit 0xEB
        __asm _emit 0xC6
        // 0x58839035: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58839038: jmp 0x58839021
        __asm _emit 0xEB
        __asm _emit 0xE7
        // 0x5883903A: push ebx
        __asm _emit 0x53
        // 0x5883903B: push ebp
        __asm _emit 0x55
        // 0x5883903C: lea edx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58839040: push edx
        __asm _emit 0x52
        // 0x58839041: lea ecx, [esi + 0x258]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839047: call 0x58849980
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5883904C: mov eax, dword ptr [esi + 0x19c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839052: lea ebp, [esi + 0x190]
        __asm _emit 0x8D
        __asm _emit 0xAE
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839058: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5883905C: cmp eax, dword ptr [ebp + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5883905F: jbe 0x58839066
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58839061: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x3C
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58839066: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5883906A: mov ebx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x00
        // 0x5883906D: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58839071: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x58839074: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58839078: cmp dword ptr [ebp + 0xc], eax
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5883907B: jbe 0x58839082
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5883907D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0x3B
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58839082: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58839085: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58839087: je 0x5883908d
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58839089: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x5883908B: je 0x58839092
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5883908D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0x3B
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58839092: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58839096: cmp dword ptr [esp + 0x18], ecx
        __asm _emit 0x39
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5883909A: je 0x588390f7
        __asm _emit 0x74
        __asm _emit 0x5B
        // 0x5883909C: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5883909E: jne 0x588390ef
        __asm _emit 0x75
        __asm _emit 0x4F
        // 0x588390A0: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x3B
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588390A5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588390A7: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588390AB: cmp edx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588390AE: jb 0x588390b5
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588390B0: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0x3B
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588390B5: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588390B9: add eax, 0x2d
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x2D
        // 0x588390BC: push eax
        __asm _emit 0x50
        // 0x588390BD: lea ecx, [edi + 0x2d]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x2D
        // 0x588390C0: push ecx
        __asm _emit 0x51
        // 0x588390C1: call dword ptr [0x5898c1a4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588390C7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588390C9: je 0x58839194
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588390CF: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588390D1: jne 0x588390f3
        __asm _emit 0x75
        __asm _emit 0x20
        // 0x588390D3: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0x3B
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588390D8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588390DA: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588390DE: cmp edx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588390E1: jb 0x588390e8
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588390E3: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0x3B
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588390E8: add dword ptr [esp + 0x18], 0x54
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x54
        // 0x588390ED: jmp 0x58839071
        __asm _emit 0xEB
        __asm _emit 0x82
        // 0x588390EF: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x588390F1: jmp 0x588390a7
        __asm _emit 0xEB
        __asm _emit 0xB4
        // 0x588390F3: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x588390F5: jmp 0x588390da
        __asm _emit 0xEB
        __asm _emit 0xE3
        // 0x588390F7: push edi
        __asm _emit 0x57
        // 0x588390F8: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588390FA: call 0x58836af0
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0xD9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588390FF: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58839103: mov ecx, 0x1f00
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839108: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5883910B: mov edx, 0x200
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839110: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58839113: jne 0x5883918d
        __asm _emit 0x75
        __asm _emit 0x78
        // 0x58839115: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883911B: push 0xadd783
        __asm _emit 0x68
        __asm _emit 0x83
        __asm _emit 0xD7
        __asm _emit 0xAD
        __asm _emit 0x00
        // 0x58839120: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58839122: add edi, 0x2d
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x2D
        // 0x58839125: push edi
        __asm _emit 0x57
        // 0x58839126: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0xF7
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883912B: mov ecx, dword ptr [esi + 0x250]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839131: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58839136: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58839138: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883913D: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0xF7
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58839142: mov ecx, dword ptr [esi + 0x254]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839148: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5883914D: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5883914F: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58839154: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0xF7
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58839159: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x5883915C: sub ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5883915F: mov eax, 0x30c30c31
        __asm _emit 0xB8
        __asm _emit 0x31
        __asm _emit 0x0C
        __asm _emit 0xC3
        __asm _emit 0x30
        // 0x58839164: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58839166: mov ecx, dword ptr [esi + 0x268]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883916C: sub ecx, dword ptr [esi + 0x264]
        __asm _emit 0x2B
        __asm _emit 0x8E
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839172: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58839175: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58839177: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5883917A: sar ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x5883917D: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5883917F: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x58839181: mov ecx, dword ptr [esi + 0x220]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839187: push eax
        __asm _emit 0x50
        // 0x58839188: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0xE1
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883918D: mov byte ptr [esi + 0x321], 0
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839194: mov ecx, dword ptr [esp + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883919B: pop edi
        __asm _emit 0x5F
        // 0x5883919C: pop esi
        __asm _emit 0x5E
        // 0x5883919D: pop ebp
        __asm _emit 0x5D
        // 0x5883919E: pop ebx
        __asm _emit 0x5B
        // 0x5883919F: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588391A1: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x3A
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588391A6: add esp, 0xd0
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588391AC: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
