// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 70 bytes in 1 exact ranges.
// Source symbol alias: FUN_58971ec0.

// Ghidra body range 0x58971EC0..0x58971F06; 70 mapped bytes.
extern "C" __declspec(naked) void FUN_58971ec0_segment_00() {
    __asm {
        // 0x58971EC0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58971EC4: push esi
        __asm _emit 0x56
        // 0x58971EC5: push edi
        __asm _emit 0x57
        // 0x58971EC6: push 0x589ce5e0
        __asm _emit 0x68
        __asm _emit 0xE0
        __asm _emit 0xE5
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58971ECB: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58971ECD: push eax
        __asm _emit 0x50
        // 0x58971ECE: call dword ptr [0x5898c33c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x3C
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58971ED4: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58971ED6: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58971ED9: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58971EDB: jne 0x58971ee4
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x58971EDD: pop edi
        __asm _emit 0x5F
        // 0x58971EDE: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58971EE0: pop esi
        __asm _emit 0x5E
        // 0x58971EE1: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58971EE4: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58971EE8: push ebx
        __asm _emit 0x53
        // 0x58971EE9: push ecx
        __asm _emit 0x51
        // 0x58971EEA: push esi
        __asm _emit 0x56
        // 0x58971EEB: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58971EED: call 0x58971f10
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58971EF2: push esi
        __asm _emit 0x56
        // 0x58971EF3: mov bl, al
        __asm _emit 0x8A
        __asm _emit 0xD8
        // 0x58971EF5: call dword ptr [0x5898c250]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xC2
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58971EFB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58971EFE: mov al, bl
        __asm _emit 0x8A
        __asm _emit 0xC3
        // 0x58971F00: pop ebx
        __asm _emit 0x5B
        // 0x58971F01: pop edi
        __asm _emit 0x5F
        // 0x58971F02: pop esi
        __asm _emit 0x5E
        // 0x58971F03: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
