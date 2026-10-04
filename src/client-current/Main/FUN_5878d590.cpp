// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5878D590 .. +0x54 bytes.
// Source symbol alias: FUN_5878d590.
extern "C" __declspec(naked) void FUN_5878d590() {
    __asm {
        // 0x5878D590: push esi
        __asm _emit 0x56
        // 0x5878D591: push edi
        __asm _emit 0x57
        // 0x5878D592: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5878D594: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5878D596: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5878D598: jne 0x5878d5a5
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x5878D59A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0xF6
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x5878D59F: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5878D5A1: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5878D5A3: je 0x5878d5a9
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5878D5A5: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5878D5A7: jmp 0x5878d5ab
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5878D5A9: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5878D5AB: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5878D5AF: lea esi, [eax*8]
        __asm _emit 0x8D
        __asm _emit 0x34
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878D5B6: sub esi, eax
        __asm _emit 0x2B
        __asm _emit 0xF0
        // 0x5878D5B8: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x5878D5BB: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x5878D5BD: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x5878D5BF: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xC6
        // 0x5878D5C1: cmp eax, dword ptr [edx + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x5878D5C4: ja 0x5878d5d5
        __asm _emit 0x77
        __asm _emit 0x0F
        // 0x5878D5C6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5878D5C8: je 0x5878d5ce
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5878D5CA: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x5878D5CC: jmp 0x5878d5d0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5878D5CE: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5878D5D0: cmp eax, dword ptr [ecx + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5878D5D3: jae 0x5878d5da
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x5878D5D5: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0xF6
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x5878D5DA: add dword ptr [edi + 4], esi
        __asm _emit 0x01
        __asm _emit 0x77
        __asm _emit 0x04
        // 0x5878D5DD: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x5878D5DF: pop edi
        __asm _emit 0x5F
        // 0x5878D5E0: pop esi
        __asm _emit 0x5E
        // 0x5878D5E1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
