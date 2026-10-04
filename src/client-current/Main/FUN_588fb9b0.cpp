// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588FB9B0 .. +0x514 bytes.
// Source symbol alias: FUN_588fb9b0.
extern "C" __declspec(naked) void FUN_588fb9b0() {
    __asm {
        // 0x588FB9B0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588FB9B2: push 0x5898a417
        __asm _emit 0x68
        __asm _emit 0x17
        __asm _emit 0xA4
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588FB9B7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB9BD: push eax
        __asm _emit 0x50
        // 0x588FB9BE: push ecx
        __asm _emit 0x51
        // 0x588FB9BF: push ebx
        __asm _emit 0x53
        // 0x588FB9C0: push ebp
        __asm _emit 0x55
        // 0x588FB9C1: push esi
        __asm _emit 0x56
        // 0x588FB9C2: push edi
        __asm _emit 0x57
        // 0x588FB9C3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588FB9C8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588FB9CA: push eax
        __asm _emit 0x50
        // 0x588FB9CB: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FB9CF: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB9D5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FB9D7: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FB9DB: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FB9DF: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FB9E3: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588FB9E7: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588FB9EB: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588FB9EF: push eax
        __asm _emit 0x50
        // 0x588FB9F0: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588FB9F4: push ecx
        __asm _emit 0x51
        // 0x588FB9F5: push edx
        __asm _emit 0x52
        // 0x588FB9F6: push edi
        __asm _emit 0x57
        // 0x588FB9F7: push ebp
        __asm _emit 0x55
        // 0x588FB9F8: push eax
        __asm _emit 0x50
        // 0x588FB9F9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FB9FB: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBA00: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588FBA06: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588FBA0B: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588FBA0D: mov dword ptr [esi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x50
        // 0x588FBA10: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x588FBA13: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBA1A: mov dword ptr [esi + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x5C
        // 0x588FBA1D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588FBA1F: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBA24: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588FBA28: mov dword ptr [esi], 0x589a2224
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x24
        __asm _emit 0x22
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588FBA2E: mov dword ptr [esi + 0x80], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBA34: mov dword ptr [esi + 0x90], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBA3E: mov word ptr [esi + 0x94], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBA45: mov dword ptr [esi + 0x98], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FBA4F: mov dword ptr [esi + 0x9c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBA55: mov dword ptr [esi + 0xa0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBA5B: mov byte ptr [esi + 0xa4], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBA61: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FBA66: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FBA69: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588FBA6D: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588FBA72: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FBA74: je 0x588fba87
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588FBA76: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588FBA78: push ebx
        __asm _emit 0x53
        // 0x588FBA79: push 0x589a0970
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x09
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588FBA7E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FBA80: call 0x588f3d70
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0x82
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FBA85: jmp 0x588fba89
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FBA87: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FBA89: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x588FBA8B: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588FBA8F: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588FBA92: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0x11
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FBA97: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FBA9A: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588FBA9E: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x588FBAA3: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FBAA5: je 0x588fbac2
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x588FBAA7: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FBAAB: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FBAAF: push edx
        __asm _emit 0x52
        // 0x588FBAB0: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FBAB4: push ecx
        __asm _emit 0x51
        // 0x588FBAB5: push edx
        __asm _emit 0x52
        // 0x588FBAB6: push edi
        __asm _emit 0x57
        // 0x588FBAB7: push ebp
        __asm _emit 0x55
        // 0x588FBAB8: push esi
        __asm _emit 0x56
        // 0x588FBAB9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FBABB: call 0x588fec60
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBAC0: jmp 0x588fbac4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FBAC2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FBAC4: push 0x98
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBAC9: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588FBACD: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x588FBAD0: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x11
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FBAD5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FBAD8: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FBADC: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x588FBAE1: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FBAE3: je 0x588fbb14
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x588FBAE5: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588FBAE8: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FBAEC: push ecx
        __asm _emit 0x51
        // 0x588FBAED: add edx, 0xc8
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBAF3: push edx
        __asm _emit 0x52
        // 0x588FBAF4: lea ecx, [edi + 0x1b9]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBAFA: push ecx
        __asm _emit 0x51
        // 0x588FBAFB: lea edx, [ebp + 0x1cb]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xCB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBB01: push edx
        __asm _emit 0x52
        // 0x588FBB02: lea ecx, [edi + 0x6d]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x6D
        // 0x588FBB05: push ecx
        __asm _emit 0x51
        // 0x588FBB06: lea edx, [ebp + 0x21]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x21
        // 0x588FBB09: push edx
        __asm _emit 0x52
        // 0x588FBB0A: push esi
        __asm _emit 0x56
        // 0x588FBB0B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FBB0D: call 0x588ffe10
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBB12: jmp 0x588fbb16
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FBB14: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FBB16: push 0x108
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBB1B: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588FBB1F: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x588FBB22: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0x11
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FBB27: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FBB2A: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FBB2E: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x588FBB33: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FBB35: je 0x588fbb5c
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x588FBB37: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FBB3B: add ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x64
        // 0x588FBB3E: push ecx
        __asm _emit 0x51
        // 0x588FBB3F: lea edx, [edi + 0x50]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x50
        // 0x588FBB42: push edx
        __asm _emit 0x52
        // 0x588FBB43: lea ecx, [ebp + 0xef]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xEF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBB49: push ecx
        __asm _emit 0x51
        // 0x588FBB4A: lea edx, [edi + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x40
        // 0x588FBB4D: push edx
        __asm _emit 0x52
        // 0x588FBB4E: lea ecx, [ebp + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x68
        // 0x588FBB51: push ecx
        __asm _emit 0x51
        // 0x588FBB52: push esi
        __asm _emit 0x56
        // 0x588FBB53: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FBB55: call 0x588f7b70
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0xC0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FBB5A: jmp 0x588fbb5e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FBB5C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FBB5E: mov dword ptr [esi + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x588FBB61: push 0x108
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBB66: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588FBB6A: mov dword ptr [eax + 0xf0], esi
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBB70: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0x10
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FBB75: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FBB78: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FBB7C: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x588FBB81: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FBB83: je 0x588fbbaa
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x588FBB85: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FBB89: add edx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x64
        // 0x588FBB8C: push edx
        __asm _emit 0x52
        // 0x588FBB8D: lea ecx, [edi + 0x66]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x66
        // 0x588FBB90: push ecx
        __asm _emit 0x51
        // 0x588FBB91: lea edx, [ebp + 0xef]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xEF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBB97: push edx
        __asm _emit 0x52
        // 0x588FBB98: lea ecx, [edi + 0x56]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x56
        // 0x588FBB9B: push ecx
        __asm _emit 0x51
        // 0x588FBB9C: lea edx, [ebp + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x68
        // 0x588FBB9F: push edx
        __asm _emit 0x52
        // 0x588FBBA0: push esi
        __asm _emit 0x56
        // 0x588FBBA1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FBBA3: call 0x588fef50
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBBA8: jmp 0x588fbbac
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FBBAA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FBBAC: mov dword ptr [esi + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x588FBBAF: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x588FBBB1: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588FBBB5: mov dword ptr [eax + 0xf0], esi
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBBBB: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FBBC0: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FBBC3: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FBBC7: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x588FBBCC: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FBBCE: je 0x588fbbd9
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588FBBD0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FBBD2: call 0x588f6110
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0xA5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FBBD7: jmp 0x588fbbdb
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FBBD9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FBBDB: push 0x78
        __asm _emit 0x6A
        __asm _emit 0x78
        // 0x588FBBDD: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x588FBBDF: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FBBE1: mov byte ptr [esp + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588FBBE5: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588FBBE8: call 0x588f6130
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0xA5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FBBED: push 0xa8
        __asm _emit 0x68
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBBF2: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0x10
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FBBF7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FBBFA: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FBBFE: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        // 0x588FBC03: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FBC05: je 0x588fbc32
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x588FBC07: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FBC0B: add ecx, 0x258
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBC11: push ecx
        __asm _emit 0x51
        // 0x588FBC12: lea edx, [edi + 0x1c0]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBC18: push edx
        __asm _emit 0x52
        // 0x588FBC19: lea ecx, [ebp + 0x1cb]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xCB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBC1F: push ecx
        __asm _emit 0x51
        // 0x588FBC20: lea edx, [edi + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x40
        // 0x588FBC23: push edx
        __asm _emit 0x52
        // 0x588FBC24: lea ecx, [ebp + 0x35]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x35
        // 0x588FBC27: push ecx
        __asm _emit 0x51
        // 0x588FBC28: push esi
        __asm _emit 0x56
        // 0x588FBC29: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FBC2B: call 0x58900400
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBC30: jmp 0x588fbc34
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FBC32: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FBC34: push 0xc4
        __asm _emit 0x68
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBC39: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588FBC3D: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588FBC40: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0x10
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FBC45: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FBC48: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FBC4C: mov byte ptr [esp + 0x20], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        // 0x588FBC51: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FBC53: je 0x588fbc77
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x588FBC55: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FBC59: add edx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x64
        // 0x588FBC5C: push edx
        __asm _emit 0x52
        // 0x588FBC5D: lea ecx, [edi + 0x1e5]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0xE5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBC63: push ecx
        __asm _emit 0x51
        // 0x588FBC64: lea edx, [ebp + 0x163]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBC6A: push edx
        __asm _emit 0x52
        // 0x588FBC6B: push edi
        __asm _emit 0x57
        // 0x588FBC6C: push ebp
        __asm _emit 0x55
        // 0x588FBC6D: push esi
        __asm _emit 0x56
        // 0x588FBC6E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FBC70: call 0x588fe520
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBC75: jmp 0x588fbc79
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FBC77: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FBC79: push 0x964
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBC7E: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588FBC82: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588FBC85: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0x0F
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FBC8A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FBC8D: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FBC91: mov byte ptr [esp + 0x20], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x09
        // 0x588FBC96: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FBC98: je 0x588fbca3
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588FBC9A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FBC9C: call 0x588feab0
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0x2E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBCA1: jmp 0x588fbca5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FBCA3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FBCA5: push 0x13b8
        __asm _emit 0x68
        __asm _emit 0xB8
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBCAA: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588FBCAE: mov dword ptr [esi + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBCB4: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0x0F
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FBCB9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FBCBC: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FBCC0: mov byte ptr [esp + 0x20], 0xa
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0A
        // 0x588FBCC5: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FBCC7: je 0x588fbce3
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x588FBCC9: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588FBCCB: push ebx
        __asm _emit 0x53
        // 0x588FBCCC: push ebx
        __asm _emit 0x53
        // 0x588FBCCD: lea ecx, [edi + 0x74]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x74
        // 0x588FBCD0: push ecx
        __asm _emit 0x51
        // 0x588FBCD1: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588FBCD4: lea edx, [ebp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x30
        // 0x588FBCD7: push edx
        __asm _emit 0x52
        // 0x588FBCD8: push esi
        __asm _emit 0x56
        // 0x588FBCD9: push ecx
        __asm _emit 0x51
        // 0x588FBCDA: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FBCDC: call 0x588bb6f0
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0xFA
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x588FBCE1: jmp 0x588fbce5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FBCE3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FBCE5: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FBCE9: mov dword ptr [esi + 0xa8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBCEF: mov dword ptr [eax + 0x13b0], ebx
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0xB0
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBCF5: mov eax, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBCFB: add ecx, 0x258
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBD01: mov word ptr [eax + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x26
        // 0x588FBD05: mov ecx, dword ptr [eax + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x40
        // 0x588FBD08: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588FBD0C: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FBD10: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588FBD12: je 0x588fbd1e
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588FBD14: push eax
        __asm _emit 0x50
        // 0x588FBD15: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x72
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBD1A: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FBD1E: mov ecx, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x30
        // 0x588FBD21: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588FBD23: je 0x588fbd2b
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588FBD25: push eax
        __asm _emit 0x50
        // 0x588FBD26: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBD2B: push 0x3e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBD30: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0x0F
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FBD35: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FBD38: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FBD3C: mov byte ptr [esp + 0x20], 0xb
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0B
        // 0x588FBD41: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FBD43: je 0x588fbd5f
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x588FBD45: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588FBD47: push ebx
        __asm _emit 0x53
        // 0x588FBD48: push ebx
        __asm _emit 0x53
        // 0x588FBD49: lea edx, [edi + 0x74]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x74
        // 0x588FBD4C: push edx
        __asm _emit 0x52
        // 0x588FBD4D: mov edx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x60
        // 0x588FBD50: lea ecx, [ebp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x30
        // 0x588FBD53: push ecx
        __asm _emit 0x51
        // 0x588FBD54: push esi
        __asm _emit 0x56
        // 0x588FBD55: push edx
        __asm _emit 0x52
        // 0x588FBD56: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FBD58: call 0x588bd1c0
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0x14
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x588FBD5D: jmp 0x588fbd61
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FBD5F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FBD61: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FBD65: mov dword ptr [esi + 0xac], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBD6B: mov dword ptr [eax + 0x3e0], ebx
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0xE0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBD71: mov eax, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBD77: add ecx, 0x258
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBD7D: mov word ptr [eax + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x26
        // 0x588FBD81: mov ecx, dword ptr [eax + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x40
        // 0x588FBD84: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588FBD88: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FBD8C: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588FBD8E: je 0x588fbd9a
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588FBD90: push eax
        __asm _emit 0x50
        // 0x588FBD91: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBD96: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FBD9A: mov ecx, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x30
        // 0x588FBD9D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588FBD9F: je 0x588fbda7
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588FBDA1: push eax
        __asm _emit 0x50
        // 0x588FBDA2: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBDA7: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBDAC: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x0E
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FBDB1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FBDB4: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FBDB8: mov byte ptr [esp + 0x20], 0xc
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0C
        // 0x588FBDBD: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FBDBF: je 0x588fbe11
        __asm _emit 0x74
        __asm _emit 0x50
        // 0x588FBDC1: mov ecx, dword ptr [0x58a24734]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FBDC7: cmp dword ptr [ecx + 0x160], 5
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        // 0x588FBDCE: jle 0x588fbde6
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588FBDD0: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBDD6: je 0x588fbde6
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588FBDD8: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBDDE: add edx, 0x140
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBDE4: jmp 0x588fbde8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FBDE6: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588FBDE8: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FBDEC: push ecx
        __asm _emit 0x51
        // 0x588FBDED: lea ecx, [edi + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x4C
        // 0x588FBDF0: push ecx
        __asm _emit 0x51
        // 0x588FBDF1: lea ecx, [ebp + 0x186]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBDF7: push ecx
        __asm _emit 0x51
        // 0x588FBDF8: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FBDFE: push edx
        __asm _emit 0x52
        // 0x588FBDFF: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FBE05: push esi
        __asm _emit 0x56
        // 0x588FBE06: push edx
        __asm _emit 0x52
        // 0x588FBE07: push ecx
        __asm _emit 0x51
        // 0x588FBE08: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FBE0A: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0x1F
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588FBE0F: jmp 0x588fbe13
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FBE11: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FBE13: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBE18: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588FBE1C: mov dword ptr [esi + 0xb0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBE22: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0x0E
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FBE27: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FBE2A: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FBE2E: mov byte ptr [esp + 0x20], 0xd
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0D
        // 0x588FBE33: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FBE35: je 0x588fbe83
        __asm _emit 0x74
        __asm _emit 0x4C
        // 0x588FBE37: mov ecx, dword ptr [0x58a24730]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FBE3D: cmp dword ptr [ecx + 0x160], 5
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        // 0x588FBE44: jle 0x588fbe5a
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588FBE46: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBE4C: je 0x588fbe5a
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588FBE4E: mov ebx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBE54: add ebx, 0x140
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBE5A: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FBE5E: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FBE64: push edx
        __asm _emit 0x52
        // 0x588FBE65: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FBE6B: add edi, 0x10
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x10
        // 0x588FBE6E: push edi
        __asm _emit 0x57
        // 0x588FBE6F: add ebp, 0x1b4
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0xB4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBE75: push ebp
        __asm _emit 0x55
        // 0x588FBE76: push ebx
        __asm _emit 0x53
        // 0x588FBE77: push esi
        __asm _emit 0x56
        // 0x588FBE78: push ecx
        __asm _emit 0x51
        // 0x588FBE79: push edx
        __asm _emit 0x52
        // 0x588FBE7A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FBE7C: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0x1F
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588FBE81: jmp 0x588fbe85
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FBE83: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FBE85: mov dword ptr [esi + 0xb4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBE8B: mov eax, 0xfff0
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBE90: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588FBE94: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588FBE98: mov edx, 0xe5ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBE9D: mov eax, 0x500
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBEA2: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588FBEA5: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x588FBEA8: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588FBEAC: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588FBEAE: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FBEB2: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FBEB9: pop ecx
        __asm _emit 0x59
        // 0x588FBEBA: pop edi
        __asm _emit 0x5F
        // 0x588FBEBB: pop esi
        __asm _emit 0x5E
        // 0x588FBEBC: pop ebp
        __asm _emit 0x5D
        // 0x588FBEBD: pop ebx
        __asm _emit 0x5B
        // 0x588FBEBE: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588FBEC1: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
