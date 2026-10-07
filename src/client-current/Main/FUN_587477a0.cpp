// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 66 bytes in 1 exact ranges.
// Source symbol alias: FUN_587477a0.

// Ghidra body range 0x587477A0..0x587477E2; 66 mapped bytes.
extern "C" __declspec(naked) void FUN_587477a0_segment_00() {
    __asm {
        // 0x587477A0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587477A4: push esi
        __asm _emit 0x56
        // 0x587477A5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587477A7: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587477AB: push ecx
        __asm _emit 0x51
        // 0x587477AC: mov dword ptr [esi + 0x80c], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587477B2: lea edx, [eax + 0x34c]
        __asm _emit 0x8D
        __asm _emit 0x90
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587477B8: push eax
        __asm _emit 0x50
        // 0x587477B9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587477BB: mov dword ptr [esi + 0x810], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587477C1: mov dword ptr [esi + 0x814], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x14
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587477C7: call 0x58745f80
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587477CC: mov eax, dword ptr [esi + 0x810]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587477D2: push eax
        __asm _emit 0x50
        // 0x587477D3: lea ecx, [esi + 0xf8]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587477D9: call 0x58744bb0
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0xD3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587477DE: pop esi
        __asm _emit 0x5E
        // 0x587477DF: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
