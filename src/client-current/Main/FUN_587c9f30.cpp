// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 635 bytes in 1 exact ranges.
// Source symbol alias: FUN_587c9f30.

// Ghidra body range 0x587C9F30..0x587CA1AB; 635 mapped bytes.
extern "C" __declspec(naked) void FUN_587c9f30_segment_00() {
    __asm {
        // 0x587C9F30: push ebx
        __asm _emit 0x53
        // 0x587C9F31: mov bl, byte ptr [esp + 8]
        __asm _emit 0x8A
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587C9F35: push esi
        __asm _emit 0x56
        // 0x587C9F36: push edi
        __asm _emit 0x57
        // 0x587C9F37: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587C9F39: cmp bl, 1
        __asm _emit 0x80
        __asm _emit 0xFB
        __asm _emit 0x01
        // 0x587C9F3C: je 0x587c9f5c
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x587C9F3E: cmp bl, 2
        __asm _emit 0x80
        __asm _emit 0xFB
        __asm _emit 0x02
        // 0x587C9F41: je 0x587c9f5c
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x587C9F43: cmp bl, 3
        __asm _emit 0x80
        __asm _emit 0xFB
        __asm _emit 0x03
        // 0x587C9F46: je 0x587c9f5c
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x587C9F48: push 0x24
        __asm _emit 0x6A
        __asm _emit 0x24
        // 0x587C9F4A: push 0x5899b1dc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0xB1
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587C9F4F: push 0x5899b0d8
        __asm _emit 0x68
        __asm _emit 0xD8
        __asm _emit 0xB0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587C9F54: call 0x5897cece
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0x2F
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587C9F59: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587C9F5C: movzx eax, bl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC3
        // 0x587C9F5F: mov byte ptr [esi + 0x74], bl
        __asm _emit 0x88
        __asm _emit 0x5E
        __asm _emit 0x74
        // 0x587C9F62: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9F67: sub eax, ebx
        __asm _emit 0x2B
        __asm _emit 0xC3
        // 0x587C9F69: je 0x587ca15a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xEB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9F6F: sub eax, ebx
        __asm _emit 0x2B
        __asm _emit 0xC3
        // 0x587C9F71: je 0x587ca04b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9F77: sub eax, ebx
        __asm _emit 0x2B
        __asm _emit 0xC3
        // 0x587C9F79: jne 0x587ca1a5
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9F7F: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587C9F83: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587C9F85: jne 0x587c9f9b
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x587C9F87: push 0x6c
        __asm _emit 0x6A
        __asm _emit 0x6C
        // 0x587C9F89: push 0x5899b1dc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0xB1
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587C9F8E: push 0x5899b080
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0xB0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587C9F93: call 0x5897cece
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x2F
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587C9F98: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587C9F9B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587C9F9D: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x8C
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587C9FA2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587C9FA4: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0x8C
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587C9FA9: push esi
        __asm _emit 0x56
        // 0x587C9FAA: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587C9FAC: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x8F
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587C9FB1: push esi
        __asm _emit 0x56
        // 0x587C9FB2: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587C9FB4: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0x8F
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587C9FB9: mov eax, dword ptr [0x58a24638]
        __asm _emit 0xA1
        __asm _emit 0x38
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C9FBE: cmp dword ptr [eax + 0x160], 0xf
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        // 0x587C9FC5: jle 0x587c9fdd
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x587C9FC7: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9FCE: je 0x587c9fdd
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587C9FD0: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9FD6: add eax, 0x3c0
        __asm _emit 0x05
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9FDB: jmp 0x587c9fdf
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C9FDD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587C9FDF: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x587C9FE2: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x587C9FE5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587C9FE7: je 0x587ca011
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587C9FE9: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x587C9FEC: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587C9FEF: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x587C9FF2: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x587C9FF5: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587C9FF8: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587C9FFA: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587C9FFD: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587C9FFF: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587CA002: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587CA005: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587CA008: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587CA00B: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587CA00E: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587CA011: or word ptr [esi + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x5E
        __asm _emit 0x24
        // 0x587CA015: mov dword ptr [edi + 0x6648], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0x48
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA01B: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CA021: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587CA024: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587CA026: je 0x587ca1a5
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA02C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587CA030: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587CA032: je 0x587ca03e
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587CA034: mov dword ptr [eax + 0x6648], 0
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x48
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA03E: mov eax, dword ptr [eax + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x78
        // 0x587CA041: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587CA043: jne 0x587ca030
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x587CA045: pop edi
        __asm _emit 0x5F
        // 0x587CA046: pop esi
        __asm _emit 0x5E
        // 0x587CA047: pop ebx
        __asm _emit 0x5B
        // 0x587CA048: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587CA04B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CA04D: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0x8B
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CA052: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CA054: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x8C
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CA059: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CA05F: mov edi, dword ptr [edx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0xBA
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CA065: push esi
        __asm _emit 0x56
        // 0x587CA066: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587CA068: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x8E
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CA06D: push esi
        __asm _emit 0x56
        // 0x587CA06E: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587CA070: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0x8E
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CA075: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0x2B
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587CA07A: and eax, 0x80000001
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x587CA07F: jns 0x587ca086
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x587CA081: dec eax
        __asm _emit 0x48
        // 0x587CA082: or eax, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFE
        // 0x587CA085: inc eax
        __asm _emit 0x40
        // 0x587CA086: mov ecx, dword ptr [0x58a24638]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x38
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CA08C: add eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x0A
        // 0x587CA08F: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA095: jle 0x587ca0af
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x587CA097: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587CA099: jl 0x587ca0af
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x587CA09B: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA0A2: je 0x587ca0af
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587CA0A4: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x587CA0A7: add eax, dword ptr [ecx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA0AD: jmp 0x587ca0b1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CA0AF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587CA0B1: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x587CA0B4: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x587CA0B7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587CA0B9: je 0x587ca0e3
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587CA0BB: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x587CA0BE: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587CA0C1: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x587CA0C4: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x587CA0C7: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587CA0CA: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587CA0CC: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587CA0CF: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587CA0D1: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587CA0D4: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587CA0D7: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587CA0DA: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587CA0DD: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587CA0E0: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587CA0E3: or word ptr [esi + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x5E
        __asm _emit 0x24
        // 0x587CA0E7: cmp byte ptr [esi + 0x75], bl
        __asm _emit 0x38
        __asm _emit 0x5E
        __asm _emit 0x75
        // 0x587CA0EA: jne 0x587ca1a5
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA0F0: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CA0F6: mov eax, dword ptr [ecx + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CA0FC: add eax, dword ptr [ecx + 0x10488]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CA102: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587CA104: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CA10A: mov ecx, dword ptr [0x58a2491c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CA110: mov edx, dword ptr [ecx + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x91
        // 0x587CA113: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587CA115: and eax, 0xff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA11A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587CA11C: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587CA11E: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587CA120: and eax, 3
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x03
        // 0x587CA123: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587CA126: ja 0x587ca137
        __asm _emit 0x77
        __asm _emit 0x0F
        // 0x587CA128: jmp dword ptr [eax*4 + 0x587ca1ac]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xAC
        __asm _emit 0xA1
        __asm _emit 0x7C
        __asm _emit 0x58
        // 0x587CA12F: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x587CA131: jmp 0x587ca137
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587CA133: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x587CA135: neg edi
        __asm _emit 0xF7
        __asm _emit 0xDF
        // 0x587CA137: mov edx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x7C
        // 0x587CA13A: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x587CA13C: push edx
        __asm _emit 0x52
        // 0x587CA13D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CA13F: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x91
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CA144: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA14A: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x587CA14C: push eax
        __asm _emit 0x50
        // 0x587CA14D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CA14F: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x92
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CA154: pop edi
        __asm _emit 0x5F
        // 0x587CA155: pop esi
        __asm _emit 0x5E
        // 0x587CA156: pop ebx
        __asm _emit 0x5B
        // 0x587CA157: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587CA15A: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CA160: mov edx, dword ptr [ecx + 0x104f4]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xF4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CA166: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CA168: mov dword ptr [esi + 0x78], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x78
        // 0x587CA16B: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0x8A
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CA170: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CA172: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0x8A
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CA177: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CA17C: mov edi, dword ptr [eax + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CA182: push esi
        __asm _emit 0x56
        // 0x587CA183: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587CA185: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x8D
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CA18A: push esi
        __asm _emit 0x56
        // 0x587CA18B: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587CA18D: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0x8D
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CA192: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x587CA195: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA19A: mov dword ptr [ecx + 0x54], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA1A1: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x587CA1A5: pop edi
        __asm _emit 0x5F
        // 0x587CA1A6: pop esi
        __asm _emit 0x5E
        // 0x587CA1A7: pop ebx
        __asm _emit 0x5B
        // 0x587CA1A8: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
