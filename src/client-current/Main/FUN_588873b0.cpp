// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588873B0 .. +0x152 bytes.
extern "C" __declspec(naked) void FUN_588873b0() {
    __asm {
        // 0x588873B0: mov ax, word ptr [esp + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588873B5: push esi
        __asm _emit 0x56
        // 0x588873B6: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588873B8: mov ecx, 2
        __asm _emit 0xB9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588873BD: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588873C0: jb 0x588874fe
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588873C6: mov word ptr [esi + 0xe0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588873CD: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588873D1: jne 0x58887483
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588873D7: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588873DA: cmp dword ptr [eax + 0x164], 0x43
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x43
        // 0x588873E1: jle 0x588873f5
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x588873E3: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588873E9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588873EB: je 0x588873f5
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588873ED: mov eax, dword ptr [eax + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588873F3: jmp 0x588873f7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588873F5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588873F7: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588873FA: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588873FD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588873FF: je 0x58887429
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58887401: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58887404: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58887407: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5888740A: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5888740D: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58887410: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58887412: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58887415: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58887417: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5888741A: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5888741D: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58887420: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58887423: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58887426: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58887429: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5888742C: cmp dword ptr [eax + 0x164], 0x44
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x44
        // 0x58887433: jle 0x58887447
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x58887435: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888743B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888743D: je 0x58887447
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5888743F: mov eax, dword ptr [eax + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887445: jmp 0x58887449
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58887447: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58887449: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x5888744C: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5888744F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58887451: je 0x588874fe
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887457: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5888745A: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5888745D: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58887460: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58887463: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58887466: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58887468: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5888746B: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5888746D: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58887470: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58887473: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58887476: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58887479: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5888747C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5888747F: pop esi
        __asm _emit 0x5E
        // 0x58887480: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58887483: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58887487: jne 0x588874ea
        __asm _emit 0x75
        __asm _emit 0x61
        // 0x58887489: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5888748C: cmp dword ptr [eax + 0x164], 0x45
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x45
        // 0x58887493: jle 0x588874a7
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x58887495: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888749B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888749D: je 0x588874a7
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5888749F: mov eax, dword ptr [eax + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588874A5: jmp 0x588874a9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588874A7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588874A9: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588874AC: push eax
        __asm _emit 0x50
        // 0x588874AD: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0xA2
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588874B2: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588874B5: cmp dword ptr [eax + 0x164], 0x46
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x46
        // 0x588874BC: jle 0x588874db
        __asm _emit 0x7E
        __asm _emit 0x1D
        // 0x588874BE: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588874C4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588874C6: je 0x588874db
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x588874C8: mov eax, dword ptr [eax + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588874CE: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588874D1: push eax
        __asm _emit 0x50
        // 0x588874D2: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0xA1
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588874D7: pop esi
        __asm _emit 0x5E
        // 0x588874D8: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588874DB: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588874DE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588874E0: push eax
        __asm _emit 0x50
        // 0x588874E1: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0xA1
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588874E6: pop esi
        __asm _emit 0x5E
        // 0x588874E7: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588874EA: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588874ED: mov dword ptr [ecx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588874F4: mov edx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x588874F7: mov dword ptr [edx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588874FE: pop esi
        __asm _emit 0x5E
        // 0x588874FF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
