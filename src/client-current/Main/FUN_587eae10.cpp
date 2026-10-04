// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587EAE10 .. +0x437 bytes.
// Source symbol alias: FUN_587eae10.
extern "C" __declspec(naked) void FUN_587eae10() {
    __asm {
        // 0x587EAE10: sub esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAE16: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587EAE1B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587EAE1D: mov dword ptr [esp + 0x100], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAE24: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EAE29: push edi
        __asm _emit 0x57
        // 0x587EAE2A: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587EAE2C: mov ecx, dword ptr [eax + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x7C
        // 0x587EAE2F: call 0x588d6510
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0xB6
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x587EAE34: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x587EAE36: je 0x587eb231
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAE3C: push esi
        __asm _emit 0x56
        // 0x587EAE3D: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587EAE3F: cmp dword ptr [edi + 0x20d5c], esi
        __asm _emit 0x39
        __asm _emit 0xB7
        __asm _emit 0x5C
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EAE45: jne 0x587eb230
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAE4B: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EAE51: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587EAE54: cmp dword ptr [edx + 0x63b0], esi
        __asm _emit 0x39
        __asm _emit 0xB2
        __asm _emit 0xB0
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAE5A: jne 0x587eb230
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAE60: cmp dword ptr [edi + 0x10478], esi
        __asm _emit 0x39
        __asm _emit 0xB7
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EAE66: jne 0x587eb230
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAE6C: mov eax, dword ptr [edi + 0x20e20]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x20
        __asm _emit 0x0E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EAE72: push ebx
        __asm _emit 0x53
        // 0x587EAE73: push ebp
        __asm _emit 0x55
        // 0x587EAE74: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587EAE77: jne 0x587eafad
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAE7D: mov edx, dword ptr [edi + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EAE83: movzx ebp, word ptr [edx + 0x90]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xAA
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAE8A: movzx eax, bp
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC5
        // 0x587EAE8D: cmp eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x587EAE90: je 0x587eaea8
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x587EAE92: cmp eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x20
        // 0x587EAE95: je 0x587eaea4
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587EAE97: cmp eax, 0x30
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x30
        // 0x587EAE9A: jne 0x587eb0af
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x0F
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAEA0: mov bl, 0x13
        __asm _emit 0xB3
        __asm _emit 0x13
        // 0x587EAEA2: jmp 0x587eaeaa
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x587EAEA4: mov bl, 0x12
        __asm _emit 0xB3
        __asm _emit 0x12
        // 0x587EAEA6: jmp 0x587eaeaa
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587EAEA8: mov bl, 0x11
        __asm _emit 0xB3
        __asm _emit 0x11
        // 0x587EAEAA: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x587EAEAD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587EAEB0: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587EAEB3: je 0x587eaeba
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587EAEB5: cmp eax, -2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFE
        // 0x587EAEB8: jne 0x587eaef8
        __asm _emit 0x75
        __asm _emit 0x3E
        // 0x587EAEBA: mov ecx, dword ptr [edi + 0x20e24]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x24
        __asm _emit 0x0E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EAEC0: lea eax, [esp + 0x12]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x587EAEC4: push eax
        __asm _emit 0x50
        // 0x587EAEC5: push ebp
        __asm _emit 0x55
        // 0x587EAEC6: push ecx
        __asm _emit 0x51
        // 0x587EAEC7: mov ecx, dword ptr [edi + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EAECD: call 0x587a5840
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0xA9
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587EAED2: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587EAED5: jne 0x587eaeeb
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x587EAED7: mov dword ptr [edi + 0x20e24], 0
        __asm _emit 0xC7
        __asm _emit 0x87
        __asm _emit 0x24
        __asm _emit 0x0E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAEE1: cmp esi, 1
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x01
        // 0x587EAEE4: je 0x587eaef8
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587EAEE6: lea esi, [eax + 2]
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0x02
        // 0x587EAEE9: jmp 0x587eaeb0
        __asm _emit 0xEB
        __asm _emit 0xC5
        // 0x587EAEEB: cmp eax, -2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFE
        // 0x587EAEEE: jne 0x587eaeb0
        __asm _emit 0x75
        __asm _emit 0xC0
        // 0x587EAEF0: inc dword ptr [edi + 0x20e24]
        __asm _emit 0xFF
        __asm _emit 0x87
        __asm _emit 0x24
        __asm _emit 0x0E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EAEF6: jmp 0x587eaeb0
        __asm _emit 0xEB
        __asm _emit 0xB8
        // 0x587EAEF8: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x587EAEFB: jle 0x587eafa2
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAF01: inc dword ptr [0x58a24900]
        __asm _emit 0xFF
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EAF07: and bl, 0x3f
        __asm _emit 0x80
        __asm _emit 0xE3
        __asm _emit 0x3F
        // 0x587EAF0A: movzx dx, bl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD3
        // 0x587EAF0E: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x587EAF11: or dx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD0
        // 0x587EAF14: cmp dword ptr [0x589cc1e0], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xE0
        __asm _emit 0xC1
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x587EAF1B: mov word ptr [esp + 0x10], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587EAF20: je 0x587eaf3f
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x587EAF22: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EAF28: push 0x5f
        __asm _emit 0x6A
        __asm _emit 0x5F
        // 0x587EAF2A: push 0x5c
        __asm _emit 0x6A
        __asm _emit 0x5C
        // 0x587EAF2C: push 0x12
        __asm _emit 0x6A
        __asm _emit 0x12
        // 0x587EAF2E: call 0x588ebfa0
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0x10
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587EAF33: mov dword ptr [0x589cc1e0], 0
        __asm _emit 0xC7
        __asm _emit 0x05
        __asm _emit 0xE0
        __asm _emit 0xC1
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAF3D: jmp 0x587eaf61
        __asm _emit 0xEB
        __asm _emit 0x22
        // 0x587EAF3F: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x1C
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587EAF44: cdq
        __asm _emit 0x99
        // 0x587EAF45: mov ecx, 5
        __asm _emit 0xB9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAF4A: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587EAF4C: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587EAF4E: jne 0x587eaf61
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x587EAF50: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EAF56: push 0x61
        __asm _emit 0x6A
        __asm _emit 0x61
        // 0x587EAF58: push 0x60
        __asm _emit 0x6A
        __asm _emit 0x60
        // 0x587EAF5A: push 0x13
        __asm _emit 0x6A
        __asm _emit 0x13
        // 0x587EAF5C: call 0x588ebfa0
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x10
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587EAF61: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EAF67: mov eax, dword ptr [edx + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x7C
        // 0x587EAF6A: inc word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587EAF6E: movzx eax, word ptr [esp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587EAF73: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EAF75: shr eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x06
        // 0x587EAF78: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x587EAF7B: push eax
        __asm _emit 0x50
        // 0x587EAF7C: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587EAF80: push ecx
        __asm _emit 0x51
        // 0x587EAF81: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EAF87: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EAF89: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EAF8B: push 0x80020500
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x80
        // 0x587EAF90: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0x5C
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587EAF95: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EAF9B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EAF9D: call 0x588542a0
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0x92
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x587EAFA2: inc dword ptr [edi + 0x20e24]
        __asm _emit 0xFF
        __asm _emit 0x87
        __asm _emit 0x24
        __asm _emit 0x0E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EAFA8: jmp 0x587eb0af
        __asm _emit 0xE9
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAFAD: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x587EAFAF: je 0x587eafd6
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x587EAFB1: mov ecx, dword ptr [edi + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EAFB7: movzx eax, word ptr [ecx + 0x90]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAFBE: mov edx, dword ptr [edx + 0x340]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAFC4: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x587EAFC7: push eax
        __asm _emit 0x50
        // 0x587EAFC8: push edx
        __asm _emit 0x52
        // 0x587EAFC9: call 0x587a7400
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0xC4
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587EAFCE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587EAFD0: je 0x587eb0af
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAFD6: mov ecx, dword ptr [edi + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EAFDC: mov dword ptr [edi + 0x20e24], esi
        __asm _emit 0x89
        __asm _emit 0xB7
        __asm _emit 0x24
        __asm _emit 0x0E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EAFE2: movzx edx, word ptr [ecx + 0x90]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAFE9: movzx eax, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC2
        // 0x587EAFEC: cmp eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x587EAFEF: je 0x587eb007
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x587EAFF1: cmp eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x20
        // 0x587EAFF4: je 0x587eb003
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587EAFF6: cmp eax, 0x30
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x30
        // 0x587EAFF9: jne 0x587eb0af
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAFFF: mov bl, 0x13
        __asm _emit 0xB3
        __asm _emit 0x13
        // 0x587EB001: jmp 0x587eb009
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x587EB003: mov bl, 0x12
        __asm _emit 0xB3
        __asm _emit 0x12
        // 0x587EB005: jmp 0x587eb009
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587EB007: mov bl, 0x11
        __asm _emit 0xB3
        __asm _emit 0x11
        // 0x587EB009: lea eax, [esp + 0x12]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x587EB00D: push eax
        __asm _emit 0x50
        // 0x587EB00E: push edx
        __asm _emit 0x52
        // 0x587EB00F: call 0x587a5980
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0xA9
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587EB014: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x587EB017: jle 0x587eb0af
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB01D: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EB023: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x587EB026: and bl, 0x3f
        __asm _emit 0x80
        __asm _emit 0xE3
        __asm _emit 0x3F
        // 0x587EB029: movzx cx, bl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xCB
        // 0x587EB02D: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x587EB030: mov word ptr [esp + 0x10], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587EB035: mov eax, dword ptr [edx + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x7C
        // 0x587EB038: inc word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587EB03C: movzx eax, word ptr [esp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587EB041: push esi
        __asm _emit 0x56
        // 0x587EB042: shr eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x06
        // 0x587EB045: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x587EB048: push eax
        __asm _emit 0x50
        // 0x587EB049: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587EB04D: push ecx
        __asm _emit 0x51
        // 0x587EB04E: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EB054: push esi
        __asm _emit 0x56
        // 0x587EB055: push esi
        __asm _emit 0x56
        // 0x587EB056: push 0x80020500
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x80
        // 0x587EB05B: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x5C
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587EB060: cmp dword ptr [0x589cc1e0], esi
        __asm _emit 0x39
        __asm _emit 0x35
        __asm _emit 0xE0
        __asm _emit 0xC1
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587EB066: je 0x587eb081
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x587EB068: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EB06E: push 0x5f
        __asm _emit 0x6A
        __asm _emit 0x5F
        // 0x587EB070: push 0x5c
        __asm _emit 0x6A
        __asm _emit 0x5C
        // 0x587EB072: push 0x12
        __asm _emit 0x6A
        __asm _emit 0x12
        // 0x587EB074: call 0x588ebfa0
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0x0F
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587EB079: mov dword ptr [0x589cc1e0], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xE0
        __asm _emit 0xC1
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587EB07F: jmp 0x587eb0a3
        __asm _emit 0xEB
        __asm _emit 0x22
        // 0x587EB081: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0x1B
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587EB086: cdq
        __asm _emit 0x99
        // 0x587EB087: mov ecx, 5
        __asm _emit 0xB9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB08C: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587EB08E: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587EB090: jne 0x587eb0a3
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x587EB092: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EB098: push 0x61
        __asm _emit 0x6A
        __asm _emit 0x61
        // 0x587EB09A: push 0x60
        __asm _emit 0x6A
        __asm _emit 0x60
        // 0x587EB09C: push 0x13
        __asm _emit 0x6A
        __asm _emit 0x13
        // 0x587EB09E: call 0x588ebfa0
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0x0E
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587EB0A3: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EB0A9: push esi
        __asm _emit 0x56
        // 0x587EB0AA: call 0x588542a0
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0x91
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x587EB0AF: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587EB0B1: mov esi, 8
        __asm _emit 0xBE
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB0B6: lea ebx, [edi + 0x20ca0]
        __asm _emit 0x8D
        __asm _emit 0x9F
        __asm _emit 0xA0
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB0BC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587EB0C0: mov edx, dword ptr [edi + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB0C6: mov ecx, dword ptr [esi + edx]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x16
        // 0x587EB0C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587EB0CB: je 0x587eb14a
        __asm _emit 0x74
        __asm _emit 0x7D
        // 0x587EB0CD: cmp dword ptr [ecx + 0xf8], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB0D4: jne 0x587eb14a
        __asm _emit 0x75
        __asm _emit 0x74
        // 0x587EB0D6: cmp dword ptr [ebx], 0
        __asm _emit 0x83
        __asm _emit 0x3B
        __asm _emit 0x00
        // 0x587EB0D9: jne 0x587eb14a
        __asm _emit 0x75
        __asm _emit 0x6F
        // 0x587EB0DB: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587EB0DD: mov edx, dword ptr [eax + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x44
        // 0x587EB0E0: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587EB0E2: cmp eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x64
        // 0x587EB0E5: jne 0x587eb138
        __asm _emit 0x75
        __asm _emit 0x51
        // 0x587EB0E7: mov eax, dword ptr [edi + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB0ED: mov ecx, dword ptr [esi + eax]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x06
        // 0x587EB0F0: cmp dword ptr [ecx + 0x243ec], 2
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xEC
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x587EB0F7: jne 0x587eb14a
        __asm _emit 0x75
        __asm _emit 0x51
        // 0x587EB0F9: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EB0FF: push 0x53
        __asm _emit 0x6A
        __asm _emit 0x53
        // 0x587EB101: push 0x4e
        __asm _emit 0x6A
        __asm _emit 0x4E
        // 0x587EB103: push 0xe
        __asm _emit 0x6A
        __asm _emit 0x0E
        // 0x587EB105: call 0x588ebeb0
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0x0D
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587EB10A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587EB10C: jne 0x587eb223
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB112: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xA1
        __asm _emit 0xD0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EB117: mov esi, 7
        __asm _emit 0xBE
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB11C: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB122: jle 0x587eb162
        __asm _emit 0x7E
        __asm _emit 0x3E
        // 0x587EB124: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB12B: je 0x587eb162
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x587EB12D: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB133: mov ecx, dword ptr [ecx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x1C
        // 0x587EB136: jmp 0x587eb164
        __asm _emit 0xEB
        __asm _emit 0x2C
        // 0x587EB138: mov edx, dword ptr [edi + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB13E: mov eax, dword ptr [esi + edx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x16
        // 0x587EB141: cmp dword ptr [eax + 0x3910], 2
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x10
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x587EB148: je 0x587eb1c3
        __asm _emit 0x74
        __asm _emit 0x79
        // 0x587EB14A: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x587EB14D: inc ebp
        __asm _emit 0x45
        // 0x587EB14E: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x587EB151: cmp esi, 0x88
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB157: jne 0x587eb0c0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x63
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587EB15D: jmp 0x587eb22e
        __asm _emit 0xE9
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB162: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587EB164: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587EB166: mov eax, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x14
        // 0x587EB169: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587EB16B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587EB16D: jne 0x587eb223
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB173: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xA1
        __asm _emit 0xD0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EB178: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB17E: jle 0x587eb194
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x587EB180: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB187: je 0x587eb194
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587EB189: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB18F: mov ecx, dword ptr [ecx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x1C
        // 0x587EB192: jmp 0x587eb196
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587EB194: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587EB196: mov edx, dword ptr [0x58a248fc]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xFC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EB19C: push edx
        __asm _emit 0x52
        // 0x587EB19D: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0xC7
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587EB1A2: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xA1
        __asm _emit 0xD0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EB1A7: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB1AD: jle 0x587eb218
        __asm _emit 0x7E
        __asm _emit 0x69
        // 0x587EB1AF: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB1B6: je 0x587eb218
        __asm _emit 0x74
        __asm _emit 0x60
        // 0x587EB1B8: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB1BE: mov ecx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x1C
        // 0x587EB1C1: jmp 0x587eb21a
        __asm _emit 0xEB
        __asm _emit 0x57
        // 0x587EB1C3: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xA1
        __asm _emit 0xD0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EB1C8: mov esi, 8
        __asm _emit 0xBE
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB1CD: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB1D3: jle 0x587eb1e9
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x587EB1D5: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB1DC: je 0x587eb1e9
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587EB1DE: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB1E4: mov ecx, dword ptr [ecx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x20
        // 0x587EB1E7: jmp 0x587eb1eb
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587EB1E9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587EB1EB: mov edx, dword ptr [0x58a248fc]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xFC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EB1F1: push edx
        __asm _emit 0x52
        // 0x587EB1F2: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0xC7
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587EB1F7: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xA1
        __asm _emit 0xD0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EB1FC: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB202: jle 0x587eb218
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x587EB204: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB20B: je 0x587eb218
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587EB20D: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB213: mov ecx, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x20
        // 0x587EB216: jmp 0x587eb21a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587EB218: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587EB21A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587EB21C: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587EB21F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EB221: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587EB223: mov dword ptr [edi + ebp*4 + 0x20ca0], 1
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0xAF
        __asm _emit 0xA0
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB22E: pop ebp
        __asm _emit 0x5D
        // 0x587EB22F: pop ebx
        __asm _emit 0x5B
        // 0x587EB230: pop esi
        __asm _emit 0x5E
        // 0x587EB231: mov ecx, dword ptr [esp + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB238: pop edi
        __asm _emit 0x5F
        // 0x587EB239: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587EB23B: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0x19
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587EB240: add esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB246: ret
        __asm _emit 0xC3
    }
}
