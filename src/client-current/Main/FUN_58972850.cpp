// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58972850 .. +0x7C bytes.
// Source symbol alias: FUN_58972850.
extern "C" __declspec(naked) void FUN_58972850() {
    __asm {
        // 0x58972850: push esi
        __asm _emit 0x56
        // 0x58972851: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58972853: push edi
        __asm _emit 0x57
        // 0x58972854: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58972856: mov ecx, 0xa
        __asm _emit 0xB9
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897285B: lea edi, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x5897285E: mov dword ptr [esi + 0x1b0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972864: mov dword ptr [esi + 0x1ac], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897286A: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5897286D: mov dword ptr [esi + 0x1b8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972873: mov dword ptr [esi + 0x1b4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972879: push 0x60
        __asm _emit 0x6A
        __asm _emit 0x60
        // 0x5897287B: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xF3
        __asm _emit 0xAB
        // 0x5897287D: mov ecx, 0x5f
        __asm _emit 0xB9
        __asm _emit 0x5F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972882: lea edi, [esi + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x30
        // 0x58972885: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xF3
        __asm _emit 0xAB
        // 0x58972887: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5897288B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5897288D: mov dword ptr [esi + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x40
        // 0x58972890: mov dword ptr [esi + 0x154], 0x42b40000
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xB4
        __asm _emit 0x42
        // 0x5897289A: mov byte ptr [esi + 0x180], 0xff
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x589728A1: mov dword ptr [esi + 0x14c], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589728AB: mov byte ptr [esi + 0x182], 1
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x589728B2: call 0x589724b0
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589728B7: push 0x60
        __asm _emit 0x6A
        __asm _emit 0x60
        // 0x589728B9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x589728BB: call 0x58972500
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589728C0: mov byte ptr [esi + 0x1aa], 1
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0xAA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x589728C7: pop edi
        __asm _emit 0x5F
        // 0x589728C8: pop esi
        __asm _emit 0x5E
        // 0x589728C9: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
