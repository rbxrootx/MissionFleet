// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 603 bytes in 2 exact ranges.
// Source symbol alias: FUN_5889bc40.

// Ghidra body range 0x5889BC40..0x5889BE1D; 477 mapped bytes.
extern "C" __declspec(naked) void FUN_5889bc40_segment_00() {
    __asm {
        // 0x5889BC40: push ebx
        __asm _emit 0x53
        // 0x5889BC41: push ebp
        __asm _emit 0x55
        // 0x5889BC42: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x5889BC44: movzx eax, byte ptr [ebp + 0xb75]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x85
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BC4B: sub eax, 0
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x00
        // 0x5889BC4E: push esi
        __asm _emit 0x56
        // 0x5889BC4F: push edi
        __asm _emit 0x57
        // 0x5889BC50: je 0x5889bcef
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BC56: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x5889BC59: jne 0x5889be99
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x3A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BC5F: mov ebx, 0xfffff69c
        __asm _emit 0xBB
        __asm _emit 0x9C
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889BC64: lea esi, [ebp + 0x974]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x74
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BC6A: mov edi, 0x400
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BC6F: sub ebx, ebp
        __asm _emit 0x2B
        __asm _emit 0xDD
        // 0x5889BC71: mov eax, dword ptr [ebp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x60
        // 0x5889BC74: lea ecx, [ebx + esi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x33
        // 0x5889BC77: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BC7D: jle 0x5889bc91
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5889BC7F: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889BC81: jl 0x5889bc91
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5889BC83: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BC89: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889BC8B: je 0x5889bc91
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5889BC8D: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5889BC8F: jmp 0x5889bc93
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889BC91: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889BC93: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889BC95: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5889BC98: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889BC9A: je 0x5889bcc4
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5889BC9C: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5889BC9F: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5889BCA2: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5889BCA5: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5889BCA8: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5889BCAB: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889BCAD: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5889BCB0: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5889BCB2: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5889BCB5: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5889BCB8: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5889BCBB: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5889BCBE: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5889BCC1: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5889BCC4: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889BCC6: push 0xe1
        __asm _emit 0x68
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BCCB: push 0x12
        __asm _emit 0x6A
        __asm _emit 0x12
        // 0x5889BCCD: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0x75
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889BCD2: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5889BCD4: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5889BCD9: add edi, 0x100
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BCDF: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5889BCE2: cmp edi, 0x600
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BCE8: jl 0x5889bc71
        __asm _emit 0x7C
        __asm _emit 0x87
        // 0x5889BCEA: pop edi
        __asm _emit 0x5F
        // 0x5889BCEB: pop esi
        __asm _emit 0x5E
        // 0x5889BCEC: pop ebp
        __asm _emit 0x5D
        // 0x5889BCED: pop ebx
        __asm _emit 0x5B
        // 0x5889BCEE: ret
        __asm _emit 0xC3
        // 0x5889BCEF: mov ebx, 0xfffff693
        __asm _emit 0xBB
        __asm _emit 0x93
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889BCF4: lea esi, [ebp + 0x974]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x74
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BCFA: mov edi, 0x1c0
        __asm _emit 0xBF
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BCFF: sub ebx, ebp
        __asm _emit 0x2B
        __asm _emit 0xDD
        // 0x5889BD01: mov eax, dword ptr [ebp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x60
        // 0x5889BD04: lea ecx, [ebx + esi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x33
        // 0x5889BD07: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BD0D: jle 0x5889bd21
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5889BD0F: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889BD11: jl 0x5889bd21
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5889BD13: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BD19: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889BD1B: je 0x5889bd21
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5889BD1D: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5889BD1F: jmp 0x5889bd23
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889BD21: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889BD23: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889BD25: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5889BD28: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889BD2A: je 0x5889bd54
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5889BD2C: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5889BD2F: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5889BD32: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5889BD35: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5889BD38: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5889BD3B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889BD3D: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5889BD40: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5889BD42: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5889BD45: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5889BD48: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5889BD4B: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5889BD4E: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5889BD51: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5889BD54: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889BD56: push 0x7d
        __asm _emit 0x6A
        __asm _emit 0x7D
        // 0x5889BD58: push 0x298
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BD5D: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0x75
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889BD62: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5889BD64: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5889BD69: add edi, 0x100
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BD6F: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5889BD72: cmp edi, 0x3c0
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BD78: jl 0x5889bd01
        __asm _emit 0x7C
        __asm _emit 0x87
        // 0x5889BD7A: mov ebx, 0xfffff68c
        __asm _emit 0xBB
        __asm _emit 0x8C
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889BD7F: lea esi, [ebp + 0x97c]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x7C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BD85: mov edi, 0x200
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BD8A: sub ebx, ebp
        __asm _emit 0x2B
        __asm _emit 0xDD
        // 0x5889BD8C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5889BD90: mov eax, dword ptr [ebp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x60
        // 0x5889BD93: lea ecx, [ebx + esi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x33
        // 0x5889BD96: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BD9C: jle 0x5889bdb0
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5889BD9E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889BDA0: jl 0x5889bdb0
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5889BDA2: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BDA8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889BDAA: je 0x5889bdb0
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5889BDAC: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5889BDAE: jmp 0x5889bdb2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889BDB0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889BDB2: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889BDB4: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5889BDB7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889BDB9: je 0x5889bde3
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5889BDBB: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5889BDBE: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5889BDC1: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5889BDC4: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5889BDC7: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5889BDCA: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889BDCC: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5889BDCF: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5889BDD1: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5889BDD4: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5889BDD7: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5889BDDA: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5889BDDD: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5889BDE0: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5889BDE3: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889BDE5: push 0x9d
        __asm _emit 0x68
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BDEA: push 0x42
        __asm _emit 0x6A
        __asm _emit 0x42
        // 0x5889BDEC: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0x74
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889BDF1: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5889BDF3: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5889BDF8: add edi, 0x100
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BDFE: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5889BE01: cmp edi, 0x400
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BE07: jl 0x5889bd90
        __asm _emit 0x7C
        __asm _emit 0x87
        // 0x5889BE09: mov ebx, 0xfffff684
        __asm _emit 0xBB
        __asm _emit 0x84
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889BE0E: lea esi, [ebp + 0x984]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BE14: mov edi, 0x200
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BE19: sub ebx, ebp
        __asm _emit 0x2B
        __asm _emit 0xDD
        // 0x5889BE1B: jmp 0x5889be20
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x5889BE20..0x5889BE9E; 126 mapped bytes.
extern "C" __declspec(naked) void FUN_5889bc40_segment_01() {
    __asm {
        // 0x5889BE20: mov eax, dword ptr [ebp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x60
        // 0x5889BE23: lea ecx, [ebx + esi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x33
        // 0x5889BE26: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BE2C: jle 0x5889be40
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5889BE2E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889BE30: jl 0x5889be40
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5889BE32: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BE38: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889BE3A: je 0x5889be40
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5889BE3C: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5889BE3E: jmp 0x5889be42
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889BE40: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889BE42: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889BE44: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5889BE47: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889BE49: je 0x5889be73
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5889BE4B: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5889BE4E: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5889BE51: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5889BE54: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5889BE57: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5889BE5A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889BE5C: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5889BE5F: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5889BE61: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5889BE64: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5889BE67: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5889BE6A: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5889BE6D: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5889BE70: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5889BE73: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889BE75: push 0xe1
        __asm _emit 0x68
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BE7A: push 0x12
        __asm _emit 0x6A
        __asm _emit 0x12
        // 0x5889BE7C: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0x74
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889BE81: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5889BE83: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5889BE88: add edi, 0x100
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BE8E: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5889BE91: cmp edi, 0x400
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BE97: jl 0x5889be20
        __asm _emit 0x7C
        __asm _emit 0x87
        // 0x5889BE99: pop edi
        __asm _emit 0x5F
        // 0x5889BE9A: pop esi
        __asm _emit 0x5E
        // 0x5889BE9B: pop ebp
        __asm _emit 0x5D
        // 0x5889BE9C: pop ebx
        __asm _emit 0x5B
        // 0x5889BE9D: ret
        __asm _emit 0xC3
    }
}
