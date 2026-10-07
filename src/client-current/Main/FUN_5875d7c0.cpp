// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 66 bytes in 1 exact ranges.
// Source symbol alias: FUN_5875d7c0.

// Ghidra body range 0x5875D7C0..0x5875D802; 66 mapped bytes.
extern "C" __declspec(naked) void FUN_5875d7c0_segment_00() {
    __asm {
        // 0x5875D7C0: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x5875D7C3: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5875D7C7: push esi
        __asm _emit 0x56
        // 0x5875D7C8: mov esi, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x14
        // 0x5875D7CB: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xF0
        // 0x5875D7CD: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x5875D7CF: jl 0x5875d7fc
        __asm _emit 0x7C
        __asm _emit 0x2B
        // 0x5875D7D1: mov esi, dword ptr [ecx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x1C
        // 0x5875D7D4: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xF0
        // 0x5875D7D6: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x5875D7D8: jge 0x5875d7fc
        __asm _emit 0x7D
        __asm _emit 0x22
        // 0x5875D7DA: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x5875D7DD: mov esi, dword ptr [ecx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x18
        // 0x5875D7E0: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5875D7E4: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xF0
        // 0x5875D7E6: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x5875D7E8: jl 0x5875d7fc
        __asm _emit 0x7C
        __asm _emit 0x12
        // 0x5875D7EA: mov ecx, dword ptr [ecx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x20
        // 0x5875D7ED: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x5875D7EF: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x5875D7F1: jge 0x5875d7fc
        __asm _emit 0x7D
        __asm _emit 0x09
        // 0x5875D7F3: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875D7F8: pop esi
        __asm _emit 0x5E
        // 0x5875D7F9: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5875D7FC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875D7FE: pop esi
        __asm _emit 0x5E
        // 0x5875D7FF: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
