// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5874FA60 .. +0x16C bytes.
extern "C" __declspec(naked) void FUN_5874fa60() {
    __asm {
        // 0x5874FA60: push esi
        __asm _emit 0x56
        // 0x5874FA61: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5874FA63: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5874FA67: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x5874FA69: je 0x5874fbc6
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FA6F: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5874FA73: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FA78: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5874FA7B: mov eax, 0x100
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FA80: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5874FA83: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5874FA87: push edi
        __asm _emit 0x57
        // 0x5874FA88: jne 0x5874faa8
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x5874FA8A: mov edx, 0xe2ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FA8F: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5874FA92: mov eax, 0x200
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FA97: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x5874FA9A: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5874FA9E: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5874FAA3: jmp 0x5874fba5
        __asm _emit 0xE9
        __asm _emit 0xFD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FAA8: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5874FAAB: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FAB0: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5874FAB3: jne 0x5874fae4
        __asm _emit 0x75
        __asm _emit 0x2F
        // 0x5874FAB5: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FABA: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5874FABE: mov edx, 0xfffb
        __asm _emit 0xBA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FAC3: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5874FAC7: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5874FACB: mov ecx, 0xe5ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FAD0: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5874FAD3: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FAD8: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x5874FADB: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5874FADF: jmp 0x5874fba5
        __asm _emit 0xE9
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FAE4: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5874FAE8: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5874FAEA: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5874FAED: mov edx, 0x200
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FAF2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5874FAF5: jne 0x5874fba5
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FAFB: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5874FAFF: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x5874FB01: je 0x5874fba5
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FB07: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874FB0D: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5874FB10: push ebx
        __asm _emit 0x53
        // 0x5874FB11: push ecx
        __asm _emit 0x51
        // 0x5874FB12: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x5874FB15: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0x1A
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x5874FB1A: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FB1F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874FB21: je 0x5874fb2b
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5874FB23: mov dword ptr [esi + 0xa0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FB29: jmp 0x5874fb3f
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x5874FB2B: mov dword ptr [esi + 0xa0], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FB35: mov dword ptr [esi + 0xa4], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FB3F: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x5874FB42: push ebx
        __asm _emit 0x53
        // 0x5874FB43: call 0x5873a540
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0xA9
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x5874FB48: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x5874FB4B: push ebx
        __asm _emit 0x53
        // 0x5874FB4C: call 0x5873a540
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0xA9
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x5874FB51: cmp dword ptr [esi + 0x9c], 4
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x5874FB58: jne 0x5874fba4
        __asm _emit 0x75
        __asm _emit 0x4A
        // 0x5874FB5A: cmp dword ptr [esi + 0xb4], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FB60: je 0x5874fb76
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x5874FB62: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x5874FB65: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5874FB67: call 0x5873a540
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0xA9
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x5874FB6C: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x5874FB6F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5874FB71: call 0x5873a540
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0xA9
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x5874FB76: mov edi, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x5874FB79: cmp dword ptr [edi + 0x54], 0
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x54
        __asm _emit 0x00
        // 0x5874FB7D: je 0x5874fb8d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5874FB7F: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5874FB81: call 0x5874fa20
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874FB86: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874FB88: jne 0x5874fb8d
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x5874FB8A: add dword ptr [edi + 0x50], ebx
        __asm _emit 0x01
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x5874FB8D: mov edi, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x58
        // 0x5874FB90: cmp dword ptr [edi + 0x54], 0
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x54
        __asm _emit 0x00
        // 0x5874FB94: je 0x5874fba4
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5874FB96: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5874FB98: call 0x5874fa20
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874FB9D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874FB9F: jne 0x5874fba4
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x5874FBA1: add dword ptr [edi + 0x50], ebx
        __asm _emit 0x01
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x5874FBA4: pop ebx
        __asm _emit 0x5B
        // 0x5874FBA5: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x5874FBA8: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5874FBAA: je 0x5874fbc5
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x5874FBAC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5874FBB0: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x38
        // 0x5874FBB3: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5874FBB5: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x5874FBB8: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x5874FBBB: je 0x5874fbc8
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5874FBBD: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5874FBBF: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5874FBC1: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5874FBC3: jne 0x5874fbb0
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x5874FBC5: pop edi
        __asm _emit 0x5F
        // 0x5874FBC6: pop esi
        __asm _emit 0x5E
        // 0x5874FBC7: ret
        __asm _emit 0xC3
        // 0x5874FBC8: pop edi
        __asm _emit 0x5F
        // 0x5874FBC9: pop esi
        __asm _emit 0x5E
        // 0x5874FBCA: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
    }
}
