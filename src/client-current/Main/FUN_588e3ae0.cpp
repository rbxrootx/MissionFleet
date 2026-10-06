// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1894 bytes in 3 discontiguous ranges.
// Source symbol alias: FUN_588e3ae0.

// Ghidra body range 0x588E3AE0..0x588E3C9E; 446 mapped bytes.
extern "C" __declspec(naked) void FUN_588e3ae0_segment_00() {
    __asm {
        // 0x588E3AE0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588E3AE2: push 0x589897be
        __asm _emit 0x68
        __asm _emit 0xBE
        __asm _emit 0x97
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588E3AE7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3AED: push eax
        __asm _emit 0x50
        // 0x588E3AEE: sub esp, 0x13c
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3AF4: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588E3AF9: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588E3AFB: mov dword ptr [esp + 0x138], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3B02: push ebx
        __asm _emit 0x53
        // 0x588E3B03: push ebp
        __asm _emit 0x55
        // 0x588E3B04: push esi
        __asm _emit 0x56
        // 0x588E3B05: push edi
        __asm _emit 0x57
        // 0x588E3B06: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588E3B0B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588E3B0D: push eax
        __asm _emit 0x50
        // 0x588E3B0E: lea eax, [esp + 0x150]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3B15: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3B1B: mov eax, dword ptr [esp + 0x160]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3B22: mov dl, byte ptr [eax + 1]
        __asm _emit 0x8A
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x588E3B25: mov bl, byte ptr [eax + 2]
        __asm _emit 0x8A
        __asm _emit 0x58
        __asm _emit 0x02
        // 0x588E3B28: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588E3B2A: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x588E3B2C: movzx ebp, cl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xE9
        // 0x588E3B2F: and ebp, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE5
        __asm _emit 0x1F
        // 0x588E3B32: lea eax, [esi + 0x34c]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3B38: mov eax, dword ptr [eax + ebp*4 + 0xb40]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xA8
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3B3F: mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588E3B43: mov byte ptr [esp + 0x17], dl
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x17
        // 0x588E3B47: mov byte ptr [esp + 0x2c], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588E3B4B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588E3B4D: je 0x588e4221
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCE
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3B53: movzx ax, byte ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x00
        // 0x588E3B57: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x588E3B5A: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0D
        // 0x588E3B5E: jne 0x588e4221
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xBD
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3B64: shr cl, 5
        __asm _emit 0xC0
        __asm _emit 0xE9
        __asm _emit 0x05
        // 0x588E3B67: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x588E3B69: jne 0x588e3f42
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3B6F: movzx eax, word ptr [esi + ebp*4 + 0xe0e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x84
        __asm _emit 0xAE
        __asm _emit 0x0E
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3B77: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3B7C: cmp dword ptr [0x58a24574], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0x74
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x588E3B83: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588E3B87: je 0x588e3c1c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3B8D: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3B92: mov byte ptr [esp + 0x50], cl
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x588E3B96: lea ecx, [esp + 0x51]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x51
        // 0x588E3B9A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588E3B9C: push ecx
        __asm _emit 0x51
        // 0x588E3B9D: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0x90
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588E3BA2: mov ebp, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588E3BA6: mov eax, dword ptr [esi + 0x6028]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3BAC: mov ecx, dword ptr [eax + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3BB2: mov eax, dword ptr [eax + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3BB8: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E3BBE: mov edi, dword ptr [edx + 0x10488]
        __asm _emit 0x8B
        __asm _emit 0xBA
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588E3BC4: mov edx, dword ptr [edx + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588E3BCA: push ebp
        __asm _emit 0x55
        // 0x588E3BCB: movzx ebp, bl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xEB
        // 0x588E3BCE: push ebp
        __asm _emit 0x55
        // 0x588E3BCF: movzx ebp, byte ptr [esp + 0x2b]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2B
        // 0x588E3BD4: push ebp
        __asm _emit 0x55
        // 0x588E3BD5: push ecx
        __asm _emit 0x51
        // 0x588E3BD6: push eax
        __asm _emit 0x50
        // 0x588E3BD7: lea eax, [esi + 0x3a0]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3BDD: push eax
        __asm _emit 0x50
        // 0x588E3BDE: push edi
        __asm _emit 0x57
        // 0x588E3BDF: push edx
        __asm _emit 0x52
        // 0x588E3BE0: lea ecx, [esp + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x78
        // 0x588E3BE4: push 0x589a11f0
        __asm _emit 0x68
        __asm _emit 0xF0
        __asm _emit 0x11
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588E3BE9: push ecx
        __asm _emit 0x51
        // 0x588E3BEA: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588E3BF0: add esp, 0x34
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x34
        // 0x588E3BF3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588E3BF5: lea edx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588E3BF9: push edx
        __asm _emit 0x52
        // 0x588E3BFA: lea eax, [esp + 0x54]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x588E3BFE: push eax
        __asm _emit 0x50
        // 0x588E3BFF: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588E3C05: mov edx, dword ptr [0x58a0b4d4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xD4
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x588E3C0B: push eax
        __asm _emit 0x50
        // 0x588E3C0C: lea ecx, [esp + 0x58]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x588E3C10: push ecx
        __asm _emit 0x51
        // 0x588E3C11: push edx
        __asm _emit 0x52
        // 0x588E3C12: call dword ptr [0x5898c1a0]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA0
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588E3C18: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588E3C1C: mov eax, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3C22: movzx cx, byte ptr [esp + 0x17]
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x17
        // 0x588E3C28: mov dx, word ptr [eax + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588E3C2C: mov edi, 0xff
        __asm _emit 0xBF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3C31: and dx, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD7
        // 0x588E3C34: cmp cx, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x588E3C37: jbe 0x588e3c6a
        __asm _emit 0x76
        __asm _emit 0x31
        // 0x588E3C39: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E3C3F: cmp dword ptr [edx + 4], esi
        __asm _emit 0x39
        __asm _emit 0x72
        __asm _emit 0x04
        // 0x588E3C42: jne 0x588e3c6a
        __asm _emit 0x75
        __asm _emit 0x26
        // 0x588E3C44: mov ax, word ptr [eax + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x10
        // 0x588E3C48: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x588E3C4A: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC2
        // 0x588E3C4D: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x588E3C50: push eax
        __asm _emit 0x50
        // 0x588E3C51: push ecx
        __asm _emit 0x51
        // 0x588E3C52: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E3C58: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x588E3C5A: call 0x587b9b30
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0x5E
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x588E3C5F: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E3C65: call 0x58970ae0
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0xCE
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588E3C6A: movzx eax, byte ptr [esp + 0x17]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x17
        // 0x588E3C6F: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588E3C71: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588E3C73: mov dword ptr [esp + 0x30], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588E3C77: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588E3C7B: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588E3C7F: jle 0x588e3f1e
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x99
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3C85: movzx ebx, bl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xDB
        // 0x588E3C88: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588E3C8A: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x588E3C8D: lea edx, [ecx + esi + 0x138c]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x31
        __asm _emit 0x8C
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3C94: mov dword ptr [esp + 0x38], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588E3C98: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588E3C9C: jmp 0x588e3ca4
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x588E3CA0..0x588E3FED; 845 mapped bytes.
extern "C" __declspec(naked) void FUN_588e3ae0_segment_01() {
    __asm {
        // 0x588E3CA0: mov ebx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588E3CA4: push 0x560
        __asm _emit 0x68
        __asm _emit 0x60
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3CA9: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x8F
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588E3CAE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588E3CB1: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588E3CB5: mov dword ptr [esp + 0x158], edi
        __asm _emit 0x89
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3CBC: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588E3CBE: je 0x588e3cec
        __asm _emit 0x74
        __asm _emit 0x2C
        // 0x588E3CC0: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E3CC6: mov edx, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588E3CCC: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588E3CCF: push 0x2710
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3CD4: push edi
        __asm _emit 0x57
        // 0x588E3CD5: push edi
        __asm _emit 0x57
        // 0x588E3CD6: push edi
        __asm _emit 0x57
        // 0x588E3CD7: push ecx
        __asm _emit 0x51
        // 0x588E3CD8: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588E3CDB: push ecx
        __asm _emit 0x51
        // 0x588E3CDC: push edx
        __asm _emit 0x52
        // 0x588E3CDD: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588E3CE1: push edx
        __asm _emit 0x52
        // 0x588E3CE2: push esi
        __asm _emit 0x56
        // 0x588E3CE3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588E3CE5: call 0x58741c20
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0xDF
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588E3CEA: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588E3CEC: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E3CF1: cmp dword ptr [eax + 0x218c4], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xC4
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3CF8: mov dword ptr [esp + 0x158], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E3D03: mov dword ptr [esp + 0x34], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588E3D07: jne 0x588e3d19
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x588E3D09: mov ecx, dword ptr [0x58a245a8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E3D0F: cmp word ptr [ecx + 0x204], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        // 0x588E3D17: jne 0x588e3d36
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x588E3D19: cmp dword ptr [esi + 0x63bc], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xBC
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3D20: je 0x588e3d36
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x588E3D22: mov edx, dword ptr [esi + ebx*4 + 0x6324]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x9E
        __asm _emit 0x24
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3D29: cmp byte ptr [edx + 2], 0xe
        __asm _emit 0x80
        __asm _emit 0x7A
        __asm _emit 0x02
        __asm _emit 0x0E
        // 0x588E3D2D: jne 0x588e3d36
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x588E3D2F: mov byte ptr [edi + 0x9c], 1
        __asm _emit 0xC6
        __asm _emit 0x87
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588E3D36: mov ecx, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3D3C: mov dl, byte ptr [ecx + 4]
        __asm _emit 0x8A
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588E3D3F: mov eax, dword ptr [esi + ebx*4 + 0x6324]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x9E
        __asm _emit 0x24
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3D46: mov ecx, dword ptr [esi + ebp*4 + 0xe8c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xAE
        __asm _emit 0x8C
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3D4D: push eax
        __asm _emit 0x50
        // 0x588E3D4E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588E3D50: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x588E3D53: cmp dl, 8
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x588E3D56: sete al
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC0
        // 0x588E3D59: push eax
        __asm _emit 0x50
        // 0x588E3D5A: mov eax, dword ptr [esi + 0x6060]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3D60: push ebx
        __asm _emit 0x53
        // 0x588E3D61: add eax, 0x384
        __asm _emit 0x05
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3D66: push ecx
        __asm _emit 0x51
        // 0x588E3D67: cdq
        __asm _emit 0x99
        // 0x588E3D68: mov ecx, 0xe10
        __asm _emit 0xB9
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3D6D: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x588E3D6F: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588E3D71: push edx
        __asm _emit 0x52
        // 0x588E3D72: call 0x5873a7c0
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0x6A
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588E3D77: mov eax, dword ptr [esi + ebp*8 + 0xf10]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xEE
        __asm _emit 0x10
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3D7E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588E3D80: je 0x588e3db4
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x588E3D82: cmp dword ptr [esp + 0x28], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x588E3D87: je 0x588e3db4
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x588E3D89: mov edx, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3D8F: mov cl, byte ptr [edx + 4]
        __asm _emit 0x8A
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x588E3D92: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x588E3D94: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x588E3D97: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588E3D99: cmp cl, 9
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x09
        // 0x588E3D9C: sete dl
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC2
        // 0x588E3D9F: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588E3DA1: push edx
        __asm _emit 0x52
        // 0x588E3DA2: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E3DA8: cmp dword ptr [edx + 4], esi
        __asm _emit 0x39
        __asm _emit 0x72
        __asm _emit 0x04
        // 0x588E3DAB: sete cl
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC1
        // 0x588E3DAE: push ecx
        __asm _emit 0x51
        // 0x588E3DAF: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588E3DB1: push eax
        __asm _emit 0x50
        // 0x588E3DB2: jmp 0x588e3dcd
        __asm _emit 0xEB
        __asm _emit 0x19
        // 0x588E3DB4: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588E3DB6: push ecx
        __asm _emit 0x51
        // 0x588E3DB7: push ecx
        __asm _emit 0x51
        // 0x588E3DB8: mov byte ptr [esp + 0x2c], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x00
        // 0x588E3DBD: mov byte ptr [esp + 0x2d], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2D
        __asm _emit 0x00
        // 0x588E3DC2: mov word ptr [esp + 0x2e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2E
        // 0x588E3DC7: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588E3DCB: push ecx
        __asm _emit 0x51
        // 0x588E3DCC: push edx
        __asm _emit 0x52
        // 0x588E3DCD: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588E3DCF: call 0x5873b6a0
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0x78
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588E3DD4: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E3DD9: cmp dword ptr [eax + 4], esi
        __asm _emit 0x39
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x588E3DDC: jne 0x588e3efe
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3DE2: cmp dword ptr [esp + 0x30], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x588E3DE7: jne 0x588e3eb3
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3DED: push edi
        __asm _emit 0x57
        // 0x588E3DEE: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588E3DF0: call 0x588e0410
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0xC6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E3DF5: movzx ecx, word ptr [edi + 0x2cc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8F
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3DFC: movzx edx, byte ptr [ecx + esi + 0x1463]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x94
        __asm _emit 0x31
        __asm _emit 0x63
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3E04: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x588E3E06: cmp ebx, edx
        __asm _emit 0x3B
        __asm _emit 0xDA
        // 0x588E3E08: jl 0x588e3e9b
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x8D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3E0E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588E3E10: mov dword ptr [esp + 0x3d], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3D
        // 0x588E3E14: mov dword ptr [esp + 0x41], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x41
        // 0x588E3E18: mov dword ptr [esp + 0x45], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x45
        // 0x588E3E1C: mov word ptr [esp + 0x49], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x49
        // 0x588E3E21: mov byte ptr [esp + 0x4b], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4B
        // 0x588E3E25: mov byte ptr [esp + 0x3c], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x00
        // 0x588E3E2A: movzx eax, word ptr [edi + 0x2cc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x87
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3E31: dec eax
        __asm _emit 0x48
        // 0x588E3E32: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x588E3E35: ja 0x588e3e70
        __asm _emit 0x77
        __asm _emit 0x39
        // 0x588E3E37: jmp dword ptr [eax*4 + 0x588e424c]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x4C
        __asm _emit 0x42
        __asm _emit 0x8E
        __asm _emit 0x58
        // 0x588E3E3E: push 0x589a11e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x11
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588E3E43: jmp 0x588e3e62
        __asm _emit 0xEB
        __asm _emit 0x1D
        // 0x588E3E45: push 0x589a11dc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0x11
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588E3E4A: lea ecx, [esp + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588E3E4E: push ecx
        __asm _emit 0x51
        // 0x588E3E4F: jmp 0x588e3e67
        __asm _emit 0xEB
        __asm _emit 0x16
        // 0x588E3E51: push 0x589a11cc
        __asm _emit 0x68
        __asm _emit 0xCC
        __asm _emit 0x11
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588E3E56: lea edx, [esp + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588E3E5A: push edx
        __asm _emit 0x52
        // 0x588E3E5B: jmp 0x588e3e67
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x588E3E5D: push 0x589a11c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x11
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588E3E62: lea eax, [esp + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588E3E66: push eax
        __asm _emit 0x50
        // 0x588E3E67: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588E3E6D: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588E3E70: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588E3E74: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588E3E76: lea ecx, [esp + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588E3E7A: push ecx
        __asm _emit 0x51
        // 0x588E3E7B: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E3E81: shl edx, 0x10
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x10
        // 0x588E3E84: or edx, ebx
        __asm _emit 0x0B
        __asm _emit 0xD3
        // 0x588E3E86: push edx
        __asm _emit 0x52
        // 0x588E3E87: push 6
        __asm _emit 0x6A
        __asm _emit 0x06
        // 0x588E3E89: call 0x587b9b90
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x5D
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x588E3E8E: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E3E94: call 0x58970ae0
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0xCC
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588E3E99: jmp 0x588e3eab
        __asm _emit 0xEB
        __asm _emit 0x10
        // 0x588E3E9B: lea eax, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588E3E9F: push eax
        __asm _emit 0x50
        // 0x588E3EA0: lea ecx, [esi + 0x144c]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3EA6: call 0x587a54d0
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0x16
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588E3EAB: mov dword ptr [esp + 0x30], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3EB3: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E3EB9: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588E3EBC: mov eax, dword ptr [edx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3EC2: mov cl, byte ptr [eax + 4]
        __asm _emit 0x8A
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588E3EC5: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x588E3EC8: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588E3ECA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588E3ECC: cmp cl, 9
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x09
        // 0x588E3ECF: jne 0x588e3ee8
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x588E3ED1: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588E3ED5: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E3EDA: mov ecx, dword ptr [eax + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3EE0: push edx
        __asm _emit 0x52
        // 0x588E3EE1: call 0x5885fb80
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0xBC
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x588E3EE6: jmp 0x588e3efe
        __asm _emit 0xEB
        __asm _emit 0x16
        // 0x588E3EE8: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588E3EEC: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E3EF2: push ecx
        __asm _emit 0x51
        // 0x588E3EF3: mov ecx, dword ptr [edx + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3EF9: call 0x5885a220
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x63
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x588E3EFE: mov ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588E3F02: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588E3F06: push ebx
        __asm _emit 0x53
        // 0x588E3F07: push edi
        __asm _emit 0x57
        // 0x588E3F08: call 0x587ef280
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0xB3
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588E3F0D: inc ebx
        __asm _emit 0x43
        // 0x588E3F0E: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588E3F10: cmp ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x3B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588E3F14: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588E3F18: jl 0x588e3ca0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x82
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E3F1E: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588E3F22: push edi
        __asm _emit 0x57
        // 0x588E3F23: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3F28: push eax
        __asm _emit 0x50
        // 0x588E3F29: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588E3F2B: push ebp
        __asm _emit 0x55
        // 0x588E3F2C: lea ecx, [esi + 0x34c]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3F32: call 0x588e9590
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3F37: mov dword ptr [esi + 0x140c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3F3D: jmp 0x588e4221
        __asm _emit 0xE9
        __asm _emit 0xDF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3F42: cmp cl, 1
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x01
        // 0x588E3F45: jne 0x588e4066
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x1B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3F4B: cmp dword ptr [0x58a24574], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0x74
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x588E3F52: je 0x588e3fd8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3F58: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3F5D: lea eax, [esp + 0x51]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x51
        // 0x588E3F61: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588E3F63: push eax
        __asm _emit 0x50
        // 0x588E3F64: mov byte ptr [esp + 0x58], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x588E3F69: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0x8C
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588E3F6E: mov eax, dword ptr [esi + 0x6028]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3F74: mov edx, dword ptr [eax + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3F7A: mov eax, dword ptr [eax + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3F80: movzx ecx, bl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xCB
        // 0x588E3F83: push ecx
        __asm _emit 0x51
        // 0x588E3F84: push edx
        __asm _emit 0x52
        // 0x588E3F85: push eax
        __asm _emit 0x50
        // 0x588E3F86: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E3F8B: mov edx, dword ptr [eax + 0x10488]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588E3F91: mov eax, dword ptr [eax + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588E3F97: lea ecx, [esi + 0x3a0]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3F9D: push ecx
        __asm _emit 0x51
        // 0x588E3F9E: push edx
        __asm _emit 0x52
        // 0x588E3F9F: push eax
        __asm _emit 0x50
        // 0x588E3FA0: lea ecx, [esp + 0x70]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x70
        // 0x588E3FA4: push 0x589a1180
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x11
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588E3FA9: push ecx
        __asm _emit 0x51
        // 0x588E3FAA: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588E3FB0: add esp, 0x2c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x2C
        // 0x588E3FB3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588E3FB5: lea edx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588E3FB9: push edx
        __asm _emit 0x52
        // 0x588E3FBA: lea eax, [esp + 0x54]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x588E3FBE: push eax
        __asm _emit 0x50
        // 0x588E3FBF: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588E3FC5: mov edx, dword ptr [0x58a0b4d4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xD4
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x588E3FCB: push eax
        __asm _emit 0x50
        // 0x588E3FCC: lea ecx, [esp + 0x58]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x588E3FD0: push ecx
        __asm _emit 0x51
        // 0x588E3FD1: push edx
        __asm _emit 0x52
        // 0x588E3FD2: call dword ptr [0x5898c1a0]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA0
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588E3FD8: movzx ebp, bl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xEB
        // 0x588E3FDB: lea eax, [ebp + 0x139]
        __asm _emit 0x8D
        __asm _emit 0x85
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E3FE1: shl eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x04
        // 0x588E3FE4: mov edi, dword ptr [eax + esi]
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x30
        // 0x588E3FE7: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588E3FE9: je 0x588e400f
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x588E3FEB: jmp 0x588e3ff0
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x588E3FF0..0x588E424B; 603 mapped bytes.
extern "C" __declspec(naked) void FUN_588e3ae0_segment_02() {
    __asm {
        // 0x588E3FF0: mov ecx, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x588E3FF3: call 0x5873a250
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0x62
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588E3FF8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588E3FFA: je 0x588e4008
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588E3FFC: mov ecx, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x588E3FFF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588E4001: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x588E4003: call 0x5873cee0
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0x8E
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588E4008: mov edi, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x588E400B: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588E400D: jne 0x588e3ff0
        __asm _emit 0x75
        __asm _emit 0xE1
        // 0x588E400F: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588E4011: lea ebx, [esi + 0x1390]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0x90
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E4017: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x588E4019: je 0x588e4058
        __asm _emit 0x74
        __asm _emit 0x3D
        // 0x588E401B: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x588E401D: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588E401F: jbe 0x588e402a
        __asm _emit 0x76
        __asm _emit 0x09
        // 0x588E4021: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588E4023: add al, al
        __asm _emit 0x02
        __asm _emit 0xC0
        // 0x588E4025: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x588E4028: jne 0x588e4023
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x588E402A: mov cl, byte ptr [esp + 0x17]
        __asm _emit 0x8A
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x17
        // 0x588E402E: test cl, al
        __asm _emit 0x84
        __asm _emit 0xC1
        // 0x588E4030: je 0x588e4058
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x588E4032: mov esi, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x33
        // 0x588E4034: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588E4036: je 0x588e4058
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x588E4038: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x588E403B: call 0x5873a250
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x62
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588E4040: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588E4043: jne 0x588e4051
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x588E4045: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x588E4048: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588E404A: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x588E404C: call 0x5873cee0
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x8E
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588E4051: mov esi, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x08
        // 0x588E4054: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588E4056: jne 0x588e4038
        __asm _emit 0x75
        __asm _emit 0xE0
        // 0x588E4058: inc edi
        __asm _emit 0x47
        // 0x588E4059: add ebx, 0x10
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x10
        // 0x588E405C: cmp edi, 8
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x08
        // 0x588E405F: jb 0x588e4017
        __asm _emit 0x72
        __asm _emit 0xB6
        // 0x588E4061: jmp 0x588e4221
        __asm _emit 0xE9
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E4066: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x588E4069: jne 0x588e4221
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E406F: cmp dword ptr [0x58a24574], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0x74
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x588E4076: je 0x588e40fc
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E407C: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E4081: lea edx, [esp + 0x51]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x51
        // 0x588E4085: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588E4087: push edx
        __asm _emit 0x52
        // 0x588E4088: mov byte ptr [esp + 0x58], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x588E408D: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0x8B
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588E4092: mov eax, dword ptr [esi + 0x6028]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E4098: mov edx, dword ptr [eax + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E409E: mov eax, dword ptr [eax + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E40A4: movzx ecx, bl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xCB
        // 0x588E40A7: push ecx
        __asm _emit 0x51
        // 0x588E40A8: push edx
        __asm _emit 0x52
        // 0x588E40A9: push eax
        __asm _emit 0x50
        // 0x588E40AA: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E40AF: mov edx, dword ptr [eax + 0x10488]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588E40B5: mov eax, dword ptr [eax + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588E40BB: lea ecx, [esi + 0x3a0]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E40C1: push ecx
        __asm _emit 0x51
        // 0x588E40C2: push edx
        __asm _emit 0x52
        // 0x588E40C3: push eax
        __asm _emit 0x50
        // 0x588E40C4: lea ecx, [esp + 0x70]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x70
        // 0x588E40C8: push 0x589a1180
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x11
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588E40CD: push ecx
        __asm _emit 0x51
        // 0x588E40CE: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588E40D4: add esp, 0x2c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x2C
        // 0x588E40D7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588E40D9: lea edx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588E40DD: push edx
        __asm _emit 0x52
        // 0x588E40DE: lea eax, [esp + 0x54]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x588E40E2: push eax
        __asm _emit 0x50
        // 0x588E40E3: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588E40E9: mov edx, dword ptr [0x58a0b4d4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xD4
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x588E40EF: push eax
        __asm _emit 0x50
        // 0x588E40F0: lea ecx, [esp + 0x58]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x588E40F4: push ecx
        __asm _emit 0x51
        // 0x588E40F5: push edx
        __asm _emit 0x52
        // 0x588E40F6: call dword ptr [0x5898c1a0]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA0
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588E40FC: movzx eax, bl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC3
        // 0x588E40FF: add eax, 0x139
        __asm _emit 0x05
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E4104: shl eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x04
        // 0x588E4107: mov esi, dword ptr [eax + esi]
        __asm _emit 0x8B
        __asm _emit 0x34
        __asm _emit 0x30
        // 0x588E410A: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588E410C: je 0x588e4221
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x0F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E4112: mov bl, 0x61
        __asm _emit 0xB3
        __asm _emit 0x61
        // 0x588E4114: mov edi, 0x27
        __asm _emit 0xBF
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E4119: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E4120: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x588E4123: call 0x5873a250
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x61
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588E4128: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588E412A: je 0x588e4216
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E4130: lea ecx, [esp + 0x17]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x17
        // 0x588E4134: push ecx
        __asm _emit 0x51
        // 0x588E4135: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x588E4138: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x588E413A: mov byte ptr [esp + 0x1f], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x588E413E: call 0x5873cee0
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x8D
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588E4143: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E4149: cmp dword ptr [edx + 0x21c34], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x34
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E4150: jne 0x588e4216
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E4156: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x588E4159: mov ecx, dword ptr [eax + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x74
        // 0x588E415C: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E4162: cmp ecx, dword ptr [edx + 4]
        __asm _emit 0x3B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x588E4165: jne 0x588e4216
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E416B: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E4171: push 0x29
        __asm _emit 0x6A
        __asm _emit 0x29
        // 0x588E4173: push 0x24
        __asm _emit 0x6A
        __asm _emit 0x24
        // 0x588E4175: push 6
        __asm _emit 0x6A
        __asm _emit 0x06
        // 0x588E4177: call 0x588ebeb0
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x7D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E417C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588E417E: jne 0x588e4216
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E4184: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xA1
        __asm _emit 0xD0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E4189: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E418F: jle 0x588e41a8
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588E4191: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E4198: je 0x588e41a8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588E419A: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E41A0: mov ecx, dword ptr [eax + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E41A6: jmp 0x588e41aa
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588E41A8: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588E41AA: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588E41AC: mov eax, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x14
        // 0x588E41AF: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588E41B1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588E41B3: jne 0x588e4216
        __asm _emit 0x75
        __asm _emit 0x61
        // 0x588E41B5: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xA1
        __asm _emit 0xD0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E41BA: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E41C0: jle 0x588e41d9
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588E41C2: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E41C9: je 0x588e41d9
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588E41CB: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E41D1: mov ecx, dword ptr [ecx + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E41D7: jmp 0x588e41db
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588E41D9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588E41DB: mov edx, dword ptr [0x58a248fc]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xFC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E41E1: push edx
        __asm _emit 0x52
        // 0x588E41E2: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x37
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588E41E7: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xA1
        __asm _emit 0xD0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E41EC: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E41F2: jle 0x588e420b
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588E41F4: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E41FB: je 0x588e420b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588E41FD: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E4203: mov ecx, dword ptr [eax + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E4209: jmp 0x588e420d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588E420B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588E420D: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588E420F: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588E4212: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588E4214: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588E4216: mov esi, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x08
        // 0x588E4219: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588E421B: jne 0x588e4120
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E4221: mov ecx, dword ptr [esp + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E4228: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E422F: pop ecx
        __asm _emit 0x59
        // 0x588E4230: pop edi
        __asm _emit 0x5F
        // 0x588E4231: pop esi
        __asm _emit 0x5E
        // 0x588E4232: pop ebp
        __asm _emit 0x5D
        // 0x588E4233: pop ebx
        __asm _emit 0x5B
        // 0x588E4234: mov ecx, dword ptr [esp + 0x138]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E423B: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588E423D: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0x89
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588E4242: add esp, 0x148
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E4248: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
