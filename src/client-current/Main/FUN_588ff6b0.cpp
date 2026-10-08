// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 473 bytes in 1 exact ranges.
// Source symbol alias: FUN_588ff6b0.

// Ghidra body range 0x588FF6B0..0x588FF889; 473 mapped bytes.
extern "C" __declspec(naked) void FUN_588ff6b0_segment_00() {
    __asm {
        // 0x588FF6B0: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588FF6B4: push ebx
        __asm _emit 0x53
        // 0x588FF6B5: push esi
        __asm _emit 0x56
        // 0x588FF6B6: push edi
        __asm _emit 0x57
        // 0x588FF6B7: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FF6B9: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x588FF6BC: jne 0x588ff734
        __asm _emit 0x75
        __asm _emit 0x76
        // 0x588FF6BE: call 0x588ff080
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF6C3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FF6C5: je 0x588ff6dd
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588FF6C7: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FF6CB: pop edi
        __asm _emit 0x5F
        // 0x588FF6CC: pop esi
        __asm _emit 0x5E
        // 0x588FF6CD: mov dword ptr [eax + 0x9c], 0
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF6D7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FF6D9: pop ebx
        __asm _emit 0x5B
        // 0x588FF6DA: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588FF6DD: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FF6E1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FF6E3: je 0x588ff7b5
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF6E9: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588FF6EC: jne 0x588ff707
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x588FF6EE: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FF6F2: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588FF6F4: call 0x588f7df0
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x86
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF6F9: mov dword ptr [esi + 0x90], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF6FF: pop edi
        __asm _emit 0x5F
        // 0x588FF700: pop esi
        __asm _emit 0x5E
        // 0x588FF701: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FF703: pop ebx
        __asm _emit 0x5B
        // 0x588FF704: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588FF707: cmp eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x588FF70A: jne 0x588ff881
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF710: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FF714: mov ecx, dword ptr [eax + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x64
        // 0x588FF717: mov edx, dword ptr [eax + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x60
        // 0x588FF71A: movzx eax, byte ptr [eax + 0x68]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x40
        __asm _emit 0x68
        // 0x588FF71E: push ecx
        __asm _emit 0x51
        // 0x588FF71F: mov ecx, dword ptr [0x58a245f0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FF725: push edx
        __asm _emit 0x52
        // 0x588FF726: push eax
        __asm _emit 0x50
        // 0x588FF727: call 0x588fb850
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0xC1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF72C: pop edi
        __asm _emit 0x5F
        // 0x588FF72D: pop esi
        __asm _emit 0x5E
        // 0x588FF72E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FF730: pop ebx
        __asm _emit 0x5B
        // 0x588FF731: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588FF734: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x588FF737: jne 0x588ff778
        __asm _emit 0x75
        __asm _emit 0x3F
        // 0x588FF739: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF73F: cmp dword ptr [esp + 0x10], ecx
        __asm _emit 0x39
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FF743: jne 0x588ff881
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF749: cmp byte ptr [ecx + 0x98], 0
        __asm _emit 0x80
        __asm _emit 0xB9
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF750: jne 0x588ff881
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x2B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF756: call 0x588f7e00
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0x86
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF75B: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF761: call 0x588f9c00
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0xA4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF766: pop edi
        __asm _emit 0x5F
        // 0x588FF767: mov dword ptr [esi + 0x90], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF771: pop esi
        __asm _emit 0x5E
        // 0x588FF772: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FF774: pop ebx
        __asm _emit 0x5B
        // 0x588FF775: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588FF778: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588FF77B: jne 0x588ff7e2
        __asm _emit 0x75
        __asm _emit 0x65
        // 0x588FF77D: call 0x588ff080
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF782: cmp dword ptr [esp + 0x18], 1
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        // 0x588FF787: jne 0x588ff7a8
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x588FF789: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FF78D: mov ecx, dword ptr [eax + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x64
        // 0x588FF790: mov edx, dword ptr [eax + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x60
        // 0x588FF793: push ecx
        __asm _emit 0x51
        // 0x588FF794: mov ecx, dword ptr [0x58a245f0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FF79A: push edx
        __asm _emit 0x52
        // 0x588FF79B: call 0x588fcb80
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0xD3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF7A0: pop edi
        __asm _emit 0x5F
        // 0x588FF7A1: pop esi
        __asm _emit 0x5E
        // 0x588FF7A2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FF7A4: pop ebx
        __asm _emit 0x5B
        // 0x588FF7A5: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588FF7A8: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FF7AC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FF7AE: jne 0x588ff7c8
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x588FF7B0: call 0x588f7e30
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x86
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF7B5: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF7BB: call 0x588f9c00
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0xA4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF7C0: pop edi
        __asm _emit 0x5F
        // 0x588FF7C1: pop esi
        __asm _emit 0x5E
        // 0x588FF7C2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FF7C4: pop ebx
        __asm _emit 0x5B
        // 0x588FF7C5: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588FF7C8: movzx edx, byte ptr [ecx + 0x6b]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x51
        __asm _emit 0x6B
        // 0x588FF7CC: movzx ecx, byte ptr [ecx + 0x6a]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x49
        __asm _emit 0x6A
        // 0x588FF7D0: push edx
        __asm _emit 0x52
        // 0x588FF7D1: push ecx
        __asm _emit 0x51
        // 0x588FF7D2: push eax
        __asm _emit 0x50
        // 0x588FF7D3: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FF7D5: call 0x588ff2f0
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF7DA: pop edi
        __asm _emit 0x5F
        // 0x588FF7DB: pop esi
        __asm _emit 0x5E
        // 0x588FF7DC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FF7DE: pop ebx
        __asm _emit 0x5B
        // 0x588FF7DF: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588FF7E2: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588FF7E5: jne 0x588ff881
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF7EB: call 0x588ff080
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF7F0: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x588FF7F2: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588FF7F4: je 0x588ff881
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF7FA: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FF800: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588FF803: push edi
        __asm _emit 0x57
        // 0x588FF804: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FF806: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0x1D
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588FF80B: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588FF80E: jne 0x588ff86d
        __asm _emit 0x75
        __asm _emit 0x5D
        // 0x588FF810: push edi
        __asm _emit 0x57
        // 0x588FF811: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FF813: call 0x588ff200
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF818: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FF81A: jne 0x588ff881
        __asm _emit 0x75
        __asm _emit 0x65
        // 0x588FF81C: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FF822: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x588FF825: push edx
        __asm _emit 0x52
        // 0x588FF826: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FF828: call 0x588fefe0
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF82D: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x588FF830: je 0x588ff881
        __asm _emit 0x74
        __asm _emit 0x4F
        // 0x588FF832: movzx ecx, byte ptr [ebx + 0x6b]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x4B
        __asm _emit 0x6B
        // 0x588FF836: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588FF838: jne 0x588ff855
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x588FF83A: movzx edx, byte ptr [ebx + 0x6a]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x53
        __asm _emit 0x6A
        // 0x588FF83E: cmp edx, dword ptr [esi + 0x88]
        __asm _emit 0x3B
        __asm _emit 0x96
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF844: jne 0x588ff855
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x588FF846: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588FF848: call 0x588f7e90
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x86
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF84D: pop edi
        __asm _emit 0x5F
        // 0x588FF84E: pop esi
        __asm _emit 0x5E
        // 0x588FF84F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FF851: pop ebx
        __asm _emit 0x5B
        // 0x588FF852: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588FF855: push eax
        __asm _emit 0x50
        // 0x588FF856: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF85C: push eax
        __asm _emit 0x50
        // 0x588FF85D: push ebx
        __asm _emit 0x53
        // 0x588FF85E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FF860: call 0x588ff2f0
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF865: pop edi
        __asm _emit 0x5F
        // 0x588FF866: pop esi
        __asm _emit 0x5E
        // 0x588FF867: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FF869: pop ebx
        __asm _emit 0x5B
        // 0x588FF86A: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588FF86D: mov ecx, dword ptr [ebx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x64
        // 0x588FF870: mov edx, dword ptr [ebx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x60
        // 0x588FF873: push ecx
        __asm _emit 0x51
        // 0x588FF874: mov ecx, dword ptr [0x58a245f0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FF87A: push edx
        __asm _emit 0x52
        // 0x588FF87B: push edi
        __asm _emit 0x57
        // 0x588FF87C: call 0x588fcac0
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0xD2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF881: pop edi
        __asm _emit 0x5F
        // 0x588FF882: pop esi
        __asm _emit 0x5E
        // 0x588FF883: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FF885: pop ebx
        __asm _emit 0x5B
        // 0x588FF886: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
