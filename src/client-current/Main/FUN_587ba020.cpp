// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 43 bytes in 1 exact ranges.
// Source symbol alias: FUN_587ba020.

// Ghidra body range 0x587BA020..0x587BA04B; 43 mapped bytes.
extern "C" __declspec(naked) void FUN_587ba020_segment_00() {
    __asm {
        // 0x587BA020: push esi
        __asm _emit 0x56
        // 0x587BA021: push edi
        __asm _emit 0x57
        // 0x587BA022: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587BA026: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA028: push edi
        __asm _emit 0x57
        // 0x587BA029: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587BA02B: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587BA031: push eax
        __asm _emit 0x50
        // 0x587BA032: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587BA036: push edi
        __asm _emit 0x57
        // 0x587BA037: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA039: push eax
        __asm _emit 0x50
        // 0x587BA03A: push 0x8001312a
        __asm _emit 0x68
        __asm _emit 0x2A
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587BA03F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587BA041: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x6C
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BA046: pop edi
        __asm _emit 0x5F
        // 0x587BA047: pop esi
        __asm _emit 0x5E
        // 0x587BA048: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
