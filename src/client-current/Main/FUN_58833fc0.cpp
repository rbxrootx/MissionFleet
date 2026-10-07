// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 39 bytes in 1 exact ranges.
// Source symbol alias: FUN_58833fc0.

// Ghidra body range 0x58833FC0..0x58833FE7; 39 mapped bytes.
extern "C" __declspec(naked) void FUN_58833fc0_segment_00() {
    __asm {
        // 0x58833FC0: push esi
        __asm _emit 0x56
        // 0x58833FC1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58833FC3: cmp dword ptr [esi + 0x1d4], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xD4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833FCA: je 0x58833fe5
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x58833FCC: mov ecx, dword ptr [esi + 0x1d4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833FD2: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58833FD4: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58833FD7: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58833FD9: mov ecx, dword ptr [esi + 0x1d4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833FDF: push esi
        __asm _emit 0x56
        // 0x58833FE0: call 0x587b0900
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0xC9
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x58833FE5: pop esi
        __asm _emit 0x5E
        // 0x58833FE6: ret
        __asm _emit 0xC3
    }
}
