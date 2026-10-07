// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 52 bytes in 1 exact ranges.
// Source symbol alias: FUN_58975680.

// Ghidra body range 0x58975680..0x589756B4; 52 mapped bytes.
extern "C" __declspec(naked) void FUN_58975680_segment_00() {
    __asm {
        // 0x58975680: push ebx
        __asm _emit 0x53
        // 0x58975681: mov ebx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58975685: push esi
        __asm _emit 0x56
        // 0x58975686: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5897568A: push edi
        __asm _emit 0x57
        // 0x5897568B: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5897568F: push esi
        __asm _emit 0x56
        // 0x58975690: push edi
        __asm _emit 0x57
        // 0x58975691: push 0x589a3400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x34
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58975696: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58975698: push ebx
        __asm _emit 0x53
        // 0x58975699: call 0x589755a0
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897569E: push esi
        __asm _emit 0x56
        // 0x5897569F: push edi
        __asm _emit 0x57
        // 0x589756A0: push 0x589a3500
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x35
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x589756A5: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x589756A7: push ebx
        __asm _emit 0x53
        // 0x589756A8: call 0x589755a0
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589756AD: add esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x28
        // 0x589756B0: pop edi
        __asm _emit 0x5F
        // 0x589756B1: pop esi
        __asm _emit 0x5E
        // 0x589756B2: pop ebx
        __asm _emit 0x5B
        // 0x589756B3: ret
        __asm _emit 0xC3
    }
}
