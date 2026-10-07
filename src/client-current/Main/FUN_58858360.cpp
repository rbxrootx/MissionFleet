// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58858360 .. +0x3D bytes.
// Source symbol alias: FUN_58858360.
extern "C" __declspec(naked) void FUN_58858360() {
    __asm {
        // 0x58858360: push ebx
        __asm _emit 0x53
        // 0x58858361: mov ebx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58858365: push esi
        __asm _emit 0x56
        // 0x58858366: push edi
        __asm _emit 0x57
        // 0x58858367: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5885836B: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x5885836D: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5885836F: mov ecx, dword ptr [esi + ebx*4 + 0xa50]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x9E
        __asm _emit 0x50
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858376: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885837B: push eax
        __asm _emit 0x50
        // 0x5885837C: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0xEF
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58858381: lea eax, [esi + ebx*4 + 0x898]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x9E
        __asm _emit 0x98
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858388: push edi
        __asm _emit 0x57
        // 0x58858389: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        // 0x5885838B: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58858391: push eax
        __asm _emit 0x50
        // 0x58858392: call 0x587a15e0
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0x92
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58858397: pop edi
        __asm _emit 0x5F
        // 0x58858398: pop esi
        __asm _emit 0x5E
        // 0x58858399: pop ebx
        __asm _emit 0x5B
        // 0x5885839A: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
