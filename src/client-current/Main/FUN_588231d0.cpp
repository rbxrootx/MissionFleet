// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588231D0 .. +0x37 bytes.
// Source symbol alias: FUN_588231d0.
extern "C" __declspec(naked) void FUN_588231d0() {
    __asm {
        // 0x588231D0: push esi
        __asm _emit 0x56
        // 0x588231D1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588231D3: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588231D6: push edi
        __asm _emit 0x57
        // 0x588231D7: mov edi, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588231DD: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0x4F
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x588231E2: add edi, -7
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0xF9
        // 0x588231E5: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588231E7: jge 0x58823204
        __asm _emit 0x7D
        __asm _emit 0x1B
        // 0x588231E9: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588231EC: cmp dword ptr [ecx + 0x88], 7
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x588231F3: jle 0x58823204
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x588231F5: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0x4F
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x588231FA: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588231FD: inc eax
        __asm _emit 0x40
        // 0x588231FE: push eax
        __asm _emit 0x50
        // 0x588231FF: call 0x58908190
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x4F
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58823204: pop edi
        __asm _emit 0x5F
        // 0x58823205: pop esi
        __asm _emit 0x5E
        // 0x58823206: ret
        __asm _emit 0xC3
    }
}
