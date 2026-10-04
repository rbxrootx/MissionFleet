// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A6190 .. +0x84 bytes.
// Source symbol alias: FUN_587a6190.
extern "C" __declspec(naked) void FUN_587a6190() {
    __asm {
        // 0x587A6190: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587A6194: push esi
        __asm _emit 0x56
        // 0x587A6195: push edi
        __asm _emit 0x57
        // 0x587A6196: mov dword ptr [ecx + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A619C: lea edx, [ecx + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587A619F: mov edi, 8
        __asm _emit 0xBF
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A61A4: mov eax, dword ptr [edx - 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0xFC
        // 0x587A61A7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A61A9: je 0x587a61bd
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587A61AB: mov esi, dword ptr [ecx + 0x94]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A61B1: mov dword ptr [eax + 0x114], esi
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A61B7: mov dword ptr [eax + 0x110], esi
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A61BD: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587A61BF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A61C1: je 0x587a61d5
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587A61C3: mov esi, dword ptr [ecx + 0x94]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A61C9: mov dword ptr [eax + 0x114], esi
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A61CF: mov dword ptr [eax + 0x110], esi
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A61D5: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587A61D8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A61DA: je 0x587a61ee
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587A61DC: mov esi, dword ptr [ecx + 0x94]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A61E2: mov dword ptr [eax + 0x114], esi
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A61E8: mov dword ptr [eax + 0x110], esi
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A61EE: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587A61F1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A61F3: je 0x587a6207
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587A61F5: mov esi, dword ptr [ecx + 0x94]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A61FB: mov dword ptr [eax + 0x114], esi
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A6201: mov dword ptr [eax + 0x110], esi
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A6207: add edx, 0x10
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x10
        // 0x587A620A: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x587A620D: jne 0x587a61a4
        __asm _emit 0x75
        __asm _emit 0x95
        // 0x587A620F: pop edi
        __asm _emit 0x5F
        // 0x587A6210: pop esi
        __asm _emit 0x5E
        // 0x587A6211: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
