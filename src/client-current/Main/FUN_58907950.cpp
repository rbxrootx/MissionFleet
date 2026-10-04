// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58907950 .. +0x37 bytes.
// Source symbol alias: FUN_58907950.
extern "C" __declspec(naked) void FUN_58907950() {
    __asm {
        // 0x58907950: push esi
        __asm _emit 0x56
        // 0x58907951: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58907953: cmp dword ptr [esi + 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58907957: je 0x58907983
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x58907959: mov eax, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x1C
        // 0x5890795C: fld dword ptr [esp + 8]
        __asm _emit 0xD9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58907960: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58907962: mov edx, dword ptr [ecx + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x44
        // 0x58907965: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58907967: push ecx
        __asm _emit 0x51
        // 0x58907968: fstp dword ptr [esp]
        __asm _emit 0xD9
        __asm _emit 0x1C
        __asm _emit 0x24
        // 0x5890796B: push eax
        __asm _emit 0x50
        // 0x5890796C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5890796E: fld dword ptr [esp + 0xc]
        __asm _emit 0xD9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58907972: mov eax, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x1C
        // 0x58907975: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58907977: mov edx, dword ptr [ecx + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x40
        // 0x5890797A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5890797C: push ecx
        __asm _emit 0x51
        // 0x5890797D: fstp dword ptr [esp]
        __asm _emit 0xD9
        __asm _emit 0x1C
        __asm _emit 0x24
        // 0x58907980: push eax
        __asm _emit 0x50
        // 0x58907981: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58907983: pop esi
        __asm _emit 0x5E
        // 0x58907984: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
