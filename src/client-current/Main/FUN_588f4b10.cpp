// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588F4B10 .. +0x296 bytes.
// Source symbol alias: FUN_588f4b10.
extern "C" __declspec(naked) void FUN_588f4b10() {
    __asm {
        // 0x588F4B10: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x588F4B13: push ebp
        __asm _emit 0x55
        // 0x588F4B14: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x588F4B16: mov eax, dword ptr [ebp + 0x184]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4B1C: mov dword ptr [esp + 4], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4B24: cmp eax, 0x3c
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x3C
        // 0x588F4B27: jae 0x588f4b34
        __asm _emit 0x73
        __asm _emit 0x0B
        // 0x588F4B29: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F4B2B: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x588F4B2E: mov dword ptr [esp + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588F4B32: jmp 0x588f4b3c
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x588F4B34: mov dword ptr [esp + 0xc], 0xe10
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4B3C: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F4B42: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588F4B46: push edi
        __asm _emit 0x57
        // 0x588F4B47: mov edi, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x0C
        // 0x588F4B4A: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588F4B4E: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588F4B50: je 0x588f4d68
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4B56: push ebx
        __asm _emit 0x53
        // 0x588F4B57: mov ebx, 6
        __asm _emit 0xBB
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4B5C: push esi
        __asm _emit 0x56
        // 0x588F4B5D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x588F4B60: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588F4B62: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x1B
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x588F4B67: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588F4B6C: jne 0x588f4c63
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4B72: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x08
        // 0x588F4B75: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x588F4B78: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F4B7A: push edx
        __asm _emit 0x52
        // 0x588F4B7B: push eax
        __asm _emit 0x50
        // 0x588F4B7C: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588F4B7E: call 0x588d6960
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0x1D
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x588F4B83: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F4B85: je 0x588f4b94
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x588F4B87: cmp word ptr [edi + 0x164], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x9F
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4B8E: jne 0x588f4c73
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xDF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4B94: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x588F4B97: sub eax, dword ptr [ebp + 8]
        __asm _emit 0x2B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x588F4B9A: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x588F4B9D: imul eax, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC0
        // 0x588F4BA0: sub ecx, dword ptr [ebp + 4]
        __asm _emit 0x2B
        __asm _emit 0x4D
        __asm _emit 0x04
        // 0x588F4BA3: lea edx, [eax*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4BAA: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x588F4BAC: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x588F4BAE: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x588F4BB3: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x588F4BB5: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588F4BB8: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x588F4BBA: shr esi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x1F
        // 0x588F4BBD: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x588F4BBF: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588F4BC1: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x588F4BC4: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x588F4BC6: cmp word ptr [edi + 0x164], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x9F
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4BCD: je 0x588f4bd9
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588F4BCF: cmp dword ptr [esp + 0x14], esi
        __asm _emit 0x39
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588F4BD3: jbe 0x588f4bd9
        __asm _emit 0x76
        __asm _emit 0x04
        // 0x588F4BD5: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588F4BD9: mov eax, dword ptr [ebp + 0x3fc]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xFC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4BDF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F4BE1: je 0x588f4bf1
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F4BE3: mov al, byte ptr [eax + 0x354]
        __asm _emit 0x8A
        __asm _emit 0x80
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4BE9: cmp al, byte ptr [edi + 0x354]
        __asm _emit 0x3A
        __asm _emit 0x87
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4BEF: je 0x588f4c63
        __asm _emit 0x74
        __asm _emit 0x72
        // 0x588F4BF1: mov cx, word ptr [ebp + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x24
        // 0x588F4BF5: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x588F4BF8: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588F4BFA: jne 0x588f4c31
        __asm _emit 0x75
        __asm _emit 0x35
        // 0x588F4BFC: call 0x588db040
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x64
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x588F4C01: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x588F4C03: ja 0x588f4c63
        __asm _emit 0x77
        __asm _emit 0x5E
        // 0x588F4C05: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4C0A: or word ptr [ebp + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x4D
        __asm _emit 0x24
        // 0x588F4C0E: mov eax, dword ptr [ebp + 0x3f4]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xF4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4C14: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F4C18: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F4C1E: cmp dword ptr [edx + 4], edi
        __asm _emit 0x39
        __asm _emit 0x7A
        __asm _emit 0x04
        // 0x588F4C21: jne 0x588f4c63
        __asm _emit 0x75
        __asm _emit 0x40
        // 0x588F4C23: push ecx
        __asm _emit 0x51
        // 0x588F4C24: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F4C2A: call 0x587e5fe0
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0x13
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x588F4C2F: jmp 0x588f4c63
        __asm _emit 0xEB
        __asm _emit 0x32
        // 0x588F4C31: call 0x588db040
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0x64
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x588F4C36: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x588F4C38: ja 0x588f4c63
        __asm _emit 0x77
        __asm _emit 0x29
        // 0x588F4C3A: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F4C3F: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x588F4C42: cmp dword ptr [eax + 0x63b0], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xB0
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4C49: jne 0x588f4c63
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x588F4C4B: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588F4C4D: jne 0x588f4c63
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x588F4C4F: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F4C55: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F4C57: push 0x81
        __asm _emit 0x68
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4C5C: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x588F4C5E: call 0x588ec100
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x74
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F4C63: mov edi, dword ptr [edi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x78
        // 0x588F4C66: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588F4C68: jne 0x588f4b60
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF2
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F4C6E: jmp 0x588f4d66
        __asm _emit 0xE9
        __asm _emit 0xF3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4C73: movzx esi, word ptr [edi + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xB7
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4C7A: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588F4C7C: cmp dword ptr [ebp + 0x424], 1
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588F4C83: jne 0x588f4d28
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4C89: cmp dword ptr [ebp + 0x428], esi
        __asm _emit 0x39
        __asm _emit 0xB5
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4C8F: jne 0x588f4c96
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x588F4C91: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4C96: cmp dword ptr [ebp + 0x42c], esi
        __asm _emit 0x39
        __asm _emit 0xB5
        __asm _emit 0x2C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4C9C: jne 0x588f4ca3
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x588F4C9E: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4CA3: cmp dword ptr [ebp + 0x430], esi
        __asm _emit 0x39
        __asm _emit 0xB5
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4CA9: jne 0x588f4cb0
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x588F4CAB: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4CB0: cmp dword ptr [ebp + 0x434], esi
        __asm _emit 0x39
        __asm _emit 0xB5
        __asm _emit 0x34
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4CB6: jne 0x588f4cbd
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x588F4CB8: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4CBD: cmp dword ptr [ebp + 0x438], esi
        __asm _emit 0x39
        __asm _emit 0xB5
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4CC3: jne 0x588f4cca
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x588F4CC5: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4CCA: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F4CD0: mov ecx, dword ptr [ecx + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F4CD6: add ecx, dword ptr [ebp + 4]
        __asm _emit 0x03
        __asm _emit 0x4D
        __asm _emit 0x04
        // 0x588F4CD9: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588F4CDB: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588F4CDD: shl eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x04
        // 0x588F4CE0: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x588F4CE2: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F4CE8: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xA1
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F4CED: mov ecx, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x90
        // 0x588F4CF0: mov eax, 0xcccccccd
        __asm _emit 0xB8
        __asm _emit 0xCD
        __asm _emit 0xCC
        __asm _emit 0xCC
        __asm _emit 0xCC
        // 0x588F4CF5: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x588F4CF7: shr edx, 3
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x03
        // 0x588F4CFA: lea edx, [edx + edx*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x92
        // 0x588F4CFD: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x588F4CFF: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x588F4D01: cmp ecx, 3
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x03
        // 0x588F4D04: jae 0x588f4d23
        __asm _emit 0x73
        __asm _emit 0x1D
        // 0x588F4D06: mov eax, dword ptr [ebp + 0x43c]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x3C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4D0C: cdq
        __asm _emit 0x99
        // 0x588F4D0D: mov ecx, 5
        __asm _emit 0xB9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4D12: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x588F4D14: mov dword ptr [ebp + edx*4 + 0x428], esi
        __asm _emit 0x89
        __asm _emit 0xB4
        __asm _emit 0x95
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4D1B: inc dword ptr [ebp + 0x43c]
        __asm _emit 0xFF
        __asm _emit 0x85
        __asm _emit 0x3C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4D21: jmp 0x588f4d66
        __asm _emit 0xEB
        __asm _emit 0x43
        // 0x588F4D23: cmp ebx, 1
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x01
        // 0x588F4D26: je 0x588f4d66
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x588F4D28: mov dword ptr [ebp + 0x3f8], edi
        __asm _emit 0x89
        __asm _emit 0xBD
        __asm _emit 0xF8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4D2E: movzx edx, word ptr [edi + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x97
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4D35: mov dword ptr [ebp + 0x14c], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4D3B: mov eax, dword ptr [edi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4D41: mov cl, byte ptr [eax + 4]
        __asm _emit 0x8A
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588F4D44: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x588F4D47: cmp cl, 9
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x09
        // 0x588F4D4A: jne 0x588f4d5e
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x588F4D4C: cmp word ptr [edi + 0x164], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4D54: mov dword ptr [esp + 0x10], 3
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4D5C: jne 0x588f4d66
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x588F4D5E: mov dword ptr [esp + 0x10], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4D66: pop esi
        __asm _emit 0x5E
        // 0x588F4D67: pop ebx
        __asm _emit 0x5B
        // 0x588F4D68: test byte ptr [ebp + 0x10b], 1
        __asm _emit 0xF6
        __asm _emit 0x85
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588F4D6F: pop edi
        __asm _emit 0x5F
        // 0x588F4D70: je 0x588f4d93
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x588F4D72: cmp dword ptr [ebp + 0x144], 0
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4D79: je 0x588f4d93
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x588F4D7B: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588F4D7F: cmp eax, dword ptr [esp + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588F4D83: jge 0x588f4d93
        __asm _emit 0x7D
        __asm _emit 0x0E
        // 0x588F4D85: cmp eax, dword ptr [ebp + 0x41c]
        __asm _emit 0x3B
        __asm _emit 0x85
        __asm _emit 0x1C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4D8B: ja 0x588f4d9c
        __asm _emit 0x77
        __asm _emit 0x0F
        // 0x588F4D8D: mov dword ptr [ebp + 0x41c], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x1C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4D93: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588F4D97: pop ebp
        __asm _emit 0x5D
        // 0x588F4D98: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588F4D9B: ret
        __asm _emit 0xC3
        // 0x588F4D9C: mov eax, 2
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4DA1: pop ebp
        __asm _emit 0x5D
        // 0x588F4DA2: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588F4DA5: ret
        __asm _emit 0xC3
    }
}
