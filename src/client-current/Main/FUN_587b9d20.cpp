// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 46 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b9d20.

// Ghidra body range 0x587B9D20..0x587B9D4E; 46 mapped bytes.
extern "C" __declspec(naked) void FUN_587b9d20_segment_00() {
    __asm {
        // 0x587B9D20: push esi
        __asm _emit 0x56
        // 0x587B9D21: push edi
        __asm _emit 0x57
        // 0x587B9D22: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B9D26: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9D28: push edi
        __asm _emit 0x57
        // 0x587B9D29: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587B9D2B: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587B9D31: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B9D35: push eax
        __asm _emit 0x50
        // 0x587B9D36: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B9D3A: push edi
        __asm _emit 0x57
        // 0x587B9D3B: push eax
        __asm _emit 0x50
        // 0x587B9D3C: push ecx
        __asm _emit 0x51
        // 0x587B9D3D: push 0x8001310b
        __asm _emit 0x68
        __asm _emit 0x0B
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B9D42: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B9D44: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0x6F
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B9D49: pop edi
        __asm _emit 0x5F
        // 0x587B9D4A: pop esi
        __asm _emit 0x5E
        // 0x587B9D4B: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
