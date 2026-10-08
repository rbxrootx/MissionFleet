// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 81 bytes in 1 exact ranges.
// Source symbol alias: FUN_588e98e0.

// Ghidra body range 0x588E98E0..0x588E9931; 81 mapped bytes.
extern "C" __declspec(naked) void FUN_588e98e0_segment_00() {
    __asm {
        // 0x588E98E0: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588E98E4: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588E98E6: push esi
        __asm _emit 0x56
        // 0x588E98E7: push edi
        __asm _emit 0x57
        // 0x588E98E8: lea esi, [edx + 0x48]
        __asm _emit 0x8D
        __asm _emit 0x72
        __asm _emit 0x48
        // 0x588E98EB: lea edi, [eax + 0x48]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x48
        // 0x588E98EE: mov ecx, 0x2e
        __asm _emit 0xB9
        __asm _emit 0x2E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E98F3: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x588E98F5: mov ecx, dword ptr [edx + 0xcd0]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xD0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E98FB: mov dword ptr [eax + 0xcd0], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xD0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9901: mov ecx, dword ptr [edx + 0xcd4]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xD4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9907: mov dword ptr [eax + 0xcd4], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xD4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E990D: mov ecx, dword ptr [edx + 0xcd8]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xD8
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9913: mov dword ptr [eax + 0xcd8], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xD8
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9919: mov edx, dword ptr [edx + 0xcdc]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0xDC
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E991F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588E9921: mov dword ptr [eax + 0xcdc], edx
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xDC
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9927: call 0x588e8570
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E992C: pop edi
        __asm _emit 0x5F
        // 0x588E992D: pop esi
        __asm _emit 0x5E
        // 0x588E992E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
