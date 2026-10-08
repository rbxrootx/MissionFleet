// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 373 bytes in 1 exact ranges.
// Source symbol alias: FUN_588fa930.

// Ghidra body range 0x588FA930..0x588FAAA5; 373 mapped bytes.
extern "C" __declspec(naked) void FUN_588fa930_segment_00() {
    __asm {
        // 0x588FA930: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588FA932: push 0x5898a26b
        __asm _emit 0x68
        __asm _emit 0x6B
        __asm _emit 0xA2
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588FA937: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA93D: push eax
        __asm _emit 0x50
        // 0x588FA93E: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x588FA941: push ebx
        __asm _emit 0x53
        // 0x588FA942: push ebp
        __asm _emit 0x55
        // 0x588FA943: push esi
        __asm _emit 0x56
        // 0x588FA944: push edi
        __asm _emit 0x57
        // 0x588FA945: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588FA94A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588FA94C: push eax
        __asm _emit 0x50
        // 0x588FA94D: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588FA951: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA957: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FA959: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588FA95D: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FA963: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x588FA966: mov ebx, dword ptr [edi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5F
        __asm _emit 0x14
        // 0x588FA969: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x588FA96C: add ebx, eax
        __asm _emit 0x03
        __asm _emit 0xD8
        // 0x588FA96E: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588FA970: jl 0x588faa8f
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA976: mov ebx, dword ptr [edi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x5F
        __asm _emit 0x1C
        // 0x588FA979: add ebx, eax
        __asm _emit 0x03
        __asm _emit 0xD8
        // 0x588FA97B: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588FA97D: jge 0x588faa8f
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA983: mov ecx, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x08
        // 0x588FA986: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x588FA989: mov edx, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x588FA98C: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x588FA98E: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x588FA990: jl 0x588faa8f
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA996: mov edx, dword ptr [edi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x588FA999: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x588FA99B: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x588FA99D: jge 0x588faa8f
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA9A3: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588FA9A6: mov ebx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x5F
        __asm _emit 0x04
        // 0x588FA9A9: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x588FA9AB: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FA9AF: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FA9B3: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588FA9B5: je 0x588fa9c6
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x588FA9B7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588FA9B9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588FA9BB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588FA9BD: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588FA9BF: mov dword ptr [esi + 0x70], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA9C6: push 0x27c
        __asm _emit 0x68
        __asm _emit 0x7C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA9CB: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x22
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FA9D0: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FA9D3: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588FA9D7: mov dword ptr [esp + 0x24], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA9DF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FA9E1: je 0x588fa9f1
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588FA9E3: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588FA9E7: push ecx
        __asm _emit 0x51
        // 0x588FA9E8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FA9EA: call 0x5877cc30
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0x22
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588FA9EF: jmp 0x588fa9f3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FA9F1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FA9F3: mov dword ptr [esp + 0x24], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FA9FB: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588FA9FE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FAA00: je 0x588faa8f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FAA06: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FAA0C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FAA0E: push eax
        __asm _emit 0x50
        // 0x588FAA0F: call 0x5886ffa0
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x55
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x588FAA14: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FAA1A: add ebp, -0x1f
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0xE1
        // 0x588FAA1D: push ebp
        __asm _emit 0x55
        // 0x588FAA1E: add ebx, 0x47
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x47
        // 0x588FAA21: push ebx
        __asm _emit 0x53
        // 0x588FAA22: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FAA27: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FAA2D: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588FAA32: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FAA38: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588FAA3C: mov ecx, 0xe2ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FAA41: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD1
        // 0x588FAA44: mov ecx, 0x200
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FAA49: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x588FAA4C: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588FAA50: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FAA54: push edx
        __asm _emit 0x52
        // 0x588FAA55: add edi, 0x60
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x60
        // 0x588FAA58: push edi
        __asm _emit 0x57
        // 0x588FAA59: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FAA5B: call 0x588f9ea0
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FAA60: mov edi, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588FAA64: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588FAA66: je 0x588faa8f
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x588FAA68: mov eax, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x588FAA6B: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FAA71: push eax
        __asm _emit 0x50
        // 0x588FAA72: call 0x58778b20
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0xE0
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588FAA77: movzx edx, word ptr [eax + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588FAA7B: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FAA7F: push ecx
        __asm _emit 0x51
        // 0x588FAA80: add edi, 0x15
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x15
        // 0x588FAA83: push edi
        __asm _emit 0x57
        // 0x588FAA84: and edx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x588FAA87: push edx
        __asm _emit 0x52
        // 0x588FAA88: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FAA8A: call 0x588fa090
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FAA8F: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588FAA93: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FAA9A: pop ecx
        __asm _emit 0x59
        // 0x588FAA9B: pop edi
        __asm _emit 0x5F
        // 0x588FAA9C: pop esi
        __asm _emit 0x5E
        // 0x588FAA9D: pop ebp
        __asm _emit 0x5D
        // 0x588FAA9E: pop ebx
        __asm _emit 0x5B
        // 0x588FAA9F: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x588FAAA2: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
