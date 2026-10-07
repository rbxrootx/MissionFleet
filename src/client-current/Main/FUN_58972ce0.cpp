// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 47 bytes in 1 exact ranges.
// Source symbol alias: FUN_58972ce0.

// Ghidra body range 0x58972CE0..0x58972D0F; 47 mapped bytes.
extern "C" __declspec(naked) void FUN_58972ce0_segment_00() {
    __asm {
        // 0x58972CE0: push esi
        __asm _emit 0x56
        // 0x58972CE1: push edi
        __asm _emit 0x57
        // 0x58972CE2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58972CE4: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x58972CE6: call 0x589728d0
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58972CEB: mov ecx, 0x12e
        __asm _emit 0xB9
        __asm _emit 0x2E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972CF0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58972CF2: lea edi, [esi + 0x1c0]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972CF8: mov dword ptr [esi], 0x589a3068
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58972CFE: mov dword ptr [esi + 0x1bc], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972D08: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xF3
        __asm _emit 0xAB
        // 0x58972D0A: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58972D0C: pop edi
        __asm _emit 0x5F
        // 0x58972D0D: pop esi
        __asm _emit 0x5E
        // 0x58972D0E: ret
        __asm _emit 0xC3
    }
}
