// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 218 bytes in 1 exact ranges.
// Source symbol alias: FUN_587cf450.

// Ghidra body range 0x587CF450..0x587CF52A; 218 mapped bytes.
extern "C" __declspec(naked) void FUN_587cf450_segment_00() {
    __asm {
        // 0x587CF450: movzx eax, word ptr [ecx + 0xa06]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x81
        __asm _emit 0x06
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF457: push esi
        __asm _emit 0x56
        // 0x587CF458: push edi
        __asm _emit 0x57
        // 0x587CF459: mov edi, dword ptr [eax*4 + 0x58a24860]
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CF460: cmp word ptr [edi + 2], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x02
        __asm _emit 0x03
        // 0x587CF465: jne 0x587cf483
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x587CF467: movzx esi, word ptr [edi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x37
        // 0x587CF46A: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587CF46C: mov eax, 0x589baab0
        __asm _emit 0xB8
        __asm _emit 0xB0
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x587CF471: cmp si, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x30
        // 0x587CF474: je 0x587cf488
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587CF476: add eax, 0xe84
        __asm _emit 0x05
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF47B: inc edx
        __asm _emit 0x42
        // 0x587CF47C: cmp eax, 0x589c2d54
        __asm _emit 0x3D
        __asm _emit 0x54
        __asm _emit 0x2D
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587CF481: jl 0x587cf471
        __asm _emit 0x7C
        __asm _emit 0xEE
        // 0x587CF483: pop edi
        __asm _emit 0x5F
        // 0x587CF484: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x587CF486: pop esi
        __asm _emit 0x5E
        // 0x587CF487: ret
        __asm _emit 0xC3
        // 0x587CF488: mov ax, word ptr [ecx + 0x94]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF48F: imul edx, edx, 0xe84
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF495: mov dl, byte ptr [edx + 0x589baad5]
        __asm _emit 0x8A
        __asm _emit 0x92
        __asm _emit 0xD5
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x587CF49B: imul ax, ax, 5
        __asm _emit 0x66
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x05
        // 0x587CF49F: add ax, word ptr [ecx + 0x90]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF4A6: movzx esi, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xF0
        // 0x587CF4A9: movzx ax, dl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC2
        // 0x587CF4AD: cmp ax, si
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x587CF4B0: jne 0x587cf4d9
        __asm _emit 0x75
        __asm _emit 0x27
        // 0x587CF4B2: movzx edx, dl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD2
        // 0x587CF4B5: cmp byte ptr [edx + edi + 0xfb], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x3A
        __asm _emit 0xFB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF4BD: lea eax, [edx + edi]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x3A
        // 0x587CF4C0: jne 0x587cf4d4
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x587CF4C2: cmp byte ptr [eax + 0xfd], 0
        __asm _emit 0x80
        __asm _emit 0xB8
        __asm _emit 0xFD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF4C9: jne 0x587cf4d4
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x587CF4CB: cmp byte ptr [eax + 0xf7], 0
        __asm _emit 0x80
        __asm _emit 0xB8
        __asm _emit 0xF7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF4D2: je 0x587cf4d9
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587CF4D4: pop edi
        __asm _emit 0x5F
        // 0x587CF4D5: mov al, 3
        __asm _emit 0xB0
        __asm _emit 0x03
        // 0x587CF4D7: pop esi
        __asm _emit 0x5E
        // 0x587CF4D8: ret
        __asm _emit 0xC3
        // 0x587CF4D9: mov edx, dword ptr [ecx + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF4DF: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587CF4E1: jne 0x587cf4e8
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587CF4E3: pop edi
        __asm _emit 0x5F
        // 0x587CF4E4: mov al, 2
        __asm _emit 0xB0
        __asm _emit 0x02
        // 0x587CF4E6: pop esi
        __asm _emit 0x5E
        // 0x587CF4E7: ret
        __asm _emit 0xC3
        // 0x587CF4E8: movzx eax, si
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC6
        // 0x587CF4EB: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x587CF4ED: cmp byte ptr [eax + 0xf7], 0
        __asm _emit 0x80
        __asm _emit 0xB8
        __asm _emit 0xF7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF4F4: jne 0x587cf4e3
        __asm _emit 0x75
        __asm _emit 0xED
        // 0x587CF4F6: cmp edx, 4
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x587CF4F9: je 0x587cf504
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587CF4FB: cmp byte ptr [eax + 0x101], 0
        __asm _emit 0x80
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF502: jne 0x587cf4e3
        __asm _emit 0x75
        __asm _emit 0xDF
        // 0x587CF504: mov ecx, dword ptr [ecx + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF50A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587CF50C: je 0x587cf517
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587CF50E: cmp byte ptr [eax + 0xfb], 0
        __asm _emit 0x80
        __asm _emit 0xB8
        __asm _emit 0xFB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF515: jne 0x587cf4e3
        __asm _emit 0x75
        __asm _emit 0xCC
        // 0x587CF517: cmp ecx, 4
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x04
        // 0x587CF51A: je 0x587cf525
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587CF51C: cmp byte ptr [eax + 0xfd], 0
        __asm _emit 0x80
        __asm _emit 0xB8
        __asm _emit 0xFD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF523: jne 0x587cf4e3
        __asm _emit 0x75
        __asm _emit 0xBE
        // 0x587CF525: pop edi
        __asm _emit 0x5F
        // 0x587CF526: mov al, 4
        __asm _emit 0xB0
        __asm _emit 0x04
        // 0x587CF528: pop esi
        __asm _emit 0x5E
        // 0x587CF529: ret
        __asm _emit 0xC3
    }
}
