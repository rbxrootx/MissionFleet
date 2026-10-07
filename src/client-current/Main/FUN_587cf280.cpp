// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 232 bytes in 1 exact ranges.
// Source symbol alias: FUN_587cf280.

// Ghidra body range 0x587CF280..0x587CF368; 232 mapped bytes.
extern "C" __declspec(naked) void FUN_587cf280_segment_00() {
    __asm {
        // 0x587CF280: movzx eax, word ptr [ecx + 0xa06]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x81
        __asm _emit 0x06
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF287: push esi
        __asm _emit 0x56
        // 0x587CF288: push edi
        __asm _emit 0x57
        // 0x587CF289: mov edi, dword ptr [eax*4 + 0x58a24860]
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CF290: cmp word ptr [edi + 2], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x02
        __asm _emit 0x03
        // 0x587CF295: jne 0x587cf2b3
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x587CF297: movzx esi, word ptr [edi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x37
        // 0x587CF29A: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587CF29C: mov eax, 0x589baab0
        __asm _emit 0xB8
        __asm _emit 0xB0
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x587CF2A1: cmp si, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x30
        // 0x587CF2A4: je 0x587cf2b8
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587CF2A6: add eax, 0xe84
        __asm _emit 0x05
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF2AB: inc edx
        __asm _emit 0x42
        // 0x587CF2AC: cmp eax, 0x589c2d54
        __asm _emit 0x3D
        __asm _emit 0x54
        __asm _emit 0x2D
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587CF2B1: jl 0x587cf2a1
        __asm _emit 0x7C
        __asm _emit 0xEE
        // 0x587CF2B3: pop edi
        __asm _emit 0x5F
        // 0x587CF2B4: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x587CF2B6: pop esi
        __asm _emit 0x5E
        // 0x587CF2B7: ret
        __asm _emit 0xC3
        // 0x587CF2B8: mov ax, word ptr [ecx + 0x94]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF2BF: imul edx, edx, 0xe84
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF2C5: mov dl, byte ptr [edx + 0x589baad5]
        __asm _emit 0x8A
        __asm _emit 0x92
        __asm _emit 0xD5
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x587CF2CB: imul ax, ax, 5
        __asm _emit 0x66
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x05
        // 0x587CF2CF: add ax, word ptr [ecx + 0x90]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF2D6: movzx esi, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xF0
        // 0x587CF2D9: movzx ax, dl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC2
        // 0x587CF2DD: cmp ax, si
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x587CF2E0: jne 0x587cf309
        __asm _emit 0x75
        __asm _emit 0x27
        // 0x587CF2E2: movzx edx, dl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD2
        // 0x587CF2E5: cmp byte ptr [edx + edi + 0xf7], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x3A
        __asm _emit 0xF7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF2ED: lea eax, [edx + edi]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x3A
        // 0x587CF2F0: jne 0x587cf304
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x587CF2F2: cmp byte ptr [eax + 0x101], 0
        __asm _emit 0x80
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF2F9: jne 0x587cf304
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x587CF2FB: cmp byte ptr [eax + 0xfd], 0
        __asm _emit 0x80
        __asm _emit 0xB8
        __asm _emit 0xFD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF302: je 0x587cf309
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587CF304: pop edi
        __asm _emit 0x5F
        // 0x587CF305: mov al, 3
        __asm _emit 0xB0
        __asm _emit 0x03
        // 0x587CF307: pop esi
        __asm _emit 0x5E
        // 0x587CF308: ret
        __asm _emit 0xC3
        // 0x587CF309: mov edx, dword ptr [ecx + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF30F: cmp edx, 4
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x587CF312: jne 0x587cf319
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587CF314: pop edi
        __asm _emit 0x5F
        // 0x587CF315: mov al, 2
        __asm _emit 0xB0
        __asm _emit 0x02
        // 0x587CF317: pop esi
        __asm _emit 0x5E
        // 0x587CF318: ret
        __asm _emit 0xC3
        // 0x587CF319: mov eax, dword ptr [ecx + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF31F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587CF321: je 0x587cf330
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587CF323: movzx ecx, si
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xCE
        // 0x587CF326: cmp byte ptr [ecx + edi + 0xf7], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x39
        __asm _emit 0xF7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF32E: jne 0x587cf314
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x587CF330: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x587CF333: je 0x587cf342
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587CF335: movzx eax, si
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC6
        // 0x587CF338: cmp byte ptr [eax + edi + 0x101], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF340: jne 0x587cf314
        __asm _emit 0x75
        __asm _emit 0xD2
        // 0x587CF342: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587CF344: je 0x587cf353
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587CF346: movzx ecx, si
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xCE
        // 0x587CF349: cmp byte ptr [ecx + edi + 0xfb], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x39
        __asm _emit 0xFB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF351: jne 0x587cf314
        __asm _emit 0x75
        __asm _emit 0xC1
        // 0x587CF353: movzx edx, si
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD6
        // 0x587CF356: cmp byte ptr [edx + edi + 0xfd], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x3A
        __asm _emit 0xFD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF35E: pop edi
        __asm _emit 0x5F
        // 0x587CF35F: sete al
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC0
        // 0x587CF362: pop esi
        __asm _emit 0x5E
        // 0x587CF363: lea eax, [eax + eax + 2]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x587CF367: ret
        __asm _emit 0xC3
    }
}
