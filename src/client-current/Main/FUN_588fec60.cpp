// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588FEC60 .. +0x23D bytes.
// Source symbol alias: FUN_588fec60.
extern "C" __declspec(naked) void FUN_588fec60() {
    __asm {
        // 0x588FEC60: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588FEC62: push 0x58981754
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0x17
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588FEC67: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FEC6D: push eax
        __asm _emit 0x50
        // 0x588FEC6E: push ecx
        __asm _emit 0x51
        // 0x588FEC6F: push ebx
        __asm _emit 0x53
        // 0x588FEC70: push ebp
        __asm _emit 0x55
        // 0x588FEC71: push esi
        __asm _emit 0x56
        // 0x588FEC72: push edi
        __asm _emit 0x57
        // 0x588FEC73: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588FEC78: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588FEC7A: push eax
        __asm _emit 0x50
        // 0x588FEC7B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FEC7F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FEC85: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FEC87: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FEC8B: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FEC8F: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FEC93: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588FEC97: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588FEC9B: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588FEC9F: push eax
        __asm _emit 0x50
        // 0x588FECA0: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588FECA4: push ecx
        __asm _emit 0x51
        // 0x588FECA5: push edx
        __asm _emit 0x52
        // 0x588FECA6: push edi
        __asm _emit 0x57
        // 0x588FECA7: push ebp
        __asm _emit 0x55
        // 0x588FECA8: push eax
        __asm _emit 0x50
        // 0x588FECA9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FECAB: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FECB0: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588FECB6: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588FECBB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588FECBD: mov dword ptr [esi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x50
        // 0x588FECC0: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x588FECC3: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FECCA: mov dword ptr [esi + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x5C
        // 0x588FECCD: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588FECCF: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588FECD3: mov dword ptr [esi], 0x589a2364
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x64
        __asm _emit 0x23
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588FECD9: mov dword ptr [esi + 0x60], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x60
        // 0x588FECDC: mov dword ptr [esi + 0x64], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x64
        // 0x588FECDF: mov dword ptr [esi + 0x68], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x68
        // 0x588FECE2: mov dword ptr [esi + 0x6c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x6C
        // 0x588FECE5: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0xDF
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FECEA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FECED: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FECF1: mov edx, 1
        __asm _emit 0xBA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FECF6: mov byte ptr [esp + 0x20], dl
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588FECFA: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FECFC: je 0x588fed36
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x588FECFE: mov ecx, dword ptr [0x58a24734]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FED04: cmp dword ptr [ecx + 0x164], edx
        __asm _emit 0x39
        __asm _emit 0x91
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FED0A: jle 0x588fed1f
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588FED0C: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FED12: je 0x588fed1f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588FED14: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FED1A: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x588FED1D: jmp 0x588fed21
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FED1F: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588FED21: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FED25: add edx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x64
        // 0x588FED28: push edx
        __asm _emit 0x52
        // 0x588FED29: push edi
        __asm _emit 0x57
        // 0x588FED2A: push ebp
        __asm _emit 0x55
        // 0x588FED2B: push ecx
        __asm _emit 0x51
        // 0x588FED2C: push esi
        __asm _emit 0x56
        // 0x588FED2D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FED2F: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0x2F
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588FED34: jmp 0x588fed38
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FED36: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FED38: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FED3D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FED3F: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588FED43: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588FED46: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0x3F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FED4B: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588FED4D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0xDE
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FED52: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FED55: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FED59: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x588FED5E: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FED60: je 0x588fed99
        __asm _emit 0x74
        __asm _emit 0x37
        // 0x588FED62: mov ecx, dword ptr [0x58a24734]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FED68: cmp dword ptr [ecx + 0x164], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FED6E: jle 0x588fed82
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x588FED70: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FED76: je 0x588fed82
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588FED78: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FED7E: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x588FED80: jmp 0x588fed84
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FED82: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588FED84: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FED88: add edx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x64
        // 0x588FED8B: push edx
        __asm _emit 0x52
        // 0x588FED8C: push edi
        __asm _emit 0x57
        // 0x588FED8D: push ebp
        __asm _emit 0x55
        // 0x588FED8E: push ecx
        __asm _emit 0x51
        // 0x588FED8F: push esi
        __asm _emit 0x56
        // 0x588FED90: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FED92: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0x2E
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588FED97: jmp 0x588fed9b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FED99: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FED9B: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x588FED9E: mov ecx, 0xbfff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FEDA3: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588FEDA7: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x588FEDAA: push 0xf0
        __asm _emit 0x68
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FEDAF: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588FEDB3: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x3F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FEDB8: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588FEDBA: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0xDE
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FEDBF: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FEDC2: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FEDC6: mov edx, 3
        __asm _emit 0xBA
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FEDCB: mov byte ptr [esp + 0x20], dl
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588FEDCF: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FEDD1: je 0x588fee0b
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x588FEDD3: mov ecx, dword ptr [0x58a24734]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FEDD9: cmp dword ptr [ecx + 0x164], edx
        __asm _emit 0x39
        __asm _emit 0x91
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FEDDF: jle 0x588fedf4
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588FEDE1: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FEDE7: je 0x588fedf4
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588FEDE9: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FEDEF: mov ecx, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x0C
        // 0x588FEDF2: jmp 0x588fedf6
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FEDF4: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588FEDF6: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FEDFA: add edx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x64
        // 0x588FEDFD: push edx
        __asm _emit 0x52
        // 0x588FEDFE: push edi
        __asm _emit 0x57
        // 0x588FEDFF: push ebp
        __asm _emit 0x55
        // 0x588FEE00: push ecx
        __asm _emit 0x51
        // 0x588FEE01: push esi
        __asm _emit 0x56
        // 0x588FEE02: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FEE04: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0x2E
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588FEE09: jmp 0x588fee0d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FEE0B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FEE0D: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FEE12: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FEE14: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588FEE18: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x588FEE1B: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x3F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FEE20: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588FEE22: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0xDE
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FEE27: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FEE2A: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FEE2E: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x588FEE33: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FEE35: je 0x588fee70
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x588FEE37: mov ecx, dword ptr [0x58a24734]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FEE3D: cmp dword ptr [ecx + 0x164], 2
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x588FEE44: jle 0x588fee59
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588FEE46: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FEE4C: je 0x588fee59
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588FEE4E: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FEE54: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x08
        // 0x588FEE57: jmp 0x588fee5b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FEE59: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588FEE5B: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FEE5F: add edx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x64
        // 0x588FEE62: push edx
        __asm _emit 0x52
        // 0x588FEE63: push edi
        __asm _emit 0x57
        // 0x588FEE64: push ebp
        __asm _emit 0x55
        // 0x588FEE65: push ecx
        __asm _emit 0x51
        // 0x588FEE66: push esi
        __asm _emit 0x56
        // 0x588FEE67: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FEE69: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x2D
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588FEE6E: jmp 0x588fee72
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FEE70: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FEE72: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FEE77: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FEE79: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588FEE7D: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588FEE80: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0x3E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FEE85: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588FEE87: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FEE8B: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FEE92: pop ecx
        __asm _emit 0x59
        // 0x588FEE93: pop edi
        __asm _emit 0x5F
        // 0x588FEE94: pop esi
        __asm _emit 0x5E
        // 0x588FEE95: pop ebp
        __asm _emit 0x5D
        // 0x588FEE96: pop ebx
        __asm _emit 0x5B
        // 0x588FEE97: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588FEE9A: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
