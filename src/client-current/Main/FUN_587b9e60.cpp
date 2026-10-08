// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 46 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b9e60.

// Ghidra body range 0x587B9E60..0x587B9E8E; 46 mapped bytes.
extern "C" __declspec(naked) void FUN_587b9e60_segment_00() {
    __asm {
        // 0x587B9E60: push esi
        __asm _emit 0x56
        // 0x587B9E61: push edi
        __asm _emit 0x57
        // 0x587B9E62: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B9E66: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9E68: push edi
        __asm _emit 0x57
        // 0x587B9E69: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587B9E6B: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587B9E71: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B9E75: push eax
        __asm _emit 0x50
        // 0x587B9E76: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B9E7A: push edi
        __asm _emit 0x57
        // 0x587B9E7B: push eax
        __asm _emit 0x50
        // 0x587B9E7C: push ecx
        __asm _emit 0x51
        // 0x587B9E7D: push 0x8001311c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B9E82: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B9E84: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x6D
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B9E89: pop edi
        __asm _emit 0x5F
        // 0x587B9E8A: pop esi
        __asm _emit 0x5E
        // 0x587B9E8B: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
