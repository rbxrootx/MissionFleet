// FUN_587B0860: transfer three record-backed signed scalars into child state.
// Both verified child builders pass sign-extended record words. Field meanings
// and the runtime effect are unresolved; the mapped instruction stream is exact.
// See docs/current-main-child-record-scalar-update.md.
// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B0860 .. +0x55 bytes.
// Source symbol alias: FUN_587b0860.
extern "C" __declspec(naked) void FUN_587b0860() {
    __asm {
        // 0x587B0860: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B0864: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B0868: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x587B086B: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x587B086D: lea edx, [edx + edx*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x92
        // 0x587B0870: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x587B0872: mov dword ptr [ecx + 0xb4], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0878: mov dword ptr [ecx + 0xb0], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B087E: je 0x587b0894
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x587B0880: mov dword ptr [ecx + 0xfc], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587B088A: mov dword ptr [ecx + 0xd4], 0x64
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0894: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587B0898: push esi
        __asm _emit 0x56
        // 0x587B0899: lea esi, [edx + edx*4]
        __asm _emit 0x8D
        __asm _emit 0x34
        __asm _emit 0x92
        // 0x587B089C: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x587B089E: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587B08A0: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x587B08A2: setg dl
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC2
        // 0x587B08A5: mov dword ptr [ecx + 0xc4], esi
        __asm _emit 0x89
        __asm _emit 0xB1
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B08AB: pop esi
        __asm _emit 0x5E
        // 0x587B08AC: mov dword ptr [ecx + 0xc8], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B08B2: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
