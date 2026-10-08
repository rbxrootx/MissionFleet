// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 59 bytes in 1 exact ranges.
// Source symbol alias: FUN_58858590.

// Ghidra body range 0x58858590..0x588585CB; 59 mapped bytes.
extern "C" __declspec(naked) void FUN_58858590_segment_00() {
    __asm {
        // 0x58858590: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58858594: push esi
        __asm _emit 0x56
        // 0x58858595: lea esi, [ecx + eax*4 + 0x8b8]
        __asm _emit 0x8D
        __asm _emit 0xB4
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885859C: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5885859E: push ecx
        __asm _emit 0x51
        // 0x5885859F: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588585A5: push esi
        __asm _emit 0x56
        // 0x588585A6: call 0x587a1640
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0x90
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x588585AB: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588585AD: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588585B2: dec eax
        __asm _emit 0x48
        // 0x588585B3: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588585B8: push eax
        __asm _emit 0x50
        // 0x588585B9: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x588585BB: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588585C1: push esi
        __asm _emit 0x56
        // 0x588585C2: call 0x587a15e0
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0x90
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x588585C7: pop esi
        __asm _emit 0x5E
        // 0x588585C8: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
