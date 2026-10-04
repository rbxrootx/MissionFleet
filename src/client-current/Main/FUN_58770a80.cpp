// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58770A80 .. +0x39 bytes.
// Source symbol alias: FUN_58770a80.
extern "C" __declspec(naked) void FUN_58770a80() {
    __asm {
        // 0x58770A80: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58770A84: push esi
        __asm _emit 0x56
        // 0x58770A85: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58770A87: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770A8D: push eax
        __asm _emit 0x50
        // 0x58770A8E: push ecx
        __asm _emit 0x51
        // 0x58770A8F: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58770A95: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770A9B: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x58770A9E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58770AA0: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x58770AA2: inc eax
        __asm _emit 0x40
        // 0x58770AA3: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58770AA5: jne 0x58770aa0
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x58770AA7: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58770AA9: mov dword ptr [esi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770AAF: mov dword ptr [esi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770AB5: pop esi
        __asm _emit 0x5E
        // 0x58770AB6: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
