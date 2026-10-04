// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58780640 .. +0x25D bytes.
// Source symbol alias: FUN_58780640.
extern "C" __declspec(naked) void FUN_58780640() {
    __asm {
        // 0x58780640: push esi
        __asm _emit 0x56
        // 0x58780641: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58780643: mov eax, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58780649: cmp eax, dword ptr [esi + 0xa8]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878064F: jb 0x58780899
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58780655: push ebx
        __asm _emit 0x53
        // 0x58780656: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58780658: cmp byte ptr [esi + 0xc4], bl
        __asm _emit 0x38
        __asm _emit 0x9E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878065E: je 0x58780898
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58780664: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58780668: mov dword ptr [esi + 0xb8], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878066E: mov dword ptr [esi + 0xac], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58780674: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58780676: mov dword ptr [esi + 0x5d], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x5D
        // 0x58780679: mov dword ptr [esi + 0x61], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x61
        // 0x5878067C: mov edx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58780682: mov byte ptr [esi + 0x5c], bl
        __asm _emit 0x88
        __asm _emit 0x5E
        __asm _emit 0x5C
        // 0x58780685: mov dword ptr [esi + 0xd4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878068B: mov dword ptr [esi + 0xd8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58780691: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58780696: mov ecx, dword ptr [eax + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878069C: mov eax, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587806A2: push edi
        __asm _emit 0x57
        // 0x587806A3: mov edi, dword ptr [ecx + edx*4 + 0x5a0]
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0x91
        __asm _emit 0xA0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587806AA: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587806B0: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x587806B3: movzx edx, byte ptr [ecx + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x91
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587806BA: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587806BC: jne 0x5878074e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587806C2: mov eax, dword ptr [0x58a24640]
        __asm _emit 0xA1
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587806C7: cmp dword ptr [eax + 0x160], 7
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x587806CE: jle 0x587806e5
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x587806D0: cmp dword ptr [eax + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587806D6: je 0x587806e5
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587806D8: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587806DE: add eax, 0x1c0
        __asm _emit 0x05
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587806E3: jmp 0x587806e7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587806E5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587806E7: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587806ED: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x587806F0: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587806F2: je 0x5878071c
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587806F4: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x587806F7: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587806FA: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x587806FD: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x58780700: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58780703: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58780705: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58780708: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5878070A: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5878070D: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58780710: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58780713: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58780716: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58780719: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5878071C: mov eax, dword ptr [0x58a24640]
        __asm _emit 0xA1
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58780721: cmp dword ptr [eax + 0x164], 0xbc
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878072B: jle 0x58780841
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58780731: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58780737: je 0x58780841
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878073D: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58780743: mov eax, dword ptr [ecx + 0x2f0]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xF0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58780749: jmp 0x58780843
        __asm _emit 0xE9
        __asm _emit 0xF5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878074E: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58780751: mov eax, dword ptr [0x58a24640]
        __asm _emit 0xA1
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58780756: je 0x587807c5
        __asm _emit 0x74
        __asm _emit 0x6D
        // 0x58780758: cmp dword ptr [eax + 0x160], 8
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        // 0x5878075F: jle 0x58780776
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x58780761: cmp dword ptr [eax + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58780767: je 0x58780776
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58780769: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878076F: add eax, 0x200
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58780774: jmp 0x58780778
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58780776: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58780778: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878077E: push eax
        __asm _emit 0x50
        // 0x5878077F: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x41
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x58780784: mov eax, dword ptr [0x58a24640]
        __asm _emit 0xA1
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58780789: cmp dword ptr [eax + 0x164], 0xbd
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xBD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58780793: jle 0x587807b6
        __asm _emit 0x7E
        __asm _emit 0x21
        // 0x58780795: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878079B: je 0x587807b6
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x5878079D: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587807A3: mov eax, dword ptr [ecx + 0x2f4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587807A9: push eax
        __asm _emit 0x50
        // 0x587807AA: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587807AC: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0x0F
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587807B1: jmp 0x58780873
        __asm _emit 0xE9
        __asm _emit 0xBD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587807B6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587807B8: push eax
        __asm _emit 0x50
        // 0x587807B9: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587807BB: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587807C0: jmp 0x58780873
        __asm _emit 0xE9
        __asm _emit 0xAE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587807C5: cmp dword ptr [eax + 0x160], 6
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        // 0x587807CC: jle 0x587807e3
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x587807CE: cmp dword ptr [eax + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587807D4: je 0x587807e3
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587807D6: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587807DC: add eax, 0x180
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587807E1: jmp 0x587807e5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587807E3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587807E5: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587807EB: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x587807EE: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587807F0: je 0x5878081a
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587807F2: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x587807F5: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587807F8: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x587807FB: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x587807FE: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58780801: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58780803: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58780806: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58780808: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5878080B: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5878080E: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58780811: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58780814: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58780817: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5878081A: mov eax, dword ptr [0x58a24640]
        __asm _emit 0xA1
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5878081F: cmp dword ptr [eax + 0x164], 0xbb
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58780829: jle 0x58780841
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5878082B: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58780831: je 0x58780841
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58780833: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58780839: mov eax, dword ptr [ecx + 0x2ec]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878083F: jmp 0x58780843
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58780841: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58780843: mov dword ptr [edi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x50
        // 0x58780846: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58780848: je 0x58780873
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x5878084A: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5878084D: mov dword ptr [edi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x0C
        // 0x58780850: mov ecx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x58780853: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x58780856: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x58780859: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5878085C: lea ecx, [edi + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x5878085F: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58780861: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58780864: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58780867: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5878086A: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5878086D: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58780870: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58780873: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58780879: mov dword ptr [ecx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x50
        // 0x5878087C: lea eax, [esi + 0x6c]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5878087F: mov ecx, 8
        __asm _emit 0xB9
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58780884: pop edi
        __asm _emit 0x5F
        // 0x58780885: mov edx, dword ptr [eax - 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0xFC
        // 0x58780888: mov dword ptr [edx + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x54
        // 0x5878088B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5878088D: add eax, 8
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x08
        // 0x58780890: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x58780893: mov dword ptr [edx + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x54
        // 0x58780896: jne 0x58780885
        __asm _emit 0x75
        __asm _emit 0xED
        // 0x58780898: pop ebx
        __asm _emit 0x5B
        // 0x58780899: pop esi
        __asm _emit 0x5E
        // 0x5878089A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
