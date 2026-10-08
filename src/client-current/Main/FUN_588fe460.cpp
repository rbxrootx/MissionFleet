// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 177 bytes in 1 exact ranges.
// Source symbol alias: FUN_588fe460.

// Ghidra body range 0x588FE460..0x588FE511; 177 mapped bytes.
extern "C" __declspec(naked) void FUN_588fe460_segment_00() {
    __asm {
        // 0x588FE460: push esi
        __asm _emit 0x56
        // 0x588FE461: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FE463: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588FE467: push edi
        __asm _emit 0x57
        // 0x588FE468: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x588FE46A: je 0x588fe509
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE470: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x588FE473: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588FE477: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FE479: je 0x588fe49f
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x588FE47B: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x34
        // 0x588FE47E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FE480: je 0x588fe498
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588FE482: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588FE484: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FE486: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x588FE489: push edi
        __asm _emit 0x57
        // 0x588FE48A: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588FE48C: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x588FE48F: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x588FE492: je 0x588fe49f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588FE494: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FE496: jne 0x588fe482
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x588FE498: pop edi
        __asm _emit 0x5F
        // 0x588FE499: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FE49B: pop esi
        __asm _emit 0x5E
        // 0x588FE49C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588FE49F: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x588FE4A2: sub eax, 0x100
        __asm _emit 0x2D
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE4A7: je 0x588fe4e6
        __asm _emit 0x74
        __asm _emit 0x3D
        // 0x588FE4A9: sub eax, 0x100
        __asm _emit 0x2D
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE4AE: je 0x588fe4ce
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x588FE4B0: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x588FE4B3: jne 0x588fe509
        __asm _emit 0x75
        __asm _emit 0x54
        // 0x588FE4B5: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FE4BB: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x588FE4BE: push edx
        __asm _emit 0x52
        // 0x588FE4BF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FE4C1: call 0x588fe010
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FE4C6: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588FE4C9: pop edi
        __asm _emit 0x5F
        // 0x588FE4CA: pop esi
        __asm _emit 0x5E
        // 0x588FE4CB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588FE4CE: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FE4D3: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x588FE4D6: push eax
        __asm _emit 0x50
        // 0x588FE4D7: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FE4D9: call 0x588fddf0
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FE4DE: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588FE4E1: pop edi
        __asm _emit 0x5F
        // 0x588FE4E2: pop esi
        __asm _emit 0x5E
        // 0x588FE4E3: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588FE4E6: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x588FE4E9: sub eax, 0x25
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x25
        // 0x588FE4EC: je 0x588fe502
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x588FE4EE: sub eax, 2
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x02
        // 0x588FE4F1: jne 0x588fe509
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x588FE4F3: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FE4F5: call 0x588fdd10
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FE4FA: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588FE4FD: pop edi
        __asm _emit 0x5F
        // 0x588FE4FE: pop esi
        __asm _emit 0x5E
        // 0x588FE4FF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588FE502: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FE504: call 0x588fdcf0
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FE509: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588FE50C: pop edi
        __asm _emit 0x5F
        // 0x588FE50D: pop esi
        __asm _emit 0x5E
        // 0x588FE50E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
