// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1254 bytes in 4 exact ranges.
// Source symbol alias: FUN_5889d5f0.

// Ghidra body range 0x5889D5F0..0x5889D646; 86 mapped bytes.
extern "C" __declspec(naked) void FUN_5889d5f0_segment_00() {
    __asm {
        // 0x5889D5F0: push esi
        __asm _emit 0x56
        // 0x5889D5F1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5889D5F3: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5889D5F7: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x5889D5F9: je 0x5889dae7
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D5FF: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5889D603: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D608: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5889D60B: mov eax, 0x200
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D610: push edi
        __asm _emit 0x57
        // 0x5889D611: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5889D614: jne 0x5889da43
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x29
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D61A: cmp byte ptr [esi + 0xb74], 0
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0x74
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D621: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889D623: je 0x5889d9db
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D629: push ebx
        __asm _emit 0x53
        // 0x5889D62A: call 0x5889d420
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889D62F: mov cl, byte ptr [esi + 0xb74]
        __asm _emit 0x8A
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D635: mov bl, al
        __asm _emit 0x8A
        __asm _emit 0xD8
        // 0x5889D637: cmp bl, cl
        __asm _emit 0x3A
        __asm _emit 0xD9
        // 0x5889D639: je 0x5889d798
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D63F: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889D641: lea edi, [ecx + 1]
        __asm _emit 0x8D
        __asm _emit 0x79
        __asm _emit 0x01
        // 0x5889D644: jmp 0x5889d650
        __asm _emit 0xEB
        __asm _emit 0x0A
    }
}

// Ghidra body range 0x5889D650..0x5889D709; 185 mapped bytes.
extern "C" __declspec(naked) void FUN_5889d5f0_segment_01() {
    __asm {
        // 0x5889D650: movzx edx, byte ptr [esi + 0xb74]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x96
        __asm _emit 0x74
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D657: movzx eax, byte ptr [esi + 0xb75]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D65E: shl edx, 5
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x05
        // 0x5889D661: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x5889D663: lea edx, [ecx + edx*2]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x51
        // 0x5889D666: cmp dword ptr [esi + edx*4 + 0x74], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x96
        __asm _emit 0x74
        __asm _emit 0x00
        // 0x5889D66B: lea eax, [esi + edx*4 + 0x74]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x96
        __asm _emit 0x74
        // 0x5889D66F: je 0x5889d67c
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5889D671: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x5889D673: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D678: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5889D67C: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xCF
        // 0x5889D67E: cmp ecx, 2
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x5889D681: jl 0x5889d650
        __asm _emit 0x7C
        __asm _emit 0xCD
        // 0x5889D683: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889D685: mov byte ptr [esi + 0xb75], 0
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D68C: mov byte ptr [esi + 0xb74], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0x74
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D692: mov dword ptr [esi + 0xb78], 0
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
        // 0x5889D69C: call 0x5889c880
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889D6A1: mov cl, byte ptr [esi + 0xb74]
        __asm _emit 0x8A
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D6A7: cmp cl, 3
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x03
        // 0x5889D6AA: jne 0x5889d6ee
        __asm _emit 0x75
        __asm _emit 0x42
        // 0x5889D6AC: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xA1
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889D6B1: mov eax, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x30
        // 0x5889D6B4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889D6B6: je 0x5889d6e7
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x5889D6B8: cmp dword ptr [eax + 0xccc], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xCC
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D6BF: je 0x5889d6e7
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x5889D6C1: cmp dword ptr [eax + 0xcc8], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xC8
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D6C8: je 0x5889d6e7
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x5889D6CA: cmp dword ptr [eax + 0x9a4], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D6D1: je 0x5889d6e7
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x5889D6D3: mov edx, dword ptr [eax + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x4C
        // 0x5889D6D6: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5889D6DC: jne 0x5889d6ee
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x5889D6DE: add byte ptr [esi + 0xb75], 7
        __asm _emit 0x80
        __asm _emit 0x86
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x5889D6E5: jmp 0x5889d6ee
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x5889D6E7: add byte ptr [esi + 0xb75], 5
        __asm _emit 0x80
        __asm _emit 0x86
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        // 0x5889D6EE: movzx eax, cl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC1
        // 0x5889D6F1: movzx ecx, byte ptr [esi + 0xb75]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D6F8: shl eax, 5
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x05
        // 0x5889D6FB: cmp byte ptr [eax + ecx + 0x589c90a0], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x08
        __asm _emit 0xA0
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5889D703: jbe 0x5889d73e
        __asm _emit 0x76
        __asm _emit 0x39
        // 0x5889D705: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889D707: jmp 0x5889d710
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x5889D710..0x5889D7DA; 202 mapped bytes.
extern "C" __declspec(naked) void FUN_5889d5f0_segment_02() {
    __asm {
        // 0x5889D710: movzx edx, byte ptr [esi + 0xb74]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x96
        __asm _emit 0x74
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D717: movzx eax, byte ptr [esi + 0xb75]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D71E: shl edx, 5
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x05
        // 0x5889D721: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x5889D723: lea edx, [ecx + edx*2]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x51
        // 0x5889D726: cmp dword ptr [esi + edx*4 + 0x74], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x96
        __asm _emit 0x74
        __asm _emit 0x00
        // 0x5889D72B: lea eax, [esi + edx*4 + 0x74]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x96
        __asm _emit 0x74
        // 0x5889D72F: je 0x5889d737
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5889D731: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x5889D733: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x5889D737: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xCF
        // 0x5889D739: cmp ecx, 2
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x5889D73C: jl 0x5889d710
        __asm _emit 0x7C
        __asm _emit 0xD2
        // 0x5889D73E: cmp byte ptr [esi + 0xb74], 4
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0x74
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x5889D745: jne 0x5889d762
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x5889D747: mov eax, dword ptr [0x58a245a0]
        __asm _emit 0xA1
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889D74C: mov edi, dword ptr [eax + 0xa00]
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D752: push esi
        __asm _emit 0x56
        // 0x5889D753: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5889D755: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0x57
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889D75A: push esi
        __asm _emit 0x56
        // 0x5889D75B: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5889D75D: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0x57
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889D762: cmp bl, 2
        __asm _emit 0x80
        __asm _emit 0xFB
        __asm _emit 0x02
        // 0x5889D765: jne 0x5889d782
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x5889D767: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5889D76B: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x5889D76E: je 0x5889d944
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D774: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D779: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5889D77D: jmp 0x5889d944
        __asm _emit 0xE9
        __asm _emit 0xC2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D782: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5889D786: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x5889D788: jne 0x5889d944
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D78E: or word ptr [esi + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5889D793: jmp 0x5889d944
        __asm _emit 0xE9
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D798: movzx edx, byte ptr [esi + 0xb75]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x96
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D79F: inc dword ptr [esi + 0xb78]
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D7A5: mov eax, dword ptr [esi + 0xb78]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D7AB: movzx ecx, cl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC9
        // 0x5889D7AE: shl ecx, 5
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x05
        // 0x5889D7B1: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5889D7B3: mov ecx, dword ptr [ecx*4 + 0x589c91c0]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x8D
        __asm _emit 0xC0
        __asm _emit 0x91
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889D7BA: push ebp
        __asm _emit 0x55
        // 0x5889D7BB: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5889D7BD: jb 0x5889d864
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D7C3: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5889D7C6: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5889D7CA: lea ebp, [esi + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x6E
        __asm _emit 0x64
        // 0x5889D7CD: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x5889D7D0: je 0x5889d943
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x6D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D7D6: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5889D7D8: jmp 0x5889d7e0
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x5889D7E0..0x5889DAED; 781 mapped bytes.
extern "C" __declspec(naked) void FUN_5889d5f0_segment_03() {
    __asm {
        // 0x5889D7E0: movzx edx, byte ptr [esi + 0xb74]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x96
        __asm _emit 0x74
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D7E7: movzx eax, byte ptr [esi + 0xb75]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D7EE: shl edx, 5
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x05
        // 0x5889D7F1: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5889D7F3: lea ecx, [edi + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x47
        // 0x5889D7F6: cmp dword ptr [esi + ecx*4 + 0x74], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x00
        // 0x5889D7FB: lea ecx, [esi + ecx*4 + 0x74]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x8E
        __asm _emit 0x74
        // 0x5889D7FF: je 0x5889d813
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5889D801: cmp byte ptr [eax + 0x589c90a0], 0
        __asm _emit 0x80
        __asm _emit 0xB8
        __asm _emit 0xA0
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5889D808: je 0x5889d813
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5889D80A: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x5889D80C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5889D80E: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0x3D
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x5889D813: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x5889D816: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D81B: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5889D81F: inc edi
        __asm _emit 0x47
        // 0x5889D820: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x5889D823: cmp edi, 2
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x5889D826: jl 0x5889d7e0
        __asm _emit 0x7C
        __asm _emit 0xB8
        // 0x5889D828: mov eax, dword ptr [esi + 0xb88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D82E: mov dword ptr [eax + 0x50], 5
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D835: cmp byte ptr [esi + 0xb74], 8
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0x74
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        // 0x5889D83C: jne 0x5889d943
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D842: movzx ecx, byte ptr [esi + 0xb75]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D849: cmp byte ptr [ecx + 0x589c91a1], 0
        __asm _emit 0x80
        __asm _emit 0xB9
        __asm _emit 0xA1
        __asm _emit 0x91
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5889D850: jne 0x5889d943
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xED
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D856: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5889D858: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x5889D85B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889D85D: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5889D85F: jmp 0x5889d943
        __asm _emit 0xE9
        __asm _emit 0xDF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D864: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5889D866: cmp eax, 0x19
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x19
        // 0x5889D869: jae 0x5889d874
        __asm _emit 0x73
        __asm _emit 0x09
        // 0x5889D86B: lea ebp, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x2C
        __asm _emit 0x80
        // 0x5889D86E: lea ebp, [ebp + ebp + 0xf]
        __asm _emit 0x8D
        __asm _emit 0x6C
        __asm _emit 0x2D
        __asm _emit 0x0F
        // 0x5889D872: jmp 0x5889d884
        __asm _emit 0xEB
        __asm _emit 0x10
        // 0x5889D874: lea edx, [ecx - 0x19]
        __asm _emit 0x8D
        __asm _emit 0x51
        __asm _emit 0xE7
        // 0x5889D877: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5889D879: jb 0x5889d884
        __asm _emit 0x72
        __asm _emit 0x09
        // 0x5889D87B: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x5889D87D: lea ebp, [ecx + ecx*4]
        __asm _emit 0x8D
        __asm _emit 0x2C
        __asm _emit 0x89
        // 0x5889D880: lea ebp, [ebp + ebp + 5]
        __asm _emit 0x8D
        __asm _emit 0x6C
        __asm _emit 0x2D
        __asm _emit 0x05
        // 0x5889D884: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5889D887: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5889D88B: lea ecx, [esi + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5889D88E: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D893: test bl, dl
        __asm _emit 0x84
        __asm _emit 0xD3
        // 0x5889D895: jne 0x5889d8b6
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x5889D897: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D89C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5889D8A0: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889D8A2: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x5889D8A6: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5889D8A9: sub edx, ebx
        __asm _emit 0x2B
        __asm _emit 0xD3
        // 0x5889D8AB: jne 0x5889d8a0
        __asm _emit 0x75
        __asm _emit 0xF3
        // 0x5889D8AD: mov eax, dword ptr [esi + 0xb88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D8B3: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x5889D8B6: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5889D8B8: je 0x5889d8f2
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x5889D8BA: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5889D8BC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5889D8C0: movzx ecx, byte ptr [esi + 0xb74]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D8C7: movzx edx, byte ptr [esi + 0xb75]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x96
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D8CE: shl ecx, 5
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x05
        // 0x5889D8D1: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5889D8D3: lea eax, [edi + ecx*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x4F
        // 0x5889D8D6: cmp dword ptr [esi + eax*4 + 0x74], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x00
        // 0x5889D8DB: lea eax, [esi + eax*4 + 0x74]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x86
        __asm _emit 0x74
        // 0x5889D8DF: je 0x5889d8e9
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5889D8E1: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5889D8E3: push ebp
        __asm _emit 0x55
        // 0x5889D8E4: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x53
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889D8E9: add edi, ebx
        __asm _emit 0x03
        __asm _emit 0xFB
        // 0x5889D8EB: cmp edi, 2
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x5889D8EE: jl 0x5889d8c0
        __asm _emit 0x7C
        __asm _emit 0xD0
        // 0x5889D8F0: jmp 0x5889d943
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5889D8F2: cmp dword ptr [esi + 0xb78], 0x19
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x78
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x19
        // 0x5889D8F9: jne 0x5889d943
        __asm _emit 0x75
        __asm _emit 0x48
        // 0x5889D8FB: movzx eax, byte ptr [esi + 0xb74]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D902: dec eax
        __asm _emit 0x48
        // 0x5889D903: cmp eax, 7
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x07
        // 0x5889D906: ja 0x5889d943
        __asm _emit 0x77
        __asm _emit 0x3B
        // 0x5889D908: jmp dword ptr [eax*4 + 0x5889daf0]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xF0
        __asm _emit 0xDA
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x5889D90F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889D911: call 0x5889b630
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0xDD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889D916: jmp 0x5889d943
        __asm _emit 0xEB
        __asm _emit 0x2B
        // 0x5889D918: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889D91A: call 0x5889b930
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0xE0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889D91F: jmp 0x5889d943
        __asm _emit 0xEB
        __asm _emit 0x22
        // 0x5889D921: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889D923: call 0x5889bc40
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0xE3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889D928: jmp 0x5889d943
        __asm _emit 0xEB
        __asm _emit 0x19
        // 0x5889D92A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889D92C: call 0x5889bea0
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0xE5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889D931: jmp 0x5889d943
        __asm _emit 0xEB
        __asm _emit 0x10
        // 0x5889D933: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889D935: call 0x5889c070
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889D93A: jmp 0x5889d943
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x5889D93C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889D93E: call 0x5889c6a0
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0xED
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889D943: pop ebp
        __asm _emit 0x5D
        // 0x5889D944: mov al, byte ptr [esi + 0xb75]
        __asm _emit 0x8A
        __asm _emit 0x86
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D94A: pop ebx
        __asm _emit 0x5B
        // 0x5889D94B: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5889D94D: jbe 0x5889d97b
        __asm _emit 0x76
        __asm _emit 0x2C
        // 0x5889D94F: movzx ecx, byte ptr [esi + 0xb74]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D956: movzx edx, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD0
        // 0x5889D959: mov eax, dword ptr [esi + 0xb80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D95F: shl ecx, 5
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x05
        // 0x5889D962: cmp byte ptr [ecx + edx + 0x589c909f], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x11
        __asm _emit 0x9F
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5889D96A: jbe 0x5889d981
        __asm _emit 0x76
        __asm _emit 0x15
        // 0x5889D96C: cmp dword ptr [eax + 0x50], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x5889D970: jne 0x5889d98e
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x5889D972: mov dword ptr [eax + 0x50], 1
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D979: jmp 0x5889d98e
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x5889D97B: mov eax, dword ptr [esi + 0xb80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D981: cmp dword ptr [eax + 0x50], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x5889D985: je 0x5889d98e
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x5889D987: mov dword ptr [eax + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D98E: movzx eax, byte ptr [esi + 0xb74]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D995: movzx ecx, byte ptr [esi + 0xb75]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D99C: shl eax, 5
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x05
        // 0x5889D99F: cmp byte ptr [eax + ecx + 0x589c90a1], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x08
        __asm _emit 0xA1
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5889D9A7: mov eax, dword ptr [esi + 0xb84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D9AD: jbe 0x5889d9c5
        __asm _emit 0x76
        __asm _emit 0x16
        // 0x5889D9AF: cmp dword ptr [eax + 0x50], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x5889D9B3: jne 0x5889daca
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D9B9: mov dword ptr [eax + 0x50], 1
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D9C0: jmp 0x5889daca
        __asm _emit 0xE9
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D9C5: cmp dword ptr [eax + 0x50], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x5889D9C9: je 0x5889daca
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xFB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D9CF: mov dword ptr [eax + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D9D6: jmp 0x5889daca
        __asm _emit 0xE9
        __asm _emit 0xEF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D9DB: call 0x5889d420
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889D9E0: mov byte ptr [esi + 0xb74], al
        __asm _emit 0x88
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D9E6: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5889D9E8: je 0x5889daca
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D9EE: movzx edx, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD0
        // 0x5889D9F1: movzx eax, byte ptr [esi + 0xb75]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D9F8: shl edx, 5
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x05
        // 0x5889D9FB: cmp byte ptr [edx + eax + 0x589c90a0], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0xA0
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5889DA03: jbe 0x5889daca
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DA09: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889DA0B: lea edx, [ecx + 1]
        __asm _emit 0x8D
        __asm _emit 0x51
        __asm _emit 0x01
        // 0x5889DA0E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5889DA10: movzx eax, byte ptr [esi + 0xb74]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DA17: movzx edi, byte ptr [esi + 0xb75]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xBE
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DA1E: shl eax, 5
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x05
        // 0x5889DA21: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5889DA23: lea eax, [ecx + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x41
        // 0x5889DA26: cmp dword ptr [esi + eax*4 + 0x74], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x00
        // 0x5889DA2B: lea eax, [esi + eax*4 + 0x74]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x86
        __asm _emit 0x74
        // 0x5889DA2F: je 0x5889da37
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5889DA31: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x5889DA33: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5889DA37: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5889DA39: cmp ecx, 2
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x5889DA3C: jl 0x5889da10
        __asm _emit 0x7C
        __asm _emit 0xD2
        // 0x5889DA3E: jmp 0x5889daca
        __asm _emit 0xE9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DA43: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5889DA47: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5889DA4A: mov eax, 0x100
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DA4F: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5889DA52: jne 0x5889da8f
        __asm _emit 0x75
        __asm _emit 0x3B
        // 0x5889DA54: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DA59: or word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5889DA5D: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5889DA61: mov eax, 0xe2ff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DA66: and cx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC8
        // 0x5889DA69: mov eax, 0x200
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DA6E: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x5889DA71: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5889DA75: lea ecx, [esi + 0x6c]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5889DA78: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DA7D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x5889DA80: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889DA82: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x5889DA86: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5889DA89: sub edx, edi
        __asm _emit 0x2B
        __asm _emit 0xD7
        // 0x5889DA8B: jne 0x5889da80
        __asm _emit 0x75
        __asm _emit 0xF3
        // 0x5889DA8D: jmp 0x5889daca
        __asm _emit 0xEB
        __asm _emit 0x3B
        // 0x5889DA8F: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5889DA93: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5889DA96: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DA9B: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5889DA9E: jne 0x5889daca
        __asm _emit 0x75
        __asm _emit 0x2A
        // 0x5889DAA0: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DAA5: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5889DAA9: mov edx, 0xfffb
        __asm _emit 0xBA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DAAE: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5889DAB2: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5889DAB6: mov ecx, 0xe5ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DABB: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5889DABE: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DAC3: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x5889DAC6: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5889DACA: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x5889DACD: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889DACF: je 0x5889dae6
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x5889DAD1: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x38
        // 0x5889DAD4: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889DAD6: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5889DAD9: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x5889DADC: je 0x5889dae9
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5889DADE: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889DAE0: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5889DAE2: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5889DAE4: jne 0x5889dad1
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x5889DAE6: pop edi
        __asm _emit 0x5F
        // 0x5889DAE7: pop esi
        __asm _emit 0x5E
        // 0x5889DAE8: ret
        __asm _emit 0xC3
        // 0x5889DAE9: pop edi
        __asm _emit 0x5F
        // 0x5889DAEA: pop esi
        __asm _emit 0x5E
        // 0x5889DAEB: jmp edx
        __asm _emit 0xFF
        __asm _emit 0xE2
    }
}
