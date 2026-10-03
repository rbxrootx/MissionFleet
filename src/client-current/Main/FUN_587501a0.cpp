// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587501A0 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_587501a0() {
    __asm {
        // 0x587501A0: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587501A4: push esi
        __asm _emit 0x56
        // 0x587501A5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587501A7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587501A9: je 0x587501ae
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x587501AB: mov dword ptr [esi + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x587501AE: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587501B2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587501B4: je 0x587501b9
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x587501B6: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x587501B9: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587501BD: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587501C1: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587501C5: push eax
        __asm _emit 0x50
        // 0x587501C6: push ecx
        __asm _emit 0x51
        // 0x587501C7: push edx
        __asm _emit 0x52
        // 0x587501C8: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587501CA: call 0x5874fbd0
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587501CF: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587501D1: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587501D4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587501D6: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587501D8: pop esi
        __asm _emit 0x5E
        // 0x587501D9: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
