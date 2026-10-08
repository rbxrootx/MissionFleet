// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 46 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b9d50.

// Ghidra body range 0x587B9D50..0x587B9D7E; 46 mapped bytes.
extern "C" __declspec(naked) void FUN_587b9d50_segment_00() {
    __asm {
        // 0x587B9D50: push esi
        __asm _emit 0x56
        // 0x587B9D51: push edi
        __asm _emit 0x57
        // 0x587B9D52: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B9D56: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9D58: push edi
        __asm _emit 0x57
        // 0x587B9D59: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587B9D5B: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587B9D61: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B9D65: push eax
        __asm _emit 0x50
        // 0x587B9D66: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B9D6A: push edi
        __asm _emit 0x57
        // 0x587B9D6B: push eax
        __asm _emit 0x50
        // 0x587B9D6C: push ecx
        __asm _emit 0x51
        // 0x587B9D6D: push 0x80013109
        __asm _emit 0x68
        __asm _emit 0x09
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B9D72: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B9D74: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x6E
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B9D79: pop edi
        __asm _emit 0x5F
        // 0x587B9D7A: pop esi
        __asm _emit 0x5E
        // 0x587B9D7B: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
