// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 365 bytes in 1 exact ranges.
// Source symbol alias: FUN_5878d2c0.

// Ghidra body range 0x5878D2C0..0x5878D42D; 365 mapped bytes.
extern "C" __declspec(naked) void FUN_5878d2c0_segment_00() {
    __asm {
        // 0x5878D2C0: push esi
        __asm _emit 0x56
        // 0x5878D2C1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5878D2C3: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5878D2C5: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5878D2C7: mov edx, dword ptr [eax + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x2C
        // 0x5878D2CA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5878D2CC: push 7
        __asm _emit 0x6A
        __asm _emit 0x07
        // 0x5878D2CE: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5878D2D0: mov ecx, dword ptr [esi + 0x12114]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5878D2D6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5878D2D8: je 0x5878d3d3
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878D2DE: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5878D2E3: cmp dword ptr [eax + 0x160], 0x35
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x35
        // 0x5878D2EA: jle 0x5878d302
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5878D2EC: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878D2F3: je 0x5878d302
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x5878D2F5: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878D2FB: add eax, 0xd40
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878D300: jmp 0x5878d304
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5878D302: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5878D304: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5878D307: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5878D309: je 0x5878d333
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5878D30B: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5878D30E: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5878D311: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5878D314: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5878D317: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5878D31A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5878D31C: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5878D31F: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5878D321: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5878D324: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5878D327: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5878D32A: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5878D32D: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5878D330: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5878D333: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5878D338: cmp dword ptr [eax + 0x164], 0x1ca
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xCA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878D342: jle 0x5878d35b
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5878D344: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878D34B: je 0x5878d35b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5878D34D: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878D353: mov eax, dword ptr [ecx + 0x728]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x28
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878D359: jmp 0x5878d35d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5878D35B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5878D35D: mov ecx, dword ptr [esi + 0x12118]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5878D363: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5878D366: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5878D368: je 0x5878d392
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5878D36A: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5878D36D: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5878D370: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5878D373: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5878D376: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5878D379: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5878D37B: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5878D37E: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5878D380: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5878D383: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5878D386: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5878D389: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5878D38C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5878D38F: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5878D392: mov eax, dword ptr [esi + 0x1211c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5878D398: mov dword ptr [eax + 0x28], 0x100
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878D39F: mov dword ptr [eax + 0x84], 0
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878D3A9: mov dword ptr [eax + 0x8c], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x5878D3B3: mov ecx, dword ptr [esi + 0x1211c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5878D3B9: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5878D3BB: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x5878D3BE: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5878D3C0: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5878D3C6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5878D3C8: je 0x5878d3ff
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x5878D3CA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5878D3CC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5878D3CE: call 0x587b9020
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5878D3D3: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5878D3D9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5878D3DB: je 0x5878d3ff
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x5878D3DD: call 0x58970ae0
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0x36
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x5878D3E2: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5878D3E8: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5878D3EA: je 0x5878d3ff
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x5878D3EC: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5878D3EE: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x5878D3F1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5878D3F3: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5878D3F5: mov dword ptr [0x58a24588], 0
        __asm _emit 0xC7
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878D3FF: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5878D405: pop esi
        __asm _emit 0x5E
        // 0x5878D406: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5878D408: je 0x5878d42c
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x5878D40A: call 0x58970ae0
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0x36
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x5878D40F: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5878D415: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5878D417: je 0x5878d42c
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x5878D419: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5878D41B: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x5878D41E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5878D420: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5878D422: mov dword ptr [0x58a2458c], 0
        __asm _emit 0xC7
        __asm _emit 0x05
        __asm _emit 0x8C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878D42C: ret
        __asm _emit 0xC3
    }
}
