// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A7110 .. +0x84 bytes.
// Source symbol alias: FUN_587a7110.
extern "C" __declspec(naked) void FUN_587a7110() {
    __asm {
        // 0x587A7110: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587A7114: push esi
        __asm _emit 0x56
        // 0x587A7115: push edi
        __asm _emit 0x57
        // 0x587A7116: mov dword ptr [ecx + 0x98], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A711C: lea edx, [ecx + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587A711F: mov edi, 8
        __asm _emit 0xBF
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7124: mov eax, dword ptr [edx - 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0xFC
        // 0x587A7127: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A7129: je 0x587a713d
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587A712B: mov esi, dword ptr [ecx + 0x98]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7131: mov dword ptr [eax + 0x11c], esi
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7137: mov dword ptr [eax + 0x118], esi
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A713D: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587A713F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A7141: je 0x587a7155
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587A7143: mov esi, dword ptr [ecx + 0x98]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7149: mov dword ptr [eax + 0x11c], esi
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A714F: mov dword ptr [eax + 0x118], esi
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7155: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587A7158: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A715A: je 0x587a716e
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587A715C: mov esi, dword ptr [ecx + 0x98]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7162: mov dword ptr [eax + 0x11c], esi
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7168: mov dword ptr [eax + 0x118], esi
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A716E: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587A7171: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A7173: je 0x587a7187
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587A7175: mov esi, dword ptr [ecx + 0x98]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A717B: mov dword ptr [eax + 0x11c], esi
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7181: mov dword ptr [eax + 0x118], esi
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7187: add edx, 0x10
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x10
        // 0x587A718A: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x587A718D: jne 0x587a7124
        __asm _emit 0x75
        __asm _emit 0x95
        // 0x587A718F: pop edi
        __asm _emit 0x5F
        // 0x587A7190: pop esi
        __asm _emit 0x5E
        // 0x587A7191: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
