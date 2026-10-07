// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 56 bytes in 1 exact ranges.
// Source symbol alias: FUN_58978e50.

// Ghidra body range 0x58978E50..0x58978E88; 56 mapped bytes.
extern "C" __declspec(naked) void FUN_58978e50_segment_00() {
    __asm {
        // 0x58978E50: push esi
        __asm _emit 0x56
        // 0x58978E51: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58978E55: push 0x6c
        __asm _emit 0x6A
        __asm _emit 0x6C
        // 0x58978E57: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58978E59: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58978E5C: push esi
        __asm _emit 0x56
        // 0x58978E5D: call dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x10
        // 0x58978E5F: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58978E62: mov dword ptr [esi + 0x15c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58978E68: mov dword ptr [eax], 0x58978e90
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x90
        __asm _emit 0x8E
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58978E6E: lea ecx, [eax + 0x5c]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x5C
        // 0x58978E71: mov edx, 4
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58978E76: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58978E78: mov dword ptr [ecx - 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0xF0
        // 0x58978E7B: mov dword ptr [ecx], esi
        __asm _emit 0x89
        __asm _emit 0x31
        // 0x58978E7D: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x58978E80: dec edx
        __asm _emit 0x4A
        // 0x58978E81: jne 0x58978e78
        __asm _emit 0x75
        __asm _emit 0xF5
        // 0x58978E83: mov dword ptr [eax + 0x40], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x40
        // 0x58978E86: pop esi
        __asm _emit 0x5E
        // 0x58978E87: ret
        __asm _emit 0xC3
    }
}
