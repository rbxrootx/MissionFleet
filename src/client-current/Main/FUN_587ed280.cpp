// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 431 bytes in 1 exact ranges.
// Source symbol alias: FUN_587ed280.

// Ghidra body range 0x587ED280..0x587ED42F; 431 mapped bytes.
extern "C" __declspec(naked) void FUN_587ed280_segment_00() {
    __asm {
        // 0x587ED280: push ecx
        __asm _emit 0x51
        // 0x587ED281: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587ED287: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587ED28A: push esi
        __asm _emit 0x56
        // 0x587ED28B: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587ED28D: push edi
        __asm _emit 0x57
        // 0x587ED28E: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587ED290: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587ED292: jl 0x587ed2b3
        __asm _emit 0x7C
        __asm _emit 0x1F
        // 0x587ED294: cmp eax, 0x1bd
        __asm _emit 0x3D
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED299: jg 0x587ed2b3
        __asm _emit 0x7F
        __asm _emit 0x18
        // 0x587ED29B: mov ecx, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x08
        // 0x587ED29E: cmp ecx, 0x291
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x91
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED2A4: jl 0x587ed2b3
        __asm _emit 0x7C
        __asm _emit 0x0D
        // 0x587ED2A6: cmp ecx, 0x300
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED2AC: jg 0x587ed2b3
        __asm _emit 0x7F
        __asm _emit 0x05
        // 0x587ED2AE: mov esi, 1
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED2B3: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587ED2B9: cmp dword ptr [ecx + 0x78], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x78
        __asm _emit 0x00
        // 0x587ED2BD: je 0x587ed2d8
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x587ED2BF: cmp eax, 0x1be
        __asm _emit 0x3D
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED2C4: jl 0x587ed2fe
        __asm _emit 0x7C
        __asm _emit 0x38
        // 0x587ED2C6: cmp eax, 0x31b
        __asm _emit 0x3D
        __asm _emit 0x1B
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED2CB: jg 0x587ed2fe
        __asm _emit 0x7F
        __asm _emit 0x31
        // 0x587ED2CD: mov ecx, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x08
        // 0x587ED2D0: cmp ecx, 0x266
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x66
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED2D6: jmp 0x587ed2ef
        __asm _emit 0xEB
        __asm _emit 0x17
        // 0x587ED2D8: cmp eax, 0x1be
        __asm _emit 0x3D
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED2DD: jl 0x587ed2fe
        __asm _emit 0x7C
        __asm _emit 0x1F
        // 0x587ED2DF: cmp eax, 0x31b
        __asm _emit 0x3D
        __asm _emit 0x1B
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED2E4: jg 0x587ed2fe
        __asm _emit 0x7F
        __asm _emit 0x18
        // 0x587ED2E6: mov ecx, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x08
        // 0x587ED2E9: cmp ecx, 0x271
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x71
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED2EF: jl 0x587ed2fe
        __asm _emit 0x7C
        __asm _emit 0x0D
        // 0x587ED2F1: cmp ecx, 0x300
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED2F7: jg 0x587ed2fe
        __asm _emit 0x7F
        __asm _emit 0x05
        // 0x587ED2F9: mov esi, 1
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED2FE: cmp eax, 0x31c
        __asm _emit 0x3D
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED303: jl 0x587ed31f
        __asm _emit 0x7C
        __asm _emit 0x1A
        // 0x587ED305: cmp eax, 0x400
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED30A: jg 0x587ed31f
        __asm _emit 0x7F
        __asm _emit 0x13
        // 0x587ED30C: mov ecx, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x08
        // 0x587ED30F: cmp ecx, 0x252
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED315: jl 0x587ed31f
        __asm _emit 0x7C
        __asm _emit 0x08
        // 0x587ED317: cmp ecx, 0x300
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED31D: jle 0x587ed323
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x587ED31F: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587ED321: je 0x587ed353
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x587ED323: mov ecx, dword ptr [0x58a247fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587ED329: push 0x3ed
        __asm _emit 0x68
        __asm _emit 0xED
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED32E: call 0x588c0da0
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0x3A
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x587ED333: mov eax, dword ptr [edi + 0x21ef4]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xF4
        __asm _emit 0x1E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ED339: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED33E: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587ED342: mov edi, dword ptr [edi + 0x21ef8]
        __asm _emit 0x8B
        __asm _emit 0xBF
        __asm _emit 0xF8
        __asm _emit 0x1E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ED348: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587ED34A: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x587ED34E: jmp 0x587ed3e2
        __asm _emit 0xE9
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED353: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587ED359: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED35F: mov esi, dword ptr [edi + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0xB7
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587ED365: push ebx
        __asm _emit 0x53
        // 0x587ED366: mov ebx, dword ptr [esi + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED36C: push ebp
        __asm _emit 0x55
        // 0x587ED36D: mov ebp, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587ED370: cdq
        __asm _emit 0x99
        // 0x587ED371: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x587ED373: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587ED375: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587ED37A: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x587ED37D: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED383: cdq
        __asm _emit 0x99
        // 0x587ED384: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x587ED386: sub ecx, dword ptr [ebp + 4]
        __asm _emit 0x2B
        __asm _emit 0x4D
        __asm _emit 0x04
        // 0x587ED389: add ecx, dword ptr [esi + 0x50]
        __asm _emit 0x03
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x587ED38C: sub eax, dword ptr [ebp + 8]
        __asm _emit 0x2B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x587ED38F: add eax, dword ptr [esi + 0x54]
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x587ED392: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x587ED394: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x587ED397: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587ED399: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x587ED39C: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x587ED39E: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587ED3A2: fild dword ptr [esp + 0x10]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587ED3A6: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0xF8
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587ED3AB: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0xF8
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587ED3B0: cmp eax, 0x2bc
        __asm _emit 0x3D
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED3B5: mov ecx, dword ptr [0x58a247fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587ED3BB: pop ebp
        __asm _emit 0x5D
        // 0x587ED3BC: pop ebx
        __asm _emit 0x5B
        // 0x587ED3BD: jle 0x587ed3f6
        __asm _emit 0x7E
        __asm _emit 0x37
        // 0x587ED3BF: push 0x3ed
        __asm _emit 0x68
        __asm _emit 0xED
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED3C4: call 0x588c0da0
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0x39
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x587ED3C9: mov eax, dword ptr [edi + 0x21ef4]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xF4
        __asm _emit 0x1E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ED3CF: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED3D4: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587ED3D8: mov edi, dword ptr [edi + 0x21ef8]
        __asm _emit 0x8B
        __asm _emit 0xBF
        __asm _emit 0xF8
        __asm _emit 0x1E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ED3DE: or word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x587ED3E2: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587ED3E8: pop edi
        __asm _emit 0x5F
        // 0x587ED3E9: mov dword ptr [ecx + 0x300], 0
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED3F3: pop esi
        __asm _emit 0x5E
        // 0x587ED3F4: pop ecx
        __asm _emit 0x59
        // 0x587ED3F5: ret
        __asm _emit 0xC3
        // 0x587ED3F6: push 0x3ec
        __asm _emit 0x68
        __asm _emit 0xEC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED3FB: call 0x588c0da0
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x39
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x587ED400: mov eax, dword ptr [edi + 0x21ef4]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xF4
        __asm _emit 0x1E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ED406: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED40B: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587ED40F: mov edi, dword ptr [edi + 0x21ef8]
        __asm _emit 0x8B
        __asm _emit 0xBF
        __asm _emit 0xF8
        __asm _emit 0x1E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ED415: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587ED417: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x587ED41B: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587ED421: pop edi
        __asm _emit 0x5F
        // 0x587ED422: mov dword ptr [ecx + 0x300], 1
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED42C: pop esi
        __asm _emit 0x5E
        // 0x587ED42D: pop ecx
        __asm _emit 0x59
        // 0x587ED42E: ret
        __asm _emit 0xC3
    }
}
