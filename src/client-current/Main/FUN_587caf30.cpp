// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 672 bytes in 1 exact ranges.
// Source symbol alias: FUN_587caf30.

// Ghidra body range 0x587CAF30..0x587CB1D0; 672 mapped bytes.
extern "C" __declspec(naked) void FUN_587caf30_segment_00() {
    __asm {
        // 0x587CAF30: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587CAF32: push 0x5898184e
        __asm _emit 0x68
        __asm _emit 0x4E
        __asm _emit 0x18
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587CAF37: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAF3D: push eax
        __asm _emit 0x50
        // 0x587CAF3E: push ecx
        __asm _emit 0x51
        // 0x587CAF3F: push ebx
        __asm _emit 0x53
        // 0x587CAF40: push esi
        __asm _emit 0x56
        // 0x587CAF41: push edi
        __asm _emit 0x57
        // 0x587CAF42: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587CAF47: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587CAF49: push eax
        __asm _emit 0x50
        // 0x587CAF4A: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587CAF4E: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAF54: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587CAF56: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587CAF5A: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587CAF5E: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587CAF62: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587CAF66: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587CAF6A: mov ebx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587CAF6E: push eax
        __asm _emit 0x50
        // 0x587CAF6F: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587CAF73: push ecx
        __asm _emit 0x51
        // 0x587CAF74: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587CAF78: push edx
        __asm _emit 0x52
        // 0x587CAF79: push eax
        __asm _emit 0x50
        // 0x587CAF7A: push edi
        __asm _emit 0x57
        // 0x587CAF7B: push ebx
        __asm _emit 0x53
        // 0x587CAF7C: push ecx
        __asm _emit 0x51
        // 0x587CAF7D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CAF7F: call 0x587cb6b0
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAF84: mov dword ptr [esi], 0x5899b230
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x30
        __asm _emit 0xB2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587CAF8A: mov eax, dword ptr [0x58a24648]
        __asm _emit 0xA1
        __asm _emit 0x48
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CAF8F: cmp dword ptr [eax + 0x160], 0x77
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x77
        // 0x587CAF96: mov dword ptr [esp + 0x1c], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAF9E: jle 0x587cafb6
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x587CAFA0: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAFA7: je 0x587cafb6
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587CAFA9: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAFAF: add eax, 0x1dc0
        __asm _emit 0x05
        __asm _emit 0xC0
        __asm _emit 0x1D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAFB4: jmp 0x587cafb8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CAFB6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587CAFB8: mov ecx, dword ptr [esi + 0x208]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAFBE: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x587CAFC1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587CAFC3: je 0x587cafed
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587CAFC5: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x587CAFC8: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587CAFCB: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x587CAFCE: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x587CAFD1: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587CAFD4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587CAFD6: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587CAFD9: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587CAFDB: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587CAFDE: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587CAFE1: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587CAFE4: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587CAFE7: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587CAFEA: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587CAFED: mov eax, dword ptr [0x58a24648]
        __asm _emit 0xA1
        __asm _emit 0x48
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CAFF2: cmp dword ptr [eax + 0x160], 0x78
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x78
        // 0x587CAFF9: jle 0x587cb011
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x587CAFFB: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB002: je 0x587cb011
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587CB004: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB00A: add eax, 0x1e00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB00F: jmp 0x587cb013
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CB011: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587CB013: mov ecx, dword ptr [esi + 0x20c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB019: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x587CB01C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587CB01E: je 0x587cb048
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587CB020: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x587CB023: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587CB026: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x587CB029: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x587CB02C: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587CB02F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587CB031: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587CB034: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587CB036: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587CB039: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587CB03C: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587CB03F: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587CB042: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587CB045: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587CB048: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x587CB04A: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0x1B
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587CB04F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587CB052: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587CB056: mov byte ptr [esp + 0x1c], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        // 0x587CB05B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587CB05D: je 0x587cb0a3
        __asm _emit 0x74
        __asm _emit 0x44
        // 0x587CB05F: mov ecx, dword ptr [0x58a246f0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CB065: cmp dword ptr [ecx + 0x160], 0xc
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0C
        // 0x587CB06C: jle 0x587cb092
        __asm _emit 0x7E
        __asm _emit 0x24
        // 0x587CB06E: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB075: je 0x587cb092
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x587CB077: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB07D: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587CB07F: push edi
        __asm _emit 0x57
        // 0x587CB080: push ebx
        __asm _emit 0x53
        // 0x587CB081: add edx, 0x300
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB087: push edx
        __asm _emit 0x52
        // 0x587CB088: push esi
        __asm _emit 0x56
        // 0x587CB089: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587CB08B: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x99
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x587CB090: jmp 0x587cb0a5
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x587CB092: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587CB094: push edi
        __asm _emit 0x57
        // 0x587CB095: push ebx
        __asm _emit 0x53
        // 0x587CB096: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587CB098: push edx
        __asm _emit 0x52
        // 0x587CB099: push esi
        __asm _emit 0x56
        // 0x587CB09A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587CB09C: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x99
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x587CB0A1: jmp 0x587cb0a5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CB0A3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587CB0A5: push 0x102
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB0AA: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587CB0AC: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587CB0B1: mov dword ptr [esi + 0x2bc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB0B7: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0x7C
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CB0BC: mov eax, dword ptr [esi + 0x2bc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB0C2: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB0C7: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587CB0CB: mov eax, dword ptr [esi + 0x2bc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB0D1: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB0D6: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587CB0DA: mov eax, dword ptr [0x58a24648]
        __asm _emit 0xA1
        __asm _emit 0x48
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CB0DF: cmp dword ptr [eax + 0x160], 0x7d
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x7D
        // 0x587CB0E6: jle 0x587cb0fe
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x587CB0E8: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB0EF: je 0x587cb0fe
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587CB0F1: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB0F7: add eax, 0x1f40
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB0FC: jmp 0x587cb100
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CB0FE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587CB100: mov ecx, dword ptr [esi + 0x2bc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB106: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x587CB109: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587CB10B: je 0x587cb135
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587CB10D: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x587CB110: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587CB113: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x587CB116: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x587CB119: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587CB11C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587CB11E: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587CB121: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587CB123: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587CB126: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587CB129: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587CB12C: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587CB12F: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587CB132: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587CB135: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x587CB137: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x1B
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587CB13C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587CB13F: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587CB143: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB148: mov byte ptr [esp + 0x1c], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587CB14C: lea edi, [ebx + 0xd]
        __asm _emit 0x8D
        __asm _emit 0x7B
        __asm _emit 0x0D
        // 0x587CB14F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587CB151: je 0x587cb189
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x587CB153: mov ecx, dword ptr [0x58a246dc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xDC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CB159: cmp dword ptr [ecx + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB15F: jle 0x587cb17d
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x587CB161: cmp dword ptr [ecx + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB168: je 0x587cb17d
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x587CB16A: mov ecx, dword ptr [ecx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB170: mov edx, dword ptr [ecx + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x3C
        // 0x587CB173: push edx
        __asm _emit 0x52
        // 0x587CB174: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587CB176: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0xC1
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587CB17B: jmp 0x587cb18b
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x587CB17D: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587CB17F: push edx
        __asm _emit 0x52
        // 0x587CB180: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587CB182: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0xC1
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587CB187: jmp 0x587cb18b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CB189: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587CB18B: mov edx, 0x3084
        __asm _emit 0xBA
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB190: mov dword ptr [esi + 0x2b8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB196: mov dword ptr [esi + 0x94], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB19C: mov word ptr [esi + 0x9c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB1A3: mov dword ptr [esi + 0x1f4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB1A9: mov dword ptr [esi + 0x1f0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xF0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB1AF: mov dword ptr [esi + 0x214], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB1B9: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587CB1BB: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587CB1BF: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB1C6: pop ecx
        __asm _emit 0x59
        // 0x587CB1C7: pop edi
        __asm _emit 0x5F
        // 0x587CB1C8: pop esi
        __asm _emit 0x5E
        // 0x587CB1C9: pop ebx
        __asm _emit 0x5B
        // 0x587CB1CA: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587CB1CD: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
