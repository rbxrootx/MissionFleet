// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587ED730 .. +0x42D bytes.
// Source symbol alias: FUN_587ed730.
extern "C" __declspec(naked) void FUN_587ed730() {
    __asm {
        // 0x587ED730: push ebx
        __asm _emit 0x53
        // 0x587ED731: mov ebx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587ED735: push ebp
        __asm _emit 0x55
        // 0x587ED736: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587ED73A: mov edx, dword ptr [ebp + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED740: movzx eax, word ptr [edx + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x42
        __asm _emit 0x0E
        // 0x587ED744: push esi
        __asm _emit 0x56
        // 0x587ED745: push edi
        __asm _emit 0x57
        // 0x587ED746: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587ED748: mov ecx, dword ptr [ebx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED74E: movzx esi, word ptr [ecx + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x71
        __asm _emit 0x0E
        // 0x587ED752: mov cx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x587ED756: shr eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x587ED759: shr esi, 4
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x04
        // 0x587ED75C: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x587ED760: and eax, 0xff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED765: and esi, 0xff
        __asm _emit 0x81
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED76B: movzx ecx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC9
        // 0x587ED76E: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x587ED770: cmp eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0F
        // 0x587ED773: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587ED777: jl 0x587ed785
        __asm _emit 0x7C
        __asm _emit 0x0C
        // 0x587ED779: cmp eax, 0x1e
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x1E
        // 0x587ED77C: jge 0x587ed78a
        __asm _emit 0x7D
        __asm _emit 0x0C
        // 0x587ED77E: mov eax, 0xc
        __asm _emit 0xB8
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED783: jmp 0x587ed796
        __asm _emit 0xEB
        __asm _emit 0x11
        // 0x587ED785: cmp eax, 0x1e
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x1E
        // 0x587ED788: jl 0x587ed791
        __asm _emit 0x7C
        __asm _emit 0x07
        // 0x587ED78A: mov eax, 0xe
        __asm _emit 0xB8
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED78F: jmp 0x587ed796
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x587ED791: mov eax, 0xa
        __asm _emit 0xB8
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED796: mov dl, byte ptr [edx + 4]
        __asm _emit 0x8A
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x587ED799: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x587ED79C: cmp dl, 9
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x09
        // 0x587ED79F: jne 0x587ed7a8
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587ED7A1: lea eax, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x40
        // 0x587ED7A4: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x587ED7A6: jmp 0x587ed7ab
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x587ED7A8: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x587ED7AB: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x587ED7AD: cmp dword ptr [esp + 0x20], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587ED7B2: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587ED7B6: je 0x587ed7e3
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x587ED7B8: cmp dword ptr [esp + 0x24], 0x40000000
        __asm _emit 0x81
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587ED7C0: jne 0x587ed7e3
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x587ED7C2: cmp word ptr [edi + 0x105a2], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0xA2
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x587ED7CA: je 0x587ed7e3
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x587ED7CC: mov eax, dword ptr [ebp + 0xd98]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED7D2: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587ED7D7: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x587ED7D9: push eax
        __asm _emit 0x50
        // 0x587ED7DA: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587ED7DC: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587ED7DE: call 0x588dcdd0
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0xF5
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x587ED7E3: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587ED7E7: cmp eax, 0x1c2
        __asm _emit 0x3D
        __asm _emit 0xC2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED7EC: jge 0x587ed7f4
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x587ED7EE: fild dword ptr [esp + 0x1c]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587ED7F2: jmp 0x587ed803
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x587ED7F4: mov ecx, 0x384
        __asm _emit 0xB9
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED7F9: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x587ED7FB: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587ED7FF: fild dword ptr [esp + 0x1c]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587ED803: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0xF4
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587ED808: fmul qword ptr [0x5899c0e8]
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587ED80E: fadd qword ptr [0x5898cae0]
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0xE0
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587ED814: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0xF4
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587ED819: mov edx, dword ptr [ebp + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED81F: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587ED823: mov eax, dword ptr [edx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x587ED826: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587ED82B: cdq
        __asm _emit 0x99
        // 0x587ED82C: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587ED82E: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587ED830: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587ED834: fild dword ptr [esp + 0x20]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587ED838: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0xF4
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587ED83D: fmul qword ptr [0x5898cb38]
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0x38
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587ED843: fadd qword ptr [0x5898cf10]
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xCF
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587ED849: fimul dword ptr [esp + 0x1c]
        __asm _emit 0xDA
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587ED84D: fdiv qword ptr [0x5898ceb8]
        __asm _emit 0xDC
        __asm _emit 0x35
        __asm _emit 0xB8
        __asm _emit 0xCE
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587ED853: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0xF4
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587ED858: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587ED85C: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587ED860: fild dword ptr [esp + 0x1c]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587ED864: imul eax, dword ptr [esp + 0x2c]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587ED869: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587ED86D: fild dword ptr [esp + 0x1c]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587ED871: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587ED873: jge 0x587ed87b
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x587ED875: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587ED87B: fmul dword ptr [edi + 0x10a24]
        __asm _emit 0xD8
        __asm _emit 0x8F
        __asm _emit 0x24
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587ED881: fmulp st(1)
        __asm _emit 0xDE
        __asm _emit 0xC9
        // 0x587ED883: fdiv qword ptr [0x5898cae0]
        __asm _emit 0xDC
        __asm _emit 0x35
        __asm _emit 0xE0
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587ED889: fstp dword ptr [esp + 0x1c]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587ED88D: fld dword ptr [esp + 0x1c]
        __asm _emit 0xD9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587ED891: fabs
        __asm _emit 0xD9
        __asm _emit 0xE1
        // 0x587ED893: fstp dword ptr [esp + 0x1c]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587ED897: fld dword ptr [esp + 0x1c]
        __asm _emit 0xD9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587ED89B: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0xF4
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587ED8A0: test byte ptr [edi + 0x105a8], 1
        __asm _emit 0xF6
        __asm _emit 0x87
        __asm _emit 0xA8
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587ED8A7: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587ED8A9: je 0x587ed975
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED8AF: cmp dword ptr [ebx + 0x6070], 0
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED8B6: je 0x587ed8d7
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x587ED8B8: lea ecx, [esi + esi*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xB6
        // 0x587ED8BB: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x587ED8BD: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x587ED8BF: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587ED8C4: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587ED8C6: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587ED8C9: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587ED8CB: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587ED8CE: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587ED8D0: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587ED8D2: jmp 0x587ed99c
        __asm _emit 0xE9
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED8D7: cmp dword ptr [ebp + 0x6070], 0
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED8DE: je 0x587ed99c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED8E4: mov eax, dword ptr [ebx + 0x125c]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x5C
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED8EA: cmp eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0F
        // 0x587ED8ED: jg 0x587ed90d
        __asm _emit 0x7F
        __asm _emit 0x1E
        // 0x587ED8EF: imul esi, esi, 0x8c
        __asm _emit 0x69
        __asm _emit 0xF6
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED8F5: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587ED8FA: imul esi
        __asm _emit 0xF7
        __asm _emit 0xEE
        // 0x587ED8FC: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587ED8FF: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587ED901: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587ED904: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587ED906: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587ED908: jmp 0x587ed99c
        __asm _emit 0xE9
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED90D: cmp eax, 0x19
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x19
        // 0x587ED910: jg 0x587ed91d
        __asm _emit 0x7F
        __asm _emit 0x0B
        // 0x587ED912: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587ED914: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x587ED917: sub ecx, esi
        __asm _emit 0x2B
        __asm _emit 0xCE
        // 0x587ED919: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x587ED91B: jmp 0x587ed8bb
        __asm _emit 0xEB
        __asm _emit 0x9E
        // 0x587ED91D: cmp eax, 0x23
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x23
        // 0x587ED920: jg 0x587ed93d
        __asm _emit 0x7F
        __asm _emit 0x1B
        // 0x587ED922: lea ecx, [esi + esi*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xB6
        // 0x587ED925: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x587ED928: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587ED92D: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587ED92F: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587ED932: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587ED934: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587ED937: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587ED939: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587ED93B: jmp 0x587ed99c
        __asm _emit 0xEB
        __asm _emit 0x5F
        // 0x587ED93D: cmp eax, 0x2d
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x2D
        // 0x587ED940: jg 0x587ed94e
        __asm _emit 0x7F
        __asm _emit 0x0C
        // 0x587ED942: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587ED944: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x587ED947: sub ecx, esi
        __asm _emit 0x2B
        __asm _emit 0xCE
        // 0x587ED949: jmp 0x587ed8bb
        __asm _emit 0xE9
        __asm _emit 0x6D
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587ED94E: lea ecx, [esi + esi*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xB6
        // 0x587ED951: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x587ED953: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x587ED955: cmp eax, 0x37
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x37
        // 0x587ED958: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587ED95D: jg 0x587ed8c4
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0x61
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587ED963: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x587ED965: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587ED967: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587ED96A: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587ED96C: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587ED96F: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587ED971: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587ED973: jmp 0x587ed99c
        __asm _emit 0xEB
        __asm _emit 0x27
        // 0x587ED975: cmp dword ptr [ebp + 0x6070], 0
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED97C: je 0x587ed99c
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x587ED97E: mov edx, dword ptr [edi + 0x21c48]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x48
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ED984: mov eax, dword ptr [edx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x587ED987: mov ecx, dword ptr [eax + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED98D: imul ecx, esi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCE
        // 0x587ED990: mov eax, 0xd1b71759
        __asm _emit 0xB8
        __asm _emit 0x59
        __asm _emit 0x17
        __asm _emit 0xB7
        __asm _emit 0xD1
        // 0x587ED995: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x587ED997: shr edx, 0xd
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0D
        // 0x587ED99A: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x587ED99C: cmp word ptr [edi + 0x105a2], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0xA2
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x06
        // 0x587ED9A4: jne 0x587ed9d0
        __asm _emit 0x75
        __asm _emit 0x2A
        // 0x587ED9A6: mov ecx, dword ptr [edi + 0x21f08]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x08
        __asm _emit 0x1F
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ED9AC: push ebx
        __asm _emit 0x53
        // 0x587ED9AD: call 0x5875cb90
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0xF1
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x587ED9B2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587ED9B4: je 0x587ed9d0
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x587ED9B6: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587ED9B8: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x587ED9BB: sub ecx, esi
        __asm _emit 0x2B
        __asm _emit 0xCE
        // 0x587ED9BD: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x587ED9C2: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587ED9C4: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x587ED9C7: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587ED9C9: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587ED9CC: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587ED9CE: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587ED9D0: movzx eax, word ptr [edi + 0x105f0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x87
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587ED9D7: mov ecx, 2
        __asm _emit 0xB9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED9DC: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x587ED9E0: je 0x587eda00
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x587ED9E2: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x587ED9E6: je 0x587eda00
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x587ED9E8: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x587ED9EC: je 0x587eda00
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587ED9EE: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x587ED9F2: je 0x587eda00
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587ED9F4: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0B
        // 0x587ED9F8: je 0x587eda00
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587ED9FA: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0E
        // 0x587ED9FE: jne 0x587eda5a
        __asm _emit 0x75
        __asm _emit 0x5A
        // 0x587EDA00: movzx edx, byte ptr [ebx + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x93
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EDA07: xor dword ptr [edi + edx*4 + 0x10a8c], 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0x97
        __asm _emit 0x8C
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587EDA12: cmp word ptr [edi + 0x105a2], 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0xA2
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x0B
        // 0x587EDA1A: lea eax, [edi + edx*4 + 0x10a8c]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x8C
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EDA21: jne 0x587eda2c
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x587EDA23: cmp word ptr [edi + 0x105a4], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x8F
        __asm _emit 0xA4
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EDA2A: je 0x587eda41
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x587EDA2C: movzx eax, byte ptr [ebx + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x83
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EDA33: lea edx, [esi + esi*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xB6
        // 0x587EDA36: lea eax, [edi + eax*4 + 0x10a8c]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x8C
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EDA3D: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x587EDA3F: add dword ptr [eax], edx
        __asm _emit 0x01
        __asm _emit 0x10
        // 0x587EDA41: movzx eax, byte ptr [ebx + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x83
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EDA48: xor dword ptr [edi + eax*4 + 0x10a8c], 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0x87
        __asm _emit 0x8C
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587EDA53: lea eax, [edi + eax*4 + 0x10a8c]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x8C
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EDA5A: movzx eax, word ptr [edi + 0x105a2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x87
        __asm _emit 0xA2
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EDA61: add eax, -4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xFC
        // 0x587EDA64: cmp eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x587EDA67: ja 0x587edb3a
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xCD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EDA6D: movzx edx, byte ptr [eax + 0x587edb70]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x90
        __asm _emit 0x70
        __asm _emit 0xDB
        __asm _emit 0x7E
        __asm _emit 0x58
        // 0x587EDA74: jmp dword ptr [edx*4 + 0x587edb60]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x60
        __asm _emit 0xDB
        __asm _emit 0x7E
        __asm _emit 0x58
        // 0x587EDA7B: movzx eax, word ptr [esp + 0x14]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EDA80: movzx ecx, word ptr [eax*2 + 0x589cc080]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x0C
        __asm _emit 0x45
        __asm _emit 0x80
        __asm _emit 0xC0
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587EDA88: imul ecx, dword ptr [esp + 0x18]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587EDA8D: imul ecx, esi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCE
        // 0x587EDA90: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587EDA95: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587EDA97: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587EDA9A: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587EDA9C: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587EDA9F: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587EDAA1: push ecx
        __asm _emit 0x51
        // 0x587EDAA2: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587EDAA4: call 0x588d6e10
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x93
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x587EDAA9: pop edi
        __asm _emit 0x5F
        // 0x587EDAAA: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587EDAAC: pop esi
        __asm _emit 0x5E
        // 0x587EDAAD: pop ebp
        __asm _emit 0x5D
        // 0x587EDAAE: pop ebx
        __asm _emit 0x5B
        // 0x587EDAAF: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587EDAB2: movzx edx, word ptr [esp + 0x14]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EDAB7: movzx eax, word ptr [edx*2 + 0x589cc094]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x04
        __asm _emit 0x55
        __asm _emit 0x94
        __asm _emit 0xC0
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587EDABF: imul eax, esi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC6
        // 0x587EDAC2: push eax
        __asm _emit 0x50
        // 0x587EDAC3: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587EDAC5: call 0x588d6e10
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x93
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x587EDACA: pop edi
        __asm _emit 0x5F
        // 0x587EDACB: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587EDACD: pop esi
        __asm _emit 0x5E
        // 0x587EDACE: pop ebp
        __asm _emit 0x5D
        // 0x587EDACF: pop ebx
        __asm _emit 0x5B
        // 0x587EDAD0: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587EDAD3: cmp word ptr [edi + 0x105a4], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x8F
        __asm _emit 0xA4
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EDADA: movzx ecx, word ptr [esp + 0x14]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EDADF: movzx ecx, word ptr [ecx*2 + 0x589cc080]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x0C
        __asm _emit 0x4D
        __asm _emit 0x80
        __asm _emit 0xC0
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587EDAE7: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587EDAEC: jne 0x587edb15
        __asm _emit 0x75
        __asm _emit 0x27
        // 0x587EDAEE: imul ecx, dword ptr [esp + 0x18]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587EDAF3: imul ecx, esi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCE
        // 0x587EDAF6: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x587EDAF8: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587EDAFA: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587EDAFD: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587EDAFF: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587EDB02: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587EDB04: push eax
        __asm _emit 0x50
        // 0x587EDB05: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587EDB07: call 0x588d6e10
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0x93
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x587EDB0C: pop edi
        __asm _emit 0x5F
        // 0x587EDB0D: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587EDB0F: pop esi
        __asm _emit 0x5E
        // 0x587EDB10: pop ebp
        __asm _emit 0x5D
        // 0x587EDB11: pop ebx
        __asm _emit 0x5B
        // 0x587EDB12: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587EDB15: imul ecx, dword ptr [esp + 0x18]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587EDB1A: imul ecx, esi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCE
        // 0x587EDB1D: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587EDB1F: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587EDB22: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587EDB24: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587EDB27: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587EDB29: push eax
        __asm _emit 0x50
        // 0x587EDB2A: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587EDB2C: call 0x588d6e10
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x92
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x587EDB31: pop edi
        __asm _emit 0x5F
        // 0x587EDB32: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587EDB34: pop esi
        __asm _emit 0x5E
        // 0x587EDB35: pop ebp
        __asm _emit 0x5D
        // 0x587EDB36: pop ebx
        __asm _emit 0x5B
        // 0x587EDB37: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587EDB3A: movzx ecx, word ptr [esp + 0x14]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EDB3F: movzx edx, word ptr [ecx*2 + 0x589cc0a8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x14
        __asm _emit 0x4D
        __asm _emit 0xA8
        __asm _emit 0xC0
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587EDB47: imul edx, esi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD6
        // 0x587EDB4A: push edx
        __asm _emit 0x52
        // 0x587EDB4B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EDB4D: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587EDB4F: call 0x588dcdd0
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0xF2
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x587EDB54: pop edi
        __asm _emit 0x5F
        // 0x587EDB55: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587EDB57: pop esi
        __asm _emit 0x5E
        // 0x587EDB58: pop ebp
        __asm _emit 0x5D
        // 0x587EDB59: pop ebx
        __asm _emit 0x5B
        // 0x587EDB5A: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
