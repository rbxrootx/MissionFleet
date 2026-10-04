// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588FD970 .. +0x109 bytes.
// Source symbol alias: FUN_588fd970.
extern "C" __declspec(naked) void FUN_588fd970() {
    __asm {
        // 0x588FD970: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588FD972: push 0x5898a483
        __asm _emit 0x68
        __asm _emit 0x83
        __asm _emit 0xA4
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588FD977: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD97D: push eax
        __asm _emit 0x50
        // 0x588FD97E: push ecx
        __asm _emit 0x51
        // 0x588FD97F: push ebx
        __asm _emit 0x53
        // 0x588FD980: push ebp
        __asm _emit 0x55
        // 0x588FD981: push esi
        __asm _emit 0x56
        // 0x588FD982: push edi
        __asm _emit 0x57
        // 0x588FD983: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588FD988: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588FD98A: push eax
        __asm _emit 0x50
        // 0x588FD98B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FD98F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD995: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FD997: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FD99B: mov edi, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FD99F: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FD9A3: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588FD9A7: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588FD9AB: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588FD9AF: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588FD9B3: push edi
        __asm _emit 0x57
        // 0x588FD9B4: push eax
        __asm _emit 0x50
        // 0x588FD9B5: push ecx
        __asm _emit 0x51
        // 0x588FD9B6: push ebp
        __asm _emit 0x55
        // 0x588FD9B7: push ebx
        __asm _emit 0x53
        // 0x588FD9B8: push edx
        __asm _emit 0x52
        // 0x588FD9B9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FD9BB: call 0x587c9340
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0xB9
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588FD9C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FD9C2: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD9C7: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588FD9CB: mov dword ptr [esi], 0x589a225c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x5C
        __asm _emit 0x22
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588FD9D1: mov byte ptr [esi + 0xfc], al
        __asm _emit 0x88
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD9D7: mov dword ptr [esi + 0x100], 0xc20ae06b
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x6B
        __asm _emit 0xE0
        __asm _emit 0x0A
        __asm _emit 0xC2
        // 0x588FD9E1: mov dword ptr [esi + 0x104], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD9E7: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0xF2
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FD9EC: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FD9EF: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FD9F3: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588FD9F8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FD9FA: je 0x588fda49
        __asm _emit 0x74
        __asm _emit 0x4D
        // 0x588FD9FC: mov ecx, dword ptr [0x58a24734]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FDA02: cmp dword ptr [ecx + 0x160], 3
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x588FDA09: jle 0x588fda22
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588FDA0B: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FDA12: je 0x588fda22
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588FDA14: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FDA1A: add ecx, 0xc0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FDA20: jmp 0x588fda24
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FDA22: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588FDA24: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FDA2A: push edi
        __asm _emit 0x57
        // 0x588FDA2B: add ebp, 2
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x02
        // 0x588FDA2E: push ebp
        __asm _emit 0x55
        // 0x588FDA2F: add ebx, 0x98
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FDA35: push ebx
        __asm _emit 0x53
        // 0x588FDA36: push ecx
        __asm _emit 0x51
        // 0x588FDA37: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FDA3D: push esi
        __asm _emit 0x56
        // 0x588FDA3E: push ecx
        __asm _emit 0x51
        // 0x588FDA3F: push edx
        __asm _emit 0x52
        // 0x588FDA40: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FDA42: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0x03
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588FDA47: jmp 0x588fda4b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FDA49: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FDA4B: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x588FDA4D: push 0x3e
        __asm _emit 0x6A
        __asm _emit 0x3E
        // 0x588FDA4F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FDA51: mov byte ptr [esp + 0x28], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x588FDA56: mov dword ptr [esi + 0x104], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FDA5C: call 0x587c9780
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0xBD
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588FDA61: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588FDA63: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FDA67: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FDA6E: pop ecx
        __asm _emit 0x59
        // 0x588FDA6F: pop edi
        __asm _emit 0x5F
        // 0x588FDA70: pop esi
        __asm _emit 0x5E
        // 0x588FDA71: pop ebp
        __asm _emit 0x5D
        // 0x588FDA72: pop ebx
        __asm _emit 0x5B
        // 0x588FDA73: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588FDA76: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
