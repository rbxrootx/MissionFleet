// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588D2820 .. +0x17 bytes.
// Source symbol alias: FUN_588d2820.
extern "C" __declspec(naked) void FUN_588d2820() {
    __asm {
        // 0x588D2820: push esi
        __asm _emit 0x56
        // 0x588D2821: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588D2823: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x588D2826: push eax
        __asm _emit 0x50
        // 0x588D2827: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0x0A
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588D282C: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588D282F: sub ecx, dword ptr [esi + 0x78]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x588D2832: mov dword ptr [esi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x588D2835: pop esi
        __asm _emit 0x5E
        // 0x588D2836: ret
        __asm _emit 0xC3
    }
}
