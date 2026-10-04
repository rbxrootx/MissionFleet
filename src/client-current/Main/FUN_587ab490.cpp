// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587AB490 .. +0x34 bytes.
// Source symbol alias: FUN_587ab490.
extern "C" __declspec(naked) void FUN_587ab490() {
    __asm {
        // 0x587AB490: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587AB494: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587AB498: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587AB49A: push esi
        __asm _emit 0x56
        // 0x587AB49B: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587AB49E: push edi
        __asm _emit 0x57
        // 0x587AB49F: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AB4A3: lea ecx, [eax*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB4AA: lea esi, [ecx + edi]
        __asm _emit 0x8D
        __asm _emit 0x34
        __asm _emit 0x39
        // 0x587AB4AD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AB4AF: jbe 0x587ab4bd
        __asm _emit 0x76
        __asm _emit 0x0C
        // 0x587AB4B1: push ecx
        __asm _emit 0x51
        // 0x587AB4B2: push edx
        __asm _emit 0x52
        // 0x587AB4B3: push ecx
        __asm _emit 0x51
        // 0x587AB4B4: push edi
        __asm _emit 0x57
        // 0x587AB4B5: call 0x5897cc54
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0x17
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB4BA: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587AB4BD: pop edi
        __asm _emit 0x5F
        // 0x587AB4BE: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587AB4C0: pop esi
        __asm _emit 0x5E
        // 0x587AB4C1: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
