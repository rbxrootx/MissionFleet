// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 237 bytes in 1 exact ranges.
// Source symbol alias: FUN_587cf0a0.

// Ghidra body range 0x587CF0A0..0x587CF18D; 237 mapped bytes.
extern "C" __declspec(naked) void FUN_587cf0a0_segment_00() {
    __asm {
        // 0x587CF0A0: movzx eax, word ptr [ecx + 0xa06]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x81
        __asm _emit 0x06
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF0A7: push esi
        __asm _emit 0x56
        // 0x587CF0A8: push edi
        __asm _emit 0x57
        // 0x587CF0A9: mov edi, dword ptr [eax*4 + 0x58a24860]
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CF0B0: cmp word ptr [edi + 2], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x02
        __asm _emit 0x03
        // 0x587CF0B5: jne 0x587cf0d3
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x587CF0B7: movzx esi, word ptr [edi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x37
        // 0x587CF0BA: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587CF0BC: mov eax, 0x589baab0
        __asm _emit 0xB8
        __asm _emit 0xB0
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x587CF0C1: cmp si, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x30
        // 0x587CF0C4: je 0x587cf0d8
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587CF0C6: add eax, 0xe84
        __asm _emit 0x05
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF0CB: inc edx
        __asm _emit 0x42
        // 0x587CF0CC: cmp eax, 0x589c2d54
        __asm _emit 0x3D
        __asm _emit 0x54
        __asm _emit 0x2D
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587CF0D1: jl 0x587cf0c1
        __asm _emit 0x7C
        __asm _emit 0xEE
        // 0x587CF0D3: pop edi
        __asm _emit 0x5F
        // 0x587CF0D4: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x587CF0D6: pop esi
        __asm _emit 0x5E
        // 0x587CF0D7: ret
        __asm _emit 0xC3
        // 0x587CF0D8: mov ax, word ptr [ecx + 0x94]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF0DF: imul edx, edx, 0xe84
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF0E5: mov dl, byte ptr [edx + 0x589baad5]
        __asm _emit 0x8A
        __asm _emit 0x92
        __asm _emit 0xD5
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x587CF0EB: imul ax, ax, 5
        __asm _emit 0x66
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x05
        // 0x587CF0EF: add ax, word ptr [ecx + 0x90]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF0F6: movzx esi, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xF0
        // 0x587CF0F9: movzx ax, dl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC2
        // 0x587CF0FD: cmp ax, si
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x587CF100: jne 0x587cf132
        __asm _emit 0x75
        __asm _emit 0x30
        // 0x587CF102: movzx edx, dl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD2
        // 0x587CF105: cmp byte ptr [edx + edi + 0xfb], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x3A
        __asm _emit 0xFB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF10D: lea eax, [edx + edi]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x3A
        // 0x587CF110: jne 0x587cf12d
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x587CF112: cmp byte ptr [eax + 0xfd], 0
        __asm _emit 0x80
        __asm _emit 0xB8
        __asm _emit 0xFD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF119: jne 0x587cf12d
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x587CF11B: cmp byte ptr [eax + 0xf7], 0
        __asm _emit 0x80
        __asm _emit 0xB8
        __asm _emit 0xF7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF122: jne 0x587cf12d
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x587CF124: cmp byte ptr [eax + 0x101], 0
        __asm _emit 0x80
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF12B: je 0x587cf132
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587CF12D: pop edi
        __asm _emit 0x5F
        // 0x587CF12E: mov al, 3
        __asm _emit 0xB0
        __asm _emit 0x03
        // 0x587CF130: pop esi
        __asm _emit 0x5E
        // 0x587CF131: ret
        __asm _emit 0xC3
        // 0x587CF132: mov edx, dword ptr [ecx + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF138: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587CF13A: jne 0x587cf141
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587CF13C: pop edi
        __asm _emit 0x5F
        // 0x587CF13D: mov al, 2
        __asm _emit 0xB0
        __asm _emit 0x02
        // 0x587CF13F: pop esi
        __asm _emit 0x5E
        // 0x587CF140: ret
        __asm _emit 0xC3
        // 0x587CF141: mov eax, dword ptr [ecx + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF147: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587CF149: je 0x587cf158
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587CF14B: movzx ecx, si
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xCE
        // 0x587CF14E: cmp byte ptr [ecx + edi + 0xf7], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x39
        __asm _emit 0xF7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF156: jne 0x587cf13c
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x587CF158: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x587CF15B: je 0x587cf16a
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587CF15D: movzx eax, si
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC6
        // 0x587CF160: cmp byte ptr [eax + edi + 0x101], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF168: jne 0x587cf13c
        __asm _emit 0x75
        __asm _emit 0xD2
        // 0x587CF16A: movzx ecx, si
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xCE
        // 0x587CF16D: cmp byte ptr [ecx + edi + 0xfb], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x39
        __asm _emit 0xFB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF175: lea eax, [ecx + edi]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x39
        // 0x587CF178: jne 0x587cf13c
        __asm _emit 0x75
        __asm _emit 0xC2
        // 0x587CF17A: cmp edx, 4
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x587CF17D: je 0x587cf188
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587CF17F: cmp byte ptr [eax + 0xfd], 0
        __asm _emit 0x80
        __asm _emit 0xB8
        __asm _emit 0xFD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF186: jne 0x587cf13c
        __asm _emit 0x75
        __asm _emit 0xB4
        // 0x587CF188: pop edi
        __asm _emit 0x5F
        // 0x587CF189: mov al, 4
        __asm _emit 0xB0
        __asm _emit 0x04
        // 0x587CF18B: pop esi
        __asm _emit 0x5E
        // 0x587CF18C: ret
        __asm _emit 0xC3
    }
}
