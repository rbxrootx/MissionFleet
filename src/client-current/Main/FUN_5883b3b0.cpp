// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5883B3B0 .. +0xEC bytes.
// Source symbol alias: FUN_5883b3b0.
extern "C" __declspec(naked) void FUN_5883b3b0() {
    __asm {
        // 0x5883B3B0: push ebx
        __asm _emit 0x53
        // 0x5883B3B1: push ebp
        __asm _emit 0x55
        // 0x5883B3B2: push esi
        __asm _emit 0x56
        // 0x5883B3B3: push edi
        __asm _emit 0x57
        // 0x5883B3B4: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5883B3B6: mov esi, dword ptr [edi + 0x228]
        __asm _emit 0x8B
        __asm _emit 0xB7
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B3BC: cmp esi, dword ptr [edi + 0x22c]
        __asm _emit 0x3B
        __asm _emit 0xB7
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B3C2: jbe 0x5883b3c9
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5883B3C4: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x18
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883B3C9: mov ebx, dword ptr [edi + 0x21c]
        __asm _emit 0x8B
        __asm _emit 0x9F
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B3CF: nop
        __asm _emit 0x90
        // 0x5883B3D0: mov ebp, dword ptr [edi + 0x22c]
        __asm _emit 0x8B
        __asm _emit 0xAF
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B3D6: cmp dword ptr [edi + 0x228], ebp
        __asm _emit 0x39
        __asm _emit 0xAF
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B3DC: jbe 0x5883b3e3
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5883B3DE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x18
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883B3E3: mov eax, dword ptr [edi + 0x21c]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B3E9: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5883B3EB: je 0x5883b3f1
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5883B3ED: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x5883B3EF: je 0x5883b3f6
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5883B3F1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0x18
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883B3F6: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x5883B3F8: je 0x5883b493
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B3FE: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5883B400: jne 0x5883b43f
        __asm _emit 0x75
        __asm _emit 0x3D
        // 0x5883B402: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0x18
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883B407: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5883B409: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x5883B40C: jb 0x5883b413
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5883B40E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x18
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883B413: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5883B415: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5883B419: push eax
        __asm _emit 0x50
        // 0x5883B41A: push ecx
        __asm _emit 0x51
        // 0x5883B41B: call dword ptr [0x5898c1a4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883B421: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5883B423: je 0x5883b447
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x5883B425: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5883B427: jne 0x5883b443
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x5883B429: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0x18
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883B42E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5883B430: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x5883B433: jb 0x5883b43a
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5883B435: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0x18
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883B43A: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5883B43D: jmp 0x5883b3d0
        __asm _emit 0xEB
        __asm _emit 0x91
        // 0x5883B43F: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x5883B441: jmp 0x5883b409
        __asm _emit 0xEB
        __asm _emit 0xC6
        // 0x5883B443: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x5883B445: jmp 0x5883b430
        __asm _emit 0xEB
        __asm _emit 0xE9
        // 0x5883B447: mov eax, dword ptr [edi + 0x22c]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B44D: lea ecx, [esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5883B450: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x5883B452: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5883B455: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5883B457: jle 0x5883b469
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x5883B459: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x5883B45B: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x5883B45D: push eax
        __asm _emit 0x50
        // 0x5883B45E: push ecx
        __asm _emit 0x51
        // 0x5883B45F: push eax
        __asm _emit 0x50
        // 0x5883B460: push esi
        __asm _emit 0x56
        // 0x5883B461: call 0x5897cc54
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0x17
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883B466: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5883B469: add dword ptr [edi + 0x22c], -4
        __asm _emit 0x83
        __asm _emit 0x87
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFC
        // 0x5883B470: mov eax, dword ptr [edi + 0x22c]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B476: cmp dword ptr [edi + 0x228], esi
        __asm _emit 0x39
        __asm _emit 0xB7
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B47C: ja 0x5883b482
        __asm _emit 0x77
        __asm _emit 0x04
        // 0x5883B47E: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x5883B480: jbe 0x5883b487
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5883B482: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0x17
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883B487: pop edi
        __asm _emit 0x5F
        // 0x5883B488: pop esi
        __asm _emit 0x5E
        // 0x5883B489: pop ebp
        __asm _emit 0x5D
        // 0x5883B48A: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B48F: pop ebx
        __asm _emit 0x5B
        // 0x5883B490: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5883B493: pop edi
        __asm _emit 0x5F
        // 0x5883B494: pop esi
        __asm _emit 0x5E
        // 0x5883B495: pop ebp
        __asm _emit 0x5D
        // 0x5883B496: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5883B498: pop ebx
        __asm _emit 0x5B
        // 0x5883B499: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
