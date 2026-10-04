// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5884AB90 .. +0x6C8 bytes.
// Source symbol alias: FUN_5884ab90.
extern "C" __declspec(naked) void FUN_5884ab90() {
    __asm {
        // 0x5884AB90: push esi
        __asm _emit 0x56
        // 0x5884AB91: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5884AB93: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5884AB97: push edi
        __asm _emit 0x57
        // 0x5884AB98: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x5884AB9A: je 0x5884ad3e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884ABA0: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x5884ABA3: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5884ABA7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884ABA9: je 0x5884abcf
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x5884ABAB: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x34
        // 0x5884ABAE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884ABB0: je 0x5884abc8
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x5884ABB2: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5884ABB4: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884ABB6: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x5884ABB9: push edi
        __asm _emit 0x57
        // 0x5884ABBA: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5884ABBC: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x5884ABBF: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x5884ABC2: je 0x5884abcf
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5884ABC4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884ABC6: jne 0x5884abb2
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x5884ABC8: pop edi
        __asm _emit 0x5F
        // 0x5884ABC9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884ABCB: pop esi
        __asm _emit 0x5E
        // 0x5884ABCC: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5884ABCF: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x5884ABD2: cmp eax, 0x203
        __asm _emit 0x3D
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884ABD7: ja 0x5884b100
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884ABDD: je 0x5884afd1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xEE
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884ABE3: cmp eax, 0x100
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884ABE8: je 0x5884ac19
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x5884ABEA: cmp eax, 0x201
        __asm _emit 0x3D
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884ABEF: jne 0x5884ad3e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884ABF5: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884ABFB: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AC01: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x5884AC04: push edx
        __asm _emit 0x52
        // 0x5884AC05: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x69
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x5884AC0A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884AC0C: je 0x5884ad3e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AC12: pop edi
        __asm _emit 0x5F
        // 0x5884AC13: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884AC15: pop esi
        __asm _emit 0x5E
        // 0x5884AC16: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5884AC19: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884AC1E: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AC24: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x5884AC27: push eax
        __asm _emit 0x50
        // 0x5884AC28: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0x69
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x5884AC2D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884AC2F: je 0x5884ad3e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AC35: mov edi, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x5884AC38: lea eax, [edi - 0x21]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0xDF
        // 0x5884AC3B: cmp eax, 7
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x07
        // 0x5884AC3E: ja 0x5884ad3e
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AC44: jmp dword ptr [eax*4 + 0x5884b258]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0xB2
        __asm _emit 0x84
        __asm _emit 0x58
        // 0x5884AC4B: movzx eax, word ptr [esi + 0xf6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xF6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AC52: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884AC55: jne 0x5884aca1
        __asm _emit 0x75
        __asm _emit 0x4A
        // 0x5884AC57: mov eax, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AC5D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884AC5F: je 0x5884ad3e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AC65: cmp dword ptr [eax + 0x50], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x5884AC69: je 0x5884ad3e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AC6F: movzx ecx, word ptr [esi + 0xfa]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AC76: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884AC79: jle 0x5884ad3e
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AC7F: dec ecx
        __asm _emit 0x49
        // 0x5884AC80: mov word ptr [esi + 0xfa], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AC87: mov ecx, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x5884AC8A: mov dword ptr [esi + 0x100], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AC90: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884AC92: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5884AC94: call 0x588486e0
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0xDA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884AC99: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5884AC9C: pop edi
        __asm _emit 0x5F
        // 0x5884AC9D: pop esi
        __asm _emit 0x5E
        // 0x5884AC9E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5884ACA1: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5884ACA5: jne 0x5884ad3e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884ACAB: cmp dword ptr [esi + 0x100], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884ACB2: je 0x5884ad3e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884ACB8: mov ecx, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884ACBE: cmp dword ptr [ecx + 0x50], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x5884ACC2: je 0x5884ad3e
        __asm _emit 0x74
        __asm _emit 0x7A
        // 0x5884ACC4: movzx eax, word ptr [esi + 0xf8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884ACCB: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884ACCE: jle 0x5884ad3e
        __asm _emit 0x7E
        __asm _emit 0x6E
        // 0x5884ACD0: dec eax
        __asm _emit 0x48
        // 0x5884ACD1: mov word ptr [esi + 0xf8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884ACD8: mov edx, dword ptr [ecx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x50
        // 0x5884ACDB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884ACDD: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5884ACDF: mov dword ptr [esi + 0xfc], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884ACE5: call 0x588486e0
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0xD9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884ACEA: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5884ACED: pop edi
        __asm _emit 0x5F
        // 0x5884ACEE: pop esi
        __asm _emit 0x5E
        // 0x5884ACEF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5884ACF2: cmp word ptr [esi + 0xf6], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xF6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884ACFA: jne 0x5884ad3e
        __asm _emit 0x75
        __asm _emit 0x42
        // 0x5884ACFC: mov eax, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AD02: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884AD04: je 0x5884ad3e
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x5884AD06: cmp dword ptr [eax + 0x54], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x54
        __asm _emit 0x00
        // 0x5884AD0A: je 0x5884ad3e
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x5884AD0C: movzx ecx, word ptr [esi + 0xfa]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AD13: movsx edx, word ptr [esi + 0xf2]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x96
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AD1A: movsx edi, cx
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0xF9
        // 0x5884AD1D: sub edx, 5
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x5884AD20: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x5884AD22: jge 0x5884ad3e
        __asm _emit 0x7D
        __asm _emit 0x1A
        // 0x5884AD24: inc ecx
        __asm _emit 0x41
        // 0x5884AD25: mov word ptr [esi + 0xfa], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AD2C: mov eax, dword ptr [eax + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x54
        // 0x5884AD2F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884AD31: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5884AD33: mov dword ptr [esi + 0x100], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AD39: call 0x588486e0
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0xD9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884AD3E: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5884AD41: pop edi
        __asm _emit 0x5F
        // 0x5884AD42: pop esi
        __asm _emit 0x5E
        // 0x5884AD43: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5884AD46: cmp word ptr [esi + 0xf6], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xF6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AD4E: jne 0x5884ad3e
        __asm _emit 0x75
        __asm _emit 0xEE
        // 0x5884AD50: cmp dword ptr [esi + 0x100], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AD57: je 0x5884ad3e
        __asm _emit 0x74
        __asm _emit 0xE5
        // 0x5884AD59: movsx ecx, word ptr [esi + 0xfa]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x8E
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AD60: sub ecx, 5
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x05
        // 0x5884AD63: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884AD65: jle 0x5884af4c
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xE1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AD6B: mov eax, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AD71: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFF
        // 0x5884AD74: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884AD76: je 0x5884ad88
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x5884AD78: mov edx, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x5884AD7B: add word ptr [esi + 0xfa], cx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x8E
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AD82: mov dword ptr [esi + 0x100], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AD88: mov eax, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AD8E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884AD90: je 0x5884ada2
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x5884AD92: mov eax, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x50
        // 0x5884AD95: add word ptr [esi + 0xfa], cx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x8E
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AD9C: mov dword ptr [esi + 0x100], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884ADA2: mov eax, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884ADA8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884ADAA: je 0x5884adbc
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x5884ADAC: mov edx, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x5884ADAF: add word ptr [esi + 0xfa], cx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x8E
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884ADB6: mov dword ptr [esi + 0x100], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884ADBC: mov eax, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884ADC2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884ADC4: je 0x5884add6
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x5884ADC6: mov eax, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x50
        // 0x5884ADC9: add word ptr [esi + 0xfa], cx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x8E
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884ADD0: mov dword ptr [esi + 0x100], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884ADD6: mov eax, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884ADDC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884ADDE: je 0x5884adf0
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x5884ADE0: mov edx, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x5884ADE3: add word ptr [esi + 0xfa], cx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x8E
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884ADEA: mov dword ptr [esi + 0x100], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884ADF0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884ADF2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5884ADF4: call 0x588486e0
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0xD8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884ADF9: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5884ADFC: pop edi
        __asm _emit 0x5F
        // 0x5884ADFD: pop esi
        __asm _emit 0x5E
        // 0x5884ADFE: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5884AE01: cmp word ptr [esi + 0xf6], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xF6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AE09: jne 0x5884ad3e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x2F
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884AE0F: cmp dword ptr [esi + 0x100], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AE16: je 0x5884ad3e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884AE1C: movzx eax, word ptr [esi + 0xf2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AE23: movsx ecx, word ptr [esi + 0xfa]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x8E
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AE2A: movsx edx, ax
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0xD0
        // 0x5884AE2D: sub edx, 5
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x5884AE30: add ecx, 5
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x05
        // 0x5884AE33: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x5884AE35: jge 0x5884aece
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AE3B: mov eax, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AE41: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884AE43: je 0x5884ae55
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x5884AE45: mov edx, dword ptr [eax + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x54
        // 0x5884AE48: inc word ptr [esi + 0xfa]
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AE4F: mov dword ptr [esi + 0x100], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AE55: mov eax, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AE5B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884AE5D: je 0x5884ae6f
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x5884AE5F: mov eax, dword ptr [eax + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x54
        // 0x5884AE62: inc word ptr [esi + 0xfa]
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AE69: mov dword ptr [esi + 0x100], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AE6F: mov eax, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AE75: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884AE77: je 0x5884ae89
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x5884AE79: mov ecx, dword ptr [eax + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x54
        // 0x5884AE7C: inc word ptr [esi + 0xfa]
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AE83: mov dword ptr [esi + 0x100], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AE89: mov eax, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AE8F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884AE91: je 0x5884aea3
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x5884AE93: mov edx, dword ptr [eax + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x54
        // 0x5884AE96: inc word ptr [esi + 0xfa]
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AE9D: mov dword ptr [esi + 0x100], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AEA3: mov eax, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AEA9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884AEAB: je 0x5884aebd
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x5884AEAD: mov eax, dword ptr [eax + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x54
        // 0x5884AEB0: inc word ptr [esi + 0xfa]
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AEB7: mov dword ptr [esi + 0x100], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AEBD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884AEBF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5884AEC1: call 0x588486e0
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0xD8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884AEC6: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5884AEC9: pop edi
        __asm _emit 0x5F
        // 0x5884AECA: pop esi
        __asm _emit 0x5E
        // 0x5884AECB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5884AECE: add eax, -5
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xFB
        // 0x5884AED1: mov word ptr [esi + 0xfa], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AED8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884AEDA: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884AEDD: jge 0x5884af00
        __asm _emit 0x7D
        __asm _emit 0x21
        // 0x5884AEDF: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x5884AEE2: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5884AEE4: mov word ptr [esi + 0xfa], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AEEB: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5884AEED: mov dword ptr [esi + 0x100], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AEF3: call 0x588486e0
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884AEF8: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5884AEFB: pop edi
        __asm _emit 0x5F
        // 0x5884AEFC: pop esi
        __asm _emit 0x5E
        // 0x5884AEFD: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5884AF00: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x5884AF03: mov dword ptr [esi + 0x100], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AF09: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884AF0B: mov eax, dword ptr [ecx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5884AF0E: mov dword ptr [esi + 0x100], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AF14: mov eax, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x50
        // 0x5884AF17: mov dword ptr [esi + 0x100], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AF1D: mov eax, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x50
        // 0x5884AF20: mov dword ptr [esi + 0x100], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AF26: mov edx, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x5884AF29: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5884AF2B: mov dword ptr [esi + 0x100], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AF31: call 0x588486e0
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0xD7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884AF36: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5884AF39: pop edi
        __asm _emit 0x5F
        // 0x5884AF3A: pop esi
        __asm _emit 0x5E
        // 0x5884AF3B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5884AF3E: cmp word ptr [esi + 0xf6], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xF6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AF46: jne 0x5884ad3e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF2
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884AF4C: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5884AF4F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884AF51: mov dword ptr [esi + 0x100], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AF57: push eax
        __asm _emit 0x50
        // 0x5884AF58: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5884AF5A: mov word ptr [esi + 0xfa], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AF61: call 0x588486e0
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0xD7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884AF66: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5884AF69: pop edi
        __asm _emit 0x5F
        // 0x5884AF6A: pop esi
        __asm _emit 0x5E
        // 0x5884AF6B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5884AF6E: cmp word ptr [esi + 0xf6], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xF6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AF76: jne 0x5884ad3e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC2
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884AF7C: mov ax, word ptr [esi + 0xf2]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AF83: sub ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x05
        // 0x5884AF87: mov word ptr [esi + 0xfa], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AF8E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884AF90: jns 0x5884afa3
        __asm _emit 0x79
        __asm _emit 0x11
        // 0x5884AF92: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5884AF95: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5884AF97: mov word ptr [esi + 0xfa], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AF9E: jmp 0x5884ad31
        __asm _emit 0xE9
        __asm _emit 0x8E
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884AFA3: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x5884AFA6: mov dword ptr [esi + 0x100], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AFAC: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5884AFAE: mov eax, dword ptr [edx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x5884AFB1: mov dword ptr [esi + 0x100], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AFB7: mov eax, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x50
        // 0x5884AFBA: mov dword ptr [esi + 0x100], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AFC0: mov eax, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x50
        // 0x5884AFC3: mov dword ptr [esi + 0x100], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AFC9: mov eax, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x50
        // 0x5884AFCC: jmp 0x5884ad31
        __asm _emit 0xE9
        __asm _emit 0x60
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884AFD1: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884AFD7: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5884AFDA: push ecx
        __asm _emit 0x51
        // 0x5884AFDB: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AFE1: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0x65
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x5884AFE6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884AFE8: je 0x5884ad3e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884AFEE: movzx eax, word ptr [esi + 0xf6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xF6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AFF5: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5884AFF7: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884AFFA: jne 0x5884b004
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5884AFFC: mov edi, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B002: jmp 0x5884b010
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x5884B004: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5884B008: jne 0x5884b010
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x5884B00A: mov edi, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B010: push ebp
        __asm _emit 0x55
        // 0x5884B011: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5884B013: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5884B015: je 0x5884b0f8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xDD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B01B: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5884B01D: call 0x5875a140
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0xF1
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5884B022: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884B024: jne 0x5884b02f
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x5884B026: mov edi, dword ptr [edi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x54
        // 0x5884B029: inc ebp
        __asm _emit 0x45
        // 0x5884B02A: cmp ebp, 5
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x05
        // 0x5884B02D: jl 0x5884b013
        __asm _emit 0x7C
        __asm _emit 0xE4
        // 0x5884B02F: cmp ebp, 5
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x05
        // 0x5884B032: je 0x5884b0f8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B038: cmp word ptr [edi + 0x9e], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B040: je 0x5884b0da
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B046: mov ebp, dword ptr [edi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0xAF
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B04C: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5884B04E: jne 0x5884b07c
        __asm _emit 0x75
        __asm _emit 0x2C
        // 0x5884B050: push ebp
        __asm _emit 0x55
        // 0x5884B051: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5884B053: call 0x5884a600
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884B058: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5884B05A: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5884B05C: je 0x5884b0f8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B062: push ebp
        __asm _emit 0x55
        // 0x5884B063: push edi
        __asm _emit 0x57
        // 0x5884B064: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5884B066: call 0x588212f0
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x62
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5884B06B: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5884B06D: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5884B070: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5884B072: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5884B074: pop ebp
        __asm _emit 0x5D
        // 0x5884B075: pop edi
        __asm _emit 0x5F
        // 0x5884B076: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884B078: pop esi
        __asm _emit 0x5E
        // 0x5884B079: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5884B07C: mov cx, word ptr [ebp + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x24
        // 0x5884B080: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x08
        // 0x5884B084: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x5884B087: cmp cl, 5
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x05
        // 0x5884B08A: jne 0x5884b09e
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x5884B08C: mov edx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x5884B08F: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5884B092: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x5884B094: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5884B096: pop ebp
        __asm _emit 0x5D
        // 0x5884B097: pop edi
        __asm _emit 0x5F
        // 0x5884B098: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884B09A: pop esi
        __asm _emit 0x5E
        // 0x5884B09B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5884B09E: mov cx, word ptr [ebp + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x24
        // 0x5884B0A2: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x5884B0A5: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x5884B0A7: je 0x5884b0b8
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x5884B0A9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884B0AB: call 0x588205f0
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x55
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5884B0B0: pop ebp
        __asm _emit 0x5D
        // 0x5884B0B1: pop edi
        __asm _emit 0x5F
        // 0x5884B0B2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884B0B4: pop esi
        __asm _emit 0x5E
        // 0x5884B0B5: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5884B0B8: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5884B0BA: call 0x588205f0
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0x55
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5884B0BF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5884B0C1: call 0x58849800
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884B0C6: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x5884B0C8: je 0x5884b0f8
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x5884B0CA: push ebp
        __asm _emit 0x55
        // 0x5884B0CB: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5884B0CD: call 0x5884a820
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884B0D2: pop ebp
        __asm _emit 0x5D
        // 0x5884B0D3: pop edi
        __asm _emit 0x5F
        // 0x5884B0D4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884B0D6: pop esi
        __asm _emit 0x5E
        // 0x5884B0D7: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5884B0DA: mov ecx, dword ptr [edi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B0E0: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884B0E2: je 0x5884b0f8
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x5884B0E4: push edi
        __asm _emit 0x57
        // 0x5884B0E5: call 0x58821330
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x62
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5884B0EA: mov edx, dword ptr [edi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B0F0: push edx
        __asm _emit 0x52
        // 0x5884B0F1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5884B0F3: call 0x5884a820
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884B0F8: pop ebp
        __asm _emit 0x5D
        // 0x5884B0F9: pop edi
        __asm _emit 0x5F
        // 0x5884B0FA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884B0FC: pop esi
        __asm _emit 0x5E
        // 0x5884B0FD: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5884B100: sub eax, 0x204
        __asm _emit 0x2D
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B105: je 0x5884ad3e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884B10B: sub eax, 6
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x06
        // 0x5884B10E: jne 0x5884ad3e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x2A
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884B114: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884B119: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B11F: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x5884B122: push eax
        __asm _emit 0x50
        // 0x5884B123: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x64
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x5884B128: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884B12A: je 0x5884ad3e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884B130: cmp word ptr [edi + 0xa], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5884B135: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B13A: jle 0x5884b13e
        __asm _emit 0x7E
        __asm _emit 0x02
        // 0x5884B13C: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5884B13E: movzx eax, word ptr [esi + 0xf6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xF6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B145: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884B148: jne 0x5884b1ce
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B14E: mov eax, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B154: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884B156: je 0x5884b1c7
        __asm _emit 0x74
        __asm _emit 0x6F
        // 0x5884B158: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884B15A: je 0x5884b19b
        __asm _emit 0x74
        __asm _emit 0x3F
        // 0x5884B15C: cmp dword ptr [eax + 0x54], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x54
        __asm _emit 0x00
        // 0x5884B160: je 0x5884b1c7
        __asm _emit 0x74
        __asm _emit 0x65
        // 0x5884B162: movzx ecx, word ptr [esi + 0xfa]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B169: movsx edx, word ptr [esi + 0xf2]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x96
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B170: movsx edi, cx
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0xF9
        // 0x5884B173: sub edx, 5
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x5884B176: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x5884B178: jge 0x5884b1c7
        __asm _emit 0x7D
        __asm _emit 0x4D
        // 0x5884B17A: inc ecx
        __asm _emit 0x41
        // 0x5884B17B: mov word ptr [esi + 0xfa], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B182: mov eax, dword ptr [eax + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x54
        // 0x5884B185: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884B187: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5884B189: mov dword ptr [esi + 0x100], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B18F: call 0x588486e0
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0xD5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884B194: pop edi
        __asm _emit 0x5F
        // 0x5884B195: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884B197: pop esi
        __asm _emit 0x5E
        // 0x5884B198: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5884B19B: cmp dword ptr [eax + 0x50], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x5884B19F: je 0x5884b1c7
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x5884B1A1: movzx ecx, word ptr [esi + 0xfa]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B1A8: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884B1AB: jle 0x5884b1c7
        __asm _emit 0x7E
        __asm _emit 0x1A
        // 0x5884B1AD: dec ecx
        __asm _emit 0x49
        // 0x5884B1AE: mov word ptr [esi + 0xfa], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B1B5: mov ecx, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x5884B1B8: mov dword ptr [esi + 0x100], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B1BE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884B1C0: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5884B1C2: call 0x588486e0
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0xD5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884B1C7: pop edi
        __asm _emit 0x5F
        // 0x5884B1C8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884B1CA: pop esi
        __asm _emit 0x5E
        // 0x5884B1CB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5884B1CE: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5884B1D2: jne 0x5884ad3e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884B1D8: mov eax, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B1DE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884B1E0: je 0x5884b251
        __asm _emit 0x74
        __asm _emit 0x6F
        // 0x5884B1E2: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884B1E4: je 0x5884b225
        __asm _emit 0x74
        __asm _emit 0x3F
        // 0x5884B1E6: cmp dword ptr [eax + 0x54], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x54
        __asm _emit 0x00
        // 0x5884B1EA: je 0x5884b251
        __asm _emit 0x74
        __asm _emit 0x65
        // 0x5884B1EC: movzx ecx, word ptr [esi + 0xf8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B1F3: movsx edx, word ptr [esi + 0xf0]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x96
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B1FA: movsx edi, cx
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0xF9
        // 0x5884B1FD: sub edx, 5
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x5884B200: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x5884B202: jge 0x5884b251
        __asm _emit 0x7D
        __asm _emit 0x4D
        // 0x5884B204: inc ecx
        __asm _emit 0x41
        // 0x5884B205: mov word ptr [esi + 0xf8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B20C: mov eax, dword ptr [eax + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x54
        // 0x5884B20F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884B211: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5884B213: mov dword ptr [esi + 0xfc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B219: call 0x588486e0
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0xD4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884B21E: pop edi
        __asm _emit 0x5F
        // 0x5884B21F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884B221: pop esi
        __asm _emit 0x5E
        // 0x5884B222: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5884B225: cmp dword ptr [eax + 0x50], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x5884B229: je 0x5884b251
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x5884B22B: movzx ecx, word ptr [esi + 0xf8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B232: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884B235: jle 0x5884b251
        __asm _emit 0x7E
        __asm _emit 0x1A
        // 0x5884B237: dec ecx
        __asm _emit 0x49
        // 0x5884B238: mov word ptr [esi + 0xf8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B23F: mov ecx, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x5884B242: mov dword ptr [esi + 0xfc], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B248: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884B24A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5884B24C: call 0x588486e0
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0xD4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884B251: pop edi
        __asm _emit 0x5F
        // 0x5884B252: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884B254: pop esi
        __asm _emit 0x5E
        // 0x5884B255: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
