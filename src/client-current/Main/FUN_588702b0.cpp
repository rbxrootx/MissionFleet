// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1524 bytes in 1 exact ranges.
// Source symbol alias: FUN_588702b0.

// Ghidra body range 0x588702B0..0x588708A4; 1524 mapped bytes.
extern "C" __declspec(naked) void FUN_588702b0_segment_00() {
    __asm {
        // 0x588702B0: mov eax, dword ptr [0x58a24698]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588702B5: cmp dword ptr [eax + 0x164], 0x98
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588702BF: push ebx
        __asm _emit 0x53
        // 0x588702C0: push esi
        __asm _emit 0x56
        // 0x588702C1: push edi
        __asm _emit 0x57
        // 0x588702C2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588702C4: jle 0x588702dd
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588702C6: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588702CD: je 0x588702dd
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588702CF: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588702D5: mov eax, dword ptr [eax + 0x260]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588702DB: jmp 0x588702df
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588702DD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588702DF: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x588702E2: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588702E5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588702E7: je 0x58870311
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588702E9: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588702EC: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588702EF: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588702F2: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588702F5: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588702F8: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588702FA: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588702FD: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588702FF: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58870302: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58870305: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58870308: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5887030B: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5887030E: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58870311: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58870315: mov eax, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x64
        // 0x58870318: test eax, 0x10000
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5887031D: je 0x588703b2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870323: mov eax, dword ptr [0x58a24698]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58870328: cmp dword ptr [eax + 0x164], 0x9b
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870332: jle 0x5887034b
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58870334: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887033B: je 0x5887034b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5887033D: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870343: mov eax, dword ptr [edx + 0x26c]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870349: jmp 0x5887034d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5887034B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5887034D: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58870350: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58870353: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58870355: je 0x5887037f
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58870357: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5887035A: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5887035D: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58870360: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58870363: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58870366: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58870368: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5887036B: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5887036D: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58870370: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58870373: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58870376: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58870379: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5887037C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5887037F: mov eax, dword ptr [0x58a24698]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58870384: cmp dword ptr [eax + 0x164], 0x9c
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887038E: jle 0x58870441
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xAD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870394: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887039B: je 0x58870441
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588703A1: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588703A7: mov eax, dword ptr [ecx + 0x270]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588703AD: jmp 0x58870443
        __asm _emit 0xE9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588703B2: test eax, 0x2000000
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x588703B7: je 0x5887047f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588703BD: mov eax, dword ptr [0x58a24698]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588703C2: cmp dword ptr [eax + 0x164], 0x9d
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588703CC: jle 0x588703e5
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588703CE: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588703D5: je 0x588703e5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588703D7: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588703DD: mov eax, dword ptr [ecx + 0x274]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588703E3: jmp 0x588703e7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588703E5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588703E7: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588703EA: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588703ED: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588703EF: je 0x58870419
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588703F1: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588703F4: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588703F7: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588703FA: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588703FD: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58870400: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58870402: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58870405: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58870407: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5887040A: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5887040D: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58870410: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58870413: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58870416: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58870419: mov eax, dword ptr [0x58a24698]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5887041E: cmp dword ptr [eax + 0x164], 0x9e
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870428: jle 0x58870441
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5887042A: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870431: je 0x58870441
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58870433: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870439: mov eax, dword ptr [ecx + 0x278]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887043F: jmp 0x58870443
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58870441: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58870443: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x58870446: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58870449: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5887044B: je 0x58870842
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870451: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58870454: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58870457: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5887045A: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5887045D: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x58870460: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58870463: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58870466: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58870468: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5887046B: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5887046E: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58870471: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58870474: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58870477: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5887047A: jmp 0x58870842
        __asm _emit 0xE9
        __asm _emit 0xC3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887047F: test eax, 0x80000
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58870484: je 0x588704ec
        __asm _emit 0x74
        __asm _emit 0x66
        // 0x58870486: mov eax, dword ptr [0x58a24698]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5887048B: cmp dword ptr [eax + 0x164], 0x9f
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870495: jle 0x588704ae
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58870497: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887049E: je 0x588704ae
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588704A0: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588704A6: mov eax, dword ptr [ecx + 0x27c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x7C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588704AC: jmp 0x588704b0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588704AE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588704B0: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588704B3: push eax
        __asm _emit 0x50
        // 0x588704B4: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0x12
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588704B9: mov eax, dword ptr [0x58a24698]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588704BE: cmp dword ptr [eax + 0x164], 0xa0
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588704C8: jle 0x58870837
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x69
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588704CE: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588704D5: je 0x58870837
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588704DB: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588704E1: mov eax, dword ptr [edx + 0x280]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588704E7: jmp 0x58870839
        __asm _emit 0xE9
        __asm _emit 0x4D
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588704EC: test eax, 0x200000
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x588704F1: je 0x58870559
        __asm _emit 0x74
        __asm _emit 0x66
        // 0x588704F3: mov eax, dword ptr [0x58a24698]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588704F8: cmp dword ptr [eax + 0x164], 0xa1
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870502: jle 0x5887051b
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58870504: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887050B: je 0x5887051b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5887050D: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870513: mov eax, dword ptr [eax + 0x284]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870519: jmp 0x5887051d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5887051B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5887051D: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58870520: push eax
        __asm _emit 0x50
        // 0x58870521: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0x11
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x58870526: mov eax, dword ptr [0x58a24698]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5887052B: cmp dword ptr [eax + 0x164], 0xa2
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870535: jle 0x58870837
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887053B: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870542: je 0x58870837
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xEF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870548: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887054E: mov eax, dword ptr [ecx + 0x288]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870554: jmp 0x58870839
        __asm _emit 0xE9
        __asm _emit 0xE0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870559: test eax, 0x1000000
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x5887055E: je 0x588705c6
        __asm _emit 0x74
        __asm _emit 0x66
        // 0x58870560: mov eax, dword ptr [0x58a24698]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58870565: cmp dword ptr [eax + 0x164], 0xa3
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887056F: jle 0x58870588
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58870571: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870578: je 0x58870588
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5887057A: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870580: mov eax, dword ptr [edx + 0x28c]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x8C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870586: jmp 0x5887058a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58870588: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5887058A: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5887058D: push eax
        __asm _emit 0x50
        // 0x5887058E: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0x11
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x58870593: mov eax, dword ptr [0x58a24698]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58870598: cmp dword ptr [eax + 0x164], 0xa4
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588705A2: jle 0x58870837
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x8F
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588705A8: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588705AF: je 0x58870837
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588705B5: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588705BB: mov eax, dword ptr [eax + 0x290]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588705C1: jmp 0x58870839
        __asm _emit 0xE9
        __asm _emit 0x73
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588705C6: test eax, 0x40000
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588705CB: je 0x58870633
        __asm _emit 0x74
        __asm _emit 0x66
        // 0x588705CD: mov eax, dword ptr [0x58a24698]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588705D2: cmp dword ptr [eax + 0x164], 0xa5
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xA5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588705DC: jle 0x588705f5
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588705DE: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588705E5: je 0x588705f5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588705E7: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588705ED: mov eax, dword ptr [ecx + 0x294]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588705F3: jmp 0x588705f7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588705F5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588705F7: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588705FA: push eax
        __asm _emit 0x50
        // 0x588705FB: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0x10
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x58870600: mov eax, dword ptr [0x58a24698]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58870605: cmp dword ptr [eax + 0x164], 0xa6
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xA6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887060F: jle 0x58870837
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870615: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887061C: je 0x58870837
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870622: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870628: mov eax, dword ptr [edx + 0x298]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887062E: jmp 0x58870839
        __asm _emit 0xE9
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870633: test eax, 0x20000
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58870638: je 0x588706a0
        __asm _emit 0x74
        __asm _emit 0x66
        // 0x5887063A: mov eax, dword ptr [0x58a24698]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5887063F: cmp dword ptr [eax + 0x164], 0xab
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xAB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870649: jle 0x58870662
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5887064B: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870652: je 0x58870662
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58870654: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887065A: mov eax, dword ptr [eax + 0x2ac]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xAC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870660: jmp 0x58870664
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58870662: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58870664: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58870667: push eax
        __asm _emit 0x50
        // 0x58870668: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x10
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x5887066D: mov eax, dword ptr [0x58a24698]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58870672: cmp dword ptr [eax + 0x164], 0xac
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887067C: jle 0x58870837
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xB5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870682: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870689: je 0x58870837
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887068F: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870695: mov eax, dword ptr [ecx + 0x2b0]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xB0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887069B: jmp 0x58870839
        __asm _emit 0xE9
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588706A0: test eax, 0x40000000
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588706A5: je 0x5887070d
        __asm _emit 0x74
        __asm _emit 0x66
        // 0x588706A7: mov eax, dword ptr [0x58a246c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588706AC: cmp dword ptr [eax + 0x164], 0x190
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588706B6: jle 0x588706cf
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588706B8: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588706BF: je 0x588706cf
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588706C1: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588706C7: mov eax, dword ptr [edx + 0x640]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588706CD: jmp 0x588706d1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588706CF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588706D1: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588706D4: push eax
        __asm _emit 0x50
        // 0x588706D5: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0x0F
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588706DA: mov eax, dword ptr [0x58a246c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588706DF: cmp dword ptr [eax + 0x164], 0x191
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588706E9: jle 0x58870837
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588706EF: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588706F6: je 0x58870837
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x3B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588706FC: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870702: mov eax, dword ptr [eax + 0x644]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870708: jmp 0x58870839
        __asm _emit 0xE9
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887070D: test eax, 0x4000
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870712: je 0x5887077a
        __asm _emit 0x74
        __asm _emit 0x66
        // 0x58870714: mov eax, dword ptr [0x58a246c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58870719: cmp dword ptr [eax + 0x164], 0x192
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870723: jle 0x5887073c
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58870725: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887072C: je 0x5887073c
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5887072E: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870734: mov eax, dword ptr [ecx + 0x648]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887073A: jmp 0x5887073e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5887073C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5887073E: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58870741: push eax
        __asm _emit 0x50
        // 0x58870742: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x0F
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x58870747: mov eax, dword ptr [0x58a246c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5887074C: cmp dword ptr [eax + 0x164], 0x193
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870756: jle 0x58870837
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xDB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887075C: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870763: je 0x58870837
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870769: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887076F: mov eax, dword ptr [edx + 0x64c]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x4C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870775: jmp 0x58870839
        __asm _emit 0xE9
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887077A: test eax, 0x8000
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887077F: je 0x588707dc
        __asm _emit 0x74
        __asm _emit 0x5B
        // 0x58870781: mov eax, dword ptr [0x58a246c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58870786: cmp dword ptr [eax + 0x164], 0x194
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870790: jle 0x588707a9
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58870792: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870799: je 0x588707a9
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5887079B: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588707A1: mov eax, dword ptr [eax + 0x650]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x50
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588707A7: jmp 0x588707ab
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588707A9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588707AB: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588707AE: push eax
        __asm _emit 0x50
        // 0x588707AF: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x0F
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588707B4: mov eax, dword ptr [0x58a246c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588707B9: cmp dword ptr [eax + 0x164], 0x195
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588707C3: jle 0x58870837
        __asm _emit 0x7E
        __asm _emit 0x72
        // 0x588707C5: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588707CC: je 0x58870837
        __asm _emit 0x74
        __asm _emit 0x69
        // 0x588707CE: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588707D4: mov eax, dword ptr [ecx + 0x654]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x54
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588707DA: jmp 0x58870839
        __asm _emit 0xEB
        __asm _emit 0x5D
        // 0x588707DC: mov eax, dword ptr [0x58a24698]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588707E1: cmp dword ptr [eax + 0x164], 0xa9
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588707EB: jle 0x58870804
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588707ED: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588707F4: je 0x58870804
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588707F6: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588707FC: mov eax, dword ptr [edx + 0x2a4]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xA4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870802: jmp 0x58870806
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58870804: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58870806: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58870809: push eax
        __asm _emit 0x50
        // 0x5887080A: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0x0E
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x5887080F: mov eax, dword ptr [0x58a24698]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58870814: cmp dword ptr [eax + 0x164], 0xaa
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887081E: jle 0x58870837
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58870820: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870827: je 0x58870837
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58870829: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887082F: mov eax, dword ptr [eax + 0x2a8]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xA8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870835: jmp 0x58870839
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58870837: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58870839: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x5887083C: push eax
        __asm _emit 0x50
        // 0x5887083D: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x0E
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x58870842: mov ecx, dword ptr [esi + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870848: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5887084D: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x58870852: lea edi, [esi + 0x140]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870858: mov ebx, 8
        __asm _emit 0xBB
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887085D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58870860: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58870862: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x58870865: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58870867: je 0x58870896
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x58870869: mov edx, 0x5898d61c
        __asm _emit 0xBA
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5887086E: mov esi, 0x80
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870873: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x58870879: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5887087B: je 0x5887088e
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5887087D: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x5887087F: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58870881: je 0x5887088e
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58870883: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x58870885: inc eax
        __asm _emit 0x40
        // 0x58870886: inc edx
        __asm _emit 0x42
        // 0x58870887: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x5887088A: jne 0x58870873
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x5887088C: jmp 0x58870892
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5887088E: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58870890: jne 0x58870893
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x58870892: dec eax
        __asm _emit 0x48
        // 0x58870893: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870896: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58870899: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5887089C: jne 0x58870860
        __asm _emit 0x75
        __asm _emit 0xC2
        // 0x5887089E: pop edi
        __asm _emit 0x5F
        // 0x5887089F: pop esi
        __asm _emit 0x5E
        // 0x588708A0: pop ebx
        __asm _emit 0x5B
        // 0x588708A1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
