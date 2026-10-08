// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1934 bytes in 3 exact ranges.
// Source symbol alias: FUN_5877be60.

// Ghidra body range 0x5877BE60..0x5877BFD8; 376 mapped bytes.
extern "C" __declspec(naked) void FUN_5877be60_segment_00() {
    __asm {
        // 0x5877BE60: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x5877BE63: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5877BE68: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5877BE6A: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5877BE6E: push esi
        __asm _emit 0x56
        // 0x5877BE6F: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5877BE71: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5877BE75: push edi
        __asm _emit 0x57
        // 0x5877BE76: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5877BE7A: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x5877BE7C: je 0x5877c5e9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x67
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877BE82: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x5877BE85: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877BE87: je 0x5877bebd
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x5877BE89: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x34
        // 0x5877BE8C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877BE8E: je 0x5877c394
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877BE94: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5877BE96: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5877BE98: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x5877BE9B: push edi
        __asm _emit 0x57
        // 0x5877BE9C: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5877BE9E: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x5877BEA1: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x5877BEA4: je 0x5877bebd
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x5877BEA6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877BEA8: jne 0x5877be94
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x5877BEAA: pop edi
        __asm _emit 0x5F
        // 0x5877BEAB: pop esi
        __asm _emit 0x5E
        // 0x5877BEAC: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5877BEB0: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5877BEB2: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0x0D
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877BEB7: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5877BEBA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5877BEBD: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x5877BEC0: add eax, 0xfffffe00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877BEC5: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x5877BEC8: ja 0x5877c5e9
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x1B
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877BECE: jmp dword ptr [eax*4 + 0x5877c600]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0xC6
        __asm _emit 0x77
        __asm _emit 0x58
        // 0x5877BED5: cmp dword ptr [esi + 0x254], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877BEDC: je 0x5877c5e9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877BEE2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5877BEE4: mov dword ptr [esi + 0x250], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877BEEE: call 0x5877a5d0
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877BEF3: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5877BEF6: pop edi
        __asm _emit 0x5F
        // 0x5877BEF7: pop esi
        __asm _emit 0x5E
        // 0x5877BEF8: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5877BEFC: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5877BEFE: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0x0C
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877BF03: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5877BF06: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5877BF09: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877BF0F: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x5877BF12: push edx
        __asm _emit 0x52
        // 0x5877BF13: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5877BF15: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0x56
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x5877BF1A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877BF1C: je 0x5877c5e9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877BF22: cmp dword ptr [esi + 0x258], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877BF29: jne 0x5877c5e9
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xBA
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877BF2F: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877BF34: mov eax, dword ptr [eax + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877BF3A: cmp dword ptr [eax + 0x19c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877BF41: jne 0x5877c5e9
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877BF47: mov dword ptr [eax + 0x19c], 1
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877BF51: cmp dword ptr [esi + 0xb8], -1
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x5877BF58: je 0x5877bf8b
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x5877BF5A: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x5877BF5D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877BF5F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877BF61: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877BF63: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5877BF65: push ecx
        __asm _emit 0x51
        // 0x5877BF66: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877BF6C: push 0x80011035
        __asm _emit 0x68
        __asm _emit 0x35
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x5877BF71: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0x4C
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x5877BF76: pop edi
        __asm _emit 0x5F
        // 0x5877BF77: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877BF79: pop esi
        __asm _emit 0x5E
        // 0x5877BF7A: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5877BF7E: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5877BF80: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0x0C
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877BF85: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5877BF88: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5877BF8B: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877BF90: mov ecx, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877BF96: push ebp
        __asm _emit 0x55
        // 0x5877BF97: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5877BF99: je 0x5877c367
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877BF9F: mov edx, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877BFA5: cmp byte ptr [edx + 0x35c], 0
        __asm _emit 0x80
        __asm _emit 0xBA
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877BFAC: mov edi, 0xfffffffe
        __asm _emit 0xBF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877BFB1: jne 0x5877c059
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877BFB7: test dword ptr [esi + 0xa4], edi
        __asm _emit 0x85
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877BFBD: jne 0x5877c059
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877BFC3: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5877BFC5: cmp dword ptr [ecx + 0xa24], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x24
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877BFCB: jle 0x5877c2c6
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xF5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877BFD1: mov ebp, 0x9a4
        __asm _emit 0xBD
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877BFD6: jmp 0x5877bfe0
        __asm _emit 0xEB
        __asm _emit 0x08
    }
}

// Ghidra body range 0x5877BFE0..0x5877C247; 615 mapped bytes.
extern "C" __declspec(naked) void FUN_5877be60_segment_01() {
    __asm {
        // 0x5877BFE0: mov eax, dword ptr [eax + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877BFE6: mov eax, dword ptr [eax + ebp - 0x8ac]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0x54
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877BFED: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5877BFF1: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x5877BFF4: je 0x5877c014
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x5877BFF6: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877BFFB: mov ecx, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C001: cmp dword ptr [ecx + ebp], 0
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x5877C005: jne 0x5877c019
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x5877C007: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877C009: push edi
        __asm _emit 0x57
        // 0x5877C00A: push esi
        __asm _emit 0x56
        // 0x5877C00B: call 0x588e7700
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0xB6
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5877C010: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877C012: jne 0x5877c030
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x5877C014: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C019: mov edx, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C01F: inc edi
        __asm _emit 0x47
        // 0x5877C020: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x5877C023: cmp edi, dword ptr [edx + 0xa24]
        __asm _emit 0x3B
        __asm _emit 0xBA
        __asm _emit 0x24
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C029: jl 0x5877bfe0
        __asm _emit 0x7C
        __asm _emit 0xB5
        // 0x5877C02B: jmp 0x5877c2c6
        __asm _emit 0xE9
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C030: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C035: mov ecx, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C03B: mov edx, dword ptr [ecx + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x48
        // 0x5877C03E: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x5877C041: shr edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0A
        // 0x5877C044: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877C046: movzx eax, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC2
        // 0x5877C049: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877C04B: shl eax, 0x10
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x10
        // 0x5877C04E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877C050: or eax, edi
        __asm _emit 0x0B
        __asm _emit 0xC7
        // 0x5877C052: push eax
        __asm _emit 0x50
        // 0x5877C053: push ecx
        __asm _emit 0x51
        // 0x5877C054: jmp 0x5877c3f4
        __asm _emit 0xE9
        __asm _emit 0x9B
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C059: mov edx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C05F: test edx, 0x10000000
        __asm _emit 0xF7
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        // 0x5877C065: je 0x5877c0cd
        __asm _emit 0x74
        __asm _emit 0x66
        // 0x5877C067: test dword ptr [esi + 0xa4], edi
        __asm _emit 0x85
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C06D: je 0x5877c0cd
        __asm _emit 0x74
        __asm _emit 0x5E
        // 0x5877C06F: mov edx, dword ptr [eax + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C075: mov eax, dword ptr [edx + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C07B: mov ax, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x24
        // 0x5877C07F: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x5877C081: je 0x5877c2c1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x3A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C087: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C08D: mov ecx, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C093: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877C095: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877C097: push esi
        __asm _emit 0x56
        // 0x5877C098: call 0x588e7700
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0xB6
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5877C09D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877C09F: je 0x5877c2c1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C0A5: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C0AB: mov eax, dword ptr [edx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C0B1: mov ecx, dword ptr [eax + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x48
        // 0x5877C0B4: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x5877C0B7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877C0B9: shr ecx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x0A
        // 0x5877C0BC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877C0BE: movzx edx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD1
        // 0x5877C0C1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877C0C3: shl edx, 0x10
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x10
        // 0x5877C0C6: push edx
        __asm _emit 0x52
        // 0x5877C0C7: push eax
        __asm _emit 0x50
        // 0x5877C0C8: jmp 0x5877c3f4
        __asm _emit 0xE9
        __asm _emit 0x27
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C0CD: cmp edx, 0xc1
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C0D3: je 0x5877c0e9
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x5877C0D5: cmp edx, 0x1c1
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0xC1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C0DB: je 0x5877c0e9
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5877C0DD: cmp edx, 0x3c1
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0xC1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C0E3: jne 0x5877c226
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x3D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C0E9: test dword ptr [esi + 0xa4], edi
        __asm _emit 0x85
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C0EF: je 0x5877c226
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C0F5: cmp dword ptr [ecx + 0xa24], 3
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x24
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x5877C0FC: jle 0x5877c158
        __asm _emit 0x7E
        __asm _emit 0x5A
        // 0x5877C0FE: cmp dword ptr [ecx + 0x9b0], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xB0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C105: jne 0x5877c158
        __asm _emit 0x75
        __asm _emit 0x51
        // 0x5877C107: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877C109: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x5877C10B: push esi
        __asm _emit 0x56
        // 0x5877C10C: call 0x588e7700
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0xB5
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5877C111: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877C113: je 0x5877c153
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x5877C115: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C11B: mov edx, dword ptr [ecx + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C121: mov eax, dword ptr [edx + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C127: mov ax, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x24
        // 0x5877C12B: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x5877C12D: je 0x5877c1c2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C133: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C139: mov edx, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C13F: mov eax, dword ptr [edx + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x48
        // 0x5877C142: shr eax, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0A
        // 0x5877C145: movzx ecx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC8
        // 0x5877C148: shl ecx, 0x10
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x10
        // 0x5877C14B: or ecx, 3
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0x03
        // 0x5877C14E: jmp 0x5877c3e9
        __asm _emit 0xE9
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C153: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C158: mov ecx, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C15E: cmp dword ptr [ecx + 0xa24], 4
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x24
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x5877C165: jle 0x5877c1c7
        __asm _emit 0x7E
        __asm _emit 0x60
        // 0x5877C167: cmp dword ptr [ecx + 0x9b4], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xB4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C16E: jne 0x5877c1c7
        __asm _emit 0x75
        __asm _emit 0x57
        // 0x5877C170: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877C172: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5877C174: push esi
        __asm _emit 0x56
        // 0x5877C175: call 0x588e7700
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0xB5
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5877C17A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877C17C: je 0x5877c1c2
        __asm _emit 0x74
        __asm _emit 0x44
        // 0x5877C17E: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C183: mov ecx, dword ptr [eax + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C189: mov eax, dword ptr [ecx + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C18F: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5877C193: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x5877C196: je 0x5877c1c2
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x5877C198: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C19D: mov ecx, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C1A3: mov edx, dword ptr [ecx + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x48
        // 0x5877C1A6: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x5877C1A9: shr edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0A
        // 0x5877C1AC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877C1AE: movzx eax, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC2
        // 0x5877C1B1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877C1B3: shl eax, 0x10
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x10
        // 0x5877C1B6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877C1B8: or eax, 4
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0x04
        // 0x5877C1BB: push eax
        __asm _emit 0x50
        // 0x5877C1BC: push ecx
        __asm _emit 0x51
        // 0x5877C1BD: jmp 0x5877c3f4
        __asm _emit 0xE9
        __asm _emit 0x32
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C1C2: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C1C7: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C1CC: mov edi, 0x9a8
        __asm _emit 0xBF
        __asm _emit 0xA8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C1D1: mov edx, dword ptr [eax + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C1D7: mov eax, dword ptr [edx + edi - 0x8ac]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x3A
        __asm _emit 0x54
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877C1DE: mov ax, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x24
        // 0x5877C1E2: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x5877C1E4: je 0x5877c210
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x5877C1E6: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C1EB: mov ecx, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C1F1: cmp dword ptr [edi + ecx], 0
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5877C1F5: jne 0x5877c215
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x5877C1F7: cmp dword ptr [ecx + 0xa24], ebp
        __asm _emit 0x39
        __asm _emit 0xA9
        __asm _emit 0x24
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C1FD: jle 0x5877c215
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5877C1FF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877C201: push ebp
        __asm _emit 0x55
        // 0x5877C202: push esi
        __asm _emit 0x56
        // 0x5877C203: call 0x588e7700
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0xB4
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5877C208: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877C20A: jne 0x5877c3cf
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C210: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C215: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5877C218: inc ebp
        __asm _emit 0x45
        // 0x5877C219: cmp edi, 0x9b0
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0xB0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C21F: jl 0x5877c1d1
        __asm _emit 0x7C
        __asm _emit 0xB0
        // 0x5877C221: jmp 0x5877c2c6
        __asm _emit 0xE9
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C226: test dl, 0x3f
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x3F
        // 0x5877C229: je 0x5877c2c6
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C22F: test dword ptr [esi + 0xa4], edi
        __asm _emit 0x85
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C235: je 0x5877c2c6
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C23B: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C240: mov edi, 0x9a8
        __asm _emit 0xBF
        __asm _emit 0xA8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C245: jmp 0x5877c250
        __asm _emit 0xEB
        __asm _emit 0x09
    }
}

// Ghidra body range 0x5877C250..0x5877C5FF; 943 mapped bytes.
extern "C" __declspec(naked) void FUN_5877be60_segment_02() {
    __asm {
        // 0x5877C250: mov eax, dword ptr [eax + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C256: mov eax, dword ptr [eax + edi - 0x8ac]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x38
        __asm _emit 0x54
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877C25D: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5877C261: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x5877C264: je 0x5877c284
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x5877C266: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C26B: mov ecx, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C271: cmp dword ptr [edi + ecx], 0
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5877C275: jne 0x5877c289
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x5877C277: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877C279: push ebp
        __asm _emit 0x55
        // 0x5877C27A: push esi
        __asm _emit 0x56
        // 0x5877C27B: call 0x588e7700
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0xB4
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5877C280: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877C282: jne 0x5877c297
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x5877C284: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C289: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5877C28C: inc ebp
        __asm _emit 0x45
        // 0x5877C28D: cmp edi, 0x9b4
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0xB4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C293: jle 0x5877c250
        __asm _emit 0x7E
        __asm _emit 0xBB
        // 0x5877C295: jmp 0x5877c2c6
        __asm _emit 0xEB
        __asm _emit 0x2F
        // 0x5877C297: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C29D: mov eax, dword ptr [edx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C2A3: mov ecx, dword ptr [eax + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x48
        // 0x5877C2A6: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x5877C2A9: shr ecx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x0A
        // 0x5877C2AC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877C2AE: movzx edx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD1
        // 0x5877C2B1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877C2B3: shl edx, 0x10
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x10
        // 0x5877C2B6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877C2B8: or edx, ebp
        __asm _emit 0x0B
        __asm _emit 0xD5
        // 0x5877C2BA: push edx
        __asm _emit 0x52
        // 0x5877C2BB: push eax
        __asm _emit 0x50
        // 0x5877C2BC: jmp 0x5877c3f4
        __asm _emit 0xE9
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C2C1: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C2C6: mov ebp, 5
        __asm _emit 0xBD
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C2CB: mov edi, 0x9b8
        __asm _emit 0xBF
        __asm _emit 0xB8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C2D0: mov ecx, dword ptr [eax + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C2D6: mov eax, dword ptr [ecx + edi - 0x8ac]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x39
        __asm _emit 0x54
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877C2DD: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5877C2E1: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x5877C2E4: je 0x5877c308
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x5877C2E6: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C2EB: mov ecx, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C2F1: cmp dword ptr [edi + ecx], 0
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5877C2F5: jne 0x5877c30d
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x5877C2F7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877C2F9: push ebp
        __asm _emit 0x55
        // 0x5877C2FA: push esi
        __asm _emit 0x56
        // 0x5877C2FB: call 0x588e7700
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0xB4
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5877C300: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877C302: jne 0x5877c3a9
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C308: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C30D: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5877C310: inc ebp
        __asm _emit 0x45
        // 0x5877C311: cmp edi, 0xa24
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C317: jl 0x5877c2d0
        __asm _emit 0x7C
        __asm _emit 0xB7
        // 0x5877C319: mov ebp, 3
        __asm _emit 0xBD
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C31E: mov edi, 0x9b0
        __asm _emit 0xBF
        __asm _emit 0xB0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C323: mov edx, dword ptr [eax + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C329: mov eax, dword ptr [edx + edi - 0x8ac]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x3A
        __asm _emit 0x54
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877C330: mov ax, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x24
        // 0x5877C334: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x5877C336: je 0x5877c356
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x5877C338: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C33D: mov ecx, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C343: cmp dword ptr [edi + ecx], 0
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5877C347: jne 0x5877c35b
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x5877C349: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877C34B: push ebp
        __asm _emit 0x55
        // 0x5877C34C: push esi
        __asm _emit 0x56
        // 0x5877C34D: call 0x588e7700
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0xB3
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5877C352: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877C354: jne 0x5877c3cf
        __asm _emit 0x75
        __asm _emit 0x79
        // 0x5877C356: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C35B: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5877C35E: inc ebp
        __asm _emit 0x45
        // 0x5877C35F: cmp edi, 0x9b4
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0xB4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C365: jle 0x5877c323
        __asm _emit 0x7E
        __asm _emit 0xBC
        // 0x5877C367: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877C369: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877C36B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877C36D: push 0x2712
        __asm _emit 0x68
        __asm _emit 0x12
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C372: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0xF7
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x5877C377: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5877C379: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0x89
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x5877C37E: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C383: mov ecx, dword ptr [eax + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C389: mov dword ptr [ecx + 0x19c], 0
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C393: pop ebp
        __asm _emit 0x5D
        // 0x5877C394: pop edi
        __asm _emit 0x5F
        // 0x5877C395: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877C397: pop esi
        __asm _emit 0x5E
        // 0x5877C398: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5877C39C: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5877C39E: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x08
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877C3A3: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5877C3A6: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5877C3A9: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C3AE: mov ecx, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C3B4: mov edx, dword ptr [ecx + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x48
        // 0x5877C3B7: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x5877C3BA: shr edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0A
        // 0x5877C3BD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877C3BF: movzx eax, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC2
        // 0x5877C3C2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877C3C4: shl eax, 0x10
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x10
        // 0x5877C3C7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877C3C9: or eax, ebp
        __asm _emit 0x0B
        __asm _emit 0xC5
        // 0x5877C3CB: push eax
        __asm _emit 0x50
        // 0x5877C3CC: push ecx
        __asm _emit 0x51
        // 0x5877C3CD: jmp 0x5877c3f4
        __asm _emit 0xEB
        __asm _emit 0x25
        // 0x5877C3CF: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C3D5: mov edx, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C3DB: mov eax, dword ptr [edx + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x48
        // 0x5877C3DE: shr eax, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0A
        // 0x5877C3E1: movzx ecx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC8
        // 0x5877C3E4: shl ecx, 0x10
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x10
        // 0x5877C3E7: or ecx, ebp
        __asm _emit 0x0B
        __asm _emit 0xCD
        // 0x5877C3E9: mov edx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x50
        // 0x5877C3EC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877C3EE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877C3F0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877C3F2: push ecx
        __asm _emit 0x51
        // 0x5877C3F3: push edx
        __asm _emit 0x52
        // 0x5877C3F4: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C3FA: push 0x80011035
        __asm _emit 0x68
        __asm _emit 0x35
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x5877C3FF: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0x48
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x5877C404: jmp 0x5877c393
        __asm _emit 0xEB
        __asm _emit 0x8D
        // 0x5877C406: cmp dword ptr [esi + 0x258], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C40D: jne 0x5877c5e9
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C413: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C419: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x5877C41B: cmp eax, 0x50
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x50
        // 0x5877C41E: je 0x5877c5e9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C424: cmp eax, 0x54
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x54
        // 0x5877C427: je 0x5877c5e9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C42D: cmp dword ptr [esi + 0x28], 0xc8
        __asm _emit 0x81
        __asm _emit 0x7E
        __asm _emit 0x28
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C434: jle 0x5877c5e9
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xAF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C43A: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C440: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x5877C443: push edx
        __asm _emit 0x52
        // 0x5877C444: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5877C446: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x50
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x5877C44B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877C44D: je 0x5877c5e9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C453: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C458: mov eax, dword ptr [eax + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C45E: cmp dword ptr [eax + 0x198], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C465: jne 0x5877c5e9
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x7E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C46B: cmp dword ptr [eax + 0x19c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C472: jne 0x5877c5e9
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C478: mov dword ptr [esi + 0x250], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C482: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C488: mov ecx, dword ptr [ecx + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C48E: push esi
        __asm _emit 0x56
        // 0x5877C48F: call 0x58871fa0
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x5B
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5877C494: pop edi
        __asm _emit 0x5F
        // 0x5877C495: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877C497: pop esi
        __asm _emit 0x5E
        // 0x5877C498: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5877C49C: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5877C49E: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x07
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877C4A3: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5877C4A6: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5877C4A9: cmp dword ptr [esi + 0x258], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C4B0: jne 0x5877c5e9
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C4B6: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C4BC: mov ecx, dword ptr [esi + 0x20c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C4C2: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5877C4C5: push edi
        __asm _emit 0x57
        // 0x5877C4C6: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0x50
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x5877C4CB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877C4CD: je 0x5877c547
        __asm _emit 0x74
        __asm _emit 0x78
        // 0x5877C4CF: mov eax, 0xaa
        __asm _emit 0xB8
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C4D4: xor ax, word ptr [esi + 0x5c]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x5877C4D8: mov edx, 0xaa
        __asm _emit 0xBA
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C4DD: xor dx, word ptr [esi + 0x7a]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x56
        __asm _emit 0x7A
        // 0x5877C4E1: mov ecx, 0xaa
        __asm _emit 0xB9
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C4E6: xor cx, word ptr [esi + 0x5a]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x4E
        __asm _emit 0x5A
        // 0x5877C4EA: sub dx, ax
        __asm _emit 0x66
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5877C4ED: mov eax, 0xaa
        __asm _emit 0xB8
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C4F2: xor ax, word ptr [esi + 0x58]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x5877C4F6: sub dx, cx
        __asm _emit 0x66
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x5877C4F9: sub dx, ax
        __asm _emit 0x66
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5877C4FC: mov word ptr [esp + 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5877C501: je 0x5877c394
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8D
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877C507: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5877C509: push edx
        __asm _emit 0x52
        // 0x5877C50A: push 6
        __asm _emit 0x6A
        __asm _emit 0x06
        // 0x5877C50C: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5877C50E: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5877C512: push eax
        __asm _emit 0x50
        // 0x5877C513: mov word ptr [esp + 0x16], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x16
        // 0x5877C518: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x5877C51B: push edx
        __asm _emit 0x52
        // 0x5877C51C: push ecx
        __asm _emit 0x51
        // 0x5877C51D: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C523: push 0x8001020c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x5877C528: mov word ptr [esp + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5877C52D: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0x47
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x5877C532: pop edi
        __asm _emit 0x5F
        // 0x5877C533: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877C535: pop esi
        __asm _emit 0x5E
        // 0x5877C536: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5877C53A: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5877C53C: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x06
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877C541: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5877C544: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5877C547: push edi
        __asm _emit 0x57
        // 0x5877C548: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5877C54A: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0x4F
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x5877C54F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877C551: je 0x5877c5e9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C557: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C55D: mov eax, dword ptr [edx + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C563: mov ecx, dword ptr [eax + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C569: call 0x5886b9b0
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0xF4
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5877C56E: pop edi
        __asm _emit 0x5F
        // 0x5877C56F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877C571: pop esi
        __asm _emit 0x5E
        // 0x5877C572: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5877C576: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5877C578: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0x06
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877C57D: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5877C580: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5877C583: cmp dword ptr [esi + 0x250], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C58A: je 0x5877c5b2
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x5877C58C: cmp dword ptr [esi + 0x254], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C593: jne 0x5877c5e9
        __asm _emit 0x75
        __asm _emit 0x54
        // 0x5877C595: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5877C597: call 0x5877a330
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0xDD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877C59C: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5877C59F: pop edi
        __asm _emit 0x5F
        // 0x5877C5A0: pop esi
        __asm _emit 0x5E
        // 0x5877C5A1: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5877C5A5: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5877C5A7: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0x06
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877C5AC: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5877C5AF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5877C5B2: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C5B8: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5877C5BB: push ecx
        __asm _emit 0x51
        // 0x5877C5BC: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5877C5BE: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0x4F
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x5877C5C3: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5877C5C5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877C5C7: je 0x5877c5e4
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x5877C5C9: call 0x5877a060
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0xDA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877C5CE: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5877C5D1: pop edi
        __asm _emit 0x5F
        // 0x5877C5D2: pop esi
        __asm _emit 0x5E
        // 0x5877C5D3: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5877C5D7: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5877C5D9: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x05
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877C5DE: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5877C5E1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5877C5E4: call 0x5877a290
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0xDC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877C5E9: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5877C5EC: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5877C5F0: pop edi
        __asm _emit 0x5F
        // 0x5877C5F1: pop esi
        __asm _emit 0x5E
        // 0x5877C5F2: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5877C5F4: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0x05
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877C5F9: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5877C5FC: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
