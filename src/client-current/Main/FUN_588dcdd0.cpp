// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588DCDD0 .. +0x65 bytes.
// Source symbol alias: FUN_588dcdd0.
extern "C" __declspec(naked) void FUN_588dcdd0() {
    __asm {
        // 0x588DCDD0: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588DCDD4: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588DCDD8: cmp edx, 5
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588DCDDB: ja 0x588dce12
        __asm _emit 0x77
        __asm _emit 0x35
        // 0x588DCDDD: jmp dword ptr [edx*4 + 0x588dce38]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x38
        __asm _emit 0xCE
        __asm _emit 0x8D
        __asm _emit 0x58
        // 0x588DCDE4: sub dword ptr [ecx + 0x128c], eax
        __asm _emit 0x29
        __asm _emit 0x81
        __asm _emit 0x8C
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCDEA: jmp 0x588dce12
        __asm _emit 0xEB
        __asm _emit 0x26
        // 0x588DCDEC: sub dword ptr [ecx + 0x1290], eax
        __asm _emit 0x29
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCDF2: jmp 0x588dce12
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x588DCDF4: add dword ptr [ecx + 0x1294], eax
        __asm _emit 0x01
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCDFA: jmp 0x588dce12
        __asm _emit 0xEB
        __asm _emit 0x16
        // 0x588DCDFC: add dword ptr [ecx + 0x1298], eax
        __asm _emit 0x01
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCE02: jmp 0x588dce12
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x588DCE04: add dword ptr [ecx + 0x129c], eax
        __asm _emit 0x01
        __asm _emit 0x81
        __asm _emit 0x9C
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCE0A: jmp 0x588dce12
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x588DCE0C: add dword ptr [ecx + 0x12a0], eax
        __asm _emit 0x01
        __asm _emit 0x81
        __asm _emit 0xA0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCE12: push esi
        __asm _emit 0x56
        // 0x588DCE13: mov esi, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DCE19: cmp dword ptr [esi + 4], ecx
        __asm _emit 0x39
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588DCE1C: pop esi
        __asm _emit 0x5E
        // 0x588DCE1D: jne 0x588dce32
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x588DCE1F: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DCE25: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588DCE29: mov dword ptr [esp + 4], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588DCE2D: jmp 0x587e7710
        __asm _emit 0xE9
        __asm _emit 0xDE
        __asm _emit 0xA8
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588DCE32: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
