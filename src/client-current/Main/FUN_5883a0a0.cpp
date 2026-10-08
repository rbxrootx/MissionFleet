// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1034 bytes in 1 exact ranges.
// Source symbol alias: FUN_5883a0a0.

// Ghidra body range 0x5883A0A0..0x5883A4AA; 1034 mapped bytes.
extern "C" __declspec(naked) void FUN_5883a0a0_segment_00() {
    __asm {
        // 0x5883A0A0: push esi
        __asm _emit 0x56
        // 0x5883A0A1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5883A0A3: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5883A0A7: push edi
        __asm _emit 0x57
        // 0x5883A0A8: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x5883A0AA: je 0x5883a4a2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A0B0: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x5883A0B3: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5883A0B7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5883A0B9: je 0x5883a0df
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x5883A0BB: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x34
        // 0x5883A0BE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5883A0C0: je 0x5883a0d8
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x5883A0C2: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A0C4: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5883A0C6: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x5883A0C9: push edi
        __asm _emit 0x57
        // 0x5883A0CA: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5883A0CC: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x5883A0CF: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x5883A0D2: je 0x5883a0df
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5883A0D4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5883A0D6: jne 0x5883a0c2
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x5883A0D8: pop edi
        __asm _emit 0x5F
        // 0x5883A0D9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5883A0DB: pop esi
        __asm _emit 0x5E
        // 0x5883A0DC: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5883A0DF: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x5883A0E2: cmp eax, 0x201
        __asm _emit 0x3D
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A0E7: ja 0x5883a477
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x8A
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A0ED: je 0x5883a41f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x2C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A0F3: cmp eax, 0x100
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A0F8: je 0x5883a179
        __asm _emit 0x74
        __asm _emit 0x7F
        // 0x5883A0FA: cmp eax, 0x200
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A0FF: jne 0x5883a4a2
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9D
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A105: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5883A10B: mov edi, dword ptr [esi + 0x1d8]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xD8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A111: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x5883A114: push edx
        __asm _emit 0x52
        // 0x5883A115: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5883A117: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0x74
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x5883A11C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5883A11E: je 0x5883a14a
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x5883A120: cmp dword ptr [esi + 0x2ec], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xEC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A127: jne 0x5883a14a
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x5883A129: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x5883A12D: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x5883A12F: jne 0x5883a4a2
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x6D
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A135: mov ecx, dword ptr [esi + 0x1d8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A13B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A13D: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0x74
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x5883A142: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5883A145: pop edi
        __asm _emit 0x5F
        // 0x5883A146: pop esi
        __asm _emit 0x5E
        // 0x5883A147: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5883A14A: mov cx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x5883A14E: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x5883A151: je 0x5883a4a2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x4B
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A157: cmp dword ptr [esi + 0x2ec], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xEC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A15E: jne 0x5883a4a2
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x3E
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A164: mov ecx, dword ptr [esi + 0x1d8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A16A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883A16C: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0x74
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x5883A171: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5883A174: pop edi
        __asm _emit 0x5F
        // 0x5883A175: pop esi
        __asm _emit 0x5E
        // 0x5883A176: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5883A179: mov edi, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x5883A17C: lea eax, [edi - 0x21]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0xDF
        // 0x5883A17F: cmp eax, 7
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x07
        // 0x5883A182: ja 0x5883a4a2
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x1A
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A188: jmp dword ptr [eax*4 + 0x5883a4ac]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xAC
        __asm _emit 0xA4
        __asm _emit 0x83
        __asm _emit 0x58
        // 0x5883A18F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5883A191: call 0x587b6be0
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0xCA
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x5883A196: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5883A199: pop edi
        __asm _emit 0x5F
        // 0x5883A19A: pop esi
        __asm _emit 0x5E
        // 0x5883A19B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5883A19E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5883A1A0: call 0x587b6c60
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0xCA
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x5883A1A5: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5883A1A8: pop edi
        __asm _emit 0x5F
        // 0x5883A1A9: pop esi
        __asm _emit 0x5E
        // 0x5883A1AA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5883A1AD: cmp dword ptr [esi + 0x2ec], 1
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xEC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x5883A1B4: jne 0x5883a4a2
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A1BA: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A1C0: cmp dword ptr [ecx + 0x88], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A1C7: jle 0x5883a4a2
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xD5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A1CD: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0xDF
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883A1D2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5883A1D4: jle 0x5883a4a2
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A1DA: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A1E0: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0xDF
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883A1E5: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A1EB: dec eax
        __asm _emit 0x48
        // 0x5883A1EC: push eax
        __asm _emit 0x50
        // 0x5883A1ED: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0xE6
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883A1F2: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A1F8: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0xDF
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883A1FD: mov ecx, dword ptr [esi + 0x214]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A203: push eax
        __asm _emit 0x50
        // 0x5883A204: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0xE6
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883A209: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A20F: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0xDF
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883A214: mov ecx, dword ptr [esi + 0x218]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A21A: push eax
        __asm _emit 0x50
        // 0x5883A21B: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0xE6
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883A220: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5883A222: call 0x58839fa0
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5883A227: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A22D: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0xDF
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883A232: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A238: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5883A23A: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0xDF
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883A23F: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x5883A241: jl 0x5883a264
        __asm _emit 0x7C
        __asm _emit 0x21
        // 0x5883A243: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A249: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0xDF
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883A24E: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A254: lea edi, [eax + 4]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x5883A257: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0xDF
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883A25C: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5883A25E: jl 0x5883a4a2
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x3E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A264: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A26A: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0xDF
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883A26F: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A275: push eax
        __asm _emit 0x50
        // 0x5883A276: call 0x58908190
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0xDF
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883A27B: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A281: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0xDF
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883A286: mov ecx, dword ptr [esi + 0x214]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A28C: push eax
        __asm _emit 0x50
        // 0x5883A28D: call 0x58908190
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0xDE
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883A292: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A298: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0xDF
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883A29D: mov ecx, dword ptr [esi + 0x218]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A2A3: push eax
        __asm _emit 0x50
        // 0x5883A2A4: call 0x58908190
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0xDE
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883A2A9: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5883A2AC: pop edi
        __asm _emit 0x5F
        // 0x5883A2AD: pop esi
        __asm _emit 0x5E
        // 0x5883A2AE: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5883A2B1: cmp dword ptr [esi + 0x2ec], 1
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xEC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x5883A2B8: jne 0x5883a4a2
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A2BE: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A2C4: mov edi, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A2CA: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5883A2CC: jle 0x5883a4a2
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A2D2: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0xDE
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883A2D7: dec edi
        __asm _emit 0x4F
        // 0x5883A2D8: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5883A2DA: jge 0x5883a4a2
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xC2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A2E0: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A2E6: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0xDE
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883A2EB: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A2F1: inc eax
        __asm _emit 0x40
        // 0x5883A2F2: push eax
        __asm _emit 0x50
        // 0x5883A2F3: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0xE5
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883A2F8: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A2FE: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0xDE
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883A303: mov ecx, dword ptr [esi + 0x214]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A309: push eax
        __asm _emit 0x50
        // 0x5883A30A: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0xE5
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883A30F: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A315: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0xDE
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883A31A: mov ecx, dword ptr [esi + 0x218]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A320: push eax
        __asm _emit 0x50
        // 0x5883A321: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0xE5
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883A326: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5883A328: call 0x58839fa0
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5883A32D: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A333: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0xDE
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883A338: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A33E: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5883A340: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0xDE
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883A345: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x5883A347: jl 0x5883a366
        __asm _emit 0x7C
        __asm _emit 0x1D
        // 0x5883A349: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A34F: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0xDE
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883A354: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A35A: lea edi, [eax + 4]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x5883A35D: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0xDE
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883A362: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5883A364: jl 0x5883a3ab
        __asm _emit 0x7C
        __asm _emit 0x45
        // 0x5883A366: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A36C: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0xDE
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883A371: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A377: push eax
        __asm _emit 0x50
        // 0x5883A378: call 0x58908190
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0xDE
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883A37D: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A383: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0xDE
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883A388: mov ecx, dword ptr [esi + 0x214]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A38E: push eax
        __asm _emit 0x50
        // 0x5883A38F: call 0x58908190
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0xDD
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883A394: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A39A: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0xDE
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883A39F: mov ecx, dword ptr [esi + 0x218]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A3A5: push eax
        __asm _emit 0x50
        // 0x5883A3A6: call 0x58908190
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0xDD
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883A3AB: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A3B1: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0xDD
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883A3B6: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A3BC: lea edi, [eax - 4]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0xFC
        // 0x5883A3BF: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0xDD
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883A3C4: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5883A3C6: jle 0x5883a4a2
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xD6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A3CC: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A3D2: mov edx, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A3D8: sub edx, 4
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x04
        // 0x5883A3DB: push edx
        __asm _emit 0x52
        // 0x5883A3DC: call 0x58908190
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0xDD
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883A3E1: mov eax, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A3E7: mov ecx, dword ptr [eax + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A3ED: sub ecx, 4
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x04
        // 0x5883A3F0: push ecx
        __asm _emit 0x51
        // 0x5883A3F1: mov ecx, dword ptr [esi + 0x214]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A3F7: call 0x58908190
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0xDD
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883A3FC: mov edx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A402: mov eax, dword ptr [edx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A408: mov ecx, dword ptr [esi + 0x218]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A40E: sub eax, 4
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x5883A411: push eax
        __asm _emit 0x50
        // 0x5883A412: call 0x58908190
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0xDD
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883A417: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5883A41A: pop edi
        __asm _emit 0x5F
        // 0x5883A41B: pop esi
        __asm _emit 0x5E
        // 0x5883A41C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5883A41F: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5883A425: mov edi, dword ptr [esi + 0x1d8]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xD8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A42B: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5883A42E: push ecx
        __asm _emit 0x51
        // 0x5883A42F: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5883A431: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0x71
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x5883A436: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5883A438: je 0x5883a450
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x5883A43A: mov dword ptr [esi + 0x2ec], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A444: mov dx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x24
        // 0x5883A448: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x5883A44B: jmp 0x5883a12f
        __asm _emit 0xE9
        __asm _emit 0xDF
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5883A450: mov dword ptr [esi + 0x2ec], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A45A: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x5883A45E: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x5883A460: je 0x5883a4a2
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x5883A462: mov ecx, dword ptr [esi + 0x1d8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A468: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883A46A: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0x71
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x5883A46F: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5883A472: pop edi
        __asm _emit 0x5F
        // 0x5883A473: pop esi
        __asm _emit 0x5E
        // 0x5883A474: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5883A477: cmp eax, 0x20a
        __asm _emit 0x3D
        __asm _emit 0x0A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A47C: jne 0x5883a4a2
        __asm _emit 0x75
        __asm _emit 0x24
        // 0x5883A47E: mov ecx, dword ptr [esi + 0x1d8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A484: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x5883A488: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x5883A48B: je 0x5883a4a2
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x5883A48D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5883A48F: cmp word ptr [edi + 0xa], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x47
        __asm _emit 0x0A
        // 0x5883A493: jle 0x5883a49a
        __asm _emit 0x7E
        __asm _emit 0x05
        // 0x5883A495: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A49A: push eax
        __asm _emit 0x50
        // 0x5883A49B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5883A49D: call 0x58839f30
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5883A4A2: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5883A4A5: pop edi
        __asm _emit 0x5F
        // 0x5883A4A6: pop esi
        __asm _emit 0x5E
        // 0x5883A4A7: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
