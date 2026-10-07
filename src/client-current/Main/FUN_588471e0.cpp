// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1310 bytes in 1 exact ranges.
// Source symbol alias: FUN_588471e0.

// Ghidra body range 0x588471E0..0x588476FE; 1310 mapped bytes.
extern "C" __declspec(naked) void FUN_588471e0_segment_00() {
    __asm {
        // 0x588471E0: sub esp, 0x84
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588471E6: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588471EB: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588471ED: mov dword ptr [esp + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588471F4: push ebx
        __asm _emit 0x53
        // 0x588471F5: mov ebx, dword ptr [esp + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0x24
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588471FC: push ebp
        __asm _emit 0x55
        // 0x588471FD: push esi
        __asm _emit 0x56
        // 0x588471FE: push edi
        __asm _emit 0x57
        // 0x588471FF: mov edi, dword ptr [esp + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847206: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58847208: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x5884720B: lea eax, [ebx + 1]
        __asm _emit 0x8D
        __asm _emit 0x43
        __asm _emit 0x01
        // 0x5884720E: push eax
        __asm _emit 0x50
        // 0x5884720F: mov byte ptr [esi + 0xa0], 1
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58847216: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0xAA
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x5884721B: movsx eax, word ptr [ebx + 0x1a]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x43
        __asm _emit 0x1A
        // 0x5884721F: mov ebp, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58847225: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x58847228: ja 0x5884726e
        __asm _emit 0x77
        __asm _emit 0x44
        // 0x5884722A: jmp dword ptr [eax*4 + 0x58847700]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x77
        __asm _emit 0x84
        __asm _emit 0x58
        // 0x58847231: push 0x5899e4f8
        __asm _emit 0x68
        __asm _emit 0xF8
        __asm _emit 0xE4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58847236: jmp 0x58847260
        __asm _emit 0xEB
        __asm _emit 0x28
        // 0x58847238: push 0x5899e760
        __asm _emit 0x68
        __asm _emit 0x60
        __asm _emit 0xE7
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5884723D: jmp 0x58847260
        __asm _emit 0xEB
        __asm _emit 0x21
        // 0x5884723F: push 0x5899e4dc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0xE4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58847244: jmp 0x58847260
        __asm _emit 0xEB
        __asm _emit 0x1A
        // 0x58847246: push 0x5899e4b8
        __asm _emit 0x68
        __asm _emit 0xB8
        __asm _emit 0xE4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5884724B: jmp 0x58847260
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x5884724D: push 0x5899e49c
        __asm _emit 0x68
        __asm _emit 0x9C
        __asm _emit 0xE4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58847252: jmp 0x58847260
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x58847254: push 0x5899e47c
        __asm _emit 0x68
        __asm _emit 0x7C
        __asm _emit 0xE4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58847259: jmp 0x58847260
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x5884725B: push 0x5899e45c
        __asm _emit 0x68
        __asm _emit 0x5C
        __asm _emit 0xE4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58847260: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x58847262: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x58847265: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58847268: push eax
        __asm _emit 0x50
        // 0x58847269: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0xAA
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x5884726E: mov ecx, dword ptr [edi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847274: mov edx, dword ptr [edi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884727A: mov eax, dword ptr [edi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847280: push ecx
        __asm _emit 0x51
        // 0x58847281: push edx
        __asm _emit 0x52
        // 0x58847282: push eax
        __asm _emit 0x50
        // 0x58847283: push 0x5899e73c
        __asm _emit 0x68
        __asm _emit 0x3C
        __asm _emit 0xE7
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58847288: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x5884728A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884728D: push eax
        __asm _emit 0x50
        // 0x5884728E: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58847292: push ecx
        __asm _emit 0x51
        // 0x58847293: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58847299: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x5884729C: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x5884729F: lea edx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588472A3: push edx
        __asm _emit 0x52
        // 0x588472A4: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0xAA
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588472A9: push 0x58a0b450
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x588472AE: lea eax, [edi + 1]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x01
        // 0x588472B1: push eax
        __asm _emit 0x50
        // 0x588472B2: call dword ptr [0x5898c1a4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588472B8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588472BA: jne 0x588472c7
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x588472BC: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588472C2: cmp dword ptr [ecx + 0x30], eax
        __asm _emit 0x39
        __asm _emit 0x41
        __asm _emit 0x30
        // 0x588472C5: je 0x588472f2
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x588472C7: mov edi, dword ptr [edi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0xBF
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588472CD: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588472D3: push edi
        __asm _emit 0x57
        // 0x588472D4: call 0x58778b20
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0x18
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x588472D9: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x588472DC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588472DE: je 0x588472e8
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588472E0: add eax, 0x33c
        __asm _emit 0x05
        __asm _emit 0x3C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588472E5: push eax
        __asm _emit 0x50
        // 0x588472E6: jmp 0x588472ed
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x588472E8: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588472ED: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0xA9
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588472F2: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588472F8: lea edx, [ebx + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x1C
        // 0x588472FB: push edx
        __asm _emit 0x52
        // 0x588472FC: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0xA9
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58847301: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847307: mov ecx, dword ptr [ebx + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x34
        // 0x5884730A: mov dword ptr [eax + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x5884730D: mov eax, dword ptr [ebx + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x34
        // 0x58847310: cmp eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x58847313: ja 0x588473b2
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847319: jmp dword ptr [eax*4 + 0x5884771c]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x1C
        __asm _emit 0x77
        __asm _emit 0x84
        __asm _emit 0x58
        // 0x58847320: push 0x5899e718
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0xE7
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58847325: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x58847327: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884732A: push eax
        __asm _emit 0x50
        // 0x5884732B: jmp 0x588473b7
        __asm _emit 0xE9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847330: push 0x5899e704
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0xE7
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58847335: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x58847337: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884733A: push eax
        __asm _emit 0x50
        // 0x5884733B: jmp 0x588473b7
        __asm _emit 0xEB
        __asm _emit 0x7A
        // 0x5884733D: push 0x5899e6dc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0xE6
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58847342: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x58847344: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58847347: push eax
        __asm _emit 0x50
        // 0x58847348: jmp 0x588473b7
        __asm _emit 0xEB
        __asm _emit 0x6D
        // 0x5884734A: push 0x5899e6c4
        __asm _emit 0x68
        __asm _emit 0xC4
        __asm _emit 0xE6
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5884734F: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x58847351: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58847354: push eax
        __asm _emit 0x50
        // 0x58847355: jmp 0x588473b7
        __asm _emit 0xEB
        __asm _emit 0x60
        // 0x58847357: push 0x5899e6a0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0xE6
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5884735C: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x5884735E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58847361: push eax
        __asm _emit 0x50
        // 0x58847362: jmp 0x588473b7
        __asm _emit 0xEB
        __asm _emit 0x53
        // 0x58847364: push 0x5899e688
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0xE6
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58847369: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x5884736B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884736E: push eax
        __asm _emit 0x50
        // 0x5884736F: jmp 0x588473b7
        __asm _emit 0xEB
        __asm _emit 0x46
        // 0x58847371: push 0x5899e670
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xE6
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58847376: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x58847378: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884737B: push eax
        __asm _emit 0x50
        // 0x5884737C: jmp 0x588473b7
        __asm _emit 0xEB
        __asm _emit 0x39
        // 0x5884737E: push 0x5899e650
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xE6
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58847383: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x58847385: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58847388: push eax
        __asm _emit 0x50
        // 0x58847389: jmp 0x588473b7
        __asm _emit 0xEB
        __asm _emit 0x2C
        // 0x5884738B: push 0x5899e630
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0xE6
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58847390: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x58847392: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58847395: push eax
        __asm _emit 0x50
        // 0x58847396: jmp 0x588473b7
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x58847398: push 0x5899e614
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0xE6
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5884739D: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x5884739F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588473A2: push eax
        __asm _emit 0x50
        // 0x588473A3: jmp 0x588473b7
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x588473A5: push 0x5899e5fc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0xE5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588473AA: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x588473AC: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588473AF: push eax
        __asm _emit 0x50
        // 0x588473B0: jmp 0x588473b7
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x588473B2: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588473B7: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588473BD: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0xA9
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588473C2: mov eax, dword ptr [ebx + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x48
        // 0x588473C5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588473C7: je 0x5884756a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588473CD: mov ecx, dword ptr [0x58a245e0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588473D3: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588473D5: je 0x5884748d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588473DB: cmp dword ptr [ecx + 4], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588473DF: je 0x58847413
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x588473E1: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588473E4: dec eax
        __asm _emit 0x48
        // 0x588473E5: cmp dword ptr [edx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x82
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588473EB: jbe 0x58847413
        __asm _emit 0x76
        __asm _emit 0x26
        // 0x588473ED: push eax
        __asm _emit 0x50
        // 0x588473EE: call 0x58755ff0
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0xEB
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588473F3: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588473F9: push eax
        __asm _emit 0x50
        // 0x588473FA: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0xA2
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588473FF: mov eax, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847405: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884740A: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5884740E: jmp 0x58847622
        __asm _emit 0xE9
        __asm _emit 0x0F
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847413: mov eax, dword ptr [0x58a24768]
        __asm _emit 0xA1
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58847418: cmp dword ptr [eax + 0x164], 0x5a
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x5A
        // 0x5884741F: jle 0x58847438
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58847421: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847428: je 0x58847438
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5884742A: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847430: mov eax, dword ptr [edx + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847436: jmp 0x5884743a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58847438: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884743A: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847440: push eax
        __asm _emit 0x50
        // 0x58847441: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0xA2
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58847446: mov eax, dword ptr [0x58a24768]
        __asm _emit 0xA1
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884744B: cmp dword ptr [eax + 0x164], 0x59
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x59
        // 0x58847452: jle 0x5884747a
        __asm _emit 0x7E
        __asm _emit 0x26
        // 0x58847454: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884745B: je 0x5884747a
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x5884745D: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847463: mov eax, dword ptr [eax + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847469: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884746F: push eax
        __asm _emit 0x50
        // 0x58847470: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0xA2
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58847475: jmp 0x58847545
        __asm _emit 0xE9
        __asm _emit 0xCB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884747A: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847480: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58847482: push eax
        __asm _emit 0x50
        // 0x58847483: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0xA2
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58847488: jmp 0x58847545
        __asm _emit 0xE9
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884748D: mov eax, dword ptr [0x58a24768]
        __asm _emit 0xA1
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58847492: cmp dword ptr [eax + 0x164], 0x5a
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x5A
        // 0x58847499: jle 0x588474b2
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5884749B: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588474A2: je 0x588474b2
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588474A4: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588474AA: mov eax, dword ptr [ecx + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588474B0: jmp 0x588474b4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588474B2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588474B4: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588474BA: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588474BD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588474BF: je 0x588474e9
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588474C1: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588474C4: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588474C7: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588474CA: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588474CD: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588474D0: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588474D2: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588474D5: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588474D7: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588474DA: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588474DD: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588474E0: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588474E3: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588474E6: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588474E9: mov eax, dword ptr [0x58a24768]
        __asm _emit 0xA1
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588474EE: cmp dword ptr [eax + 0x164], 0x59
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x59
        // 0x588474F5: jle 0x5884750e
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588474F7: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588474FE: je 0x5884750e
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58847500: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847506: mov eax, dword ptr [ecx + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884750C: jmp 0x58847510
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884750E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58847510: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847516: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58847519: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884751B: je 0x58847545
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5884751D: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58847520: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58847523: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58847526: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58847529: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5884752C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5884752E: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58847531: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58847533: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58847536: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58847539: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5884753C: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5884753F: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58847542: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58847545: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884754B: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58847550: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0xB7
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58847555: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884755B: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847560: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0xB7
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58847565: jmp 0x58847622
        __asm _emit 0xE9
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884756A: mov eax, dword ptr [0x58a24768]
        __asm _emit 0xA1
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884756F: cmp dword ptr [eax + 0x164], 0x5a
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x5A
        // 0x58847576: jle 0x5884758f
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58847578: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884757F: je 0x5884758f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58847581: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847587: mov eax, dword ptr [ecx + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884758D: jmp 0x58847591
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884758F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58847591: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847597: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5884759A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884759C: je 0x588475c6
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5884759E: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588475A1: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588475A4: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588475A7: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588475AA: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588475AD: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588475AF: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588475B2: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588475B4: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588475B7: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588475BA: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588475BD: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588475C0: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588475C3: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588475C6: mov eax, dword ptr [0x58a24768]
        __asm _emit 0xA1
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588475CB: cmp dword ptr [eax + 0x164], 0x59
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x59
        // 0x588475D2: jle 0x588475eb
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588475D4: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588475DB: je 0x588475eb
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588475DD: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588475E3: mov eax, dword ptr [ecx + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588475E9: jmp 0x588475ed
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588475EB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588475ED: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588475F3: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588475F6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588475F8: je 0x58847622
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588475FA: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588475FD: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58847600: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58847603: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58847606: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58847609: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5884760B: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5884760E: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58847610: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58847613: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58847616: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58847619: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5884761C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5884761F: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58847622: cmp dword ptr [ebx + 0x3c], 0
        __asm _emit 0x83
        __asm _emit 0x7B
        __asm _emit 0x3C
        __asm _emit 0x00
        // 0x58847626: lea edi, [ebx + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x7B
        __asm _emit 0x3C
        // 0x58847629: jne 0x58847657
        __asm _emit 0x75
        __asm _emit 0x2C
        // 0x5884762B: cmp dword ptr [ebx + 0x40], 0
        __asm _emit 0x83
        __asm _emit 0x7B
        __asm _emit 0x40
        __asm _emit 0x00
        // 0x5884762F: jne 0x58847657
        __asm _emit 0x75
        __asm _emit 0x26
        // 0x58847631: push 0x5899e41c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xE4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58847636: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x58847638: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884763B: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847641: push eax
        __asm _emit 0x50
        // 0x58847642: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0xA6
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58847647: movsx eax, word ptr [ebx + 0x44]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x43
        __asm _emit 0x44
        // 0x5884764B: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x5884764E: ja 0x588476bb
        __asm _emit 0x77
        __asm _emit 0x6B
        // 0x58847650: jmp dword ptr [eax*4 + 0x58847748]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0x77
        __asm _emit 0x84
        __asm _emit 0x58
        // 0x58847657: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884765D: push edi
        __asm _emit 0x57
        // 0x5884765E: call 0x58753e60
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0xC7
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58847663: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58847665: jne 0x5884763b
        __asm _emit 0x75
        __asm _emit 0xD4
        // 0x58847667: mov byte ptr [esi + 0xa0], al
        __asm _emit 0x88
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884766D: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58847673: push edi
        __asm _emit 0x57
        // 0x58847674: call 0x587b9270
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x1B
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x58847679: jmp 0x58847647
        __asm _emit 0xEB
        __asm _emit 0xCC
        // 0x5884767B: push 0x5899e5e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0xE5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58847680: jmp 0x588476aa
        __asm _emit 0xEB
        __asm _emit 0x28
        // 0x58847682: push 0x5899e5c4
        __asm _emit 0x68
        __asm _emit 0xC4
        __asm _emit 0xE5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58847687: jmp 0x588476aa
        __asm _emit 0xEB
        __asm _emit 0x21
        // 0x58847689: push 0x5899e5a8
        __asm _emit 0x68
        __asm _emit 0xA8
        __asm _emit 0xE5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5884768E: jmp 0x588476aa
        __asm _emit 0xEB
        __asm _emit 0x1A
        // 0x58847690: push 0x5899e588
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0xE5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58847695: jmp 0x588476aa
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x58847697: push 0x5899e56c
        __asm _emit 0x68
        __asm _emit 0x6C
        __asm _emit 0xE5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5884769C: jmp 0x588476aa
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x5884769E: push 0x5899e550
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xE5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588476A3: jmp 0x588476aa
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x588476A5: push 0x5899e534
        __asm _emit 0x68
        __asm _emit 0x34
        __asm _emit 0xE5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588476AA: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x588476AC: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588476B2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588476B5: push eax
        __asm _emit 0x50
        // 0x588476B6: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0xA6
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588476BB: cmp byte ptr [esi + 0xa0], 1
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588476C2: jne 0x588476e3
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x588476C4: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588476C8: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588476CD: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588476D0: mov eax, 0x500
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588476D5: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588476D8: jne 0x588476e3
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x588476DA: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x588476DC: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588476DF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588476E1: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588476E3: mov ecx, dword ptr [esp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588476EA: pop edi
        __asm _emit 0x5F
        // 0x588476EB: pop esi
        __asm _emit 0x5E
        // 0x588476EC: pop ebp
        __asm _emit 0x5D
        // 0x588476ED: pop ebx
        __asm _emit 0x5B
        // 0x588476EE: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588476F0: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0x54
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x588476F5: add esp, 0x84
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588476FB: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
