// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1858 bytes in 2 discontiguous ranges.
// Source symbol alias: FUN_588deb30.

// Ghidra body range 0x588DEB30..0x588DEDEE; 702 mapped bytes.
extern "C" __declspec(naked) void FUN_588deb30_segment_00() {
    __asm {
        // 0x588DEB30: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x588DEB33: push ebx
        __asm _emit 0x53
        // 0x588DEB34: push ebp
        __asm _emit 0x55
        // 0x588DEB35: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DEB37: push esi
        __asm _emit 0x56
        // 0x588DEB38: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588DEB3A: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DEB40: cmp dword ptr [ecx + 4], esi
        __asm _emit 0x39
        __asm _emit 0x71
        __asm _emit 0x04
        // 0x588DEB43: push edi
        __asm _emit 0x57
        // 0x588DEB44: sete al
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC0
        // 0x588DEB47: cmp byte ptr [esi + 0x354], 0
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEB4E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588DEB50: mov dword ptr [esi + 0x80], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588DEB5A: mov dword ptr [esi + 0x6090], 0x50000
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588DEB64: mov dword ptr [esi + 0x60b0], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEB6E: mov dword ptr [esi + 0x607c], 0xaaaaaaaa
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588DEB78: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588DEB7C: setne al
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC0
        // 0x588DEB7F: dec al
        __asm _emit 0xFE
        __asm _emit 0xC8
        // 0x588DEB81: and al, 0x12
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x588DEB83: movzx edx, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD0
        // 0x588DEB86: imul edx, edx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xD2
        __asm _emit 0x64
        // 0x588DEB89: mov byte ptr [esi + 0x355], al
        __asm _emit 0x88
        __asm _emit 0x86
        __asm _emit 0x55
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEB8F: mov dword ptr [esi + 0x6060], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x60
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEB95: call 0x588d6570
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x79
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DEB9A: mov eax, dword ptr [esi + 0x60d0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEBA0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DEBA2: je 0x588debb7
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x588DEBA4: cmp dword ptr [eax + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEBAB: jle 0x588debb7
        __asm _emit 0x7E
        __asm _emit 0x0A
        // 0x588DEBAD: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEBB3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DEBB5: jne 0x588debb9
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x588DEBB7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DEBB9: mov ecx, dword ptr [esi + 0x60d8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEBBF: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x588DEBC2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DEBC4: je 0x588debee
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588DEBC6: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588DEBC9: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588DEBCC: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x588DEBCF: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588DEBD2: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588DEBD5: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588DEBD7: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588DEBDA: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588DEBDC: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588DEBDF: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588DEBE2: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588DEBE5: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588DEBE8: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588DEBEB: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588DEBEE: mov ecx, dword ptr [esi + 0x60d8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEBF4: mov edx, dword ptr [esi + 0x605c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x5C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEBFA: mov dword ptr [ecx + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x50
        // 0x588DEBFD: mov eax, dword ptr [esi + 0x60d8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEC03: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEC08: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588DEC0C: mov eax, dword ptr [esi + 0x60d8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEC12: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEC17: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x588DEC1B: mov eax, dword ptr [esi + 0x60d4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEC21: cmp dword ptr [eax + 0x160], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEC27: jle 0x588dec38
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x588DEC29: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEC2F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DEC31: je 0x588dec38
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588DEC33: add eax, 0x40
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x40
        // 0x588DEC36: jmp 0x588dec3a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588DEC38: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DEC3A: mov ecx, dword ptr [esi + 0x1470]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEC40: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x588DEC43: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DEC45: je 0x588dec6f
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588DEC47: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588DEC4A: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588DEC4D: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x588DEC50: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588DEC53: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588DEC56: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588DEC58: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588DEC5B: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588DEC5D: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588DEC60: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588DEC63: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588DEC66: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588DEC69: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588DEC6C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588DEC6F: mov ecx, dword ptr [esi + 0x1470]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEC75: mov edx, dword ptr [esi + 0x605c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x5C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEC7B: mov dword ptr [ecx + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x50
        // 0x588DEC7E: mov eax, dword ptr [esi + 0x1470]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEC84: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEC89: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588DEC8D: mov eax, dword ptr [esi + 0x60d4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEC93: cmp dword ptr [eax + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEC9A: jle 0x588deca6
        __asm _emit 0x7E
        __asm _emit 0x0A
        // 0x588DEC9C: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DECA2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DECA4: jne 0x588deca8
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x588DECA6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DECA8: mov ecx, dword ptr [esi + 0x1474]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DECAE: push eax
        __asm _emit 0x50
        // 0x588DECAF: call 0x5877e3c0
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0xF7
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588DECB4: mov edx, dword ptr [esi + 0x605c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x5C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DECBA: mov ecx, dword ptr [esi + 0x1474]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DECC0: push edx
        __asm _emit 0x52
        // 0x588DECC1: call 0x5877e2e0
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0xF6
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588DECC6: mov eax, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DECCC: test byte ptr [eax + 0xa], 7
        __asm _emit 0xF6
        __asm _emit 0x40
        __asm _emit 0x0A
        __asm _emit 0x07
        // 0x588DECD0: je 0x588ded7d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DECD6: mov edi, ebx
        __asm _emit 0x8B
        __asm _emit 0xFB
        // 0x588DECD8: mov ebp, 0x40
        __asm _emit 0xBD
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DECDD: lea eax, [esi + 0x60dc]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DECE3: mov ecx, dword ptr [esi + 0x60d0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DECE9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588DECEB: je 0x588ded07
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x588DECED: cmp dword ptr [ecx + 0x160], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DECF3: jle 0x588ded07
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x588DECF5: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588DECF7: jl 0x588ded07
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x588DECF9: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DECFF: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588DED01: je 0x588ded07
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x588DED03: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x588DED05: jmp 0x588ded09
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588DED07: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588DED09: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588DED0B: mov dword ptr [edx + 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x54
        // 0x588DED0E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588DED10: je 0x588ded41
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x588DED12: mov ebx, dword ptr [ecx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x59
        __asm _emit 0x18
        // 0x588DED15: mov dword ptr [edx + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x0C
        // 0x588DED18: mov ebx, dword ptr [ecx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x59
        __asm _emit 0x1C
        // 0x588DED1B: mov dword ptr [edx + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x10
        // 0x588DED1E: mov ebx, dword ptr [ecx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x59
        __asm _emit 0x20
        // 0x588DED21: add ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x20
        // 0x588DED24: mov dword ptr [edx + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x14
        // 0x588DED27: mov ebx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x59
        __asm _emit 0x04
        // 0x588DED2A: add edx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x14
        // 0x588DED2D: mov dword ptr [edx + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x04
        // 0x588DED30: mov ebx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x59
        __asm _emit 0x08
        // 0x588DED33: mov dword ptr [edx + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x08
        // 0x588DED36: mov ecx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x0C
        // 0x588DED39: mov dword ptr [edx + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x0C
        // 0x588DED3C: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DED41: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x588DED43: or word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x59
        __asm _emit 0x24
        // 0x588DED47: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588DED49: mov ecx, dword ptr [esi + 0x605c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x5C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DED4F: mov dword ptr [edx + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x50
        // 0x588DED52: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x588DED54: mov edx, 0xfffb
        __asm _emit 0xBA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DED59: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588DED5D: mov ecx, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DED63: movzx edx, word ptr [ecx + 0xa]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x51
        __asm _emit 0x0A
        // 0x588DED67: add edi, ebx
        __asm _emit 0x03
        __asm _emit 0xFB
        // 0x588DED69: and edx, 7
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x07
        // 0x588DED6C: lea ecx, [edi - 1]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0xFF
        // 0x588DED6F: add ebp, 0x40
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x40
        // 0x588DED72: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x588DED75: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x588DED77: jne 0x588dece3
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DED7D: push ebx
        __asm _emit 0x53
        // 0x588DED7E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588DED80: call 0x588d9c40
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0xAE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DED85: movzx edx, byte ptr [esi + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x96
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DED8C: movzx eax, word ptr [esi + 0x352]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x52
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DED93: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DED99: shl edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x0A
        // 0x588DED9C: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588DED9E: mov edx, dword ptr [ecx + eax*8 + 0x45c]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xC1
        __asm _emit 0x5C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEDA5: mov eax, dword ptr [ecx + eax*8 + 0x458]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xC1
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEDAC: push edx
        __asm _emit 0x52
        // 0x588DEDAD: push eax
        __asm _emit 0x50
        // 0x588DEDAE: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588DEDB0: call 0x588dce90
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0xE0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DEDB5: mov ecx, dword ptr [esi + 0x6028]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEDBB: mov edx, dword ptr [esi + 0x6060]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x60
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEDC1: mov dword ptr [ecx + 0xac], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEDC7: mov eax, dword ptr [esi + 0xd98]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEDCD: mov dword ptr [esi + 0x398], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEDD3: mov eax, 0x900
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEDD8: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588DEDDA: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x588DEDDC: lea ebp, [esi + 0x34c]
        __asm _emit 0x8D
        __asm _emit 0xAE
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEDE2: lea edi, [esi + 0x240]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEDE8: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588DEDEC: jmp 0x588dedf4
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x588DEDF0..0x588DF274; 1156 mapped bytes.
extern "C" __declspec(naked) void FUN_588deb30_segment_01() {
    __asm {
        // 0x588DEDF0: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588DEDF4: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x588DEDF6: mov ecx, dword ptr [eax + ebp]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x28
        // 0x588DEDF9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588DEDFB: je 0x588dee32
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x588DEDFD: movzx ecx, byte ptr [ecx]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x09
        // 0x588DEE00: cmp cx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x05
        // 0x588DEE04: jne 0x588dee32
        __asm _emit 0x75
        __asm _emit 0x2C
        // 0x588DEE06: movzx ecx, word ptr [edi + 0xbce]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8F
        __asm _emit 0xCE
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEE0D: movzx edx, word ptr [edi + 0xbcc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x97
        __asm _emit 0xCC
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEE14: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEE1A: push ecx
        __asm _emit 0x51
        // 0x588DEE1B: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588DEE1D: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEE23: push edx
        __asm _emit 0x52
        // 0x588DEE24: call 0x587b21f0
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0x33
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x588DEE29: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588DEE2B: call 0x587b1850
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0x2A
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x588DEE30: jmp 0x588dee84
        __asm _emit 0xEB
        __asm _emit 0x52
        // 0x588DEE32: mov ecx, dword ptr [eax + ebp]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x28
        // 0x588DEE35: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588DEE37: je 0x588dee67
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x588DEE39: movzx ecx, byte ptr [ecx]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x09
        // 0x588DEE3C: cmp cx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x06
        // 0x588DEE40: jne 0x588dee67
        __asm _emit 0x75
        __asm _emit 0x25
        // 0x588DEE42: movzx eax, word ptr [edi + 0xbcc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x87
        __asm _emit 0xCC
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEE49: mov ecx, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEE4F: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEE54: push eax
        __asm _emit 0x50
        // 0x588DEE55: call 0x587b4910
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0x5A
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x588DEE5A: mov ecx, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEE60: call 0x587b1850
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0x29
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x588DEE65: jmp 0x588dee84
        __asm _emit 0xEB
        __asm _emit 0x1D
        // 0x588DEE67: mov eax, dword ptr [eax + ebp]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x28
        // 0x588DEE6A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DEE6C: je 0x588dee84
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588DEE6E: movzx eax, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x00
        // 0x588DEE71: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0D
        // 0x588DEE75: jne 0x588dee84
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x588DEE77: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588DEE7B: push ecx
        __asm _emit 0x51
        // 0x588DEE7C: push ebx
        __asm _emit 0x53
        // 0x588DEE7D: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588DEE7F: call 0x588e7480
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEE84: inc ebx
        __asm _emit 0x43
        // 0x588DEE85: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588DEE88: cmp ebx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x20
        // 0x588DEE8B: jne 0x588dedf0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x5F
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DEE91: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588DEE93: call 0x588e6540
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEE98: mov edi, dword ptr [esi + 0xd98]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEE9E: mov eax, dword ptr [esi + 0x398]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEEA4: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588DEEA6: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588DEEAB: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588DEEB1: mov dword ptr [esi + 0x1434], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEEB7: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x588DEEB9: ja 0x588deebd
        __asm _emit 0x77
        __asm _emit 0x02
        // 0x588DEEBB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588DEEBD: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588DEEBF: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588DEEC4: mov dword ptr [esi + 0x143c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEECA: mov dword ptr [esi + 0x1438], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEED0: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588DEED5: imul eax, eax, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x588DEED8: xor edi, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF7
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588DEEDE: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588DEEE0: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588DEEE2: mov dword ptr [esi + 0x1434], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x34
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEEE8: mov dword ptr [esi + 0xdd4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEEEE: jge 0x588def0e
        __asm _emit 0x7D
        __asm _emit 0x1E
        // 0x588DEEF0: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588DEEF2: je 0x588def04
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x588DEEF4: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588DEEF6: imul eax, eax, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x588DEEF9: cdq
        __asm _emit 0x99
        // 0x588DEEFA: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x588DEEFC: mov dword ptr [esi + 0x1444], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEF02: jmp 0x588def13
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x588DEF04: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DEF06: mov dword ptr [esi + 0x1444], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEF0C: jmp 0x588def13
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x588DEF0E: mov eax, 0x64
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEF13: mov edx, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEF19: push ebx
        __asm _emit 0x53
        // 0x588DEF1A: push ebx
        __asm _emit 0x53
        // 0x588DEF1B: mov dword ptr [esi + 0x1444], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEF21: movzx eax, word ptr [edx + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588DEF25: push edi
        __asm _emit 0x57
        // 0x588DEF26: push ecx
        __asm _emit 0x51
        // 0x588DEF27: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x588DEF2A: push eax
        __asm _emit 0x50
        // 0x588DEF2B: lea ecx, [esi + 0x3a0]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEF31: push ecx
        __asm _emit 0x51
        // 0x588DEF32: mov ecx, dword ptr [esi + 0x1448]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x48
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEF38: call 0x5884d420
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0xE4
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x588DEF3D: mov eax, dword ptr [esi + 0x1448]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEF43: mov ebp, 0xf
        __asm _emit 0xBD
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEF48: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588DEF4C: mov eax, dword ptr [esi + 0x1448]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEF52: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEF57: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588DEF5B: mov eax, dword ptr [esi + 0x1434]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEF61: mov ecx, dword ptr [esi + 0x1448]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x48
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEF67: push eax
        __asm _emit 0x50
        // 0x588DEF68: call 0x5884d630
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0xE6
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x588DEF6D: mov ecx, dword ptr [esi + 0x6020]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEF73: lea edi, [esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x588DEF76: push edi
        __asm _emit 0x57
        // 0x588DEF77: push edi
        __asm _emit 0x57
        // 0x588DEF78: call 0x587561f0
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x72
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588DEF7D: mov eax, dword ptr [esi + 0x6020]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEF83: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588DEF87: mov ecx, dword ptr [esi + 0x6020]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEF8D: push ebx
        __asm _emit 0x53
        // 0x588DEF8E: call 0x587565f0
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0x76
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588DEF93: mov ecx, dword ptr [esi + 0x6024]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEF99: push edi
        __asm _emit 0x57
        // 0x588DEF9A: push edi
        __asm _emit 0x57
        // 0x588DEF9B: call 0x587561f0
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x72
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588DEFA0: mov eax, dword ptr [esi + 0x6024]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEFA6: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588DEFAA: mov ecx, dword ptr [esi + 0x6024]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEFB0: push ebx
        __asm _emit 0x53
        // 0x588DEFB1: call 0x587565f0
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0x76
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588DEFB6: cmp dword ptr [esp + 0x10], ebx
        __asm _emit 0x39
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588DEFBA: je 0x588df1a1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEFC0: mov ecx, dword ptr [esi + 0x6020]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEFC6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588DEFC8: call 0x587565f0
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0x76
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588DEFCD: mov ecx, dword ptr [esi + 0x6020]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEFD3: push ebx
        __asm _emit 0x53
        // 0x588DEFD4: call 0x58756670
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0x76
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588DEFD9: mov ecx, dword ptr [esi + 0x6024]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEFDF: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588DEFE1: call 0x587565f0
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0x76
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588DEFE6: mov ecx, dword ptr [esi + 0x6024]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DEFEC: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x588DEFEE: call 0x58756670
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0x76
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588DEFF3: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DEFF9: mov ecx, dword ptr [ecx + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DEFFF: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588DF001: call 0x587a6dc0
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0x7D
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588DF006: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DF00C: mov ecx, dword ptr [edx + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DF012: push ebx
        __asm _emit 0x53
        // 0x588DF013: call 0x587a71a0
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588DF018: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DF01D: mov ecx, dword ptr [eax + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DF023: push ebx
        __asm _emit 0x53
        // 0x588DF024: call 0x587a6e90
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x7E
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588DF029: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DF02F: mov ecx, dword ptr [ecx + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DF035: call 0x587a74c0
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588DF03A: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DF040: mov ebp, dword ptr [edx + 0x21f04]
        __asm _emit 0x8B
        __asm _emit 0xAA
        __asm _emit 0x04
        __asm _emit 0x1F
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DF046: push 0x589a10c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x10
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588DF04B: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588DF051: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588DF054: push eax
        __asm _emit 0x50
        // 0x588DF055: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588DF057: call 0x587cc990
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0xD9
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588DF05C: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x588DF05F: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588DF061: push eax
        __asm _emit 0x50
        // 0x588DF062: push ecx
        __asm _emit 0x51
        // 0x588DF063: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DF069: call 0x587e5c30
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0x6B
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588DF06E: mov edi, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DF074: mov ecx, dword ptr [edi + 0x10b94]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x94
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588DF07A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588DF07C: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x588DF07F: push ebx
        __asm _emit 0x53
        // 0x588DF080: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588DF082: mov ecx, dword ptr [edi + 0x10b98]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x98
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588DF088: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588DF08A: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x588DF08D: push ebx
        __asm _emit 0x53
        // 0x588DF08E: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588DF090: mov ecx, dword ptr [edi + 0x10b9c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x9C
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588DF096: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588DF098: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x588DF09B: push ebx
        __asm _emit 0x53
        // 0x588DF09C: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588DF09E: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DF0A4: push ebx
        __asm _emit 0x53
        // 0x588DF0A5: call 0x58854300
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x52
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x588DF0AA: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588DF0AC: call 0x588da350
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0xB2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DF0B1: mov ecx, dword ptr [esi + 0x398]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF0B7: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DF0BD: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588DF0C3: push ecx
        __asm _emit 0x51
        // 0x588DF0C4: mov ecx, dword ptr [edx + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF0CA: call 0x588958c0
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0x67
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x588DF0CF: mov eax, dword ptr [esi + 0x1438]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF0D5: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DF0DB: mov ecx, dword ptr [ecx + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF0E1: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588DF0E6: push eax
        __asm _emit 0x50
        // 0x588DF0E7: push ebx
        __asm _emit 0x53
        // 0x588DF0E8: call 0x58895860
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x67
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x588DF0ED: mov edx, dword ptr [esi + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF0F3: mov ecx, dword ptr [edx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x50
        // 0x588DF0F6: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588DF0FC: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588DF101: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588DF103: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588DF106: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DF10C: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588DF10E: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588DF111: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588DF113: push eax
        __asm _emit 0x50
        // 0x588DF114: call 0x58853b60
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0x4A
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x588DF119: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DF11F: mov ecx, dword ptr [ecx + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DF125: call 0x587a6fb0
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0x7E
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588DF12A: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DF130: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588DF133: mov ecx, dword ptr [eax + 0xdac]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xAC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF139: mov edx, dword ptr [eax + 0xd98]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x98
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF13F: mov eax, dword ptr [eax + 0x398]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF145: push ecx
        __asm _emit 0x51
        // 0x588DF146: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DF14C: mov ecx, dword ptr [ecx + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF152: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588DF158: push edx
        __asm _emit 0x52
        // 0x588DF159: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588DF15E: push eax
        __asm _emit 0x50
        // 0x588DF15F: call 0x588955a0
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0x64
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x588DF164: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DF16A: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588DF16D: mov ecx, dword ptr [eax + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF173: mov dl, byte ptr [ecx + 4]
        __asm _emit 0x8A
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588DF176: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x588DF179: cmp dl, 9
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x09
        // 0x588DF17C: jne 0x588df1b8
        __asm _emit 0x75
        __asm _emit 0x3A
        // 0x588DF17E: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DF183: mov ecx, dword ptr [eax + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF189: call 0x5885fc40
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0x0A
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x588DF18E: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DF194: mov ecx, dword ptr [ecx + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF19A: call 0x588628d0
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0x37
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x588DF19F: jmp 0x588df1d9
        __asm _emit 0xEB
        __asm _emit 0x38
        // 0x588DF1A1: cmp dword ptr [esi + 0x1258], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x58
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF1A7: je 0x588df1d9
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x588DF1A9: mov ecx, dword ptr [esi + 0x6020]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF1AF: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588DF1B1: call 0x58756670
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0x74
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588DF1B6: jmp 0x588df1d9
        __asm _emit 0xEB
        __asm _emit 0x21
        // 0x588DF1B8: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DF1BE: mov ecx, dword ptr [edx + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF1C4: call 0x5885a340
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0xB1
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x588DF1C9: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DF1CE: mov ecx, dword ptr [eax + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF1D4: call 0x58859dd0
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0xAB
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x588DF1D9: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DF1DF: push esi
        __asm _emit 0x56
        // 0x588DF1E0: call 0x587ec270
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0xD0
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588DF1E5: mov ecx, dword ptr [esi + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF1EB: mov dword ptr [ecx + 0x50], 0xaaaaaaaa
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588DF1F2: mov edx, dword ptr [esi + 0x6028]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x28
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF1F8: mov dword ptr [edx + 0x9c], ebx
        __asm _emit 0x89
        __asm _emit 0x9A
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF1FE: mov eax, dword ptr [esi + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF204: mov dword ptr [eax + 0x34], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x34
        // 0x588DF207: cmp dword ptr [esp + 0x1c], ebx
        __asm _emit 0x39
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588DF20B: je 0x588df224
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x588DF20D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588DF20F: call 0x588de5c0
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DF214: pop edi
        __asm _emit 0x5F
        // 0x588DF215: mov dword ptr [esi + 0x63b0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB0
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF21B: pop esi
        __asm _emit 0x5E
        // 0x588DF21C: pop ebp
        __asm _emit 0x5D
        // 0x588DF21D: pop ebx
        __asm _emit 0x5B
        // 0x588DF21E: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588DF221: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588DF224: lea ebp, [esi + 0x138c]
        __asm _emit 0x8D
        __asm _emit 0xAE
        __asm _emit 0x8C
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF22A: mov dword ptr [esp + 0x1c], 8
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF232: mov edi, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x04
        // 0x588DF235: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588DF237: je 0x588df251
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x588DF239: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF240: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588DF242: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588DF244: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x588DF246: mov edi, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x588DF249: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588DF24B: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588DF24D: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588DF24F: jne 0x588df240
        __asm _emit 0x75
        __asm _emit 0xEF
        // 0x588DF251: mov dword ptr [ebp + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0x08
        // 0x588DF254: mov dword ptr [ebp + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0x04
        // 0x588DF257: mov dword ptr [ebp + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0x0C
        // 0x588DF25A: add ebp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x10
        // 0x588DF25D: sub dword ptr [esp + 0x1c], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        // 0x588DF262: jne 0x588df232
        __asm _emit 0x75
        __asm _emit 0xCE
        // 0x588DF264: pop edi
        __asm _emit 0x5F
        // 0x588DF265: mov dword ptr [esi + 0x63b0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB0
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF26B: pop esi
        __asm _emit 0x5E
        // 0x588DF26C: pop ebp
        __asm _emit 0x5D
        // 0x588DF26D: pop ebx
        __asm _emit 0x5B
        // 0x588DF26E: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588DF271: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
