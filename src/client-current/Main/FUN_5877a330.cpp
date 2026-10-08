// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 665 bytes in 1 exact ranges.
// Source symbol alias: FUN_5877a330.

// Ghidra body range 0x5877A330..0x5877A5C9; 665 mapped bytes.
extern "C" __declspec(naked) void FUN_5877a330_segment_00() {
    __asm {
        // 0x5877A330: push esi
        __asm _emit 0x56
        // 0x5877A331: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5877A333: cmp dword ptr [esi + 0x25c], 2
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x5877A33A: je 0x5877a5c7
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A340: mov eax, dword ptr [0x58a284c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877A345: push ebx
        __asm _emit 0x53
        // 0x5877A346: push edi
        __asm _emit 0x57
        // 0x5877A347: push eax
        __asm _emit 0x50
        // 0x5877A348: call dword ptr [0x5898c3d0]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xD0
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5877A34E: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A353: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5877A355: mov dword ptr [esi + 0x254], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A35F: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0x89
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5877A364: mov edx, dword ptr [0x58a248fc]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xFC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877A36A: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5877A36D: mov ecx, 0x12c
        __asm _emit 0xB9
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A372: sub ecx, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5877A375: push edx
        __asm _emit 0x52
        // 0x5877A376: push ecx
        __asm _emit 0x51
        // 0x5877A377: mov ecx, dword ptr [esi + 0x1d0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A37D: sub eax, 0x190
        __asm _emit 0x2D
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A382: push eax
        __asm _emit 0x50
        // 0x5877A383: call 0x587b7400
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0xD0
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x5877A388: mov eax, dword ptr [esi + 0x1e0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A38E: mov ecx, dword ptr [eax + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x54
        // 0x5877A391: mov eax, dword ptr [ecx + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x2C
        // 0x5877A394: sub eax, dword ptr [ecx + 0x24]
        __asm _emit 0x2B
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5877A397: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877A39D: cdq
        __asm _emit 0x99
        // 0x5877A39E: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5877A3A0: mov edx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x08
        // 0x5877A3A3: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x5877A3A5: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5877A3A7: mov eax, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x28
        // 0x5877A3AA: sub eax, dword ptr [ecx + 0x20]
        __asm _emit 0x2B
        __asm _emit 0x41
        __asm _emit 0x20
        // 0x5877A3AD: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x5877A3B0: sub edx, 0xa
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x0A
        // 0x5877A3B3: push edx
        __asm _emit 0x52
        // 0x5877A3B4: cdq
        __asm _emit 0x99
        // 0x5877A3B5: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5877A3B7: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x5877A3B9: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x5877A3BB: push ecx
        __asm _emit 0x51
        // 0x5877A3BC: mov ecx, dword ptr [0x58a0ada8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA8
        __asm _emit 0xAD
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5877A3C2: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5877A3C7: movzx eax, word ptr [esi + 0x5e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0x5E
        // 0x5877A3CB: mov edi, dword ptr [0x58a24ae0]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xE0
        __asm _emit 0x4A
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877A3D1: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x5877A3D4: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5877A3D6: shl edx, 4
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x04
        // 0x5877A3D9: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5877A3DB: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A3E1: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x5877A3E3: lea eax, [eax + edx*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xD0
        // 0x5877A3E6: mov edx, dword ptr [edi + 0x160]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A3EC: imul eax, eax, 0xe0
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A3F2: mov ecx, dword ptr [eax + 0x589cfd7c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x7C
        __asm _emit 0xFD
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5877A3F8: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x5877A3FA: jle 0x5877a414
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x5877A3FC: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5877A3FE: jl 0x5877a414
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x5877A400: cmp dword ptr [edi + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A407: je 0x5877a414
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5877A409: shl ecx, 6
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x06
        // 0x5877A40C: add ecx, dword ptr [edi + 0x190]
        __asm _emit 0x03
        __asm _emit 0x8F
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A412: jmp 0x5877a416
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5877A414: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5877A416: mov eax, dword ptr [eax + 0x589cfd74]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x74
        __asm _emit 0xFD
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5877A41C: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x5877A41E: jle 0x5877a438
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x5877A420: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877A422: jl 0x5877a438
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x5877A424: cmp dword ptr [edi + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A42B: je 0x5877a438
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5877A42D: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x5877A430: add eax, dword ptr [edi + 0x190]
        __asm _emit 0x03
        __asm _emit 0x87
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A436: jmp 0x5877a43a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5877A438: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877A43A: push ecx
        __asm _emit 0x51
        // 0x5877A43B: mov ecx, dword ptr [0x58a0ada8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA8
        __asm _emit 0xAD
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5877A441: push eax
        __asm _emit 0x50
        // 0x5877A442: push esi
        __asm _emit 0x56
        // 0x5877A443: call 0x5877de70
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x3A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A448: mov eax, dword ptr [0x58a0ada8]
        __asm _emit 0xA1
        __asm _emit 0xA8
        __asm _emit 0xAD
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5877A44D: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877A453: push eax
        __asm _emit 0x50
        // 0x5877A454: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5877A456: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5877A458: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0x8A
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5877A45D: push edi
        __asm _emit 0x57
        // 0x5877A45E: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5877A460: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0x8A
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5877A465: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877A46B: mov dword ptr [ecx + 0xd4], 1
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A475: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877A47B: mov eax, dword ptr [edx + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A481: mov ecx, dword ptr [eax + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A487: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5877A489: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x5877A48C: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5877A48E: movzx eax, word ptr [esi + 0x5e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0x5E
        // 0x5877A492: mov edx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A498: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x5877A49B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5877A49D: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x5877A4A0: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x5877A4A2: shr edx, 1
        __asm _emit 0xD1
        __asm _emit 0xEA
        // 0x5877A4A4: lea eax, [edx + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xCA
        // 0x5877A4A7: mov ecx, dword ptr [0x58a24ae0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0x4A
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877A4AD: imul eax, eax, 0xe0
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A4B3: mov eax, dword ptr [eax + 0x589cfd74]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x74
        __asm _emit 0xFD
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5877A4B9: inc eax
        __asm _emit 0x40
        // 0x5877A4BA: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A4C0: pop edi
        __asm _emit 0x5F
        // 0x5877A4C1: pop ebx
        __asm _emit 0x5B
        // 0x5877A4C2: jle 0x5877a4dc
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x5877A4C4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877A4C6: jl 0x5877a4dc
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x5877A4C8: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A4CF: je 0x5877a4dc
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5877A4D1: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x5877A4D4: add eax, dword ptr [ecx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A4DA: jmp 0x5877a4de
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5877A4DC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877A4DE: mov ecx, dword ptr [esi + 0x1e4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A4E4: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5877A4E7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877A4E9: je 0x5877a513
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5877A4EB: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5877A4EE: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5877A4F1: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5877A4F4: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5877A4F7: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5877A4FA: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5877A4FC: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5877A4FF: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5877A501: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5877A504: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5877A507: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5877A50A: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5877A50D: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5877A510: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5877A513: movzx eax, word ptr [esi + 0x5e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0x5E
        // 0x5877A517: mov edx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A51D: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x5877A520: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5877A522: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x5877A525: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x5877A527: shr edx, 1
        __asm _emit 0xD1
        __asm _emit 0xEA
        // 0x5877A529: lea eax, [edx + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xCA
        // 0x5877A52C: mov ecx, dword ptr [0x58a24ae0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0x4A
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877A532: imul eax, eax, 0xe0
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A538: mov eax, dword ptr [eax + 0x589cfd74]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x74
        __asm _emit 0xFD
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5877A53E: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A544: jle 0x5877a55e
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x5877A546: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877A548: jl 0x5877a55e
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x5877A54A: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A551: je 0x5877a55e
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5877A553: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x5877A556: add eax, dword ptr [ecx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A55C: jmp 0x5877a560
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5877A55E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877A560: mov ecx, dword ptr [esi + 0x1e0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A566: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5877A569: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877A56B: je 0x5877a595
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5877A56D: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5877A570: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5877A573: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5877A576: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5877A579: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5877A57C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5877A57E: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5877A581: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5877A583: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5877A586: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5877A589: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5877A58C: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5877A58F: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5877A592: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5877A595: mov ecx, dword ptr [esi + 0x1e4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A59B: mov dword ptr [ecx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A5A2: mov edx, dword ptr [esi + 0x1e0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A5A8: mov dword ptr [edx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A5AF: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5877A5B3: mov ecx, 0xe1ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A5B8: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5877A5BB: mov edx, 0x100
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A5C0: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x5877A5C3: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5877A5C7: pop esi
        __asm _emit 0x5E
        // 0x5877A5C8: ret
        __asm _emit 0xC3
    }
}
