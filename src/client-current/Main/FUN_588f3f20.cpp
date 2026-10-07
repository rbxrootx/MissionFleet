// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 70 bytes in 1 exact ranges.
// Source symbol alias: FUN_588f3f20.

// Ghidra body range 0x588F3F20..0x588F3F66; 70 mapped bytes.
extern "C" __declspec(naked) void FUN_588f3f20_segment_00() {
    __asm {
        // 0x588F3F20: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588F3F24: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588F3F26: cmp dword ptr [ecx + 4], edx
        __asm _emit 0x39
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588F3F29: jne 0x588f3f43
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x588F3F2B: mov dword ptr [ecx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x588F3F2E: mov dword ptr [ecx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x588F3F31: mov dword ptr [eax + 0xce0], edx
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xE0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3F37: mov dword ptr [eax + 0xce4], edx
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xE4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3F3D: inc dword ptr [ecx + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588F3F40: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F3F43: push esi
        __asm _emit 0x56
        // 0x588F3F44: mov esi, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x08
        // 0x588F3F47: mov dword ptr [esi + 0xce4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3F4D: mov esi, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x08
        // 0x588F3F50: mov dword ptr [eax + 0xce0], esi
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0xE0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3F56: mov dword ptr [ecx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x588F3F59: mov dword ptr [eax + 0xce4], edx
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xE4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3F5F: inc dword ptr [ecx + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588F3F62: pop esi
        __asm _emit 0x5E
        // 0x588F3F63: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
