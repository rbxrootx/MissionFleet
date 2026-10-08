// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 872 bytes in 2 exact ranges.
// Source symbol alias: FUN_5889d0a0.

// Ghidra body range 0x5889D0A0..0x5889D0F6; 86 mapped bytes.
extern "C" __declspec(naked) void FUN_5889d0a0_segment_00() {
    __asm {
        // 0x5889D0A0: cmp dword ptr [esp + 8], 2
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x02
        // 0x5889D0A5: push esi
        __asm _emit 0x56
        // 0x5889D0A6: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5889D0A8: jne 0x5889d1f6
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D0AE: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5889D0B2: push ebx
        __asm _emit 0x53
        // 0x5889D0B3: push edi
        __asm _emit 0x57
        // 0x5889D0B4: cmp eax, dword ptr [esi + 0xb80]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D0BA: jne 0x5889d1fc
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D0C0: mov al, byte ptr [esi + 0xb75]
        __asm _emit 0x8A
        __asm _emit 0x86
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D0C6: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5889D0C8: jbe 0x5889d1f4
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D0CE: movzx ecx, byte ptr [esi + 0xb74]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D0D5: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D0DA: sub al, bl
        __asm _emit 0x2A
        __asm _emit 0xC3
        // 0x5889D0DC: movzx edx, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD0
        // 0x5889D0DF: shl ecx, 5
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x05
        // 0x5889D0E2: mov byte ptr [esi + 0xb75], al
        __asm _emit 0x88
        __asm _emit 0x86
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D0E8: cmp byte ptr [ecx + edx + 0x589c90a1], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x11
        __asm _emit 0xA1
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5889D0F0: je 0x5889d133
        __asm _emit 0x74
        __asm _emit 0x41
        // 0x5889D0F2: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889D0F4: jmp 0x5889d100
        __asm _emit 0xEB
        __asm _emit 0x0A
    }
}

// Ghidra body range 0x5889D100..0x5889D412; 786 mapped bytes.
extern "C" __declspec(naked) void FUN_5889d0a0_segment_01() {
    __asm {
        // 0x5889D100: movzx eax, byte ptr [esi + 0xb74]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D107: movzx edx, byte ptr [esi + 0xb75]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x96
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D10E: shl eax, 5
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x05
        // 0x5889D111: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5889D113: lea eax, [ecx + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x41
        // 0x5889D116: cmp dword ptr [esi + eax*4 + 0x7c], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x00
        // 0x5889D11B: lea eax, [esi + eax*4 + 0x7c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x86
        __asm _emit 0x7C
        // 0x5889D11F: je 0x5889d12c
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5889D121: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x5889D123: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D128: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5889D12C: add ecx, ebx
        __asm _emit 0x03
        __asm _emit 0xCB
        // 0x5889D12E: cmp ecx, 2
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x5889D131: jl 0x5889d100
        __asm _emit 0x7C
        __asm _emit 0xCD
        // 0x5889D133: movzx eax, byte ptr [esi + 0xb74]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D13A: movzx ecx, byte ptr [esi + 0xb75]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D141: shl eax, 5
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x05
        // 0x5889D144: cmp byte ptr [eax + ecx + 0x589c90a0], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x08
        __asm _emit 0xA0
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5889D14C: je 0x5889d1c5
        __asm _emit 0x74
        __asm _emit 0x77
        // 0x5889D14E: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5889D150: movzx edx, byte ptr [esi + 0xb74]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x96
        __asm _emit 0x74
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D157: movzx eax, byte ptr [esi + 0xb75]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D15E: shl edx, 5
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x05
        // 0x5889D161: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x5889D163: lea ecx, [edi + edx*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x57
        // 0x5889D166: cmp dword ptr [esi + ecx*4 + 0x74], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x00
        // 0x5889D16B: lea eax, [esi + ecx*4 + 0x74]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x8E
        __asm _emit 0x74
        // 0x5889D16F: je 0x5889d1be
        __asm _emit 0x74
        __asm _emit 0x4D
        // 0x5889D171: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x5889D173: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x5889D177: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5889D179: jne 0x5889d199
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x5889D17B: movzx edx, byte ptr [esi + 0xb74]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x96
        __asm _emit 0x74
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D182: movzx eax, byte ptr [esi + 0xb75]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D189: shl edx, 5
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x05
        // 0x5889D18C: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x5889D18E: mov ecx, dword ptr [esi + edx*8 + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0xD6
        __asm _emit 0x74
        // 0x5889D192: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889D197: jmp 0x5889d1b9
        __asm _emit 0xEB
        __asm _emit 0x20
        // 0x5889D199: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x5889D19B: jne 0x5889d1be
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x5889D19D: movzx ecx, byte ptr [esi + 0xb74]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D1A4: movzx edx, byte ptr [esi + 0xb75]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x96
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D1AB: shl ecx, 5
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x05
        // 0x5889D1AE: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5889D1B0: mov ecx, dword ptr [esi + ecx*8 + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0xCE
        __asm _emit 0x78
        // 0x5889D1B4: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D1B9: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0x5B
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889D1BE: add edi, ebx
        __asm _emit 0x03
        __asm _emit 0xFB
        // 0x5889D1C0: cmp edi, 2
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x5889D1C3: jl 0x5889d150
        __asm _emit 0x7C
        __asm _emit 0x8B
        // 0x5889D1C5: mov dword ptr [esi + 0xb78], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D1CF: lea ecx, [esi + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5889D1D2: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D1D7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889D1D9: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x5889D1DD: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5889D1E0: sub edx, ebx
        __asm _emit 0x2B
        __asm _emit 0xD3
        // 0x5889D1E2: jne 0x5889d1d7
        __asm _emit 0x75
        __asm _emit 0xF3
        // 0x5889D1E4: mov eax, dword ptr [esi + 0xb88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D1EA: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889D1EC: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x5889D1EF: call 0x5889c880
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889D1F4: pop edi
        __asm _emit 0x5F
        // 0x5889D1F5: pop ebx
        __asm _emit 0x5B
        // 0x5889D1F6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889D1F8: pop esi
        __asm _emit 0x5E
        // 0x5889D1F9: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5889D1FC: cmp eax, dword ptr [esi + 0xb84]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D202: jne 0x5889d30c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D208: movzx ecx, byte ptr [esi + 0xb74]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D20F: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D214: add byte ptr [esi + 0xb75], bl
        __asm _emit 0x00
        __asm _emit 0x9E
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D21A: mov al, byte ptr [esi + 0xb75]
        __asm _emit 0x8A
        __asm _emit 0x86
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D220: movzx edx, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD0
        // 0x5889D223: shl ecx, 5
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x05
        // 0x5889D226: cmp byte ptr [ecx + edx + 0x589c909f], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x11
        __asm _emit 0x9F
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5889D22E: je 0x5889d265
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x5889D230: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889D232: movzx eax, byte ptr [esi + 0xb74]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D239: movzx edx, byte ptr [esi + 0xb75]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x96
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D240: shl eax, 5
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x05
        // 0x5889D243: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5889D245: lea eax, [ecx + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x41
        // 0x5889D248: cmp dword ptr [esi + eax*4 + 0x6c], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x00
        // 0x5889D24D: lea eax, [esi + eax*4 + 0x6c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x86
        __asm _emit 0x6C
        // 0x5889D251: je 0x5889d25e
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5889D253: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x5889D255: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D25A: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5889D25E: add ecx, ebx
        __asm _emit 0x03
        __asm _emit 0xCB
        // 0x5889D260: cmp ecx, 2
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x5889D263: jl 0x5889d232
        __asm _emit 0x7C
        __asm _emit 0xCD
        // 0x5889D265: movzx eax, byte ptr [esi + 0xb74]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D26C: movzx ecx, byte ptr [esi + 0xb75]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D273: shl eax, 5
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x05
        // 0x5889D276: cmp byte ptr [eax + ecx + 0x589c90a0], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x08
        __asm _emit 0xA0
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5889D27E: je 0x5889d2d5
        __asm _emit 0x74
        __asm _emit 0x55
        // 0x5889D280: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5889D282: movzx edx, byte ptr [esi + 0xb74]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x96
        __asm _emit 0x74
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D289: movzx eax, byte ptr [esi + 0xb75]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D290: shl edx, 5
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x05
        // 0x5889D293: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x5889D295: lea ecx, [edi + edx*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x57
        // 0x5889D298: cmp dword ptr [esi + ecx*4 + 0x74], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x00
        // 0x5889D29D: lea eax, [esi + ecx*4 + 0x74]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x8E
        __asm _emit 0x74
        // 0x5889D2A1: je 0x5889d2ce
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x5889D2A3: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x5889D2A5: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x5889D2A9: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5889D2AB: jne 0x5889d2ce
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x5889D2AD: movzx edx, byte ptr [esi + 0xb74]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x96
        __asm _emit 0x74
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D2B4: movzx eax, byte ptr [esi + 0xb75]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D2BB: shl edx, 5
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x05
        // 0x5889D2BE: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x5889D2C0: mov ecx, dword ptr [esi + edx*8 + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0xD6
        __asm _emit 0x74
        // 0x5889D2C4: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889D2C9: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0x5A
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889D2CE: add edi, ebx
        __asm _emit 0x03
        __asm _emit 0xFB
        // 0x5889D2D0: cmp edi, 2
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x5889D2D3: jl 0x5889d282
        __asm _emit 0x7C
        __asm _emit 0xAD
        // 0x5889D2D5: mov dword ptr [esi + 0xb78], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D2DF: lea ecx, [esi + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5889D2E2: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D2E7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889D2E9: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x5889D2ED: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5889D2F0: sub edx, ebx
        __asm _emit 0x2B
        __asm _emit 0xD3
        // 0x5889D2F2: jne 0x5889d2e7
        __asm _emit 0x75
        __asm _emit 0xF3
        // 0x5889D2F4: mov ecx, dword ptr [esi + 0xb88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D2FA: mov dword ptr [ecx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x50
        // 0x5889D2FD: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889D2FF: call 0x5889c880
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889D304: pop edi
        __asm _emit 0x5F
        // 0x5889D305: pop ebx
        __asm _emit 0x5B
        // 0x5889D306: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889D308: pop esi
        __asm _emit 0x5E
        // 0x5889D309: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5889D30C: cmp eax, dword ptr [esi + 0xb88]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D312: jne 0x5889d3f7
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xDF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D318: mov edx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x64
        // 0x5889D31B: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x5889D31F: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D324: test bl, al
        __asm _emit 0x84
        __asm _emit 0xC3
        // 0x5889D326: je 0x5889d350
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5889D328: movzx ecx, byte ptr [esi + 0xb74]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D32F: movzx edx, byte ptr [esi + 0xb75]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x96
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D336: shl ecx, 5
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x05
        // 0x5889D339: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5889D33B: mov eax, dword ptr [ecx*4 + 0x589c91c0]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x8D
        __asm _emit 0xC0
        __asm _emit 0x91
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889D342: pop edi
        __asm _emit 0x5F
        // 0x5889D343: mov dword ptr [esi + 0xb78], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D349: pop ebx
        __asm _emit 0x5B
        // 0x5889D34A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889D34C: pop esi
        __asm _emit 0x5E
        // 0x5889D34D: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5889D350: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5889D352: movzx ecx, byte ptr [esi + 0xb74]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D359: movzx edx, byte ptr [esi + 0xb75]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x96
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D360: shl ecx, 5
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x05
        // 0x5889D363: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5889D365: lea eax, [edi + ecx*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x4F
        // 0x5889D368: cmp dword ptr [esi + eax*4 + 0x74], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x00
        // 0x5889D36D: lea eax, [esi + eax*4 + 0x74]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x86
        __asm _emit 0x74
        // 0x5889D371: je 0x5889d3c9
        __asm _emit 0x74
        __asm _emit 0x56
        // 0x5889D373: cmp byte ptr [ecx + 0x589c90a0], 0
        __asm _emit 0x80
        __asm _emit 0xB9
        __asm _emit 0xA0
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5889D37A: je 0x5889d3c9
        __asm _emit 0x74
        __asm _emit 0x4D
        // 0x5889D37C: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x5889D37E: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x5889D382: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5889D384: jne 0x5889d3a4
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x5889D386: movzx ecx, byte ptr [esi + 0xb74]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D38D: movzx edx, byte ptr [esi + 0xb75]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x96
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D394: shl ecx, 5
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x05
        // 0x5889D397: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5889D399: mov ecx, dword ptr [esi + ecx*8 + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0xCE
        __asm _emit 0x74
        // 0x5889D39D: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889D3A2: jmp 0x5889d3c4
        __asm _emit 0xEB
        __asm _emit 0x20
        // 0x5889D3A4: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x5889D3A6: jne 0x5889d3c9
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x5889D3A8: movzx eax, byte ptr [esi + 0xb74]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D3AF: movzx ecx, byte ptr [esi + 0xb75]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D3B6: shl eax, 5
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x05
        // 0x5889D3B9: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x5889D3BB: mov ecx, dword ptr [esi + eax*8 + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0xC6
        __asm _emit 0x78
        // 0x5889D3BF: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D3C4: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0x59
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889D3C9: mov eax, dword ptr [esi + edi*4 + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0xBE
        __asm _emit 0x64
        // 0x5889D3CD: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x5889D3D1: add edi, ebx
        __asm _emit 0x03
        __asm _emit 0xFB
        // 0x5889D3D3: cmp edi, 2
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x5889D3D6: jl 0x5889d352
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x76
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889D3DC: mov edx, dword ptr [esi + 0xb88]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x88
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D3E2: pop edi
        __asm _emit 0x5F
        // 0x5889D3E3: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x5889D3E6: pop ebx
        __asm _emit 0x5B
        // 0x5889D3E7: mov dword ptr [esi + 0xb78], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D3F1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889D3F3: pop esi
        __asm _emit 0x5E
        // 0x5889D3F4: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5889D3F7: cmp eax, dword ptr [esi + 0xb7c]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D3FD: jne 0x5889d1f4
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF1
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889D403: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5889D405: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5889D408: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889D40A: pop edi
        __asm _emit 0x5F
        // 0x5889D40B: pop ebx
        __asm _emit 0x5B
        // 0x5889D40C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889D40E: pop esi
        __asm _emit 0x5E
        // 0x5889D40F: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
