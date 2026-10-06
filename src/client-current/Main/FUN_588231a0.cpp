// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588231A0 .. +0x2C bytes.
// Source symbol alias: FUN_588231a0.
extern "C" __declspec(naked) void FUN_588231a0() {
    __asm {
        // 0x588231A0: push esi
        __asm _emit 0x56
        // 0x588231A1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588231A3: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588231A6: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0x4F
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x588231AB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588231AD: jle 0x588231ca
        __asm _emit 0x7E
        __asm _emit 0x1B
        // 0x588231AF: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588231B2: cmp dword ptr [ecx + 0x88], 7
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x588231B9: jle 0x588231ca
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x588231BB: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0x4F
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x588231C0: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588231C3: dec eax
        __asm _emit 0x48
        // 0x588231C4: push eax
        __asm _emit 0x50
        // 0x588231C5: call 0x58908190
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0x4F
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x588231CA: pop esi
        __asm _emit 0x5E
        // 0x588231CB: ret
        __asm _emit 0xC3
    }
}
