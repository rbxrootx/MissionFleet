// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A50B0 .. +0x2F bytes.
// Source symbol alias: FUN_587a50b0.
extern "C" __declspec(naked) void FUN_587a50b0() {
    __asm {
        // 0x587A50B0: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587A50B4: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587A50B8: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587A50BA: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587A50BD: push esi
        __asm _emit 0x56
        // 0x587A50BE: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A50C2: lea ecx, [eax*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A50C9: sub esi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF1
        // 0x587A50CB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A50CD: jle 0x587a50db
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x587A50CF: push ecx
        __asm _emit 0x51
        // 0x587A50D0: push edx
        __asm _emit 0x52
        // 0x587A50D1: push ecx
        __asm _emit 0x51
        // 0x587A50D2: push esi
        __asm _emit 0x56
        // 0x587A50D3: call 0x5897cc54
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0x7B
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A50D8: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587A50DB: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587A50DD: pop esi
        __asm _emit 0x5E
        // 0x587A50DE: ret
        __asm _emit 0xC3
    }
}
