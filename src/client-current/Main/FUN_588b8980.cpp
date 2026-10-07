// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 787 bytes in 3 exact ranges.
// Source symbol alias: FUN_588b8980.

// Ghidra body range 0x588B8980..0x588B8A75; 245 mapped bytes.
extern "C" __declspec(naked) void FUN_588b8980_segment_00() {
    __asm {
        // 0x588B8980: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588B8982: push 0x58988576
        __asm _emit 0x68
        __asm _emit 0x76
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588B8987: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B898D: push eax
        __asm _emit 0x50
        // 0x588B898E: push ebx
        __asm _emit 0x53
        // 0x588B898F: push ebp
        __asm _emit 0x55
        // 0x588B8990: push esi
        __asm _emit 0x56
        // 0x588B8991: push edi
        __asm _emit 0x57
        // 0x588B8992: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588B8997: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588B8999: push eax
        __asm _emit 0x50
        // 0x588B899A: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588B899E: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B89A4: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588B89A6: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B89AA: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B89B0: push eax
        __asm _emit 0x50
        // 0x588B89B1: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0xE9
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B89B6: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588B89BA: push ecx
        __asm _emit 0x51
        // 0x588B89BB: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B89C1: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0xE9
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B89C6: cmp word ptr [esi + 0x19c], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x588B89CE: mov edx, 1
        __asm _emit 0xBA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B89D3: mov word ptr [esi + 0x1c0], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B89DA: jne 0x588b89f0
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x588B89DC: mov eax, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B89E2: mov dword ptr [eax + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x588B89E5: mov eax, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B89EB: or word ptr [eax + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x588B89F0: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B89F6: mov ecx, 0xf
        __asm _emit 0xB9
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B89FB: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588B89FF: mov eax, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8A05: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588B8A09: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588B8A0B: cmp dword ptr [esp + 0x30], ebx
        __asm _emit 0x39
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588B8A0F: jbe 0x588b8c8f
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x7A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8A15: movzx eax, word ptr [esi + 0x17e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x7E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8A1C: mov dword ptr [esp + 0x24], 6
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8A24: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B8A27: je 0x588b8a87
        __asm _emit 0x74
        __asm _emit 0x5E
        // 0x588B8A29: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B8A2B: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588B8A2D: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588B8A30: jae 0x588b8a65
        __asm _emit 0x73
        __asm _emit 0x33
        // 0x588B8A32: mov edx, dword ptr [esi + 0x188]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8A38: cmp dword ptr [edx + edi*4], ebx
        __asm _emit 0x39
        __asm _emit 0x1C
        __asm _emit 0xBA
        // 0x588B8A3B: lea eax, [edx + edi*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xBA
        // 0x588B8A3E: je 0x588b8a59
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x588B8A40: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x588B8A42: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B8A44: je 0x588b8a50
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588B8A46: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588B8A48: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B8A4A: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x588B8A4C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588B8A4E: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588B8A50: mov ecx, dword ptr [esi + 0x188]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8A56: mov dword ptr [ecx + edi*4], ebx
        __asm _emit 0x89
        __asm _emit 0x1C
        __asm _emit 0xB9
        // 0x588B8A59: movzx edx, word ptr [esi + 0x17e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x96
        __asm _emit 0x7E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8A60: inc edi
        __asm _emit 0x47
        // 0x588B8A61: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x588B8A63: jl 0x588b8a32
        __asm _emit 0x7C
        __asm _emit 0xCD
        // 0x588B8A65: mov eax, dword ptr [esi + 0x188]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8A6B: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B8A6D: je 0x588b8a7e
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x588B8A6F: push eax
        __asm _emit 0x50
        // 0x588B8A70: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x41
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}

// Ghidra body range 0x588B8A7E..0x588B8AE3; 101 mapped bytes.
extern "C" __declspec(naked) void FUN_588b8980_segment_01() {
    __asm {
        // 0x588B8A7E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B8A80: mov word ptr [esi + 0x17e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8A87: movzx eax, word ptr [esi + 0x180]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8A8E: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B8A91: je 0x588b8af5
        __asm _emit 0x74
        __asm _emit 0x62
        // 0x588B8A93: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B8A95: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588B8A97: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588B8A9A: jae 0x588b8ad3
        __asm _emit 0x73
        __asm _emit 0x37
        // 0x588B8A9C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588B8AA0: mov edx, dword ptr [esi + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8AA6: cmp dword ptr [edx + edi*4], ebx
        __asm _emit 0x39
        __asm _emit 0x1C
        __asm _emit 0xBA
        // 0x588B8AA9: lea eax, [edx + edi*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xBA
        // 0x588B8AAC: je 0x588b8ac7
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x588B8AAE: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x588B8AB0: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B8AB2: je 0x588b8abe
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588B8AB4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588B8AB6: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B8AB8: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x588B8ABA: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588B8ABC: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588B8ABE: mov ecx, dword ptr [esi + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8AC4: mov dword ptr [ecx + edi*4], ebx
        __asm _emit 0x89
        __asm _emit 0x1C
        __asm _emit 0xB9
        // 0x588B8AC7: movzx edx, word ptr [esi + 0x180]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8ACE: inc edi
        __asm _emit 0x47
        // 0x588B8ACF: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x588B8AD1: jl 0x588b8aa0
        __asm _emit 0x7C
        __asm _emit 0xCD
        // 0x588B8AD3: mov eax, dword ptr [esi + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8AD9: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B8ADB: je 0x588b8aec
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x588B8ADD: push eax
        __asm _emit 0x50
        // 0x588B8ADE: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x41
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}

// Ghidra body range 0x588B8AEC..0x588B8CA5; 441 mapped bytes.
extern "C" __declspec(naked) void FUN_588b8980_segment_02() {
    __asm {
        // 0x588B8AEC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B8AEE: mov word ptr [esi + 0x180], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8AF5: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588B8AF9: mov cx, word ptr [ebp]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x588B8AFD: mov word ptr [esi + 0x17e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x7E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8B04: mov dx, word ptr [ebp + 2]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x02
        // 0x588B8B08: mov word ptr [esi + 0x180], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8B0F: mov ax, word ptr [ebp + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x588B8B13: mov word ptr [esi + 0x182], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8B1A: movzx eax, word ptr [esi + 0x17e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x7E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8B21: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B8B23: mov edx, 4
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8B28: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x588B8B2A: seto cl
        __asm _emit 0x0F
        __asm _emit 0x90
        __asm _emit 0xC1
        // 0x588B8B2D: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x588B8B2F: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x588B8B31: push ecx
        __asm _emit 0x51
        // 0x588B8B32: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x89
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588B8B37: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B8B39: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B8B3C: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588B8B3E: mov dword ptr [esi + 0x188], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8B44: lea eax, [ebp + 6]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x06
        // 0x588B8B47: cmp cx, word ptr [esi + 0x17e]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x8E
        __asm _emit 0x7E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8B4E: jae 0x588b8bbb
        __asm _emit 0x73
        __asm _emit 0x6B
        // 0x588B8B50: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x588B8B52: push 0x27c
        __asm _emit 0x68
        __asm _emit 0x7C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8B57: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x40
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B8B5C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B8B5F: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588B8B63: mov dword ptr [esp + 0x1c], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8B6B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B8B6D: je 0x588b8b79
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588B8B6F: push ebx
        __asm _emit 0x53
        // 0x588B8B70: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B8B72: call 0x5877cc30
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0x40
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588B8B77: jmp 0x588b8b7b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B8B79: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B8B7B: mov edx, dword ptr [esi + 0x188]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8B81: mov dword ptr [edx + edi*4], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0xBA
        // 0x588B8B84: mov eax, dword ptr [esi + 0x188]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8B8A: mov ecx, dword ptr [eax + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xB8
        // 0x588B8B8D: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8B92: mov dword ptr [esp + 0x20], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B8B9A: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0xA1
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B8B9F: movzx ecx, word ptr [esi + 0x17e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0x7E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8BA6: add dword ptr [esp + 0x24], 0x180
        __asm _emit 0x81
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8BAE: inc edi
        __asm _emit 0x47
        // 0x588B8BAF: add ebx, 0x180
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8BB5: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x588B8BB7: jl 0x588b8b52
        __asm _emit 0x7C
        __asm _emit 0x99
        // 0x588B8BB9: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588B8BBB: movzx eax, word ptr [esi + 0x180]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8BC2: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B8BC4: mov edx, 4
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8BC9: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x588B8BCB: seto cl
        __asm _emit 0x0F
        __asm _emit 0x90
        __asm _emit 0xC1
        // 0x588B8BCE: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x588B8BD0: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x588B8BD2: push ecx
        __asm _emit 0x51
        // 0x588B8BD3: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x89
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588B8BD8: mov dword ptr [esi + 0x18c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8BDE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B8BE0: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B8BE3: mov dword ptr [esp + 0x28], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588B8BE7: cmp ax, word ptr [esi + 0x180]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8BEE: jae 0x588b8c6b
        __asm _emit 0x73
        __asm _emit 0x7B
        // 0x588B8BF0: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B8BF4: mov edi, dword ptr [ecx + ebp]
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x29
        // 0x588B8BF7: lea ebx, [ecx + ebp]
        __asm _emit 0x8D
        __asm _emit 0x1C
        __asm _emit 0x29
        // 0x588B8BFA: shr edi, 1
        __asm _emit 0xD1
        __asm _emit 0xEF
        // 0x588B8BFC: push 0xf0c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8C01: and edi, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE7
        __asm _emit 0x1F
        // 0x588B8C04: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x40
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B8C09: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B8C0C: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588B8C10: mov dword ptr [esp + 0x1c], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8C18: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B8C1A: je 0x588b8c32
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588B8C1C: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B8C20: lea ecx, [edx + ebp + 0xb8]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x2A
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8C27: push ecx
        __asm _emit 0x51
        // 0x588B8C28: push ebx
        __asm _emit 0x53
        // 0x588B8C29: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B8C2B: call 0x588e9f60
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x13
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588B8C30: jmp 0x588b8c34
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B8C32: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B8C34: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588B8C38: mov edx, dword ptr [esi + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8C3E: mov dword ptr [edx + ecx*4], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x8A
        // 0x588B8C41: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B8C45: lea eax, [edi + edi*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x7F
        // 0x588B8C48: lea eax, [edx + eax*8 + 0xb8]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0xC2
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8C4F: movzx edx, word ptr [esi + 0x180]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8C56: inc ecx
        __asm _emit 0x41
        // 0x588B8C57: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x588B8C59: mov dword ptr [esp + 0x1c], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B8C61: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B8C65: mov dword ptr [esp + 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588B8C69: jl 0x588b8bf0
        __asm _emit 0x7C
        __asm _emit 0x85
        // 0x588B8C6B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B8C6D: call 0x588b81f0
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B8C72: add esi, 0xf0
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8C78: mov ecx, 3
        __asm _emit 0xB9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8C7D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x588B8C80: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588B8C82: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x588B8C87: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588B8C8A: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x588B8C8D: jne 0x588b8c80
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x588B8C8F: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588B8C93: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8C9A: pop ecx
        __asm _emit 0x59
        // 0x588B8C9B: pop edi
        __asm _emit 0x5F
        // 0x588B8C9C: pop esi
        __asm _emit 0x5E
        // 0x588B8C9D: pop ebp
        __asm _emit 0x5D
        // 0x588B8C9E: pop ebx
        __asm _emit 0x5B
        // 0x588B8C9F: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588B8CA2: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
