// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587BA070 .. +0x2E bytes.
// Source symbol alias: FUN_587ba070.
extern "C" __declspec(naked) void FUN_587ba070() {
    __asm {
        // 0x587BA070: push esi
        __asm _emit 0x56
        // 0x587BA071: push edi
        __asm _emit 0x57
        // 0x587BA072: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587BA076: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA078: push edi
        __asm _emit 0x57
        // 0x587BA079: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587BA07B: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587BA081: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587BA085: push eax
        __asm _emit 0x50
        // 0x587BA086: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587BA08A: push edi
        __asm _emit 0x57
        // 0x587BA08B: push eax
        __asm _emit 0x50
        // 0x587BA08C: push ecx
        __asm _emit 0x51
        // 0x587BA08D: push 0x80013126
        __asm _emit 0x68
        __asm _emit 0x26
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587BA092: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587BA094: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0x6B
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BA099: pop edi
        __asm _emit 0x5F
        // 0x587BA09A: pop esi
        __asm _emit 0x5E
        // 0x587BA09B: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
