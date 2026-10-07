// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5885EAF0 .. +0x3D bytes.
// Source symbol alias: FUN_5885eaf0.
extern "C" __declspec(naked) void FUN_5885eaf0() {
    __asm {
        // 0x5885EAF0: push ebx
        __asm _emit 0x53
        // 0x5885EAF1: mov ebx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5885EAF5: push esi
        __asm _emit 0x56
        // 0x5885EAF6: push edi
        __asm _emit 0x57
        // 0x5885EAF7: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5885EAFB: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x5885EAFD: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5885EAFF: mov ecx, dword ptr [esi + ebx*4 + 0x70c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x9E
        __asm _emit 0x0C
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EB06: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EB0B: push eax
        __asm _emit 0x50
        // 0x5885EB0C: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x88
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5885EB11: lea eax, [esi + ebx*4 + 0x5e4]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x9E
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EB18: push edi
        __asm _emit 0x57
        // 0x5885EB19: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        // 0x5885EB1B: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885EB21: push eax
        __asm _emit 0x50
        // 0x5885EB22: call 0x587a15e0
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0x2A
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5885EB27: pop edi
        __asm _emit 0x5F
        // 0x5885EB28: pop esi
        __asm _emit 0x5E
        // 0x5885EB29: pop ebx
        __asm _emit 0x5B
        // 0x5885EB2A: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
