// FUN_587B1F90: copy two optional 0x2B-DWORD records and initialize their
// associated return values. Both verified child builders pass the records
// from their existing data paths. The 151-byte stream is preserved exactly;
// record-field and FUN_5876BF40 semantics remain unresolved.
// See docs/current-main-dual-record-child-setup.md.
// Source symbol alias: FUN_587b1f90.
extern "C" __declspec(naked) void FUN_587b1f90() {
    __asm {
        // 0x587B1F90: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B1F94: push ebx
        __asm _emit 0x53
        // 0x587B1F95: push esi
        __asm _emit 0x56
        // 0x587B1F96: push edi
        __asm _emit 0x57
        // 0x587B1F97: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x587B1F99: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B1F9B: je 0x587b1fdb
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x587B1F9D: mov cl, byte ptr [eax + 0x9b]
        __asm _emit 0x8A
        __asm _emit 0x88
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1FA3: and cl, 0xf
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x0F
        // 0x587B1FA6: cmp cl, 1
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x01
        // 0x587B1FA9: lea edi, [ebx + 0x270]
        __asm _emit 0x8D
        __asm _emit 0xBB
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1FAF: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587B1FB1: mov ecx, 0x2b
        __asm _emit 0xB9
        __asm _emit 0x2B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1FB6: push 0x78
        __asm _emit 0x6A
        __asm _emit 0x78
        // 0x587B1FB8: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x587B1FBA: jne 0x587b1fc0
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x587B1FBC: push 0x50
        __asm _emit 0x6A
        __asm _emit 0x50
        // 0x587B1FBE: jmp 0x587b1fc8
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x587B1FC0: movzx edx, word ptr [eax + 0x9c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1FC7: push edx
        __asm _emit 0x52
        // 0x587B1FC8: push 0x3fff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x3F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1FCD: call 0x5876bf40
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0x9F
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587B1FD2: mov dword ptr [ebx + 0x26c], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1FD8: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587B1FDB: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B1FDF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B1FE1: je 0x587b2021
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x587B1FE3: mov cl, byte ptr [eax + 0x9b]
        __asm _emit 0x8A
        __asm _emit 0x88
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1FE9: and cl, 0xf
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x0F
        // 0x587B1FEC: cmp cl, 1
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x01
        // 0x587B1FEF: lea edi, [ebx + 0x324]
        __asm _emit 0x8D
        __asm _emit 0xBB
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1FF5: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587B1FF7: mov ecx, 0x2b
        __asm _emit 0xB9
        __asm _emit 0x2B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1FFC: push 0x78
        __asm _emit 0x6A
        __asm _emit 0x78
        // 0x587B1FFE: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x587B2000: jne 0x587b2006
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x587B2002: push 0x50
        __asm _emit 0x6A
        __asm _emit 0x50
        // 0x587B2004: jmp 0x587b200e
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x587B2006: movzx edx, word ptr [eax + 0x9c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B200D: push edx
        __asm _emit 0x52
        // 0x587B200E: push 0x3fff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x3F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2013: call 0x5876bf40
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x9F
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587B2018: mov dword ptr [ebx + 0x320], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B201E: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587B2021: pop edi
        __asm _emit 0x5F
        // 0x587B2022: pop esi
        __asm _emit 0x5E
        // 0x587B2023: pop ebx
        __asm _emit 0x5B
        // 0x587B2024: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
