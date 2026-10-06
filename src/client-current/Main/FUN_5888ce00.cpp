// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5888CE00 .. +0x20 bytes.
// Source symbol alias: FUN_5888ce00.
extern "C" __declspec(naked) void FUN_5888ce00() {
    __asm {
        // 0x5888CE00: push esi
        __asm _emit 0x56
        // 0x5888CE01: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5888CE03: mov ecx, dword ptr [esi + 0x4c4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888CE09: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0xB9
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888CE0E: mov ecx, dword ptr [esi + 0x4a4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888CE14: push 0x2c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888CE19: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0x65
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888CE1E: pop esi
        __asm _emit 0x5E
        // 0x5888CE1F: ret
        __asm _emit 0xC3
    }
}
