// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58789890 .. +0x34 bytes.
// Source symbol alias: FUN_58789890.
extern "C" __declspec(naked) void FUN_58789890() {
    __asm {
        // 0x58789890: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58789892: push esi
        __asm _emit 0x56
        // 0x58789893: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58789895: push 0x48
        __asm _emit 0x6A
        __asm _emit 0x48
        // 0x58789897: push eax
        __asm _emit 0x50
        // 0x58789898: mov dword ptr [esi + 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x4C
        // 0x5878989B: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x5878989E: mov dword ptr [esi + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x587898A1: mov dword ptr [esi + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x587898A4: mov dword ptr [esi + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x587898A7: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x587898AA: lea eax, [esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587898AD: push eax
        __asm _emit 0x50
        // 0x587898AE: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0x33
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x587898B3: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587898B6: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587898B8: mov word ptr [esi + 0x64], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x587898BC: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587898BE: pop esi
        __asm _emit 0x5E
        // 0x587898BF: jmp 0x58789850
        __asm _emit 0xE9
        __asm _emit 0x8C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
    }
}
