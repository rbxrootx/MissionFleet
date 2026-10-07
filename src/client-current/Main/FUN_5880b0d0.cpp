// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 876 bytes in 2 discontiguous ranges.
// Source symbol alias: FUN_5880b0d0.

// Ghidra body range 0x5880B0D0..0x5880B365; 661 mapped bytes.
extern "C" __declspec(naked) void FUN_5880b0d0_segment_00() {
    __asm {
        // 0x5880B0D0: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x5880B0D3: push ebx
        __asm _emit 0x53
        // 0x5880B0D4: push ebp
        __asm _emit 0x55
        // 0x5880B0D5: push esi
        __asm _emit 0x56
        // 0x5880B0D6: push edi
        __asm _emit 0x57
        // 0x5880B0D7: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5880B0D9: lea eax, [edi + 0x3c8]
        __asm _emit 0x8D
        __asm _emit 0x87
        __asm _emit 0xC8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B0DF: mov edx, 4
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B0E4: mov ecx, dword ptr [eax - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0xF0
        // 0x5880B0E7: mov esi, 0xfffe
        __asm _emit 0xBE
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B0EC: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        // 0x5880B0F0: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5880B0F2: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        // 0x5880B0F6: mov ecx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x5880B0F9: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        // 0x5880B0FD: mov ecx, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x20
        // 0x5880B100: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        // 0x5880B104: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x5880B107: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5880B10A: jne 0x5880b0e4
        __asm _emit 0x75
        __asm _emit 0xD8
        // 0x5880B10C: mov eax, dword ptr [edi + 0x3f8]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xF8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B112: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5880B114: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5880B118: lea ecx, [edi + 0x2f4]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B11E: mov edx, 0x20
        __asm _emit 0xBA
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B123: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5880B125: mov esi, 0xfffe
        __asm _emit 0xBE
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B12A: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        // 0x5880B12E: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5880B131: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5880B134: jne 0x5880b123
        __asm _emit 0x75
        __asm _emit 0xED
        // 0x5880B136: mov eax, dword ptr [0x58a24698]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880B13B: cmp dword ptr [eax + 0x164], 0x193
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B145: jle 0x5880b15d
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5880B147: cmp dword ptr [eax + 0x18c], edx
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B14D: je 0x5880b15d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5880B14F: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B155: mov eax, dword ptr [edx + 0x64c]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x4C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B15B: jmp 0x5880b15f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5880B15D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5880B15F: mov ecx, dword ptr [edi + 0x408]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B165: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5880B168: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880B16A: je 0x5880b194
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5880B16C: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5880B16F: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5880B172: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5880B175: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5880B178: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5880B17B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5880B17D: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5880B180: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5880B182: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5880B185: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5880B188: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5880B18B: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5880B18E: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5880B191: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5880B194: mov eax, dword ptr [0x58a24698]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880B199: cmp dword ptr [eax + 0x164], 0x194
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B1A3: jle 0x5880b1bc
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5880B1A5: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B1AC: je 0x5880b1bc
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5880B1AE: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B1B4: mov eax, dword ptr [ecx + 0x650]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x50
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B1BA: jmp 0x5880b1be
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5880B1BC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5880B1BE: mov ecx, dword ptr [edi + 0x40c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x0C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B1C4: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5880B1C7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880B1C9: je 0x5880b1f4
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x5880B1CB: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5880B1CE: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5880B1D1: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5880B1D4: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5880B1D7: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5880B1DA: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5880B1DD: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5880B1E0: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5880B1E2: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5880B1E5: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5880B1E8: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5880B1EB: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5880B1EE: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5880B1F1: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5880B1F4: mov eax, dword ptr [edi + 0x394]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B1FA: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5880B1FF: mov ecx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x08
        // 0x5880B202: add ecx, 0x7b
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x7B
        // 0x5880B205: push ecx
        __asm _emit 0x51
        // 0x5880B206: mov ecx, dword ptr [edi + 0x42c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x2C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B20C: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x81
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5880B211: mov eax, dword ptr [edi + 0x42c]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x2C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B217: mov ebp, 0xf
        __asm _emit 0xBD
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B21C: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x5880B220: mov eax, dword ptr [edi + 0x430]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B226: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x5880B22A: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5880B22C: cmp dword ptr [edi + 0xd0], esi
        __asm _emit 0x39
        __asm _emit 0xB7
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B232: mov dword ptr [edi + 0x6c], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x6C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B239: jle 0x5880b254
        __asm _emit 0x7E
        __asm _emit 0x19
        // 0x5880B23B: lea ebx, [edi + 0xd4]
        __asm _emit 0x8D
        __asm _emit 0x9F
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B241: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x5880B243: call 0x588c6510
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0xB2
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5880B248: inc esi
        __asm _emit 0x46
        // 0x5880B249: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x5880B24C: cmp esi, dword ptr [edi + 0xd0]
        __asm _emit 0x3B
        __asm _emit 0xB7
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B252: jl 0x5880b241
        __asm _emit 0x7C
        __asm _emit 0xED
        // 0x5880B254: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5880B256: cmp dword ptr [edi + 0x74], esi
        __asm _emit 0x39
        __asm _emit 0x77
        __asm _emit 0x74
        // 0x5880B259: jle 0x5880b271
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5880B25B: lea ebx, [edi + 0x2d4]
        __asm _emit 0x8D
        __asm _emit 0x9F
        __asm _emit 0xD4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B261: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x5880B263: call 0x588c6510
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0xB2
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5880B268: inc esi
        __asm _emit 0x46
        // 0x5880B269: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x5880B26C: cmp esi, dword ptr [edi + 0x74]
        __asm _emit 0x3B
        __asm _emit 0x77
        __asm _emit 0x74
        // 0x5880B26F: jl 0x5880b261
        __asm _emit 0x7C
        __asm _emit 0xF0
        // 0x5880B271: mov ecx, dword ptr [0x58a0b1c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5880B277: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5880B279: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5880B27B: test byte ptr [ecx + 0x64], 1
        __asm _emit 0xF6
        __asm _emit 0x41
        __asm _emit 0x64
        __asm _emit 0x01
        // 0x5880B27F: je 0x5880b28e
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x5880B281: mov eax, dword ptr [edi + 0x374]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B287: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x5880B28B: lea eax, [edx + 1]
        __asm _emit 0x8D
        __asm _emit 0x42
        __asm _emit 0x01
        // 0x5880B28E: mov ecx, dword ptr [0x58a0b1c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5880B294: test byte ptr [ecx + 0x64], 1
        __asm _emit 0xF6
        __asm _emit 0x41
        __asm _emit 0x64
        __asm _emit 0x01
        // 0x5880B298: je 0x5880b2a6
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5880B29A: mov ecx, dword ptr [edi + eax*4 + 0x374]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x87
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B2A1: or word ptr [ecx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x69
        __asm _emit 0x24
        // 0x5880B2A5: inc eax
        __asm _emit 0x40
        // 0x5880B2A6: mov ecx, dword ptr [0x58a0b1cc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xCC
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5880B2AC: test byte ptr [ecx + 0x64], 1
        __asm _emit 0xF6
        __asm _emit 0x41
        __asm _emit 0x64
        __asm _emit 0x01
        // 0x5880B2B0: je 0x5880b2be
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5880B2B2: mov ecx, dword ptr [edi + eax*4 + 0x374]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x87
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B2B9: or word ptr [ecx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x69
        __asm _emit 0x24
        // 0x5880B2BD: inc eax
        __asm _emit 0x40
        // 0x5880B2BE: mov ecx, dword ptr [0x58a0b1d0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xD0
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5880B2C4: test byte ptr [ecx + 0x64], 1
        __asm _emit 0xF6
        __asm _emit 0x41
        __asm _emit 0x64
        __asm _emit 0x01
        // 0x5880B2C8: je 0x5880b2d6
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5880B2CA: mov ecx, dword ptr [edi + eax*4 + 0x374]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x87
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B2D1: or word ptr [ecx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x69
        __asm _emit 0x24
        // 0x5880B2D5: inc eax
        __asm _emit 0x40
        // 0x5880B2D6: mov ecx, dword ptr [0x58a0b1d4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xD4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5880B2DC: test byte ptr [ecx + 0x64], 1
        __asm _emit 0xF6
        __asm _emit 0x41
        __asm _emit 0x64
        __asm _emit 0x01
        // 0x5880B2E0: je 0x5880b2ee
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5880B2E2: mov ecx, dword ptr [edi + eax*4 + 0x374]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x87
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B2E9: or word ptr [ecx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x69
        __asm _emit 0x24
        // 0x5880B2ED: inc eax
        __asm _emit 0x40
        // 0x5880B2EE: mov ecx, dword ptr [0x58a0b1d8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xD8
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5880B2F4: test byte ptr [ecx + 0x64], 1
        __asm _emit 0xF6
        __asm _emit 0x41
        __asm _emit 0x64
        __asm _emit 0x01
        // 0x5880B2F8: je 0x5880b306
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5880B2FA: mov ecx, dword ptr [edi + eax*4 + 0x374]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x87
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B301: or word ptr [ecx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x69
        __asm _emit 0x24
        // 0x5880B305: inc eax
        __asm _emit 0x40
        // 0x5880B306: mov ecx, dword ptr [0x58a0b1dc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xDC
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5880B30C: test byte ptr [ecx + 0x64], 1
        __asm _emit 0xF6
        __asm _emit 0x41
        __asm _emit 0x64
        __asm _emit 0x01
        // 0x5880B310: je 0x5880b31e
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5880B312: mov ecx, dword ptr [edi + eax*4 + 0x374]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x87
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B319: or word ptr [ecx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x69
        __asm _emit 0x24
        // 0x5880B31D: inc eax
        __asm _emit 0x40
        // 0x5880B31E: mov ecx, dword ptr [0x58a0b1e0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5880B324: test byte ptr [ecx + 0x64], 1
        __asm _emit 0xF6
        __asm _emit 0x41
        __asm _emit 0x64
        __asm _emit 0x01
        // 0x5880B328: je 0x5880b335
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5880B32A: mov eax, dword ptr [edi + eax*4 + 0x374]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B331: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x5880B335: mov eax, dword ptr [edi + 0x394]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B33B: mov ecx, dword ptr [edi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x70
        // 0x5880B33E: mov dword ptr [eax + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x5880B341: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880B346: mov esi, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x0C
        // 0x5880B349: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5880B34D: cmp esi, edx
        __asm _emit 0x3B
        __asm _emit 0xF2
        // 0x5880B34F: je 0x5880b422
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B355: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5880B359: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5880B35D: lea ebp, [edi + 0xd4]
        __asm _emit 0x8D
        __asm _emit 0xAF
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B363: jmp 0x5880b370
        __asm _emit 0xEB
        __asm _emit 0x0B
    }
}

// Ghidra body range 0x5880B370..0x5880B447; 215 mapped bytes.
extern "C" __declspec(naked) void FUN_5880b0d0_segment_01() {
    __asm {
        // 0x5880B370: movzx ecx, byte ptr [esi + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B377: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5880B379: jne 0x5880b417
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B37F: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880B385: mov eax, dword ptr [edx + 0x21f30]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x30
        __asm _emit 0x1F
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5880B38B: mov edx, dword ptr [esi + 0x126c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x6C
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B391: mov ecx, dword ptr [esi + 0x1278]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B397: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5880B399: push eax
        __asm _emit 0x50
        // 0x5880B39A: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5880B3A0: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5880B3A5: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x5880B3A7: mov eax, dword ptr [esi + 0x1288]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B3AD: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5880B3B3: push ecx
        __asm _emit 0x51
        // 0x5880B3B4: mov ecx, dword ptr [esi + 0x1284]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B3BA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880B3BC: shr edx, 5
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x5880B3BF: push edx
        __asm _emit 0x52
        // 0x5880B3C0: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5880B3C4: push eax
        __asm _emit 0x50
        // 0x5880B3C5: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5880B3CB: push ecx
        __asm _emit 0x51
        // 0x5880B3CC: mov ecx, dword ptr [esi + 0x12e8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B3D2: push edx
        __asm _emit 0x52
        // 0x5880B3D3: mov edx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x6C
        // 0x5880B3D6: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x5880B3D9: push ebx
        __asm _emit 0x53
        // 0x5880B3DA: lea eax, [esi + 0x3a0]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B3E0: push eax
        __asm _emit 0x50
        // 0x5880B3E1: push edx
        __asm _emit 0x52
        // 0x5880B3E2: call 0x588c66c0
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0xB2
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5880B3E7: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x5880B3EA: push 0xa
        __asm _emit 0x6A
        __asm _emit 0x0A
        // 0x5880B3EC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880B3EE: push ebx
        __asm _emit 0x53
        // 0x5880B3EF: call 0x588c6830
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0xB4
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5880B3F4: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x5880B3F7: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5880B3FB: lea edx, [eax + ecx + 0xab]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0xAB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B402: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x5880B405: push edx
        __asm _emit 0x52
        // 0x5880B406: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0x7F
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5880B40B: inc dword ptr [esp + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5880B40F: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x5880B412: add dword ptr [esp + 0x14], 0xe
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x0E
        // 0x5880B417: mov esi, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x78
        // 0x5880B41A: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5880B41C: jne 0x5880b370
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x4E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5880B422: mov eax, dword ptr [edi + 0x904]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x04
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B428: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B42D: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5880B431: mov edi, dword ptr [edi + 0x908]
        __asm _emit 0x8B
        __asm _emit 0xBF
        __asm _emit 0x08
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B437: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5880B439: and word ptr [edi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x57
        __asm _emit 0x24
        // 0x5880B43D: pop edi
        __asm _emit 0x5F
        // 0x5880B43E: pop esi
        __asm _emit 0x5E
        // 0x5880B43F: pop ebp
        __asm _emit 0x5D
        // 0x5880B440: pop ebx
        __asm _emit 0x5B
        // 0x5880B441: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5880B444: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
