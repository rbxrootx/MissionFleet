// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1347 bytes in 2 exact ranges.
// Source symbol alias: FUN_5885baf0.

// Ghidra body range 0x5885BAF0..0x5885BEFD; 1037 mapped bytes.
extern "C" __declspec(naked) void FUN_5885baf0_segment_00() {
    __asm {
        // 0x5885BAF0: push esi
        __asm _emit 0x56
        // 0x5885BAF1: push edi
        __asm _emit 0x57
        // 0x5885BAF2: mov edi, 2
        __asm _emit 0xBF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BAF7: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5885BAF9: cmp dword ptr [esp + 0x10], edi
        __asm _emit 0x39
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5885BAFD: jne 0x5885c02f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x2C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BB03: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885BB08: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5885BB0C: mov dword ptr [eax + 0x104e0], 0
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0xE0
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BB16: mov dword ptr [eax + 0x104e4], 0x320
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0xE4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BB20: cmp edx, dword ptr [esi + 0xa78]
        __asm _emit 0x3B
        __asm _emit 0x96
        __asm _emit 0x78
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BB26: jne 0x5885bbf1
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BB2C: mov esi, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BB32: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885BB37: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x5885BB3A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885BB3C: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x5885BB3F: cmp dword ptr [ecx + eax + 0x1398], 0
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x98
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BB47: je 0x5885c02f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BB4D: add esi, 0x139
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BB53: shl esi, 4
        __asm _emit 0xC1
        __asm _emit 0xE6
        __asm _emit 0x04
        // 0x5885BB56: mov edx, dword ptr [esi + eax]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x06
        // 0x5885BB59: mov esi, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x72
        __asm _emit 0x0C
        // 0x5885BB5C: push ebx
        __asm _emit 0x53
        // 0x5885BB5D: mov ebx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885BB63: mov eax, dword ptr [ebx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5885BB69: mov edi, dword ptr [eax + 0x114]
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BB6F: mov eax, 0x7d000
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0xD0
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5885BB74: cdq
        __asm _emit 0x99
        // 0x5885BB75: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x5885BB77: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5885BB7A: mov esi, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x08
        // 0x5885BB7D: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x5885BB7F: mov eax, 0x5dc00
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x5885BB84: cdq
        __asm _emit 0x99
        // 0x5885BB85: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x5885BB87: sub esi, eax
        __asm _emit 0x2B
        __asm _emit 0xF0
        // 0x5885BB89: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5885BB8B: jge 0x5885bb91
        __asm _emit 0x7D
        __asm _emit 0x04
        // 0x5885BB8D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5885BB8F: jmp 0x5885bbb0
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x5885BB91: mov edi, dword ptr [ebx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0xBB
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5885BB97: mov eax, 0xfa000
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5885BB9C: cdq
        __asm _emit 0x99
        // 0x5885BB9D: idiv dword ptr [edi + 0x114]
        __asm _emit 0xF7
        __asm _emit 0xBF
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BBA3: mov edx, 0x3200
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BBA8: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5885BBAA: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x5885BBAC: jle 0x5885bbb0
        __asm _emit 0x7E
        __asm _emit 0x02
        // 0x5885BBAE: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5885BBB0: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5885BBB2: jge 0x5885bbb8
        __asm _emit 0x7D
        __asm _emit 0x04
        // 0x5885BBB4: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5885BBB6: jmp 0x5885bbd7
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x5885BBB8: mov edi, dword ptr [ebx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0xBB
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5885BBBE: mov eax, 0xbb800
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0xB8
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5885BBC3: cdq
        __asm _emit 0x99
        // 0x5885BBC4: idiv dword ptr [edi + 0x114]
        __asm _emit 0xF7
        __asm _emit 0xBF
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BBCA: mov edx, 0x1900
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BBCF: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5885BBD1: cmp esi, edx
        __asm _emit 0x3B
        __asm _emit 0xF2
        // 0x5885BBD3: jle 0x5885bbd7
        __asm _emit 0x7E
        __asm _emit 0x02
        // 0x5885BBD5: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x5885BBD7: mov dword ptr [ebx + 0x1052c], ecx
        __asm _emit 0x89
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5885BBDD: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885BBE3: pop ebx
        __asm _emit 0x5B
        // 0x5885BBE4: pop edi
        __asm _emit 0x5F
        // 0x5885BBE5: mov dword ptr [ecx + 0x10530], esi
        __asm _emit 0x89
        __asm _emit 0xB1
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5885BBEB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885BBED: pop esi
        __asm _emit 0x5E
        // 0x5885BBEE: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5885BBF1: cmp edx, dword ptr [esi + 0xa80]
        __asm _emit 0x3B
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BBF7: jne 0x5885bc07
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x5885BBF9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885BBFB: call 0x58858f20
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0xD3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885BC00: pop edi
        __asm _emit 0x5F
        // 0x5885BC01: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885BC03: pop esi
        __asm _emit 0x5E
        // 0x5885BC04: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5885BC07: cmp edx, dword ptr [esi + 0xa84]
        __asm _emit 0x3B
        __asm _emit 0x96
        __asm _emit 0x84
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BC0D: jne 0x5885bc1d
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x5885BC0F: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5885BC11: call 0x58858f20
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0xD3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885BC16: pop edi
        __asm _emit 0x5F
        // 0x5885BC17: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885BC19: pop esi
        __asm _emit 0x5E
        // 0x5885BC1A: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5885BC1D: cmp edx, dword ptr [esi + 0xa7c]
        __asm _emit 0x3B
        __asm _emit 0x96
        __asm _emit 0x7C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BC23: jne 0x5885bef3
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xCA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BC29: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885BC2F: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x5885BC32: cmp dword ptr [ecx + 0x63b0], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xB0
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BC39: jne 0x5885c02f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BC3F: call 0x588d66d0
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0xAA
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5885BC44: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885BC46: je 0x5885c02f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BC4C: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BC52: cmp dword ptr [esi + eax*4 + 0x9a0], 0
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BC5A: jne 0x5885c02f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xCF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BC60: mov ecx, dword ptr [esi + eax*4 + 0x138]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BC67: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5885BC69: je 0x5885c02f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BC6F: lea edx, [ecx - 1]
        __asm _emit 0x8D
        __asm _emit 0x51
        __asm _emit 0xFF
        // 0x5885BC72: cmp edx, 0xf
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0F
        // 0x5885BC75: ja 0x5885c02f
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xB4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BC7B: movzx edx, byte ptr [edx + 0x5885c04c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x92
        __asm _emit 0x4C
        __asm _emit 0xC0
        __asm _emit 0x85
        __asm _emit 0x58
        // 0x5885BC82: jmp dword ptr [edx*4 + 0x5885c038]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x38
        __asm _emit 0xC0
        __asm _emit 0x85
        __asm _emit 0x58
        // 0x5885BC89: test cl, 0x18
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x18
        // 0x5885BC8C: jne 0x5885c02f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9D
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BC92: mov ecx, dword ptr [esi + eax*8 + 0x158]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xC6
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BC99: cmp ecx, dword ptr [esi + eax*8 + 0x15c]
        __asm _emit 0x3B
        __asm _emit 0x8C
        __asm _emit 0xC6
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BCA0: je 0x5885c02f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BCA6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885BCA8: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885BCAA: mov dword ptr [esi + eax*4 + 0x138], edi
        __asm _emit 0x89
        __asm _emit 0xBC
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BCB1: call 0x58858bd0
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0xCF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885BCB6: mov edx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BCBC: mov ecx, dword ptr [esi + edx*4 + 0x978]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x96
        __asm _emit 0x78
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BCC3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885BCC5: call 0x587315c0
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0x58
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x5885BCCA: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BCD0: mov ecx, dword ptr [esi + eax*4 + 0x9c0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BCD7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885BCD9: call 0x58793da0
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0x80
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5885BCDE: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BCE4: mov dword ptr [esi + ecx*4 + 0x9a0], 1
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BCEF: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BCF5: mov eax, dword ptr [esi + ecx*8 + 0x15c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xCE
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BCFC: sub eax, dword ptr [esi + ecx*8 + 0x158]
        __asm _emit 0x2B
        __asm _emit 0x84
        __asm _emit 0xCE
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BD03: cdq
        __asm _emit 0x99
        // 0x5885BD04: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5885BD06: xor edi, edx
        __asm _emit 0x33
        __asm _emit 0xFA
        // 0x5885BD08: sub edi, edx
        __asm _emit 0x2B
        __asm _emit 0xFA
        // 0x5885BD0A: mov dword ptr [esi + ecx*4 + 0xf8], edi
        __asm _emit 0x89
        __asm _emit 0xBC
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BD11: mov edx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BD17: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885BD1D: push edi
        __asm _emit 0x57
        // 0x5885BD1E: lea eax, [esi + edx*4 + 0xf8]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BD25: push eax
        __asm _emit 0x50
        // 0x5885BD26: call 0x587a15e0
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0x58
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5885BD2B: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BD31: cmp edi, dword ptr [esi + ecx*4 + 0xf8]
        __asm _emit 0x3B
        __asm _emit 0xBC
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BD38: je 0x5885bd4d
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x5885BD3A: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885BD40: call 0x58970ae0
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0x4D
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x5885BD45: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5885BD47: call dword ptr [0x5898c3c8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5885BD4D: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BD53: cmp dword ptr [esi + eax*4 + 0xf8], 0
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BD5B: jle 0x5885c02f
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xCE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BD61: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5885BD63: imul edx, edx, 0xd4
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BD69: movzx ecx, word ptr [edx + esi + 0x288]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8C
        __asm _emit 0x32
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BD71: cmp dword ptr [esi + eax*4 + 0x118], ecx
        __asm _emit 0x39
        __asm _emit 0x8C
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BD78: jne 0x5885c02f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BD7E: mov dword ptr [esi + eax*8 + 0x930], 0
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0xC6
        __asm _emit 0x30
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BD89: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BD8F: mov eax, dword ptr [esi + ecx*4 + 0x9e0]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BD96: mov eax, dword ptr [eax + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x54
        // 0x5885BD99: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885BD9B: je 0x5885bda3
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5885BD9D: movzx eax, word ptr [eax + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5885BDA1: jmp 0x5885bda5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5885BDA3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885BDA5: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5885BDA7: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BDAD: imul edx, edx, 0xd4
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BDB3: movzx edi, word ptr [edx + esi + 0x288]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xBC
        __asm _emit 0x32
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BDBB: imul edi, dword ptr [esi + ecx*4 + 0xf8]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xBC
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BDC3: cdq
        __asm _emit 0x99
        // 0x5885BDC4: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x5885BDC6: pop edi
        __asm _emit 0x5F
        // 0x5885BDC7: mov dword ptr [esi + ecx*8 + 0x92c], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0xCE
        __asm _emit 0x2C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BDCE: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BDD4: mov ecx, dword ptr [esi + eax*4 + 0x9e0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BDDB: mov dword ptr [ecx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BDE2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885BDE4: pop esi
        __asm _emit 0x5E
        // 0x5885BDE5: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5885BDE8: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885BDEA: call 0x58859070
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0xD2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885BDEF: mov edx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BDF5: mov eax, dword ptr [esi + edx*4 + 0x978]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x78
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BDFC: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5885BE00: shr cl, 1
        __asm _emit 0xD0
        __asm _emit 0xE9
        // 0x5885BE02: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x5885BE05: je 0x5885c02f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BE0B: mov edx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BE11: mov eax, dword ptr [esi + edx*4 + 0x978]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x78
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BE18: mov eax, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x50
        // 0x5885BE1B: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x5885BE1E: je 0x5885c02f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x0B
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BE24: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x5885BE27: je 0x5885c02f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BE2D: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885BE33: test dword ptr [ecx + 0x10474], 0x100
        __asm _emit 0xF7
        __asm _emit 0x81
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BE3D: jne 0x5885c02f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xEC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BE43: movzx eax, dl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC2
        // 0x5885BE46: mov ecx, dword ptr [esi + eax*4 + 0x978]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BE4D: mov edx, 0xfffd
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BE52: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x5885BE56: mov byte ptr [eax + esi + 0xc8], 0x32
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x32
        // 0x5885BE5E: mov dword ptr [esi + eax*4 + 0xa8], 1
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BE69: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BE6F: movzx ecx, byte ptr [esi + eax*4 + 0x878]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8C
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BE77: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x5885BE7A: mov byte ptr [esp + 0x10], cl
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5885BE7E: xor dword ptr [esi + eax*8 + 0x198], 0x3a9e2b0d
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0xC6
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0D
        __asm _emit 0x2B
        __asm _emit 0x9E
        __asm _emit 0x3A
        // 0x5885BE89: mov edx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BE8F: movzx ecx, byte ptr [esi + edx*8 + 0x198]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BE97: lea eax, [esi + edx*8 + 0x198]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BE9E: mov byte ptr [esp + 0x11], cl
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x11
        // 0x5885BEA2: xor dword ptr [eax], 0x3a9e2b0d
        __asm _emit 0x81
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x2B
        __asm _emit 0x9E
        __asm _emit 0x3A
        // 0x5885BEA8: mov dl, byte ptr [esi + 0xf4]
        __asm _emit 0x8A
        __asm _emit 0x96
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BEAE: mov byte ptr [esp + 0x12], dl
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x5885BEB2: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5885BEB6: jmp 0x5885bfb2
        __asm _emit 0xE9
        __asm _emit 0xF7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BEBB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885BEBD: lea ecx, [esi + 0xd0]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BEC3: cmp dword ptr [ecx], 1
        __asm _emit 0x83
        __asm _emit 0x39
        __asm _emit 0x01
        // 0x5885BEC6: je 0x5885bedf
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x5885BEC8: inc eax
        __asm _emit 0x40
        // 0x5885BEC9: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5885BECC: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x5885BECF: jb 0x5885bec3
        __asm _emit 0x72
        __asm _emit 0xF2
        // 0x5885BED1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885BED3: call 0x588585d0
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0xC6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885BED8: pop edi
        __asm _emit 0x5F
        // 0x5885BED9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885BEDB: pop esi
        __asm _emit 0x5E
        // 0x5885BEDC: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5885BEDF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885BEE1: mov dword ptr [esi + 0xf4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BEE7: call 0x588585d0
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0xC6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885BEEC: pop edi
        __asm _emit 0x5F
        // 0x5885BEED: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885BEEF: pop esi
        __asm _emit 0x5E
        // 0x5885BEF0: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5885BEF3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885BEF5: lea ecx, [esi + 0x978]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BEFB: jmp 0x5885bf00
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x5885BF00..0x5885C036; 310 mapped bytes.
extern "C" __declspec(naked) void FUN_5885baf0_segment_01() {
    __asm {
        // 0x5885BF00: cmp edx, dword ptr [ecx + 0xa8]
        __asm _emit 0x3B
        __asm _emit 0x91
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BF06: je 0x5885bf1c
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x5885BF08: cmp edx, dword ptr [ecx]
        __asm _emit 0x3B
        __asm _emit 0x11
        // 0x5885BF0A: je 0x5885bf2b
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x5885BF0C: inc eax
        __asm _emit 0x40
        // 0x5885BF0D: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5885BF10: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x5885BF13: jl 0x5885bf00
        __asm _emit 0x7C
        __asm _emit 0xEB
        // 0x5885BF15: pop edi
        __asm _emit 0x5F
        // 0x5885BF16: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885BF18: pop esi
        __asm _emit 0x5E
        // 0x5885BF19: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5885BF1C: push eax
        __asm _emit 0x50
        // 0x5885BF1D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885BF1F: call 0x588592c0
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0xD3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885BF24: pop edi
        __asm _emit 0x5F
        // 0x5885BF25: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885BF27: pop esi
        __asm _emit 0x5E
        // 0x5885BF28: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5885BF2B: cmp dword ptr [esi + eax*4 + 0x138], 4
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x5885BF33: jne 0x5885c02f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BF39: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885BF3F: test dword ptr [ecx + 0x10474], 0x100
        __asm _emit 0xF7
        __asm _emit 0x81
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BF49: jne 0x5885c02f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BF4F: movzx ecx, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC8
        // 0x5885BF52: mov edx, dword ptr [esi + ecx*4 + 0x978]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BF59: mov edi, 0xfffd
        __asm _emit 0xBF
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BF5E: and word ptr [edx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7A
        __asm _emit 0x24
        // 0x5885BF62: mov byte ptr [ecx + esi + 0xc8], 0x32
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x31
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x32
        // 0x5885BF6A: mov dword ptr [esi + ecx*4 + 0xa8], 1
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BF75: movzx edx, byte ptr [esi + eax*4 + 0x878]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x94
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BF7D: xor dword ptr [esi + eax*8 + 0x198], 0x3a9e2b0d
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0xC6
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0D
        __asm _emit 0x2B
        __asm _emit 0x9E
        __asm _emit 0x3A
        // 0x5885BF88: mov ecx, dword ptr [esi + eax*8 + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xC6
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BF8F: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x5885BF92: mov byte ptr [esp + 0xc], dl
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5885BF96: movzx edx, cl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD1
        // 0x5885BF99: xor ecx, 0x3a9e2b0d
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0x0D
        __asm _emit 0x2B
        __asm _emit 0x9E
        __asm _emit 0x3A
        // 0x5885BF9F: mov dword ptr [esi + eax*8 + 0x198], ecx
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0xC6
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BFA6: mov byte ptr [esp + 0xe], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0E
        // 0x5885BFAA: mov byte ptr [esp + 0xd], dl
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0D
        // 0x5885BFAE: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5885BFB2: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885BFB8: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5885BFBA: push eax
        __asm _emit 0x50
        // 0x5885BFBB: push 0x16
        __asm _emit 0x6A
        __asm _emit 0x16
        // 0x5885BFBD: call 0x587e5a70
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0x9A
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5885BFC2: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xA1
        __asm _emit 0xD0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885BFC7: mov esi, 0x1b
        __asm _emit 0xBE
        __asm _emit 0x1B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BFCC: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BFD2: jle 0x5885bfe8
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x5885BFD4: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BFDB: je 0x5885bfe8
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5885BFDD: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BFE3: mov ecx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x6C
        // 0x5885BFE6: jmp 0x5885bfea
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5885BFE8: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5885BFEA: mov edx, dword ptr [0x58a248fc]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xFC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885BFF0: push edx
        __asm _emit 0x52
        // 0x5885BFF1: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0xB9
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5885BFF6: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xA1
        __asm _emit 0xD0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885BFFB: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C001: jle 0x5885c025
        __asm _emit 0x7E
        __asm _emit 0x22
        // 0x5885C003: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C00A: je 0x5885c025
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x5885C00C: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C012: mov ecx, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x6C
        // 0x5885C015: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5885C017: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5885C01A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885C01C: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5885C01E: pop edi
        __asm _emit 0x5F
        // 0x5885C01F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885C021: pop esi
        __asm _emit 0x5E
        // 0x5885C022: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5885C025: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5885C027: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5885C029: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5885C02C: push ecx
        __asm _emit 0x51
        // 0x5885C02D: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5885C02F: pop edi
        __asm _emit 0x5F
        // 0x5885C030: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885C032: pop esi
        __asm _emit 0x5E
        // 0x5885C033: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
