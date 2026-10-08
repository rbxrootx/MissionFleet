// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 578 bytes in 1 exact ranges.
// Source symbol alias: FUN_5877c8f0.

// Ghidra body range 0x5877C8F0..0x5877CB32; 578 mapped bytes.
extern "C" __declspec(naked) void FUN_5877c8f0_segment_00() {
    __asm {
        // 0x5877C8F0: push esi
        __asm _emit 0x56
        // 0x5877C8F1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5877C8F3: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5877C8F7: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x5877C8F9: je 0x5877cb2c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x2D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C8FF: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5877C903: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C908: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5877C90B: mov eax, 0x100
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C910: push ebx
        __asm _emit 0x53
        // 0x5877C911: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C916: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5877C919: jne 0x5877c953
        __asm _emit 0x75
        __asm _emit 0x38
        // 0x5877C91B: mov eax, dword ptr [esi + 0x1e0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C921: mov ecx, dword ptr [eax + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x54
        // 0x5877C924: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5877C926: je 0x5877c942
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x5877C928: movzx edx, word ptr [ecx + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5877C92C: imul edx, dword ptr [ecx + 8]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5877C930: sub edx, ebx
        __asm _emit 0x2B
        __asm _emit 0xD3
        // 0x5877C932: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5877C934: cmp dword ptr [eax + 0x50], edx
        __asm _emit 0x39
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x5877C937: setge cl
        __asm _emit 0x0F
        __asm _emit 0x9D
        __asm _emit 0xC1
        // 0x5877C93A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5877C93C: jne 0x5877ca41
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C942: add dword ptr [eax + 0x50], ebx
        __asm _emit 0x01
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x5877C945: mov eax, dword ptr [esi + 0x1e4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C94B: add dword ptr [eax + 0x50], ebx
        __asm _emit 0x01
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x5877C94E: jmp 0x5877ca41
        __asm _emit 0xE9
        __asm _emit 0xEE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C953: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5877C957: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5877C959: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5877C95C: mov edx, 0x400
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C961: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5877C964: jne 0x5877ca41
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C96A: mov eax, dword ptr [esi + 0x1e0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C970: cmp dword ptr [eax + 0x50], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x5877C974: jne 0x5877ca32
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C97A: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C980: shr ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xE9
        // 0x5877C982: cmp ecx, 0x50
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x50
        // 0x5877C985: je 0x5877ca18
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C98B: movzx eax, word ptr [esi + 0x5e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0x5E
        // 0x5877C98F: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x5877C992: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5877C994: shl edx, 4
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x04
        // 0x5877C997: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5877C999: lea eax, [ecx + edx*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xD1
        // 0x5877C99C: imul eax, eax, 0xe0
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C9A2: mov ecx, dword ptr [eax + 0x589cfd74]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x74
        __asm _emit 0xFD
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5877C9A8: add ecx, ebx
        __asm _emit 0x03
        __asm _emit 0xCB
        // 0x5877C9AA: push ecx
        __asm _emit 0x51
        // 0x5877C9AB: mov ecx, dword ptr [0x58a24ae0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0x4A
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C9B1: call 0x587317e0
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x4E
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x5877C9B6: mov ecx, dword ptr [esi + 0x1e4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C9BC: push eax
        __asm _emit 0x50
        // 0x5877C9BD: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0x7F
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x5877C9C2: mov ecx, dword ptr [esi + 0x1e4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C9C8: push ebx
        __asm _emit 0x53
        // 0x5877C9C9: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x4C
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x5877C9CE: movzx eax, word ptr [esi + 0x5e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0x5E
        // 0x5877C9D2: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x5877C9D5: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5877C9D7: shl edx, 4
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x04
        // 0x5877C9DA: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5877C9DC: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C9E2: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x5877C9E4: lea ecx, [eax + edx*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xD0
        // 0x5877C9E7: imul ecx, ecx, 0xe0
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C9ED: mov edx, dword ptr [ecx + 0x589cfd74]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x74
        __asm _emit 0xFD
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5877C9F3: mov ecx, dword ptr [0x58a24ae0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0x4A
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C9F9: push edx
        __asm _emit 0x52
        // 0x5877C9FA: call 0x587317e0
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0x4D
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x5877C9FF: mov ecx, dword ptr [esi + 0x1e0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877CA05: push eax
        __asm _emit 0x50
        // 0x5877CA06: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0x7F
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x5877CA0B: mov ecx, dword ptr [esi + 0x1e0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877CA11: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877CA13: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x63
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5877CA18: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5877CA1C: mov ecx, 0xe5ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877CA21: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5877CA24: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877CA29: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x5877CA2C: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5877CA30: jmp 0x5877ca41
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x5877CA32: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFF
        // 0x5877CA35: add dword ptr [eax + 0x50], ecx
        __asm _emit 0x01
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x5877CA38: mov eax, dword ptr [esi + 0x1e4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877CA3E: add dword ptr [eax + 0x50], ecx
        __asm _emit 0x01
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x5877CA41: mov eax, dword ptr [0x58a24580]
        __asm _emit 0xA1
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877CA46: cmp eax, dword ptr [0x58a24598]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877CA4C: jne 0x5877cabb
        __asm _emit 0x75
        __asm _emit 0x6D
        // 0x5877CA4E: mov ecx, dword ptr [0x58a245f0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877CA54: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x5877CA58: test bl, dl
        __asm _emit 0x84
        __asm _emit 0xD3
        // 0x5877CA5A: jne 0x5877cabb
        __asm _emit 0x75
        __asm _emit 0x5F
        // 0x5877CA5C: cmp dword ptr [esi + 0x240], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877CA62: jne 0x5877cabb
        __asm _emit 0x75
        __asm _emit 0x57
        // 0x5877CA64: mov eax, dword ptr [esi + 0x1c0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877CA6A: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5877CA6C: je 0x5877cab5
        __asm _emit 0x74
        __asm _emit 0x47
        // 0x5877CA6E: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5877CA71: je 0x5877cab5
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x5877CA73: test dword ptr [esi + 0xb4], 0x10000000
        __asm _emit 0xF7
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        // 0x5877CA7D: je 0x5877ca9a
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x5877CA7F: test byte ptr [esi + 0x5e], 0xf
        __asm _emit 0xF6
        __asm _emit 0x46
        __asm _emit 0x5E
        __asm _emit 0x0F
        // 0x5877CA83: je 0x5877ca9a
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x5877CA85: mov eax, dword ptr [esi + 0x244]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877CA8B: cdq
        __asm _emit 0x99
        // 0x5877CA8C: mov ecx, 0x28
        __asm _emit 0xB9
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877CA91: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x5877CA93: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5877CA95: jne 0x5877caa4
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x5877CA97: push edx
        __asm _emit 0x52
        // 0x5877CA98: jmp 0x5877caaa
        __asm _emit 0xEB
        __asm _emit 0x10
        // 0x5877CA9A: test byte ptr [esi + 0xa4], bl
        __asm _emit 0x84
        __asm _emit 0x9E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877CAA0: je 0x5877cab5
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x5877CAA2: jmp 0x5877ca85
        __asm _emit 0xEB
        __asm _emit 0xE1
        // 0x5877CAA4: cmp edx, 0x14
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x14
        // 0x5877CAA7: jne 0x5877cab5
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5877CAA9: push ebx
        __asm _emit 0x53
        // 0x5877CAAA: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877CAB0: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x4B
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x5877CAB5: add dword ptr [esi + 0x244], ebx
        __asm _emit 0x01
        __asm _emit 0x9E
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877CABB: cmp dword ptr [esi + 0x25c], 2
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x5877CAC2: pop ebx
        __asm _emit 0x5B
        // 0x5877CAC3: jne 0x5877cb0e
        __asm _emit 0x75
        __asm _emit 0x49
        // 0x5877CAC5: movzx eax, word ptr [esi + 0x268]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877CACC: cmp ax, 0x1e
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x1E
        // 0x5877CAD0: jle 0x5877cb06
        __asm _emit 0x7E
        __asm _emit 0x34
        // 0x5877CAD2: mov eax, dword ptr [esi + 0x264]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877CAD8: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5877CADB: cmp edx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5877CADE: je 0x5877cb0e
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x5877CAE0: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877CAE5: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5877CAE7: cmp dword ptr [0x58a24580], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877CAED: jne 0x5877caf6
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5877CAEF: call 0x5877ad50
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877CAF4: jmp 0x5877cb0e
        __asm _emit 0xEB
        __asm _emit 0x18
        // 0x5877CAF6: call 0x5877ac40
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877CAFB: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5877CAFD: mov word ptr [esi + 0x268], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877CB04: jmp 0x5877cb0e
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x5877CB06: inc eax
        __asm _emit 0x40
        // 0x5877CB07: mov word ptr [esi + 0x268], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877CB0E: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x5877CB11: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5877CB13: je 0x5877cb2c
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x5877CB15: push edi
        __asm _emit 0x57
        // 0x5877CB16: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x38
        // 0x5877CB19: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5877CB1B: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x5877CB1E: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x5877CB21: je 0x5877cb2e
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5877CB23: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5877CB25: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5877CB27: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5877CB29: jne 0x5877cb16
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x5877CB2B: pop edi
        __asm _emit 0x5F
        // 0x5877CB2C: pop esi
        __asm _emit 0x5E
        // 0x5877CB2D: ret
        __asm _emit 0xC3
        // 0x5877CB2E: pop edi
        __asm _emit 0x5F
        // 0x5877CB2F: pop esi
        __asm _emit 0x5E
        // 0x5877CB30: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
    }
}
