// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 233 bytes in 1 exact ranges.
// Source symbol alias: FUN_587cf190.

// Ghidra body range 0x587CF190..0x587CF279; 233 mapped bytes.
extern "C" __declspec(naked) void FUN_587cf190_segment_00() {
    __asm {
        // 0x587CF190: movzx eax, word ptr [ecx + 0xa06]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x81
        __asm _emit 0x06
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF197: push esi
        __asm _emit 0x56
        // 0x587CF198: push edi
        __asm _emit 0x57
        // 0x587CF199: mov edi, dword ptr [eax*4 + 0x58a24860]
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CF1A0: cmp word ptr [edi + 2], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x02
        __asm _emit 0x03
        // 0x587CF1A5: jne 0x587cf1c3
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x587CF1A7: movzx esi, word ptr [edi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x37
        // 0x587CF1AA: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587CF1AC: mov eax, 0x589baab0
        __asm _emit 0xB8
        __asm _emit 0xB0
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x587CF1B1: cmp si, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x30
        // 0x587CF1B4: je 0x587cf1c8
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587CF1B6: add eax, 0xe84
        __asm _emit 0x05
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF1BB: inc edx
        __asm _emit 0x42
        // 0x587CF1BC: cmp eax, 0x589c2d54
        __asm _emit 0x3D
        __asm _emit 0x54
        __asm _emit 0x2D
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587CF1C1: jl 0x587cf1b1
        __asm _emit 0x7C
        __asm _emit 0xEE
        // 0x587CF1C3: pop edi
        __asm _emit 0x5F
        // 0x587CF1C4: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x587CF1C6: pop esi
        __asm _emit 0x5E
        // 0x587CF1C7: ret
        __asm _emit 0xC3
        // 0x587CF1C8: mov ax, word ptr [ecx + 0x94]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF1CF: imul edx, edx, 0xe84
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF1D5: mov dl, byte ptr [edx + 0x589baad5]
        __asm _emit 0x8A
        __asm _emit 0x92
        __asm _emit 0xD5
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x587CF1DB: imul ax, ax, 5
        __asm _emit 0x66
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x05
        // 0x587CF1DF: add ax, word ptr [ecx + 0x90]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF1E6: movzx esi, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xF0
        // 0x587CF1E9: movzx ax, dl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC2
        // 0x587CF1ED: cmp ax, si
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x587CF1F0: jne 0x587cf222
        __asm _emit 0x75
        __asm _emit 0x30
        // 0x587CF1F2: movzx edx, dl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD2
        // 0x587CF1F5: cmp byte ptr [edx + edi + 0xfb], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x3A
        __asm _emit 0xFB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF1FD: lea eax, [edx + edi]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x3A
        // 0x587CF200: jne 0x587cf21d
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x587CF202: cmp byte ptr [eax + 0xfd], 0
        __asm _emit 0x80
        __asm _emit 0xB8
        __asm _emit 0xFD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF209: jne 0x587cf21d
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x587CF20B: cmp byte ptr [eax + 0xf7], 0
        __asm _emit 0x80
        __asm _emit 0xB8
        __asm _emit 0xF7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF212: jne 0x587cf21d
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x587CF214: cmp byte ptr [eax + 0x101], 0
        __asm _emit 0x80
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF21B: je 0x587cf222
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587CF21D: pop edi
        __asm _emit 0x5F
        // 0x587CF21E: mov al, 3
        __asm _emit 0xB0
        __asm _emit 0x03
        // 0x587CF220: pop esi
        __asm _emit 0x5E
        // 0x587CF221: ret
        __asm _emit 0xC3
        // 0x587CF222: mov eax, dword ptr [ecx + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF228: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x587CF22B: jne 0x587cf232
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587CF22D: pop edi
        __asm _emit 0x5F
        // 0x587CF22E: mov al, 2
        __asm _emit 0xB0
        __asm _emit 0x02
        // 0x587CF230: pop esi
        __asm _emit 0x5E
        // 0x587CF231: ret
        __asm _emit 0xC3
        // 0x587CF232: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587CF234: je 0x587cf243
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587CF236: movzx eax, si
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC6
        // 0x587CF239: cmp byte ptr [eax + edi + 0xf7], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x38
        __asm _emit 0xF7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF241: jne 0x587cf22d
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x587CF243: movzx edx, si
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD6
        // 0x587CF246: cmp byte ptr [edx + edi + 0x101], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x3A
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF24E: lea eax, [edx + edi]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x3A
        // 0x587CF251: jne 0x587cf22d
        __asm _emit 0x75
        __asm _emit 0xDA
        // 0x587CF253: mov ecx, dword ptr [ecx + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF259: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587CF25B: je 0x587cf266
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587CF25D: cmp byte ptr [eax + 0xfb], 0
        __asm _emit 0x80
        __asm _emit 0xB8
        __asm _emit 0xFB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF264: jne 0x587cf22d
        __asm _emit 0x75
        __asm _emit 0xC7
        // 0x587CF266: cmp ecx, 4
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x04
        // 0x587CF269: je 0x587cf274
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587CF26B: cmp byte ptr [eax + 0xfd], 0
        __asm _emit 0x80
        __asm _emit 0xB8
        __asm _emit 0xFD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF272: jne 0x587cf22d
        __asm _emit 0x75
        __asm _emit 0xB9
        // 0x587CF274: pop edi
        __asm _emit 0x5F
        // 0x587CF275: mov al, 4
        __asm _emit 0xB0
        __asm _emit 0x04
        // 0x587CF277: pop esi
        __asm _emit 0x5E
        // 0x587CF278: ret
        __asm _emit 0xC3
    }
}
