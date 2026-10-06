// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5881DBE0 .. +0x25 bytes.
// Source symbol alias: FUN_5881dbe0.
extern "C" __declspec(naked) void FUN_5881dbe0() {
    __asm {
        // 0x5881DBE0: push esi
        __asm _emit 0x56
        // 0x5881DBE1: push edi
        __asm _emit 0x57
        // 0x5881DBE2: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5881DBE6: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5881DBE8: mov ecx, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881DBEE: push edi
        __asm _emit 0x57
        // 0x5881DBEF: call 0x58842780
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x4B
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5881DBF4: mov ecx, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881DBFA: push edi
        __asm _emit 0x57
        // 0x5881DBFB: call 0x58848450
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0xA8
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5881DC00: pop edi
        __asm _emit 0x5F
        // 0x5881DC01: pop esi
        __asm _emit 0x5E
        // 0x5881DC02: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
