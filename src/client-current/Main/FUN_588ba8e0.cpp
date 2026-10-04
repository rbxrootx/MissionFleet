// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588BA8E0 .. +0x13E bytes.
// Source symbol alias: FUN_588ba8e0.
extern "C" __declspec(naked) void FUN_588ba8e0() {
    __asm {
        // 0x588BA8E0: push esi
        __asm _emit 0x56
        // 0x588BA8E1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588BA8E3: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588BA8E7: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x588BA8E9: je 0x588baa1a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x2B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA8EF: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x588BA8F2: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588BA8F6: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x588BA8F9: je 0x588ba917
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x588BA8FB: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BA900: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x588BA903: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x588BA906: push eax
        __asm _emit 0x50
        // 0x588BA907: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x6C
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BA90C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BA90E: je 0x588ba917
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588BA910: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA915: pop esi
        __asm _emit 0x5E
        // 0x588BA916: ret
        __asm _emit 0xC3
        // 0x588BA917: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588BA91A: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588BA91E: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x588BA921: je 0x588ba938
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588BA923: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BA928: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588BA92B: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x588BA92E: push eax
        __asm _emit 0x50
        // 0x588BA92F: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x6C
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BA934: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BA936: jne 0x588ba910
        __asm _emit 0x75
        __asm _emit 0xD8
        // 0x588BA938: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588BA93B: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588BA93F: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x588BA942: je 0x588ba959
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588BA944: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BA949: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588BA94C: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x588BA94F: push eax
        __asm _emit 0x50
        // 0x588BA950: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0x6B
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BA955: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BA957: jne 0x588ba910
        __asm _emit 0x75
        __asm _emit 0xB7
        // 0x588BA959: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588BA95C: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588BA960: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x588BA963: je 0x588ba97a
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588BA965: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BA96A: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588BA96D: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x588BA970: push eax
        __asm _emit 0x50
        // 0x588BA971: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0x6B
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BA976: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BA978: jne 0x588ba910
        __asm _emit 0x75
        __asm _emit 0x96
        // 0x588BA97A: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x588BA97D: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588BA981: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x588BA984: je 0x588ba99f
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x588BA986: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BA98B: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x588BA98E: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x588BA991: push eax
        __asm _emit 0x50
        // 0x588BA992: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x6B
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BA997: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BA999: jne 0x588ba910
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x71
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588BA99F: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x588BA9A2: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588BA9A6: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x588BA9A9: je 0x588ba9c4
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x588BA9AB: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BA9B0: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x588BA9B3: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x588BA9B6: push eax
        __asm _emit 0x50
        // 0x588BA9B7: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0x6B
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BA9BC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BA9BE: jne 0x588ba910
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x4C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588BA9C4: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA9CA: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588BA9CE: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x588BA9D1: je 0x588ba9ef
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x588BA9D3: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BA9D8: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA9DE: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x588BA9E1: push eax
        __asm _emit 0x50
        // 0x588BA9E2: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0x6B
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BA9E7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BA9E9: jne 0x588ba910
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x21
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588BA9EF: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA9F5: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588BA9F9: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x588BA9FC: je 0x588baa1a
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x588BA9FE: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BAA03: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAA09: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x588BAA0C: push eax
        __asm _emit 0x50
        // 0x588BAA0D: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0x6B
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BAA12: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BAA14: jne 0x588ba910
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF6
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588BAA1A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BAA1C: pop esi
        __asm _emit 0x5E
        // 0x588BAA1D: ret
        __asm _emit 0xC3
    }
}
