// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58805880 .. +0x48 bytes.
// Source symbol alias: FUN_58805880.
extern "C" __declspec(naked) void FUN_58805880() {
    __asm {
        // 0x58805880: push esi
        __asm _emit 0x56
        // 0x58805881: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58805883: or dword ptr [esi + 0x78], 1
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x78
        __asm _emit 0x01
        // 0x58805887: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880588D: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x58805890: push edi
        __asm _emit 0x57
        // 0x58805891: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58805895: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58805897: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58805899: sete al
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC0
        // 0x5880589C: push eax
        __asm _emit 0x50
        // 0x5880589D: call 0x588d6cc0
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0x14
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588058A2: mov ecx, dword ptr [esi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588058A8: push edi
        __asm _emit 0x57
        // 0x588058A9: call 0x588a6720
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0x0E
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588058AE: mov eax, dword ptr [esi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588058B4: or word ptr [eax + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x588058B9: pop edi
        __asm _emit 0x5F
        // 0x588058BA: mov dword ptr [esi + 0x300], 0x190
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588058C4: pop esi
        __asm _emit 0x5E
        // 0x588058C5: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
