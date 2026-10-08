// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 647 bytes in 3 exact ranges.
// Source symbol alias: FUN_58876ab0.

// Ghidra body range 0x58876AB0..0x58876BBD; 269 mapped bytes.
extern "C" __declspec(naked) void FUN_58876ab0_segment_00() {
    __asm {
        // 0x58876AB0: push esi
        __asm _emit 0x56
        // 0x58876AB1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58876AB3: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58876AB7: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x58876AB9: je 0x58876d38
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876ABF: movzx ecx, word ptr [esi + 0xcc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876AC6: inc word ptr [esi + 0xce]
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876ACD: movzx eax, word ptr [esi + 0xce]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876AD4: push ebx
        __asm _emit 0x53
        // 0x58876AD5: push ebp
        __asm _emit 0x55
        // 0x58876AD6: push edi
        __asm _emit 0x57
        // 0x58876AD7: cmp cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x01
        // 0x58876ADB: jne 0x58876b6d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876AE1: mov ecx, 0x190
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876AE6: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58876AE9: jge 0x58876b5f
        __asm _emit 0x7D
        __asm _emit 0x74
        // 0x58876AEB: mov edx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876AF1: mov ecx, dword ptr [edx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x28
        // 0x58876AF4: movsx edx, ax
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0xD0
        // 0x58876AF7: mov eax, 0x2aaaaaab
        __asm _emit 0xB8
        __asm _emit 0xAB
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0x2A
        // 0x58876AFC: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58876AFE: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x58876B01: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58876B03: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58876B06: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58876B08: and eax, 0x80000001
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x58876B0D: jns 0x58876b14
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x58876B0F: dec eax
        __asm _emit 0x48
        // 0x58876B10: or eax, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFE
        // 0x58876B13: inc eax
        __asm _emit 0x40
        // 0x58876B14: lea edi, [esi + 0xac]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876B1A: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876B1F: jne 0x58876b40
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x58876B21: lea ebp, [ecx - 0xa]
        __asm _emit 0x8D
        __asm _emit 0x69
        __asm _emit 0xF6
        // 0x58876B24: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58876B26: push ebp
        __asm _emit 0x55
        // 0x58876B27: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0xC1
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58876B2C: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58876B2F: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x58876B32: jne 0x58876b24
        __asm _emit 0x75
        __asm _emit 0xF0
        // 0x58876B34: inc word ptr [esi + 0xce]
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876B3B: jmp 0x58876d15
        __asm _emit 0xE9
        __asm _emit 0xD5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876B40: lea ebp, [ecx + 0xa]
        __asm _emit 0x8D
        __asm _emit 0x69
        __asm _emit 0x0A
        // 0x58876B43: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58876B45: push ebp
        __asm _emit 0x55
        // 0x58876B46: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0xC1
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58876B4B: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58876B4E: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x58876B51: jne 0x58876b43
        __asm _emit 0x75
        __asm _emit 0xF0
        // 0x58876B53: inc word ptr [esi + 0xce]
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876B5A: jmp 0x58876d15
        __asm _emit 0xE9
        __asm _emit 0xB6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876B5F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58876B61: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58876B63: call 0x58875830
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876B68: jmp 0x58876d15
        __asm _emit 0xE9
        __asm _emit 0xA8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876B6D: cmp cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x58876B71: jne 0x58876c23
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876B77: mov ecx, 0xc8
        __asm _emit 0xB9
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876B7C: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58876B7F: jge 0x58876c15
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876B85: mov edx, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876B8B: mov ecx, dword ptr [edx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x28
        // 0x58876B8E: movsx edx, ax
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0xD0
        // 0x58876B91: mov eax, 0x2aaaaaab
        __asm _emit 0xB8
        __asm _emit 0xAB
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0x2A
        // 0x58876B96: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58876B98: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x58876B9B: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58876B9D: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58876BA0: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58876BA2: and eax, 0x80000001
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x58876BA7: jns 0x58876bae
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x58876BA9: dec eax
        __asm _emit 0x48
        // 0x58876BAA: or eax, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFE
        // 0x58876BAD: inc eax
        __asm _emit 0x40
        // 0x58876BAE: lea edi, [esi + 0x6c]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x6C
        // 0x58876BB1: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876BB6: jne 0x58876be5
        __asm _emit 0x75
        __asm _emit 0x2D
        // 0x58876BB8: lea ebx, [ecx - 0xa]
        __asm _emit 0x8D
        __asm _emit 0x59
        __asm _emit 0xF6
        // 0x58876BBB: jmp 0x58876bc0
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x58876BC0..0x58876BEA; 42 mapped bytes.
extern "C" __declspec(naked) void FUN_58876ab0_segment_01() {
    __asm {
        // 0x58876BC0: mov ecx, dword ptr [edi + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x48
        // 0x58876BC3: push ebx
        __asm _emit 0x53
        // 0x58876BC4: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0xC1
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58876BC9: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58876BCB: push ebx
        __asm _emit 0x53
        // 0x58876BCC: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0xC1
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58876BD1: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58876BD4: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58876BD7: jne 0x58876bc0
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x58876BD9: inc word ptr [esi + 0xce]
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876BE0: jmp 0x58876d15
        __asm _emit 0xE9
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876BE5: lea ebx, [ecx + 0xa]
        __asm _emit 0x8D
        __asm _emit 0x59
        __asm _emit 0x0A
        // 0x58876BE8: jmp 0x58876bf0
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x58876BF0..0x58876D40; 336 mapped bytes.
extern "C" __declspec(naked) void FUN_58876ab0_segment_02() {
    __asm {
        // 0x58876BF0: mov ecx, dword ptr [edi + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x48
        // 0x58876BF3: push ebx
        __asm _emit 0x53
        // 0x58876BF4: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0xC0
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58876BF9: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58876BFB: push ebx
        __asm _emit 0x53
        // 0x58876BFC: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0xC0
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58876C01: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58876C04: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58876C07: jne 0x58876bf0
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x58876C09: inc word ptr [esi + 0xce]
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876C10: jmp 0x58876d15
        __asm _emit 0xE9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876C15: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x58876C17: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58876C19: call 0x58875830
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876C1E: jmp 0x58876d15
        __asm _emit 0xE9
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876C23: cmp cx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x03
        // 0x58876C27: jne 0x58876d15
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876C2D: mov ecx, 0x190
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876C32: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58876C35: jge 0x58876cc2
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876C3B: mov edx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876C41: mov ecx, dword ptr [edx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x28
        // 0x58876C44: movsx edx, ax
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0xD0
        // 0x58876C47: mov eax, 0x2aaaaaab
        __asm _emit 0xB8
        __asm _emit 0xAB
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0x2A
        // 0x58876C4C: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58876C4E: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x58876C51: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58876C53: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58876C56: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58876C58: and eax, 0x80000001
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x58876C5D: jns 0x58876c64
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x58876C5F: dec eax
        __asm _emit 0x48
        // 0x58876C60: or eax, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFE
        // 0x58876C63: inc eax
        __asm _emit 0x40
        // 0x58876C64: lea edi, [esi + 0x84]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876C6A: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876C6F: jne 0x58876c96
        __asm _emit 0x75
        __asm _emit 0x25
        // 0x58876C71: lea ebx, [ecx - 0xa]
        __asm _emit 0x8D
        __asm _emit 0x59
        __asm _emit 0xF6
        // 0x58876C74: mov ecx, dword ptr [edi + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x38
        // 0x58876C77: push ebx
        __asm _emit 0x53
        // 0x58876C78: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0xC0
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58876C7D: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58876C7F: push ebx
        __asm _emit 0x53
        // 0x58876C80: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0xC0
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58876C85: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58876C88: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58876C8B: jne 0x58876c74
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x58876C8D: inc word ptr [esi + 0xce]
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876C94: jmp 0x58876d15
        __asm _emit 0xEB
        __asm _emit 0x7F
        // 0x58876C96: lea ebx, [ecx + 0xa]
        __asm _emit 0x8D
        __asm _emit 0x59
        __asm _emit 0x0A
        // 0x58876C99: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876CA0: mov ecx, dword ptr [edi + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x38
        // 0x58876CA3: push ebx
        __asm _emit 0x53
        // 0x58876CA4: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0xC0
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58876CA9: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58876CAB: push ebx
        __asm _emit 0x53
        // 0x58876CAC: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0xC0
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58876CB1: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58876CB4: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58876CB7: jne 0x58876ca0
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x58876CB9: inc word ptr [esi + 0xce]
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876CC0: jmp 0x58876d15
        __asm _emit 0xEB
        __asm _emit 0x53
        // 0x58876CC2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58876CC4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58876CC6: call 0x58875830
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876CCB: lea eax, [esi + 0x84]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876CD1: mov dword ptr [esi + 0xc4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876CD7: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58876CD9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58876CDB: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0xA9
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x58876CE0: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876CE6: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x58876CE9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58876CEB: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0xA9
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x58876CF0: mov edx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876CF6: mov ecx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x0A
        // 0x58876CF8: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876CFD: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0xC0
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58876D02: mov eax, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876D08: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58876D0B: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876D10: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0xC0
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58876D15: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x58876D18: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58876D1A: je 0x58876d35
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x58876D1C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58876D20: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x38
        // 0x58876D23: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58876D25: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x58876D28: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x58876D2B: je 0x58876d3a
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58876D2D: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58876D2F: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58876D31: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58876D33: jne 0x58876d20
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x58876D35: pop edi
        __asm _emit 0x5F
        // 0x58876D36: pop ebp
        __asm _emit 0x5D
        // 0x58876D37: pop ebx
        __asm _emit 0x5B
        // 0x58876D38: pop esi
        __asm _emit 0x5E
        // 0x58876D39: ret
        __asm _emit 0xC3
        // 0x58876D3A: pop edi
        __asm _emit 0x5F
        // 0x58876D3B: pop ebp
        __asm _emit 0x5D
        // 0x58876D3C: pop ebx
        __asm _emit 0x5B
        // 0x58876D3D: pop esi
        __asm _emit 0x5E
        // 0x58876D3E: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
    }
}
