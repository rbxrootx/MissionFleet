// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58860650 .. +0x14F bytes.
// Source symbol alias: FUN_58860650.
extern "C" __declspec(naked) void FUN_58860650() {
    __asm {
        // 0x58860650: push esi
        __asm _emit 0x56
        // 0x58860651: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58860653: mov eax, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860659: mov eax, dword ptr [esi + eax*4 + 0x148]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860660: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x58860663: je 0x5886079b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860669: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5886066C: je 0x5886079b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860672: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860678: mov edx, dword ptr [esi + ecx*4 + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886067F: lea eax, [esi + ecx*4 + 0x120]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860686: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5886068C: push edx
        __asm _emit 0x52
        // 0x5886068D: push eax
        __asm _emit 0x50
        // 0x5886068E: call 0x587a1640
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0x0F
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58860693: mov eax, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860699: cmp dword ptr [esi + eax*4 + 0x120], 0
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588606A1: jne 0x5886079b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588606A7: cmp dword ptr [esi + eax*4 + 0x698], 0
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588606AF: jne 0x5886079b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588606B5: mov eax, dword ptr [esi + eax*4 + 0x148]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588606BC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588606BE: je 0x5886079b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588606C4: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x588606C7: je 0x5886079b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588606CD: mov eax, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588606D3: xor dword ptr [esi + eax*8 + 0x188], 0xa0e6b2d0
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0xC6
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xD0
        __asm _emit 0xB2
        __asm _emit 0xE6
        __asm _emit 0xA0
        // 0x588606DE: lea eax, [esi + eax*8 + 0x188]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0xC6
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588606E5: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588606E9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588606EB: jne 0x5886072a
        __asm _emit 0x75
        __asm _emit 0x3D
        // 0x588606ED: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588606F3: cmp dword ptr [esi + ecx*4 + 0x640], eax
        __asm _emit 0x39
        __asm _emit 0x84
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588606FA: jne 0x58860763
        __asm _emit 0x75
        __asm _emit 0x67
        // 0x588606FC: cmp dword ptr [esi + 0x63c], eax
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860702: jne 0x58860763
        __asm _emit 0x75
        __asm _emit 0x5F
        // 0x58860704: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58860706: inc dword ptr [esi + edx*8 + 0x160]
        __asm _emit 0xFF
        __asm _emit 0x84
        __asm _emit 0xD6
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886070D: lea eax, [esi + edx*8 + 0x160]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0xD6
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860714: mov eax, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886071A: inc dword ptr [esi + eax*8 + 0x188]
        __asm _emit 0xFF
        __asm _emit 0x84
        __asm _emit 0xC6
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860721: lea eax, [esi + eax*8 + 0x188]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0xC6
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860728: jmp 0x58860763
        __asm _emit 0xEB
        __asm _emit 0x39
        // 0x5886072A: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5886072D: jne 0x58860763
        __asm _emit 0x75
        __asm _emit 0x34
        // 0x5886072F: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860735: cmp dword ptr [esi + ecx*8 + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0xCE
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886073D: je 0x58860763
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x5886073F: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58860741: dec dword ptr [esi + edx*8 + 0x160]
        __asm _emit 0xFF
        __asm _emit 0x8C
        __asm _emit 0xD6
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860748: lea eax, [esi + edx*8 + 0x160]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0xD6
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886074F: mov eax, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860755: dec dword ptr [esi + eax*8 + 0x188]
        __asm _emit 0xFF
        __asm _emit 0x8C
        __asm _emit 0xC6
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886075C: lea eax, [esi + eax*8 + 0x188]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0xC6
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860763: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860769: xor dword ptr [esi + ecx*8 + 0x188], 0xa0e6b2d0
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0xCE
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xD0
        __asm _emit 0xB2
        __asm _emit 0xE6
        __asm _emit 0xA0
        // 0x58860774: mov edx, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886077A: lea eax, [esi + ecx*8 + 0x188]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0xCE
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860781: mov eax, dword ptr [esi + edx*8 + 0x160]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xD6
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860788: mov ecx, dword ptr [esi + 0x704]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886078E: push eax
        __asm _emit 0x50
        // 0x5886078F: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0x6B
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58860794: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58860796: call 0x5885fa60
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5886079B: pop esi
        __asm _emit 0x5E
        // 0x5886079C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
