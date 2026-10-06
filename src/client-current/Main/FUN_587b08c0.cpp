// FUN_587B08C0: shared scaled child-state update.
// Verified callers include the type-0x05 initializer and both 32-slot child
// update paths. This preserves the complete 61-byte mapped instruction stream;
// the stored field meanings and units remain unresolved.
// See docs/current-main-scaled-child-state-update.md.
// Source symbol alias: FUN_587b08c0.
extern "C" __declspec(naked) void FUN_587b08c0() {
    __asm {
        // 0x587B08C0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B08C4: push esi
        __asm _emit 0x56
        // 0x587B08C5: lea esi, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x34
        __asm _emit 0x80
        // 0x587B08C8: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x587B08CA: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587B08CC: cdq
        __asm _emit 0x99
        // 0x587B08CD: and edx, 7
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x07
        // 0x587B08D0: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B08D2: sar eax, 3
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587B08D5: mov dword ptr [ecx + 0xb8], esi
        __asm _emit 0x89
        __asm _emit 0xB1
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B08DB: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587B08DD: mov dword ptr [ecx + 0x13c], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B08E3: pop esi
        __asm _emit 0x5E
        // 0x587B08E4: je 0x587b08fa
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x587B08E6: mov dword ptr [ecx + 0x100], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587B08F0: mov dword ptr [ecx + 0xdc], 0x70
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B08FA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
