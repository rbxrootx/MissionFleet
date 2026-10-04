// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B7990 .. +0x21D bytes.
// Source symbol alias: FUN_587b7990.
extern "C" __declspec(naked) void FUN_587b7990() {
    __asm {
        // 0x587B7990: sub esp, 0x214
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7996: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587B799B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587B799D: mov dword ptr [esp + 0x210], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B79A4: push esi
        __asm _emit 0x56
        // 0x587B79A5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587B79A7: cmp dword ptr [esi + 0x30], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x587B79AB: push edi
        __asm _emit 0x57
        // 0x587B79AC: je 0x587b79b3
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587B79AE: call 0x58970ae0
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0x91
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B79B3: push ebx
        __asm _emit 0x53
        // 0x587B79B4: lea edx, [esi + 0x178]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B79BA: lea eax, [esi + 0x130]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B79C0: mov edi, 3
        __asm _emit 0xBF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B79C5: or ebx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCB
        __asm _emit 0xFF
        // 0x587B79C8: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587B79CA: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x587B79CC: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587B79CF: mov dword ptr [eax + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587B79D2: mov dword ptr [eax + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x587B79D5: mov dword ptr [eax + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x587B79D8: mov dword ptr [eax + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x587B79DB: mov dword ptr [edx], ebx
        __asm _emit 0x89
        __asm _emit 0x1A
        // 0x587B79DD: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x587B79E0: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x587B79E3: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x587B79E6: jne 0x587b79c8
        __asm _emit 0x75
        __asm _emit 0xE0
        // 0x587B79E8: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B79ED: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587B79F1: push edi
        __asm _emit 0x57
        // 0x587B79F2: push eax
        __asm _emit 0x50
        // 0x587B79F3: mov dword ptr [esi + 0x184], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B79F9: mov dword ptr [esi + 0x188], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B79FF: mov dword ptr [esi + 0x18c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7A05: mov dword ptr [esi + 0x190], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7A0B: mov dword ptr [esp + 0x24], 0x80
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7A13: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x52
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B7A18: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587B7A1B: lea ecx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587B7A1F: push ecx
        __asm _emit 0x51
        // 0x587B7A20: push 0xf003f
        __asm _emit 0x68
        __asm _emit 0x3F
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x587B7A25: push edi
        __asm _emit 0x57
        // 0x587B7A26: push 0x58997258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x72
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587B7A2B: push 0x80000002
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x587B7A30: call dword ptr [0x5898c008]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587B7A36: mov esi, dword ptr [0x5898c010]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x10
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587B7A3C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B7A3E: je 0x587b7a63
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x587B7A40: lea edx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B7A44: push edx
        __asm _emit 0x52
        // 0x587B7A45: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B7A49: push eax
        __asm _emit 0x50
        // 0x587B7A4A: push edi
        __asm _emit 0x57
        // 0x587B7A4B: push 0xf003f
        __asm _emit 0x68
        __asm _emit 0x3F
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x587B7A50: push edi
        __asm _emit 0x57
        // 0x587B7A51: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587B7A56: push edi
        __asm _emit 0x57
        // 0x587B7A57: push 0x58997258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x72
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587B7A5C: push 0x80000002
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x587B7A61: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x587B7A63: mov ebx, dword ptr [0x5898c004]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x04
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587B7A69: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B7A6D: push ecx
        __asm _emit 0x51
        // 0x587B7A6E: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B7A72: lea edx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587B7A76: push edx
        __asm _emit 0x52
        // 0x587B7A77: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B7A7B: push eax
        __asm _emit 0x50
        // 0x587B7A7C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B7A7E: push 0x58997244
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0x72
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587B7A83: push ecx
        __asm _emit 0x51
        // 0x587B7A84: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x587B7A86: mov edi, dword ptr [0x5898c00c]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0x0C
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587B7A8C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B7A8E: je 0x587b7ae7
        __asm _emit 0x74
        __asm _emit 0x57
        // 0x587B7A90: push 0x5899a1b0
        __asm _emit 0x68
        __asm _emit 0xB0
        __asm _emit 0xA1
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587B7A95: lea edx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587B7A99: push edx
        __asm _emit 0x52
        // 0x587B7A9A: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587B7AA0: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B7AA4: push eax
        __asm _emit 0x50
        // 0x587B7AA5: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B7AA9: push ecx
        __asm _emit 0x51
        // 0x587B7AAA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B7AAC: push 0xf003f
        __asm _emit 0x68
        __asm _emit 0x3F
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x587B7AB1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B7AB3: push 0x58997244
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0x72
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587B7AB8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B7ABA: push 0x58997258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x72
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587B7ABF: push 0x80000002
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x587B7AC4: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x587B7AC6: lea edx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587B7ACA: push edx
        __asm _emit 0x52
        // 0x587B7ACB: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587B7AD1: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587B7AD5: push eax
        __asm _emit 0x50
        // 0x587B7AD6: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587B7ADA: push eax
        __asm _emit 0x50
        // 0x587B7ADB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587B7ADD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B7ADF: push 0x58997244
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0x72
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587B7AE4: push ecx
        __asm _emit 0x51
        // 0x587B7AE5: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587B7AE7: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B7AEB: push edx
        __asm _emit 0x52
        // 0x587B7AEC: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B7AF0: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B7AF4: push eax
        __asm _emit 0x50
        // 0x587B7AF5: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B7AF9: push ecx
        __asm _emit 0x51
        // 0x587B7AFA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B7AFC: push 0x5899722c
        __asm _emit 0x68
        __asm _emit 0x2C
        __asm _emit 0x72
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587B7B01: push edx
        __asm _emit 0x52
        // 0x587B7B02: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x587B7B04: pop ebx
        __asm _emit 0x5B
        // 0x587B7B05: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B7B07: je 0x587b7b4e
        __asm _emit 0x74
        __asm _emit 0x45
        // 0x587B7B09: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587B7B0D: push eax
        __asm _emit 0x50
        // 0x587B7B0E: lea ecx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587B7B12: push ecx
        __asm _emit 0x51
        // 0x587B7B13: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B7B15: push 0xf003f
        __asm _emit 0x68
        __asm _emit 0x3F
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x587B7B1A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B7B1C: push 0x5899722c
        __asm _emit 0x68
        __asm _emit 0x2C
        __asm _emit 0x72
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587B7B21: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B7B23: push 0x58997258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x72
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587B7B28: push 0x80000002
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x587B7B2D: mov dword ptr [esp + 0x34], 0x4db0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0xB0
        __asm _emit 0x4D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7B35: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x587B7B37: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B7B3B: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587B7B3D: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B7B41: push edx
        __asm _emit 0x52
        // 0x587B7B42: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587B7B44: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B7B46: push 0x5899722c
        __asm _emit 0x68
        __asm _emit 0x2C
        __asm _emit 0x72
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587B7B4B: push eax
        __asm _emit 0x50
        // 0x587B7B4C: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587B7B4E: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B7B52: push ecx
        __asm _emit 0x51
        // 0x587B7B53: call dword ptr [0x5898c000]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587B7B59: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B7B5D: push edx
        __asm _emit 0x52
        // 0x587B7B5E: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587B7B62: push eax
        __asm _emit 0x50
        // 0x587B7B63: lea ecx, [esp + 0x120]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7B6A: push 0x589977b0
        __asm _emit 0x68
        __asm _emit 0xB0
        __asm _emit 0x77
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587B7B6F: push ecx
        __asm _emit 0x51
        // 0x587B7B70: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587B7B76: mov eax, dword ptr [0x58a242f4]
        __asm _emit 0xA1
        __asm _emit 0xF4
        __asm _emit 0x42
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B7B7B: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587B7B7D: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587B7B80: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B7B82: lea edx, [esp + 0x11c]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7B89: push edx
        __asm _emit 0x52
        // 0x587B7B8A: push ecx
        __asm _emit 0x51
        // 0x587B7B8B: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B7B91: call 0x58971070
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0x94
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B7B96: mov ecx, dword ptr [esp + 0x218]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7B9D: pop edi
        __asm _emit 0x5F
        // 0x587B7B9E: pop esi
        __asm _emit 0x5E
        // 0x587B7B9F: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587B7BA1: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x50
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B7BA6: add esp, 0x214
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7BAC: ret
        __asm _emit 0xC3
    }
}
