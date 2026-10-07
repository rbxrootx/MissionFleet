// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 767 bytes in 1 exact ranges.
// Source symbol alias: FUN_588de0d0.

// Ghidra body range 0x588DE0D0..0x588DE3CF; 767 mapped bytes.
extern "C" __declspec(naked) void FUN_588de0d0_segment_00() {
    __asm {
        // 0x588DE0D0: push esi
        __asm _emit 0x56
        // 0x588DE0D1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588DE0D3: mov eax, dword ptr [esi + 0x6090]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE0D9: push edi
        __asm _emit 0x57
        // 0x588DE0DA: cmp eax, 0x50000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588DE0DF: jne 0x588de350
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x6B
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE0E5: mov eax, dword ptr [esi + 0x398]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE0EB: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588DE0F0: je 0x588de2c6
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE0F6: mov ecx, dword ptr [esi + 0x6078]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE0FC: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588DE102: cmp ecx, 1
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x01
        // 0x588DE105: jne 0x588de2c6
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE10B: mov edx, dword ptr [esi + 0x6080]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE111: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588DE117: jne 0x588de2c6
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE11D: mov eax, dword ptr [esi + 0x6084]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE123: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588DE128: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x588DE12A: jne 0x588de2c6
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE130: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DE136: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x588DE139: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DE13F: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE145: mov edx, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588DE14B: mov ecx, dword ptr [edx + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE151: cdq
        __asm _emit 0x99
        // 0x588DE152: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x588DE154: add eax, dword ptr [esp + 0x10]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588DE158: push eax
        __asm _emit 0x50
        // 0x588DE159: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x588DE15C: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE162: cdq
        __asm _emit 0x99
        // 0x588DE163: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x588DE165: mov ecx, dword ptr [esi + 0x60d8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE16B: add eax, dword ptr [esp + 0x10]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588DE16F: push eax
        __asm _emit 0x50
        // 0x588DE170: call 0x5875d7c0
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0xF6
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588DE175: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DE177: je 0x588de248
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE17D: cmp dword ptr [esi + 0x60a4], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE184: jne 0x588de3c4
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x3A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE18A: cmp dword ptr [esp + 0x14], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588DE18F: mov dword ptr [esi + 0x60a4], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588DE199: je 0x588de231
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE19F: mov eax, dword ptr [esi + 0x6100]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE1A5: mov ecx, dword ptr [eax + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x54
        // 0x588DE1A8: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DE1AD: mov edi, 0xdd
        __asm _emit 0xBF
        __asm _emit 0xDD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE1B2: cmp dword ptr [eax + 0x160], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE1B8: jle 0x588de1d0
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588DE1BA: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE1C1: je 0x588de1d0
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x588DE1C3: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE1C9: add eax, 0x3740
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE1CE: jmp 0x588de1d2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588DE1D0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DE1D2: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588DE1D4: je 0x588de231
        __asm _emit 0x74
        __asm _emit 0x5B
        // 0x588DE1D6: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DE1DC: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588DE1DF: mov ecx, 0x12c
        __asm _emit 0xB9
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE1E4: sub ecx, dword ptr [edx + 8]
        __asm _emit 0x2B
        __asm _emit 0x4A
        __asm _emit 0x08
        // 0x588DE1E7: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DE1ED: push edx
        __asm _emit 0x52
        // 0x588DE1EE: push ecx
        __asm _emit 0x51
        // 0x588DE1EF: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DE1F5: sub eax, 0x190
        __asm _emit 0x2D
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE1FA: push eax
        __asm _emit 0x50
        // 0x588DE1FB: call 0x587b7400
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x92
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x588DE200: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DE205: cmp dword ptr [eax + 0x160], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE20B: jle 0x588de223
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588DE20D: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE214: je 0x588de223
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x588DE216: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE21C: add eax, 0x3740
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE221: jmp 0x588de225
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588DE223: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DE225: mov ecx, dword ptr [esi + 0x6100]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE22B: push eax
        __asm _emit 0x50
        // 0x588DE22C: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0x66
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588DE231: push 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588DE236: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588DE238: call 0x588d9f80
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0xBD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DE23D: mov eax, dword ptr [esi + 0x60a4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE243: pop edi
        __asm _emit 0x5F
        // 0x588DE244: pop esi
        __asm _emit 0x5E
        // 0x588DE245: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588DE248: cmp dword ptr [esi + 0x60a4], 0x40000000
        __asm _emit 0x81
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588DE252: jne 0x588de3c4
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE258: mov dword ptr [esi + 0x60a4], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE262: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DE267: cmp dword ptr [eax + 0x160], 7
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x588DE26E: jle 0x588de2a4
        __asm _emit 0x7E
        __asm _emit 0x34
        // 0x588DE270: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE277: je 0x588de2a4
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x588DE279: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE27F: mov ecx, dword ptr [esi + 0x6100]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE285: add eax, 0x1c0
        __asm _emit 0x05
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE28A: push eax
        __asm _emit 0x50
        // 0x588DE28B: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x66
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588DE290: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588DE292: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588DE294: call 0x588d9f80
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0xBC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DE299: mov eax, dword ptr [esi + 0x60a4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE29F: pop edi
        __asm _emit 0x5F
        // 0x588DE2A0: pop esi
        __asm _emit 0x5E
        // 0x588DE2A1: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588DE2A4: mov ecx, dword ptr [esi + 0x6100]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE2AA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DE2AC: push eax
        __asm _emit 0x50
        // 0x588DE2AD: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0x66
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588DE2B2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588DE2B4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588DE2B6: call 0x588d9f80
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0xBC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DE2BB: mov eax, dword ptr [esi + 0x60a4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE2C1: pop edi
        __asm _emit 0x5F
        // 0x588DE2C2: pop esi
        __asm _emit 0x5E
        // 0x588DE2C3: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588DE2C6: cmp dword ptr [esi + 0x60a4], 0x40000000
        __asm _emit 0x81
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588DE2D0: jne 0x588de2e5
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x588DE2D2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588DE2D4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588DE2D6: mov dword ptr [esi + 0x60a4], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE2E0: call 0x588d9f80
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0xBC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DE2E5: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DE2EA: cmp dword ptr [eax + 0x160], 7
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x588DE2F1: jle 0x588de309
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588DE2F3: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE2FA: je 0x588de309
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x588DE2FC: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE302: add eax, 0x1c0
        __asm _emit 0x05
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE307: jmp 0x588de30b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588DE309: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DE30B: mov ecx, dword ptr [esi + 0x6100]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE311: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x588DE314: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DE316: je 0x588de3c4
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE31C: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588DE31F: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588DE322: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x588DE325: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588DE328: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588DE32B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588DE32D: mov dword ptr [ecx + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x14
        // 0x588DE330: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588DE333: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588DE336: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588DE339: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588DE33C: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588DE33F: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588DE342: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588DE345: mov eax, dword ptr [esi + 0x60a4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE34B: pop edi
        __asm _emit 0x5F
        // 0x588DE34C: pop esi
        __asm _emit 0x5E
        // 0x588DE34D: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588DE350: cmp eax, 0x40000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588DE355: jne 0x588de3c4
        __asm _emit 0x75
        __asm _emit 0x6D
        // 0x588DE357: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DE35C: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588DE35F: add ecx, dword ptr [esp + 0x10]
        __asm _emit 0x03
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588DE363: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588DE366: add edx, dword ptr [esp + 0xc]
        __asm _emit 0x03
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588DE36A: push ecx
        __asm _emit 0x51
        // 0x588DE36B: mov ecx, dword ptr [esi + 0x60d8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE371: push edx
        __asm _emit 0x52
        // 0x588DE372: call 0x5875d7c0
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0xF4
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588DE377: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DE379: je 0x588de3a5
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x588DE37B: cmp dword ptr [esi + 0x60a4], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE382: jne 0x588de3c4
        __asm _emit 0x75
        __asm _emit 0x40
        // 0x588DE384: push 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588DE389: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588DE38B: mov dword ptr [esi + 0x60a4], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588DE395: call 0x588d9f80
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0xBB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DE39A: mov eax, dword ptr [esi + 0x60a4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE3A0: pop edi
        __asm _emit 0x5F
        // 0x588DE3A1: pop esi
        __asm _emit 0x5E
        // 0x588DE3A2: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588DE3A5: cmp dword ptr [esi + 0x60a4], 0x40000000
        __asm _emit 0x81
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588DE3AF: jne 0x588de3c4
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x588DE3B1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588DE3B3: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588DE3B5: mov dword ptr [esi + 0x60a4], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE3BF: call 0x588d9f80
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0xBB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DE3C4: mov eax, dword ptr [esi + 0x60a4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE3CA: pop edi
        __asm _emit 0x5F
        // 0x588DE3CB: pop esi
        __asm _emit 0x5E
        // 0x588DE3CC: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
