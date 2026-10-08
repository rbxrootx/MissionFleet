// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 214 bytes in 1 exact ranges.
// Source symbol alias: FUN_588ddbf0.

// Ghidra body range 0x588DDBF0..0x588DDCC6; 214 mapped bytes.
extern "C" __declspec(naked) void FUN_588ddbf0_segment_00() {
    __asm {
        // 0x588DDBF0: push esi
        __asm _emit 0x56
        // 0x588DDBF1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588DDBF3: mov ecx, dword ptr [esi + 0x12e4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDBF9: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588DDBFE: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0x40
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588DDC03: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588DDC07: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x588DDC0A: ja 0x588ddcb2
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDC10: jmp dword ptr [eax*4 + 0x588ddcc8]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xC8
        __asm _emit 0xDC
        __asm _emit 0x8D
        __asm _emit 0x58
        // 0x588DDC17: mov ecx, dword ptr [esi + 0x12e4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDC1D: push 0x589a10a8
        __asm _emit 0x68
        __asm _emit 0xA8
        __asm _emit 0x10
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588DDC22: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0x40
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588DDC27: mov eax, dword ptr [esi + 0x12e4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDC2D: mov dword ptr [eax + 0x60], 0x20a6ff
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0xFF
        __asm _emit 0xA6
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x588DDC34: pop esi
        __asm _emit 0x5E
        // 0x588DDC35: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588DDC38: push 0x589a10a8
        __asm _emit 0x68
        __asm _emit 0xA8
        __asm _emit 0x10
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588DDC3D: mov ecx, dword ptr [esi + 0x12e4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDC43: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0x40
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588DDC48: mov ecx, dword ptr [esi + 0x12e4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDC4E: mov dword ptr [ecx + 0x60], 0x20a6ff
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x60
        __asm _emit 0xFF
        __asm _emit 0xA6
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x588DDC55: pop esi
        __asm _emit 0x5E
        // 0x588DDC56: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588DDC59: mov ecx, dword ptr [esi + 0x12e4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDC5F: push 0x589a10a8
        __asm _emit 0x68
        __asm _emit 0xA8
        __asm _emit 0x10
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588DDC64: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0x40
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588DDC69: mov edx, dword ptr [esi + 0x12e4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xE4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDC6F: mov dword ptr [edx + 0x60], 0x20a6ff
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x60
        __asm _emit 0xFF
        __asm _emit 0xA6
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x588DDC76: pop esi
        __asm _emit 0x5E
        // 0x588DDC77: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588DDC7A: mov ecx, dword ptr [esi + 0x12e4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDC80: push 0x589a10a0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0x10
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588DDC85: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x40
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588DDC8A: mov eax, dword ptr [esi + 0x12e4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDC90: mov dword ptr [eax + 0x60], 0x17fffa
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x588DDC97: pop esi
        __asm _emit 0x5E
        // 0x588DDC98: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588DDC9B: mov ecx, dword ptr [esi + 0x12e4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDCA1: push 0x589a1098
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x10
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588DDCA6: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0x40
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588DDCAB: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588DDCB0: jmp 0x588ddc3d
        __asm _emit 0xEB
        __asm _emit 0x8B
        // 0x588DDCB2: mov ecx, dword ptr [esi + 0x12e4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDCB8: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588DDCBD: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0x40
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588DDCC2: pop esi
        __asm _emit 0x5E
        // 0x588DDCC3: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
