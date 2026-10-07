// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 745 bytes in 1 exact ranges.
// Source symbol alias: FUN_587cda60.

// Ghidra body range 0x587CDA60..0x587CDD49; 745 mapped bytes.
extern "C" __declspec(naked) void FUN_587cda60_segment_00() {
    __asm {
        // 0x587CDA60: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587CDA62: push 0x58981a36
        __asm _emit 0x68
        __asm _emit 0x36
        __asm _emit 0x1A
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587CDA67: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDA6D: push eax
        __asm _emit 0x50
        // 0x587CDA6E: sub esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x28
        // 0x587CDA71: push ebx
        __asm _emit 0x53
        // 0x587CDA72: push ebp
        __asm _emit 0x55
        // 0x587CDA73: push esi
        __asm _emit 0x56
        // 0x587CDA74: push edi
        __asm _emit 0x57
        // 0x587CDA75: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587CDA7A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587CDA7C: push eax
        __asm _emit 0x50
        // 0x587CDA7D: lea eax, [esp + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587CDA81: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDA87: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587CDA8B: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587CDA8D: mov dword ptr [esp + 0x2c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587CDA91: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CDA96: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587CDA99: movzx ecx, byte ptr [eax + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDAA0: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587CDAA4: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587CDAA7: mov ebp, ebx
        __asm _emit 0x8B
        __asm _emit 0xEB
        // 0x587CDAA9: sub ebp, ecx
        __asm _emit 0x2B
        __asm _emit 0xE9
        // 0x587CDAAB: neg ebp
        __asm _emit 0xF7
        __asm _emit 0xDD
        // 0x587CDAAD: sbb ebp, ebp
        __asm _emit 0x1B
        __asm _emit 0xED
        // 0x587CDAAF: mov edi, ebx
        __asm _emit 0x8B
        __asm _emit 0xFB
        // 0x587CDAB1: shl edi, 4
        __asm _emit 0xC1
        __asm _emit 0xE7
        __asm _emit 0x04
        // 0x587CDAB4: mov edx, dword ptr [eax + edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x38
        __asm _emit 0x04
        // 0x587CDAB8: mov ecx, dword ptr [eax + edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x38
        __asm _emit 0x0C
        // 0x587CDABC: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x587CDABE: and ebp, 0xa
        __asm _emit 0x83
        __asm _emit 0xE5
        __asm _emit 0x0A
        // 0x587CDAC1: add ebp, 0xaa
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDAC7: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x587CDAC9: mov dword ptr [esp + 0x34], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587CDACD: mov dword ptr [esp + 0x30], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587CDAD1: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587CDAD5: jge 0x587cdc4b
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDADB: lea esi, [edx + 0x12]
        __asm _emit 0x8D
        __asm _emit 0x72
        __asm _emit 0x12
        // 0x587CDADE: mov dword ptr [esp + 0x28], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587CDAE2: cmp edx, dword ptr [eax + 4]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587CDAE5: jne 0x587cdaed
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x587CDAE7: mov dword ptr [esp + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587CDAEB: jmp 0x587cdafd
        __asm _emit 0xEB
        __asm _emit 0x10
        // 0x587CDAED: cmp dword ptr [esp + 0x28], ecx
        __asm _emit 0x39
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587CDAF1: lea ecx, [ebp + 6]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x06
        // 0x587CDAF4: jge 0x587cdaf9
        __asm _emit 0x7D
        __asm _emit 0x03
        // 0x587CDAF6: lea ecx, [ebp + 3]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x03
        // 0x587CDAF9: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587CDAFD: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587CDB01: mov ebx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x18
        // 0x587CDB03: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587CDB07: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587CDB0A: cmp ebx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD9
        // 0x587CDB0C: jge 0x587cdc26
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDB12: lea edx, [ebx + 0x12]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x12
        // 0x587CDB15: mov dword ptr [esp + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587CDB19: cmp ebx, dword ptr [eax]
        __asm _emit 0x3B
        __asm _emit 0x18
        // 0x587CDB1B: je 0x587cdb32
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x587CDB1D: cmp dword ptr [esp + 0x20], ecx
        __asm _emit 0x39
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587CDB21: jl 0x587cdb29
        __asm _emit 0x7C
        __asm _emit 0x06
        // 0x587CDB23: inc dword ptr [esp + 0x18]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587CDB27: jmp 0x587cdb32
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x587CDB29: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587CDB2D: inc eax
        __asm _emit 0x40
        // 0x587CDB2E: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587CDB32: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x587CDB34: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0xF1
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587CDB39: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587CDB3B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587CDB3E: mov dword ptr [esp + 0x38], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587CDB42: mov dword ptr [esp + 0x44], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDB4A: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587CDB4C: je 0x587cdbeb
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDB52: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CDB58: mov eax, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CDB5E: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587CDB61: mov ebp, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x04
        // 0x587CDB64: mov eax, dword ptr [0x58a24638]
        __asm _emit 0xA1
        __asm _emit 0x38
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CDB69: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587CDB6D: cmp dword ptr [eax + 0x164], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDB73: jle 0x587cdb8d
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x587CDB75: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587CDB77: jl 0x587cdb8d
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x587CDB79: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDB80: je 0x587cdb8d
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587CDB82: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDB88: mov edi, dword ptr [eax + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0xB8
        // 0x587CDB8B: jmp 0x587cdb8f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CDB8D: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587CDB8F: mov eax, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CDB95: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587CDB99: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587CDB9B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CDB9D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CDB9F: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x587CDBA1: push edx
        __asm _emit 0x52
        // 0x587CDBA2: add ebp, ebx
        __asm _emit 0x03
        __asm _emit 0xEB
        // 0x587CDBA4: push ebp
        __asm _emit 0x55
        // 0x587CDBA5: push eax
        __asm _emit 0x50
        // 0x587CDBA6: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CDBA8: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0x55
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CDBAD: mov dword ptr [esi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587CDBB3: mov dword ptr [esi + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x50
        // 0x587CDBB6: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587CDBB8: je 0x587cdbe1
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x587CDBBA: mov edx, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x10
        // 0x587CDBBD: mov dword ptr [esi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x587CDBC0: mov eax, dword ptr [edi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x14
        // 0x587CDBC3: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x587CDBC6: mov ecx, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x587CDBC9: lea eax, [edi + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x587CDBCC: mov dword ptr [esi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x587CDBCF: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587CDBD2: mov dword ptr [esi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x587CDBD5: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587CDBD8: mov dword ptr [esi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x1C
        // 0x587CDBDB: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587CDBDE: mov dword ptr [esi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x20
        // 0x587CDBE1: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587CDBE5: mov ebp, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587CDBE9: jmp 0x587cdbed
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CDBEB: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587CDBED: mov dword ptr [esp + 0x44], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CDBF5: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587CDBF7: je 0x587cdc05
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587CDBF9: push 0x96
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDBFE: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CDC00: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0x50
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CDC05: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587CDC09: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587CDC0C: add dword ptr [esp + 0x20], 0x12
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x12
        // 0x587CDC11: lea eax, [ecx + edi]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x39
        // 0x587CDC14: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587CDC17: add ebx, 0x12
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x12
        // 0x587CDC1A: cmp ebx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD9
        // 0x587CDC1C: jl 0x587cdb19
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xF7
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CDC22: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587CDC26: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587CDC2A: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587CDC2D: add dword ptr [esp + 0x28], 0x12
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x12
        // 0x587CDC32: lea eax, [ecx + edi]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x39
        // 0x587CDC35: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x587CDC38: add edx, 0x12
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x12
        // 0x587CDC3B: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x587CDC3D: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587CDC41: jl 0x587cdae2
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x9B
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CDC47: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587CDC4B: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDC50: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0x38
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587CDC55: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDC5A: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587CDC5C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CDC5E: push esi
        __asm _emit 0x56
        // 0x587CDC5F: mov dword ptr [esp + 0x44], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x587CDC63: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0xEF
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587CDC68: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587CDC6B: mov eax, 0x5899b2e0
        __asm _emit 0xB8
        __asm _emit 0xE0
        __asm _emit 0xB2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587CDC70: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587CDC72: je 0x587cdc79
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587CDC74: mov eax, 0x5899b2d8
        __asm _emit 0xB8
        __asm _emit 0xD8
        __asm _emit 0xB2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587CDC79: push eax
        __asm _emit 0x50
        // 0x587CDC7A: push 0x5899b2c8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0xB2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587CDC7F: push esi
        __asm _emit 0x56
        // 0x587CDC80: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587CDC86: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x587CDC88: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587CDC8D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587CDC8F: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587CDC92: mov dword ptr [esp + 0x38], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587CDC96: mov dword ptr [esp + 0x44], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDC9E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587CDCA0: je 0x587cdd03
        __asm _emit 0x74
        __asm _emit 0x61
        // 0x587CDCA2: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CDCA8: mov esi, dword ptr [edx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0xB2
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CDCAE: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587CDCB2: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587CDCB5: mov eax, dword ptr [edi + edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x17
        __asm _emit 0x0C
        // 0x587CDCB9: add eax, dword ptr [edi + edx + 4]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x17
        __asm _emit 0x04
        // 0x587CDCBD: mov ebx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x08
        // 0x587CDCC0: mov ebp, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x04
        // 0x587CDCC3: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x587CDCC5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CDCC7: cdq
        __asm _emit 0x99
        // 0x587CDCC8: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587CDCCA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CDCCC: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x587CDCD1: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x587CDCD3: lea edx, [eax + ebx + 0x32]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x18
        __asm _emit 0x32
        // 0x587CDCD7: push edx
        __asm _emit 0x52
        // 0x587CDCD8: mov edx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x08
        // 0x587CDCDB: add edx, ebp
        __asm _emit 0x03
        __asm _emit 0xD5
        // 0x587CDCDD: push edx
        __asm _emit 0x52
        // 0x587CDCDE: mov edx, ebx
        __asm _emit 0x8B
        __asm _emit 0xD3
        // 0x587CDCE0: lea eax, [eax + edx - 0x32]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0xCE
        // 0x587CDCE4: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x587CDCE6: push eax
        __asm _emit 0x50
        // 0x587CDCE7: mov eax, dword ptr [0x58a2454c]
        __asm _emit 0xA1
        __asm _emit 0x4C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CDCEC: add edx, ebp
        __asm _emit 0x03
        __asm _emit 0xD5
        // 0x587CDCEE: push edx
        __asm _emit 0x52
        // 0x587CDCEF: mov edx, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587CDCF3: push eax
        __asm _emit 0x50
        // 0x587CDCF4: push edx
        __asm _emit 0x52
        // 0x587CDCF5: push esi
        __asm _emit 0x56
        // 0x587CDCF6: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x587CDCFB: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587CDCFF: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587CDD01: jmp 0x587cdd05
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CDD03: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587CDD05: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDD0A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CDD0C: mov dword ptr [esp + 0x48], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CDD14: mov dword ptr [esi + 0x68], 0x10000
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CDD1B: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0x4F
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CDD20: inc ebx
        __asm _emit 0x43
        // 0x587CDD21: mov dword ptr [esi + 0x54], 6
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x54
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDD28: mov dword ptr [esp + 0x2c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587CDD2C: cmp ebx, 2
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x02
        // 0x587CDD2F: jne 0x587cda91
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x5C
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CDD35: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587CDD39: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDD40: pop ecx
        __asm _emit 0x59
        // 0x587CDD41: pop edi
        __asm _emit 0x5F
        // 0x587CDD42: pop esi
        __asm _emit 0x5E
        // 0x587CDD43: pop ebp
        __asm _emit 0x5D
        // 0x587CDD44: pop ebx
        __asm _emit 0x5B
        // 0x587CDD45: add esp, 0x34
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x34
        // 0x587CDD48: ret
        __asm _emit 0xC3
    }
}
