// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 68 bytes in 1 exact ranges.
// Source symbol alias: FUN_58747750.

// Ghidra body range 0x58747750..0x58747794; 68 mapped bytes.
extern "C" __declspec(naked) void FUN_58747750_segment_00() {
    __asm {
        // 0x58747750: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58747756: mov ecx, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5874775C: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58747760: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58747764: push esi
        __asm _emit 0x56
        // 0x58747765: mov esi, dword ptr [ecx + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874776B: imul esi, dword ptr [ecx + 0xa8]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xB1
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747772: sub esi, edx
        __asm _emit 0x2B
        __asm _emit 0xF2
        // 0x58747774: mov dword ptr [eax + 8], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x08
        // 0x58747777: mov esi, dword ptr [ecx + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874777D: imul esi, dword ptr [ecx + 0xac]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xB1
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747784: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x58747786: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5874778A: sub esi, edx
        __asm _emit 0x2B
        __asm _emit 0xF2
        // 0x5874778C: mov dword ptr [eax + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x0C
        // 0x5874778F: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58747792: pop esi
        __asm _emit 0x5E
        // 0x58747793: ret
        __asm _emit 0xC3
    }
}
