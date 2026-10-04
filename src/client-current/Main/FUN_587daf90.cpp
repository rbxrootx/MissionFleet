// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587DAF90 .. +0x459 bytes.
// Source symbol alias: FUN_587daf90.
extern "C" __declspec(naked) void FUN_587daf90() {
    __asm {
        // 0x587DAF90: push esi
        __asm _emit 0x56
        // 0x587DAF91: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587DAF93: mov eax, dword ptr [esi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAF99: push edi
        __asm _emit 0x57
        // 0x587DAF9A: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587DAF9E: mov eax, dword ptr [eax + edi*4 + 0xb40]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xB8
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAFA5: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587DAFA7: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587DAFA9: jne 0x587dafb2
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587DAFAB: pop edi
        __asm _emit 0x5F
        // 0x587DAFAC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587DAFAE: pop esi
        __asm _emit 0x5E
        // 0x587DAFAF: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587DAFB2: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587DAFB6: push ebx
        __asm _emit 0x53
        // 0x587DAFB7: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x587DAFB9: jne 0x587db0e2
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAFBF: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xA1
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DAFC4: cmp dword ptr [eax + 0x164], 0x3d
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3D
        // 0x587DAFCB: jle 0x587dafe3
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x587DAFCD: cmp dword ptr [eax + 0x18c], edx
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAFD3: je 0x587dafe3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587DAFD5: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAFDB: mov eax, dword ptr [ecx + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAFE1: jmp 0x587dafe5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587DAFE3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587DAFE5: mov ecx, dword ptr [esi + edi*4 + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBE
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAFEC: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587DAFEF: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587DAFF1: je 0x587db01b
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587DAFF3: mov ebx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587DAFF6: mov dword ptr [ecx + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x0C
        // 0x587DAFF9: mov ebx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x14
        // 0x587DAFFC: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x587DAFFF: mov dword ptr [ecx + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x10
        // 0x587DB002: mov ebx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x18
        // 0x587DB004: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587DB007: mov dword ptr [ecx], ebx
        __asm _emit 0x89
        __asm _emit 0x19
        // 0x587DB009: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x587DB00C: mov dword ptr [ecx + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x04
        // 0x587DB00F: mov ebx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x08
        // 0x587DB012: mov dword ptr [ecx + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x08
        // 0x587DB015: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587DB018: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587DB01B: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xA1
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DB020: cmp dword ptr [eax + 0x164], 0x123
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB02A: jle 0x587db042
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x587DB02C: cmp dword ptr [eax + 0x18c], edx
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB032: je 0x587db042
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587DB034: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB03A: mov eax, dword ptr [ecx + 0x48c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x8C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB040: jmp 0x587db044
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587DB042: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587DB044: mov ecx, dword ptr [esi + edi*4 + 0x1c0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBE
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB04B: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587DB04E: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587DB050: je 0x587db07a
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587DB052: mov ebx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587DB055: mov dword ptr [ecx + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x0C
        // 0x587DB058: mov ebx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x14
        // 0x587DB05B: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x587DB05E: mov dword ptr [ecx + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x10
        // 0x587DB061: mov ebx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x18
        // 0x587DB063: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587DB066: mov dword ptr [ecx], ebx
        __asm _emit 0x89
        __asm _emit 0x19
        // 0x587DB068: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x587DB06B: mov dword ptr [ecx + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x04
        // 0x587DB06E: mov ebx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x08
        // 0x587DB071: mov dword ptr [ecx + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x08
        // 0x587DB074: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587DB077: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587DB07A: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xA1
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DB07F: cmp dword ptr [eax + 0x164], 0x122
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB089: jle 0x587db0a1
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x587DB08B: cmp dword ptr [eax + 0x18c], edx
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB091: je 0x587db0a1
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587DB093: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB099: mov eax, dword ptr [ecx + 0x488]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB09F: jmp 0x587db0a3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587DB0A1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587DB0A3: mov ecx, dword ptr [esi + edi*4 + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBE
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB0AA: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587DB0AD: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587DB0AF: je 0x587db3c8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB0B5: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587DB0B8: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587DB0BB: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x587DB0BE: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x587DB0C1: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587DB0C4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587DB0C6: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587DB0C9: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587DB0CB: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587DB0CE: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587DB0D1: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587DB0D4: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587DB0D7: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587DB0DA: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587DB0DD: jmp 0x587db3c8
        __asm _emit 0xE9
        __asm _emit 0xE6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB0E2: mov ebx, dword ptr [ecx + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x99
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB0E8: mov ecx, dword ptr [esi + edi*4 + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBE
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB0EF: push ebp
        __asm _emit 0x55
        // 0x587DB0F0: mov ebp, dword ptr [eax + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x68
        // 0x587DB0F3: mov dword ptr [ecx + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x50
        // 0x587DB0F6: mov eax, dword ptr [esi + edi*4 + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xBE
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB0FD: mov dword ptr [eax + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x587DB100: mov ecx, dword ptr [esi + edi*4 + 0x1c0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBE
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB107: mov dword ptr [ecx + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x50
        // 0x587DB10A: mov ecx, dword ptr [esi + edi*4 + 0x504]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBE
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB111: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB116: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0x7B
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587DB11B: and ebx, ebp
        __asm _emit 0x23
        __asm _emit 0xDD
        // 0x587DB11D: cmp ebx, ebp
        __asm _emit 0x3B
        __asm _emit 0xDD
        // 0x587DB11F: pop ebp
        __asm _emit 0x5D
        // 0x587DB120: je 0x587db1d1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB126: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xA1
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DB12B: cmp dword ptr [eax + 0x164], 0x3d
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3D
        // 0x587DB132: jle 0x587db14b
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x587DB134: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB13B: je 0x587db14b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587DB13D: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB143: mov eax, dword ptr [edx + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB149: jmp 0x587db14d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587DB14B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587DB14D: mov ecx, dword ptr [esi + edi*4 + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBE
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB154: push eax
        __asm _emit 0x50
        // 0x587DB155: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0x65
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587DB15A: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xA1
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DB15F: cmp dword ptr [eax + 0x164], 0x11d
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB169: jle 0x587db182
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x587DB16B: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB172: je 0x587db182
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587DB174: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB17A: mov eax, dword ptr [eax + 0x474]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB180: jmp 0x587db184
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587DB182: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587DB184: mov ecx, dword ptr [esi + edi*4 + 0x1c0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBE
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB18B: push eax
        __asm _emit 0x50
        // 0x587DB18C: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x65
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587DB191: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xA1
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DB196: cmp dword ptr [eax + 0x164], 0x11c
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB1A0: jle 0x587db1c3
        __asm _emit 0x7E
        __asm _emit 0x21
        // 0x587DB1A2: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB1A9: je 0x587db1c3
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x587DB1AB: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB1B1: mov eax, dword ptr [ecx + 0x470]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x70
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB1B7: mov ecx, dword ptr [esi + edi*4 + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBE
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB1BE: jmp 0x587db3c2
        __asm _emit 0xE9
        __asm _emit 0xFF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB1C3: mov ecx, dword ptr [esi + edi*4 + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBE
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB1CA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587DB1CC: jmp 0x587db3c2
        __asm _emit 0xE9
        __asm _emit 0xF1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB1D1: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587DB1D5: movzx edx, word ptr [ebx + 0x5e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x53
        __asm _emit 0x5E
        // 0x587DB1D9: mov ecx, dword ptr [esi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB1DF: mov eax, dword ptr [ecx + edi*4 + 0xb40]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xB9
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB1E6: shr edx, 4
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x04
        // 0x587DB1E9: xor edx, 0xffffffaa
        __asm _emit 0x83
        __asm _emit 0xF2
        __asm _emit 0xAA
        // 0x587DB1EC: and edx, 0xff
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB1F2: cmp dword ptr [eax + 0x28], edx
        __asm _emit 0x39
        __asm _emit 0x50
        __asm _emit 0x28
        // 0x587DB1F5: jbe 0x587db2a0
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0xA5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB1FB: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xA1
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DB200: cmp dword ptr [eax + 0x164], 0x3d
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3D
        // 0x587DB207: jle 0x587db220
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x587DB209: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB210: je 0x587db220
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587DB212: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB218: mov eax, dword ptr [ecx + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB21E: jmp 0x587db222
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587DB220: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587DB222: mov ecx, dword ptr [esi + edi*4 + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBE
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB229: push eax
        __asm _emit 0x50
        // 0x587DB22A: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0x64
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587DB22F: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xA1
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DB234: cmp dword ptr [eax + 0x164], 0x11f
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB23E: jle 0x587db257
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x587DB240: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB247: je 0x587db257
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587DB249: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB24F: mov eax, dword ptr [edx + 0x47c]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB255: jmp 0x587db259
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587DB257: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587DB259: mov ecx, dword ptr [esi + edi*4 + 0x1c0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBE
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB260: push eax
        __asm _emit 0x50
        // 0x587DB261: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0x64
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587DB266: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xA1
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DB26B: cmp dword ptr [eax + 0x164], 0x11e
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB275: jle 0x587db1c3
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x48
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DB27B: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB282: je 0x587db1c3
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x3B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DB288: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB28E: mov eax, dword ptr [eax + 0x478]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB294: mov ecx, dword ptr [esi + edi*4 + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBE
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB29B: jmp 0x587db3c2
        __asm _emit 0xE9
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB2A0: push ebx
        __asm _emit 0x53
        // 0x587DB2A1: call 0x588e75e0
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0xC3
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587DB2A6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DB2A8: je 0x587db3de
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB2AE: mov bx, word ptr [ebx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x5B
        __asm _emit 0x5E
        // 0x587DB2B2: and bx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE3
        __asm _emit 0x0F
        // 0x587DB2B6: jne 0x587db2cf
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x587DB2B8: mov ecx, dword ptr [esi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB2BE: mov edx, dword ptr [ecx + edi*4 + 0xb40]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xB9
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB2C5: cmp dword ptr [edx + 0x28], 0xc
        __asm _emit 0x83
        __asm _emit 0x7A
        __asm _emit 0x28
        __asm _emit 0x0C
        // 0x587DB2C9: jb 0x587db388
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB2CF: mov eax, dword ptr [esi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB2D5: mov ecx, dword ptr [eax + edi*4 + 0xb40]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xB8
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB2DC: cmp word ptr [ecx + 6], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x59
        __asm _emit 0x06
        // 0x587DB2E0: je 0x587db388
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB2E6: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xA1
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DB2EB: cmp dword ptr [eax + 0x164], 0x3d
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3D
        // 0x587DB2F2: jle 0x587db30b
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x587DB2F4: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB2FB: je 0x587db30b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587DB2FD: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB303: mov eax, dword ptr [edx + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB309: jmp 0x587db30d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587DB30B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587DB30D: mov ecx, dword ptr [esi + edi*4 + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBE
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB314: push eax
        __asm _emit 0x50
        // 0x587DB315: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0x63
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587DB31A: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xA1
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DB31F: cmp dword ptr [eax + 0x164], 0x121
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB329: jle 0x587db342
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x587DB32B: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB332: je 0x587db342
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587DB334: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB33A: mov eax, dword ptr [eax + 0x484]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB340: jmp 0x587db344
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587DB342: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587DB344: mov ecx, dword ptr [esi + edi*4 + 0x1c0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBE
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB34B: push eax
        __asm _emit 0x50
        // 0x587DB34C: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0x63
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587DB351: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xA1
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DB356: cmp dword ptr [eax + 0x164], 0x120
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB360: jle 0x587db1c3
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x5D
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DB366: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB36D: je 0x587db1c3
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DB373: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB379: mov eax, dword ptr [ecx + 0x480]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB37F: mov ecx, dword ptr [esi + edi*4 + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBE
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB386: jmp 0x587db3c2
        __asm _emit 0xEB
        __asm _emit 0x3A
        // 0x587DB388: push edi
        __asm _emit 0x57
        // 0x587DB389: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587DB38B: call 0x587da650
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DB390: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DB392: jne 0x587db3de
        __asm _emit 0x75
        __asm _emit 0x4A
        // 0x587DB394: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xA1
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DB399: cmp dword ptr [eax + 0x164], 0x3d
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3D
        // 0x587DB3A0: jle 0x587db3b9
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x587DB3A2: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB3A9: je 0x587db3b9
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587DB3AB: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB3B1: mov eax, dword ptr [edx + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB3B7: jmp 0x587db3bb
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587DB3B9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587DB3BB: mov ecx, dword ptr [esi + edi*4 + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBE
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB3C2: push eax
        __asm _emit 0x50
        // 0x587DB3C3: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0x62
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587DB3C8: mov ecx, dword ptr [esi + edi*4 + 0x504]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBE
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB3CF: push 0x78
        __asm _emit 0x6A
        __asm _emit 0x78
        // 0x587DB3D1: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0x79
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587DB3D6: pop ebx
        __asm _emit 0x5B
        // 0x587DB3D7: pop edi
        __asm _emit 0x5F
        // 0x587DB3D8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587DB3DA: pop esi
        __asm _emit 0x5E
        // 0x587DB3DB: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587DB3DE: pop ebx
        __asm _emit 0x5B
        // 0x587DB3DF: pop edi
        __asm _emit 0x5F
        // 0x587DB3E0: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB3E5: pop esi
        __asm _emit 0x5E
        // 0x587DB3E6: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
