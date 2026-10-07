// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 221 bytes in 1 exact ranges.
// Source symbol alias: FUN_587cf370.

// Ghidra body range 0x587CF370..0x587CF44D; 221 mapped bytes.
extern "C" __declspec(naked) void FUN_587cf370_segment_00() {
    __asm {
        // 0x587CF370: movzx eax, word ptr [ecx + 0xa06]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x81
        __asm _emit 0x06
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF377: push esi
        __asm _emit 0x56
        // 0x587CF378: mov esi, dword ptr [eax*4 + 0x58a24860]
        __asm _emit 0x8B
        __asm _emit 0x34
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CF37F: cmp word ptr [esi + 2], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x02
        __asm _emit 0x03
        // 0x587CF384: push edi
        __asm _emit 0x57
        // 0x587CF385: jne 0x587cf3a3
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x587CF387: movzx edi, word ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x3E
        // 0x587CF38A: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587CF38C: mov eax, 0x589baab0
        __asm _emit 0xB8
        __asm _emit 0xB0
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x587CF391: cmp di, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x38
        // 0x587CF394: je 0x587cf3a8
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587CF396: add eax, 0xe84
        __asm _emit 0x05
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF39B: inc edx
        __asm _emit 0x42
        // 0x587CF39C: cmp eax, 0x589c2d54
        __asm _emit 0x3D
        __asm _emit 0x54
        __asm _emit 0x2D
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587CF3A1: jl 0x587cf391
        __asm _emit 0x7C
        __asm _emit 0xEE
        // 0x587CF3A3: pop edi
        __asm _emit 0x5F
        // 0x587CF3A4: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x587CF3A6: pop esi
        __asm _emit 0x5E
        // 0x587CF3A7: ret
        __asm _emit 0xC3
        // 0x587CF3A8: mov ax, word ptr [ecx + 0x94]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF3AF: imul edx, edx, 0xe84
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF3B5: mov dl, byte ptr [edx + 0x589baad5]
        __asm _emit 0x8A
        __asm _emit 0x92
        __asm _emit 0xD5
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x587CF3BB: imul ax, ax, 5
        __asm _emit 0x66
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x05
        // 0x587CF3BF: add ax, word ptr [ecx + 0x90]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF3C6: movzx di, dl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xFA
        // 0x587CF3CA: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x587CF3CD: cmp di, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x587CF3D0: jne 0x587cf3ee
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x587CF3D2: movzx edx, dl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD2
        // 0x587CF3D5: add edx, esi
        __asm _emit 0x03
        __asm _emit 0xD6
        // 0x587CF3D7: cmp byte ptr [edx + 0xf7], 0
        __asm _emit 0x80
        __asm _emit 0xBA
        __asm _emit 0xF7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF3DE: jne 0x587cf3e9
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x587CF3E0: cmp byte ptr [edx + 0xfd], 0
        __asm _emit 0x80
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF3E7: je 0x587cf3ee
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587CF3E9: pop edi
        __asm _emit 0x5F
        // 0x587CF3EA: mov al, 3
        __asm _emit 0xB0
        __asm _emit 0x03
        // 0x587CF3EC: pop esi
        __asm _emit 0x5E
        // 0x587CF3ED: ret
        __asm _emit 0xC3
        // 0x587CF3EE: mov edx, dword ptr [ecx + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF3F4: cmp edx, 4
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x587CF3F7: jne 0x587cf3fe
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587CF3F9: pop edi
        __asm _emit 0x5F
        // 0x587CF3FA: mov al, 2
        __asm _emit 0xB0
        __asm _emit 0x02
        // 0x587CF3FC: pop esi
        __asm _emit 0x5E
        // 0x587CF3FD: ret
        __asm _emit 0xC3
        // 0x587CF3FE: mov ecx, dword ptr [ecx + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF404: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587CF406: je 0x587cf415
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587CF408: movzx edi, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xF8
        // 0x587CF40B: cmp byte ptr [edi + esi + 0xf7], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x37
        __asm _emit 0xF7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF413: jne 0x587cf3f9
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x587CF415: cmp ecx, 4
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x04
        // 0x587CF418: je 0x587cf427
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587CF41A: movzx ecx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC8
        // 0x587CF41D: cmp byte ptr [ecx + esi + 0x101], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF425: jne 0x587cf3f9
        __asm _emit 0x75
        __asm _emit 0xD2
        // 0x587CF427: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587CF429: je 0x587cf438
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587CF42B: movzx edx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD0
        // 0x587CF42E: cmp byte ptr [edx + esi + 0xfb], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x32
        __asm _emit 0xFB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF436: jne 0x587cf3f9
        __asm _emit 0x75
        __asm _emit 0xC1
        // 0x587CF438: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x587CF43B: cmp byte ptr [eax + esi + 0xfd], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x30
        __asm _emit 0xFD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF443: pop edi
        __asm _emit 0x5F
        // 0x587CF444: sete al
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC0
        // 0x587CF447: pop esi
        __asm _emit 0x5E
        // 0x587CF448: lea eax, [eax + eax + 2]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x587CF44C: ret
        __asm _emit 0xC3
    }
}
