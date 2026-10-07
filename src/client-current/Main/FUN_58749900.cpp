// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 48 bytes in 1 exact ranges.
// Source symbol alias: FUN_58749900.

// Ghidra body range 0x58749900..0x58749930; 48 mapped bytes.
extern "C" __declspec(naked) void FUN_58749900_segment_00() {
    __asm {
        // 0x58749900: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58749902: mov byte ptr [ecx + 0x68], al
        __asm _emit 0x88
        __asm _emit 0x41
        __asm _emit 0x68
        // 0x58749905: mov dword ptr [ecx + 0xc4], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874990B: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5874990F: mov edx, 0x40000000
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58749914: push esi
        __asm _emit 0x56
        // 0x58749915: mov dword ptr [ecx + 0xb8], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874991B: mov esi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x30
        // 0x5874991D: mov dword ptr [ecx + 0x6c], esi
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0x6C
        // 0x58749920: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x58749923: mov dword ptr [ecx + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x70
        // 0x58749926: mov dword ptr [ecx + 0xbc], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874992C: pop esi
        __asm _emit 0x5E
        // 0x5874992D: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
