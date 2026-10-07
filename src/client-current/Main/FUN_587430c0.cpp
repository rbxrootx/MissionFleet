// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 27 bytes in 1 exact ranges.
// Source symbol alias: FUN_587430c0.

// Ghidra body range 0x587430C0..0x587430DB; 27 mapped bytes.
extern "C" __declspec(naked) void FUN_587430c0_segment_00() {
    __asm {
        // 0x587430C0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587430C4: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587430C6: cmp byte ptr [ecx + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x587430CA: jne 0x587430da
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x587430CC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587430D0: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587430D2: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587430D4: cmp byte ptr [ecx + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x587430D8: je 0x587430d0
        __asm _emit 0x74
        __asm _emit 0xF6
        // 0x587430DA: ret
        __asm _emit 0xC3
    }
}
