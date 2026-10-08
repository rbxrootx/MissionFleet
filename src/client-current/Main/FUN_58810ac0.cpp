// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 484 bytes in 2 exact ranges.
// Source symbol alias: FUN_58810ac0.

// Ghidra body range 0x58810AC0..0x58810B3D; 125 mapped bytes.
extern "C" __declspec(naked) void FUN_58810ac0_segment_00() {
    __asm {
        // 0x58810AC0: sub esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x18
        // 0x58810AC3: push ebx
        __asm _emit 0x53
        // 0x58810AC4: push ebp
        __asm _emit 0x55
        // 0x58810AC5: mov ebp, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58810ACB: mov eax, dword ptr [ebp + 0x20e20]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0x0E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58810AD1: push esi
        __asm _emit 0x56
        // 0x58810AD2: push edi
        __asm _emit 0x57
        // 0x58810AD3: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58810AD5: mov dword ptr [esp + 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58810AD9: mov ecx, 0x3e8
        __asm _emit 0xB9
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810ADE: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58810AE2: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58810AE6: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58810AEA: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58810AEE: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58810AF0: je 0x58810b0e
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x58810AF2: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58810AF5: je 0x58810b0e
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x58810AF7: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x58810AFA: jne 0x58810b1e
        __asm _emit 0x75
        __asm _emit 0x22
        // 0x58810AFC: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58810B00: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58810B04: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58810B08: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58810B0C: jmp 0x58810b1e
        __asm _emit 0xEB
        __asm _emit 0x10
        // 0x58810B0E: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58810B12: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58810B16: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58810B1A: mov dword ptr [esp + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58810B1E: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58810B23: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x58810B26: mov edx, dword ptr [eax + 0x340]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810B2C: mov dword ptr [esp + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58810B30: mov esi, 8
        __asm _emit 0xBE
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810B35: lea ecx, [eax + 0x21c]
        __asm _emit 0x8D
        __asm _emit 0x88
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810B3B: jmp 0x58810b44
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x58810B40..0x58810CA7; 359 mapped bytes.
extern "C" __declspec(naked) void FUN_58810ac0_segment_01() {
    __asm {
        // 0x58810B40: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58810B44: cmp edx, edi
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x58810B46: jne 0x58810b96
        __asm _emit 0x75
        __asm _emit 0x4E
        // 0x58810B48: mov edx, dword ptr [ebp + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58810B4E: mov ebx, dword ptr [esi + edx]
        __asm _emit 0x8B
        __asm _emit 0x1C
        __asm _emit 0x16
        // 0x58810B51: cmp ebx, edi
        __asm _emit 0x3B
        __asm _emit 0xDF
        // 0x58810B53: je 0x58810b7c
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x58810B55: cmp byte ptr [ecx - 0x20], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0xE0
        __asm _emit 0x00
        // 0x58810B59: jne 0x58810b7c
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x58810B5B: cmp byte ptr [ecx], 0
        __asm _emit 0x80
        __asm _emit 0x39
        __asm _emit 0x00
        // 0x58810B5E: jne 0x58810b7c
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x58810B60: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58810B62: mov edi, dword ptr [esi + eax]
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x06
        // 0x58810B65: mov eax, dword ptr [edi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810B6B: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810B71: cdq
        __asm _emit 0x99
        // 0x58810B72: idiv dword ptr [edi + 0x9c]
        __asm _emit 0xF7
        __asm _emit 0xBF
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810B78: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58810B7C: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58810B7E: je 0x58810bfd
        __asm _emit 0x74
        __asm _emit 0x7D
        // 0x58810B80: cmp byte ptr [ecx - 0x20], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0xE0
        __asm _emit 0x00
        // 0x58810B84: jne 0x58810bfd
        __asm _emit 0x75
        __asm _emit 0x77
        // 0x58810B86: cmp byte ptr [ecx], 1
        __asm _emit 0x80
        __asm _emit 0x39
        __asm _emit 0x01
        // 0x58810B89: jne 0x58810bfd
        __asm _emit 0x75
        __asm _emit 0x72
        // 0x58810B8B: mov edx, dword ptr [ebp + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58810B91: mov edi, dword ptr [esi + edx]
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x16
        // 0x58810B94: jmp 0x58810be6
        __asm _emit 0xEB
        __asm _emit 0x50
        // 0x58810B96: cmp edx, 1
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x01
        // 0x58810B99: jne 0x58810bfd
        __asm _emit 0x75
        __asm _emit 0x62
        // 0x58810B9B: mov eax, dword ptr [ebp + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58810BA1: mov ebx, dword ptr [esi + eax]
        __asm _emit 0x8B
        __asm _emit 0x1C
        __asm _emit 0x06
        // 0x58810BA4: cmp ebx, edi
        __asm _emit 0x3B
        __asm _emit 0xDF
        // 0x58810BA6: je 0x58810bce
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x58810BA8: cmp byte ptr [ecx - 0x20], dl
        __asm _emit 0x38
        __asm _emit 0x51
        __asm _emit 0xE0
        // 0x58810BAB: jne 0x58810bce
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x58810BAD: cmp byte ptr [ecx], 0
        __asm _emit 0x80
        __asm _emit 0x39
        __asm _emit 0x00
        // 0x58810BB0: jne 0x58810bce
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x58810BB2: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58810BB4: mov edi, dword ptr [esi + edx]
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x16
        // 0x58810BB7: mov eax, dword ptr [edi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810BBD: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810BC3: cdq
        __asm _emit 0x99
        // 0x58810BC4: idiv dword ptr [edi + 0x9c]
        __asm _emit 0xF7
        __asm _emit 0xBF
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810BCA: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58810BCE: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58810BD0: je 0x58810bfd
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x58810BD2: cmp byte ptr [ecx - 0x20], 1
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0xE0
        __asm _emit 0x01
        // 0x58810BD6: jne 0x58810bfd
        __asm _emit 0x75
        __asm _emit 0x25
        // 0x58810BD8: cmp byte ptr [ecx], 1
        __asm _emit 0x80
        __asm _emit 0x39
        __asm _emit 0x01
        // 0x58810BDB: jne 0x58810bfd
        __asm _emit 0x75
        __asm _emit 0x20
        // 0x58810BDD: mov eax, dword ptr [ebp + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58810BE3: mov edi, dword ptr [esi + eax]
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x06
        // 0x58810BE6: mov eax, dword ptr [edi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810BEC: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810BF2: cdq
        __asm _emit 0x99
        // 0x58810BF3: idiv dword ptr [edi + 0x9c]
        __asm _emit 0xF7
        __asm _emit 0xBF
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810BF9: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58810BFD: mov eax, dword ptr [ebp + 0x20e20]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0x0E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58810C03: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58810C05: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58810C07: je 0x58810c2d
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x58810C09: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58810C0C: je 0x58810c2d
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x58810C0E: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x58810C11: jne 0x58810c49
        __asm _emit 0x75
        __asm _emit 0x36
        // 0x58810C13: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58810C17: cmp dword ptr [esp + 0x10], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58810C1B: jle 0x58810c21
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x58810C1D: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58810C21: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58810C25: cmp dword ptr [esp + 0x14], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58810C29: jle 0x58810c49
        __asm _emit 0x7E
        __asm _emit 0x1E
        // 0x58810C2B: jmp 0x58810c45
        __asm _emit 0xEB
        __asm _emit 0x18
        // 0x58810C2D: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58810C31: cmp dword ptr [esp + 0x10], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58810C35: jge 0x58810c3b
        __asm _emit 0x7D
        __asm _emit 0x04
        // 0x58810C37: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58810C3B: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58810C3F: cmp dword ptr [esp + 0x14], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58810C43: jge 0x58810c49
        __asm _emit 0x7D
        __asm _emit 0x04
        // 0x58810C45: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58810C49: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x58810C4C: inc ecx
        __asm _emit 0x41
        // 0x58810C4D: cmp esi, 0x88
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810C53: jl 0x58810b40
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xE7
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58810C59: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58810C5D: imul edx, edx, 0x13
        __asm _emit 0x6B
        __asm _emit 0xD2
        __asm _emit 0x13
        // 0x58810C60: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58810C64: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x58810C69: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58810C6B: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58810C6E: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58810C70: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58810C73: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58810C75: mov edx, dword ptr [ecx + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810C7B: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x58810C7E: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58810C82: mov ecx, dword ptr [ecx + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810C88: imul edx, edx, 0x13
        __asm _emit 0x6B
        __asm _emit 0xD2
        __asm _emit 0x13
        // 0x58810C8B: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x58810C90: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58810C92: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58810C95: pop edi
        __asm _emit 0x5F
        // 0x58810C96: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58810C98: pop esi
        __asm _emit 0x5E
        // 0x58810C99: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58810C9C: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58810C9E: pop ebp
        __asm _emit 0x5D
        // 0x58810C9F: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58810CA2: pop ebx
        __asm _emit 0x5B
        // 0x58810CA3: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58810CA6: ret
        __asm _emit 0xC3
    }
}
