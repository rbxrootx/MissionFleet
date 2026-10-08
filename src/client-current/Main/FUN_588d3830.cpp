// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 549 bytes in 1 exact ranges.
// Source symbol alias: FUN_588d3830.

// Ghidra body range 0x588D3830..0x588D3A55; 549 mapped bytes.
extern "C" __declspec(naked) void FUN_588d3830_segment_00() {
    __asm {
        // 0x588D3830: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588D3832: push 0x58989291
        __asm _emit 0x68
        __asm _emit 0x91
        __asm _emit 0x92
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588D3837: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D383D: push eax
        __asm _emit 0x50
        // 0x588D383E: push ecx
        __asm _emit 0x51
        // 0x588D383F: push ebx
        __asm _emit 0x53
        // 0x588D3840: push ebp
        __asm _emit 0x55
        // 0x588D3841: push esi
        __asm _emit 0x56
        // 0x588D3842: push edi
        __asm _emit 0x57
        // 0x588D3843: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588D3848: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588D384A: push eax
        __asm _emit 0x50
        // 0x588D384B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588D384F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3855: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588D3857: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D3859: cmp dword ptr [esi + 0x74], 2
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x74
        __asm _emit 0x02
        // 0x588D385D: jne 0x588d3a3f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xDC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3863: cmp dword ptr [esi + 0x204], 3
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x588D386A: jl 0x588d3a3f
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xCF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3870: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0x93
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D3875: and eax, 0x80000001
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x588D387A: jns 0x588d3881
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x588D387C: dec eax
        __asm _emit 0x48
        // 0x588D387D: or eax, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFE
        // 0x588D3880: inc eax
        __asm _emit 0x40
        // 0x588D3881: mov ecx, dword ptr [esi + 0x204]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3887: lea edx, [eax + ecx*2 + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x48
        __asm _emit 0x3C
        // 0x588D388B: push 0x78
        __asm _emit 0x6A
        __asm _emit 0x78
        // 0x588D388D: mov dword ptr [esi + 0x20c], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3893: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0x93
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D3898: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588D389B: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D389F: mov edi, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588D38A3: mov dword ptr [esp + 0x20], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D38AB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D38AD: je 0x588d3910
        __asm _emit 0x74
        __asm _emit 0x61
        // 0x588D38AF: mov edx, dword ptr [esi + 0x214]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D38B5: mov ecx, dword ptr [0x58a24718]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x18
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D38BB: cmp dword ptr [ecx + 0x160], edx
        __asm _emit 0x39
        __asm _emit 0x91
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D38C1: jle 0x588d38db
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x588D38C3: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588D38C5: jl 0x588d38db
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x588D38C7: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D38CE: je 0x588d38db
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588D38D0: shl edx, 6
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x06
        // 0x588D38D3: add edx, dword ptr [ecx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D38D9: jmp 0x588d38dd
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D38DB: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588D38DD: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D38E3: mov ebx, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x99
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588D38E9: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x588D38EC: push 0x176f
        __asm _emit 0x68
        __asm _emit 0x6F
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D38F1: push ecx
        __asm _emit 0x51
        // 0x588D38F2: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588D38F4: push ecx
        __asm _emit 0x51
        // 0x588D38F5: mov ecx, dword ptr [0x58a246e0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D38FB: push edx
        __asm _emit 0x52
        // 0x588D38FC: mov edx, dword ptr [esi + 0x208]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3902: push ebx
        __asm _emit 0x53
        // 0x588D3903: push edx
        __asm _emit 0x52
        // 0x588D3904: push ecx
        __asm _emit 0x51
        // 0x588D3905: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588D3907: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588D3909: call 0x5875e290
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0xA9
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588D390E: jmp 0x588d3912
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D3910: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D3912: mov ecx, dword ptr [esi + 0x1c0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3918: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588D391A: mov edx, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x18
        // 0x588D391D: push 0x78
        __asm _emit 0x6A
        __asm _emit 0x78
        // 0x588D391F: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x588D3921: push ecx
        __asm _emit 0x51
        // 0x588D3922: mov ecx, dword ptr [esi + 0x1c4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3928: push ecx
        __asm _emit 0x51
        // 0x588D3929: mov ecx, dword ptr [esi + 0x1c8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D392F: push ecx
        __asm _emit 0x51
        // 0x588D3930: mov ecx, dword ptr [esi + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3936: push ecx
        __asm _emit 0x51
        // 0x588D3937: or ebx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCB
        __asm _emit 0xFF
        // 0x588D393A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588D393C: mov dword ptr [esp + 0x38], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588D3940: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588D3942: push 0x60
        __asm _emit 0x6A
        __asm _emit 0x60
        // 0x588D3944: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x93
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D3949: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588D394C: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588D3950: mov dword ptr [esp + 0x20], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3958: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D395A: je 0x588d39bc
        __asm _emit 0x74
        __asm _emit 0x60
        // 0x588D395C: mov edx, dword ptr [esi + 0x21c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3962: mov ecx, dword ptr [0x58a24718]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x18
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D3968: cmp dword ptr [ecx + 0x160], edx
        __asm _emit 0x39
        __asm _emit 0x91
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D396E: jle 0x588d3988
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x588D3970: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588D3972: jl 0x588d3988
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x588D3974: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D397B: je 0x588d3988
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588D397D: shl edx, 6
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x06
        // 0x588D3980: add edx, dword ptr [ecx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3986: jmp 0x588d398a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D3988: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588D398A: mov ebp, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x6F
        __asm _emit 0x04
        // 0x588D398D: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D3993: mov ecx, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588D3999: push ebx
        __asm _emit 0x53
        // 0x588D399A: push 0x1770
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D399F: push ebp
        __asm _emit 0x55
        // 0x588D39A0: mov ebp, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x2F
        // 0x588D39A2: push ebp
        __asm _emit 0x55
        // 0x588D39A3: push edx
        __asm _emit 0x52
        // 0x588D39A4: mov edx, dword ptr [esi + 0x20c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D39AA: push ecx
        __asm _emit 0x51
        // 0x588D39AB: mov ecx, dword ptr [0x58a246e0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D39B1: push edx
        __asm _emit 0x52
        // 0x588D39B2: push ecx
        __asm _emit 0x51
        // 0x588D39B3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588D39B5: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588D39B7: call 0x587b7260
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0x38
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588D39BC: push 0x60
        __asm _emit 0x6A
        __asm _emit 0x60
        // 0x588D39BE: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588D39C2: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0x92
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D39C7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588D39CA: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588D39CE: mov dword ptr [esp + 0x20], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D39D6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D39D8: je 0x588d3a3a
        __asm _emit 0x74
        __asm _emit 0x60
        // 0x588D39DA: mov edx, dword ptr [esi + 0x218]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D39E0: mov ecx, dword ptr [0x58a24718]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x18
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D39E6: cmp dword ptr [ecx + 0x160], edx
        __asm _emit 0x39
        __asm _emit 0x91
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D39EC: jle 0x588d3a06
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x588D39EE: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588D39F0: jl 0x588d3a06
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x588D39F2: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D39F9: je 0x588d3a06
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588D39FB: shl edx, 6
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x06
        // 0x588D39FE: add edx, dword ptr [ecx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3A04: jmp 0x588d3a08
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D3A06: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588D3A08: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x588D3A0B: push ebx
        __asm _emit 0x53
        // 0x588D3A0C: push 0x1771
        __asm _emit 0x68
        __asm _emit 0x71
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3A11: push ecx
        __asm _emit 0x51
        // 0x588D3A12: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588D3A14: push ecx
        __asm _emit 0x51
        // 0x588D3A15: push edx
        __asm _emit 0x52
        // 0x588D3A16: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D3A1C: mov ecx, dword ptr [edx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588D3A22: mov edx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3A28: push ecx
        __asm _emit 0x51
        // 0x588D3A29: mov ecx, dword ptr [0x58a246e0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D3A2F: push edx
        __asm _emit 0x52
        // 0x588D3A30: push ecx
        __asm _emit 0x51
        // 0x588D3A31: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588D3A33: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588D3A35: call 0x587b7260
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0x38
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588D3A3A: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3A3F: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588D3A43: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3A4A: pop ecx
        __asm _emit 0x59
        // 0x588D3A4B: pop edi
        __asm _emit 0x5F
        // 0x588D3A4C: pop esi
        __asm _emit 0x5E
        // 0x588D3A4D: pop ebp
        __asm _emit 0x5D
        // 0x588D3A4E: pop ebx
        __asm _emit 0x5B
        // 0x588D3A4F: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588D3A52: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
