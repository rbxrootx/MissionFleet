// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 142 bytes in 1 exact ranges.
// Source symbol alias: FUN_588965c0.

// Ghidra body range 0x588965C0..0x5889664E; 142 mapped bytes.
extern "C" __declspec(naked) void FUN_588965c0_segment_00() {
    __asm {
        // 0x588965C0: push edi
        __asm _emit 0x57
        // 0x588965C1: mov edi, dword ptr [ecx + 0x4e0]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0xE0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588965C7: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588965C9: je 0x5889664a
        __asm _emit 0x74
        __asm _emit 0x7F
        // 0x588965CB: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588965CF: sub eax, dword ptr [edi + 4]
        __asm _emit 0x2B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x588965D2: push esi
        __asm _emit 0x56
        // 0x588965D3: cdq
        __asm _emit 0x99
        // 0x588965D4: idiv dword ptr [ecx + 0x578]
        __asm _emit 0xF7
        __asm _emit 0xB9
        __asm _emit 0x78
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588965DA: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x588965DC: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588965E0: sub eax, dword ptr [edi + 8]
        __asm _emit 0x2B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x588965E3: mov edi, dword ptr [ecx + 0x4d8]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0xD8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588965E9: cdq
        __asm _emit 0x99
        // 0x588965EA: idiv dword ptr [ecx + 0x57c]
        __asm _emit 0xF7
        __asm _emit 0xB9
        __asm _emit 0x7C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588965F0: add edi, dword ptr [ecx + 4]
        __asm _emit 0x03
        __asm _emit 0x79
        __asm _emit 0x04
        // 0x588965F3: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588965F7: add edi, esi
        __asm _emit 0x03
        __asm _emit 0xFE
        // 0x588965F9: mov dword ptr [ecx + edx*8 + 0xd8], edi
        __asm _emit 0x89
        __asm _emit 0xBC
        __asm _emit 0xD1
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896600: mov edi, dword ptr [ecx + 0x4dc]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0xDC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896606: add edi, dword ptr [ecx + 8]
        __asm _emit 0x03
        __asm _emit 0x79
        __asm _emit 0x08
        // 0x58896609: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x5889660B: mov dword ptr [ecx + edx*8 + 0xdc], edi
        __asm _emit 0x89
        __asm _emit 0xBC
        __asm _emit 0xD1
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896612: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58896614: imul edi, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xF8
        // 0x58896617: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58896619: imul eax, esi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC6
        // 0x5889661C: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x5889661E: cmp edi, dword ptr [ecx + 0xd4]
        __asm _emit 0x3B
        __asm _emit 0xB9
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896624: pop esi
        __asm _emit 0x5E
        // 0x58896625: jge 0x5889663c
        __asm _emit 0x7D
        __asm _emit 0x15
        // 0x58896627: mov al, byte ptr [esp + 0xc]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5889662B: mov byte ptr [edx + ecx + 0x4e8], al
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x0A
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896632: inc dword ptr [ecx + 0x568]
        __asm _emit 0xFF
        __asm _emit 0x81
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896638: pop edi
        __asm _emit 0x5F
        // 0x58896639: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5889663C: mov byte ptr [edx + ecx + 0x4e8], 2
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x0A
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x58896644: inc dword ptr [ecx + 0x568]
        __asm _emit 0xFF
        __asm _emit 0x81
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889664A: pop edi
        __asm _emit 0x5F
        // 0x5889664B: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
