// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 43 bytes in 1 exact ranges.
// Source symbol alias: FUN_588996a0.

// Ghidra body range 0x588996A0..0x588996CB; 43 mapped bytes.
extern "C" __declspec(naked) void FUN_588996a0_segment_00() {
    __asm {
        // 0x588996A0: push ecx
        __asm _emit 0x51
        // 0x588996A1: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588996A5: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588996A9: mov byte ptr [esp], 0
        __asm _emit 0xC6
        __asm _emit 0x04
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588996AD: mov eax, dword ptr [esp]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x24
        // 0x588996B0: push eax
        __asm _emit 0x50
        // 0x588996B1: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588996B5: push ecx
        __asm _emit 0x51
        // 0x588996B6: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588996BA: push edx
        __asm _emit 0x52
        // 0x588996BB: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588996BF: push eax
        __asm _emit 0x50
        // 0x588996C0: push ecx
        __asm _emit 0x51
        // 0x588996C1: push edx
        __asm _emit 0x52
        // 0x588996C2: call 0x58899580
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588996C7: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x588996CA: ret
        __asm _emit 0xC3
    }
}
