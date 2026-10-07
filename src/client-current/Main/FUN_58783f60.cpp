// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 460 bytes in 1 exact ranges.
// Source symbol alias: FUN_58783f60.

// Ghidra body range 0x58783F60..0x5878412C; 460 mapped bytes.
extern "C" __declspec(naked) void FUN_58783f60_segment_00() {
    __asm {
        // 0x58783F60: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58783F62: push 0x589894ab
        __asm _emit 0x68
        __asm _emit 0xAB
        __asm _emit 0x94
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58783F67: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58783F6D: push eax
        __asm _emit 0x50
        // 0x58783F6E: push ecx
        __asm _emit 0x51
        // 0x58783F6F: push ebx
        __asm _emit 0x53
        // 0x58783F70: push ebp
        __asm _emit 0x55
        // 0x58783F71: push esi
        __asm _emit 0x56
        // 0x58783F72: push edi
        __asm _emit 0x57
        // 0x58783F73: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58783F78: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58783F7A: push eax
        __asm _emit 0x50
        // 0x58783F7B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58783F7F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58783F85: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58783F87: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x58783F8A: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58783F8C: mov dword ptr [esi + 0x68], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x68
        // 0x58783F8F: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58783F94: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58783F98: mov eax, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x58783F9B: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x58783FA0: mov eax, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x58783FA3: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x58783FA5: mov dword ptr [eax + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x50
        // 0x58783FA8: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0x8C
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58783FAD: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58783FB0: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58783FB4: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58783FB8: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58783FBA: je 0x58784010
        __asm _emit 0x74
        __asm _emit 0x54
        // 0x58783FBC: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58783FBF: and edx, 0x80000003
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x58783FC5: jns 0x58783fcc
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x58783FC7: dec edx
        __asm _emit 0x4A
        // 0x58783FC8: or edx, 0xfffffffc
        __asm _emit 0x83
        __asm _emit 0xCA
        __asm _emit 0xFC
        // 0x58783FCB: inc edx
        __asm _emit 0x42
        // 0x58783FCC: mov ecx, dword ptr [0x58a246dc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xDC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58783FD2: add edx, 7
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x07
        // 0x58783FD5: cmp dword ptr [ecx + 0x170], edx
        __asm _emit 0x39
        __asm _emit 0x91
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58783FDB: jle 0x58784000
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x58783FDD: cmp edx, edi
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x58783FDF: jl 0x58784000
        __asm _emit 0x7C
        __asm _emit 0x1F
        // 0x58783FE1: cmp dword ptr [ecx + 0x194], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58783FE7: je 0x58784000
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x58783FE9: mov ecx, dword ptr [ecx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58783FEF: mov edx, dword ptr [ecx + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x91
        // 0x58783FF2: push edx
        __asm _emit 0x52
        // 0x58783FF3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58783FF5: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x33
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58783FFA: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58783FFE: jmp 0x58784014
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x58784000: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58784002: push edx
        __asm _emit 0x52
        // 0x58784003: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58784005: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x33
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x5878400A: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5878400E: jmp 0x58784014
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x58784010: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58784014: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58784018: mov dword ptr [esi + 0x5c], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x5C
        // 0x5878401B: mov ecx, dword ptr [0x58a24580]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58784021: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58784026: mov ebx, dword ptr [eax + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x98
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5878402C: mov eax, dword ptr [ecx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x1C
        // 0x5878402F: sub eax, dword ptr [ecx + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x41
        __asm _emit 0x14
        // 0x58784032: mov ebp, dword ptr [ebx + 0x114]
        __asm _emit 0x8B
        __asm _emit 0xAB
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784038: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x5878403A: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784040: cdq
        __asm _emit 0x99
        // 0x58784041: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x58784043: mov edi, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x58784046: mov dword ptr [esp + 0x20], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5878404E: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x58784050: mov eax, dword ptr [ecx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x20
        // 0x58784053: sub eax, dword ptr [ecx + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x41
        __asm _emit 0x18
        // 0x58784056: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5878405A: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x5878405C: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784062: cdq
        __asm _emit 0x99
        // 0x58784063: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x58784065: sub edi, dword ptr [ebx + 0x50]
        __asm _emit 0x2B
        __asm _emit 0x7B
        __asm _emit 0x50
        // 0x58784068: add eax, dword ptr [ebx + 0x54]
        __asm _emit 0x03
        __asm _emit 0x43
        __asm _emit 0x54
        // 0x5878406B: sub eax, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5878406E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58784070: je 0x58784080
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58784072: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58784078: push edx
        __asm _emit 0x52
        // 0x58784079: push eax
        __asm _emit 0x50
        // 0x5878407A: push edi
        __asm _emit 0x57
        // 0x5878407B: call 0x587b7400
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0x33
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58784080: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58784085: mov ebx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x0C
        // 0x58784088: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5878408A: je 0x58784109
        __asm _emit 0x74
        __asm _emit 0x7D
        // 0x5878408C: mov ebp, 6
        __asm _emit 0xBD
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784091: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58784093: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0x26
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x58784098: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x5878409D: jne 0x58784102
        __asm _emit 0x75
        __asm _emit 0x63
        // 0x5878409F: mov eax, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x587840A2: sub eax, dword ptr [esi + 4]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587840A5: cdq
        __asm _emit 0x99
        // 0x587840A6: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587840A8: mov eax, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x587840AB: sub eax, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587840AE: xor ecx, edx
        __asm _emit 0x33
        __asm _emit 0xCA
        // 0x587840B0: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x587840B2: cdq
        __asm _emit 0x99
        // 0x587840B3: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587840B5: xor edi, edx
        __asm _emit 0x33
        __asm _emit 0xFA
        // 0x587840B7: sub edi, edx
        __asm _emit 0x2B
        __asm _emit 0xFA
        // 0x587840B9: imul edi, edi, 0x75
        __asm _emit 0x6B
        __asm _emit 0xFF
        __asm _emit 0x75
        // 0x587840BC: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587840C1: imul edi
        __asm _emit 0xF7
        __asm _emit 0xEF
        // 0x587840C3: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587840C6: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587840C8: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587840CB: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587840CD: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x587840CF: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x587840D2: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587840D4: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x587840D7: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x587840D9: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587840DD: fild dword ptr [esp + 0x14]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587840E1: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0x8B
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x587840E6: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0x8B
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x587840EB: cmp eax, dword ptr [esi + 0x64]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x587840EE: jge 0x58784102
        __asm _emit 0x7D
        __asm _emit 0x12
        // 0x587840F0: cmp word ptr [ebx + 0x164], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xAB
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587840F7: je 0x58784102
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587840F9: push eax
        __asm _emit 0x50
        // 0x587840FA: push ebx
        __asm _emit 0x53
        // 0x587840FB: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587840FD: call 0x58783c80
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58784102: mov ebx, dword ptr [ebx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x5B
        __asm _emit 0x78
        // 0x58784105: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58784107: jne 0x58784091
        __asm _emit 0x75
        __asm _emit 0x88
        // 0x58784109: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5878410F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58784111: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58784113: call 0x587bb160
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0x70
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58784118: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5878411C: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784123: pop ecx
        __asm _emit 0x59
        // 0x58784124: pop edi
        __asm _emit 0x5F
        // 0x58784125: pop esi
        __asm _emit 0x5E
        // 0x58784126: pop ebp
        __asm _emit 0x5D
        // 0x58784127: pop ebx
        __asm _emit 0x5B
        // 0x58784128: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5878412B: ret
        __asm _emit 0xC3
    }
}
