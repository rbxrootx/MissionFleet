// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 347 bytes in 1 exact ranges.
// Source symbol alias: FUN_588cd3c0.

// Ghidra body range 0x588CD3C0..0x588CD51B; 347 mapped bytes.
extern "C" __declspec(naked) void FUN_588cd3c0_segment_00() {
    __asm {
        // 0x588CD3C0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588CD3C2: push 0x58988f13
        __asm _emit 0x68
        __asm _emit 0x13
        __asm _emit 0x8F
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588CD3C7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD3CD: push eax
        __asm _emit 0x50
        // 0x588CD3CE: push ecx
        __asm _emit 0x51
        // 0x588CD3CF: push esi
        __asm _emit 0x56
        // 0x588CD3D0: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588CD3D5: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588CD3D7: push eax
        __asm _emit 0x50
        // 0x588CD3D8: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588CD3DC: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD3E2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588CD3E4: mov dword ptr [esp + 8], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588CD3E8: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588CD3EC: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588CD3F0: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588CD3F4: push eax
        __asm _emit 0x50
        // 0x588CD3F5: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588CD3F9: push ecx
        __asm _emit 0x51
        // 0x588CD3FA: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588CD3FE: push edx
        __asm _emit 0x52
        // 0x588CD3FF: push eax
        __asm _emit 0x50
        // 0x588CD400: push ecx
        __asm _emit 0x51
        // 0x588CD401: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588CD403: call 0x588d02e0
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0x2E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD408: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD40D: mov dword ptr [esp + 0x18], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD415: mov dword ptr [esi], 0x589a0d38
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x38
        __asm _emit 0x0D
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588CD41B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0xF8
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588CD420: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588CD423: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588CD427: mov byte ptr [esp + 0x14], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x588CD42C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588CD42E: je 0x588cd442
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588CD430: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588CD432: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588CD434: push 0x5898d904
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0xD9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588CD439: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588CD43B: call 0x588f3d70
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x69
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588CD440: jmp 0x588cd444
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CD442: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CD444: mov dword ptr [esi + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x588CD447: cmp dword ptr [eax + 0x164], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD44E: jle 0x588cd45e
        __asm _emit 0x7E
        __asm _emit 0x0E
        // 0x588CD450: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD456: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588CD458: je 0x588cd45e
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x588CD45A: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x588CD45C: jmp 0x588cd460
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CD45E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CD460: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588CD463: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588CD466: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588CD468: je 0x588cd492
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588CD46A: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588CD46D: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588CD470: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588CD473: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588CD476: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588CD479: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588CD47B: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588CD47E: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588CD480: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588CD483: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588CD486: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588CD489: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588CD48C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588CD48F: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588CD492: mov eax, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x588CD495: cmp dword ptr [eax + 0x164], 1
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588CD49C: jle 0x588cd4ad
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x588CD49E: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD4A4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588CD4A6: je 0x588cd4ad
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588CD4A8: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x588CD4AB: jmp 0x588cd4af
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CD4AD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CD4AF: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x588CD4B2: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588CD4B5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588CD4B7: je 0x588cd4e1
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588CD4B9: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588CD4BC: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588CD4BF: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588CD4C2: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588CD4C5: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588CD4C8: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588CD4CA: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588CD4CD: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588CD4CF: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588CD4D2: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588CD4D5: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588CD4D8: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588CD4DB: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588CD4DE: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588CD4E1: mov eax, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x588CD4E4: cmp dword ptr [eax + 0x164], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD4EB: jle 0x588cd4fb
        __asm _emit 0x7E
        __asm _emit 0x0E
        // 0x588CD4ED: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD4F3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588CD4F5: je 0x588cd4fb
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x588CD4F7: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x588CD4F9: jmp 0x588cd4fd
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CD4FB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CD4FD: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588CD500: mov ecx, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x5C
        // 0x588CD503: mov dword ptr [ecx + 0x74], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x74
        // 0x588CD506: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588CD508: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588CD50C: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD513: pop ecx
        __asm _emit 0x59
        // 0x588CD514: pop esi
        __asm _emit 0x5E
        // 0x588CD515: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588CD518: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
