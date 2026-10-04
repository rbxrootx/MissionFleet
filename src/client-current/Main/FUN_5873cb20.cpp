// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5873CB20 .. +0x188 bytes.
// Source symbol alias: FUN_5873cb20.
extern "C" __declspec(naked) void FUN_5873cb20() {
    __asm {
        // 0x5873CB20: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5873CB22: push 0x5897dd4b
        __asm _emit 0x68
        __asm _emit 0x4B
        __asm _emit 0xDD
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5873CB27: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CB2D: push eax
        __asm _emit 0x50
        // 0x5873CB2E: sub esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x14
        // 0x5873CB31: push ebx
        __asm _emit 0x53
        // 0x5873CB32: push ebp
        __asm _emit 0x55
        // 0x5873CB33: push esi
        __asm _emit 0x56
        // 0x5873CB34: push edi
        __asm _emit 0x57
        // 0x5873CB35: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5873CB3A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5873CB3C: push eax
        __asm _emit 0x50
        // 0x5873CB3D: lea eax, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5873CB41: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CB47: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5873CB49: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5873CB4B: cmp dword ptr [esi + 0x46c], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x6C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CB51: je 0x5873cc94
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x3D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CB57: mov eax, 0xffff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CB5C: add word ptr [esi + 0x2d6], ax
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x86
        __asm _emit 0xD6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CB63: movzx eax, word ptr [esi + 0x2d6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xD6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CB6A: movzx ecx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC8
        // 0x5873CB6D: push ecx
        __asm _emit 0x51
        // 0x5873CB6E: mov ecx, dword ptr [esi + 0x514]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CB74: mov dword ptr [esi + 0x46c], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x6C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CB7A: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0xA7
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5873CB7F: push 0x26c
        __asm _emit 0x68
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CB84: mov dword ptr [esp + 0x28], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5873CB88: mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5873CB8C: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5873CB90: mov dword ptr [esp + 0x24], 0xffffffc4
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0xC4
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873CB98: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0x00
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873CB9D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5873CB9F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5873CBA2: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5873CBA6: mov dword ptr [esp + 0x30], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5873CBAA: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5873CBAC: je 0x5873cbff
        __asm _emit 0x74
        __asm _emit 0x51
        // 0x5873CBAE: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873CBB4: mov edi, dword ptr [edx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0xBA
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5873CBBA: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5873CBBD: movzx ebx, word ptr [eax + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x98
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CBC4: mov edx, dword ptr [esi + 0x340]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CBCA: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5873CBCF: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5873CBD1: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5873CBD3: push ebp
        __asm _emit 0x55
        // 0x5873CBD4: push ebp
        __asm _emit 0x55
        // 0x5873CBD5: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5873CBD8: push ebp
        __asm _emit 0x55
        // 0x5873CBD9: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873CBDB: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873CBDE: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873CBE0: add eax, dword ptr [esi + 8]
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5873CBE3: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x5873CBE6: push eax
        __asm _emit 0x50
        // 0x5873CBE7: push edx
        __asm _emit 0x52
        // 0x5873CBE8: push edi
        __asm _emit 0x57
        // 0x5873CBE9: lea eax, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5873CBED: push eax
        __asm _emit 0x50
        // 0x5873CBEE: push ebp
        __asm _emit 0x55
        // 0x5873CBEF: push ebx
        __asm _emit 0x53
        // 0x5873CBF0: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5873CBF2: push ebp
        __asm _emit 0x55
        // 0x5873CBF3: push ebp
        __asm _emit 0x55
        // 0x5873CBF4: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5873CBF6: call 0x588d3a60
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0x6E
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5873CBFB: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5873CBFD: jmp 0x5873cc01
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5873CBFF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5873CC01: mov ecx, 0x3e8
        __asm _emit 0xB9
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CC06: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x26
        // 0x5873CC0A: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x5873CC0D: mov dword ptr [esp + 0x30], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873CC15: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5873CC17: je 0x5873cc1f
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5873CC19: push edi
        __asm _emit 0x57
        // 0x5873CC1A: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0x63
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5873CC1F: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x5873CC22: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5873CC24: je 0x5873cc2c
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5873CC26: push edi
        __asm _emit 0x57
        // 0x5873CC27: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0x62
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5873CC2C: mov ecx, dword ptr [esi + 0x340]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CC32: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5873CC37: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5873CC39: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5873CC3C: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873CC3E: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873CC41: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873CC43: push eax
        __asm _emit 0x50
        // 0x5873CC44: push 0xd
        __asm _emit 0x6A
        __asm _emit 0x0D
        // 0x5873CC46: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5873CC48: call 0x588d2ab0
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0x5E
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5873CC4D: mov edx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x74
        // 0x5873CC50: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5873CC54: push ebp
        __asm _emit 0x55
        // 0x5873CC55: push ebp
        __asm _emit 0x55
        // 0x5873CC56: lea ecx, [esi + 0xc0]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CC5C: push ecx
        __asm _emit 0x51
        // 0x5873CC5D: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5873CC61: push ebp
        __asm _emit 0x55
        // 0x5873CC62: push ebp
        __asm _emit 0x55
        // 0x5873CC63: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x5873CC65: push edx
        __asm _emit 0x52
        // 0x5873CC66: push eax
        __asm _emit 0x50
        // 0x5873CC67: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5873CC69: call 0x588d3e50
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0x71
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5873CC6E: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873CC73: cmp dword ptr [eax + 0x21c34], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x34
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5873CC79: jne 0x5873cc94
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x5873CC7B: cmp word ptr [eax + 0x105f0], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x5873CC83: jne 0x5873cc94
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x5873CC85: mov ecx, dword ptr [eax + 0x21f04]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x1F
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5873CC8B: push edi
        __asm _emit 0x57
        // 0x5873CC8C: add ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x64
        // 0x5873CC8F: call 0x5873bd60
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873CC94: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5873CC98: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CC9F: pop ecx
        __asm _emit 0x59
        // 0x5873CCA0: pop edi
        __asm _emit 0x5F
        // 0x5873CCA1: pop esi
        __asm _emit 0x5E
        // 0x5873CCA2: pop ebp
        __asm _emit 0x5D
        // 0x5873CCA3: pop ebx
        __asm _emit 0x5B
        // 0x5873CCA4: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x5873CCA7: ret
        __asm _emit 0xC3
    }
}
