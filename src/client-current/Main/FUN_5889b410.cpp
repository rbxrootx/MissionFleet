// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 379 bytes in 3 exact ranges.
// Source symbol alias: FUN_5889b410.

// Ghidra body range 0x5889B410..0x5889B47A; 106 mapped bytes.
extern "C" __declspec(naked) void FUN_5889b410_segment_00() {
    __asm {
        // 0x5889B410: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5889B412: push 0x58987598
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889B417: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B41D: push eax
        __asm _emit 0x50
        // 0x5889B41E: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x5889B421: push ebx
        __asm _emit 0x53
        // 0x5889B422: push ebp
        __asm _emit 0x55
        // 0x5889B423: push esi
        __asm _emit 0x56
        // 0x5889B424: push edi
        __asm _emit 0x57
        // 0x5889B425: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889B42A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5889B42C: push eax
        __asm _emit 0x50
        // 0x5889B42D: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5889B431: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B437: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5889B439: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5889B43D: mov dword ptr [ebx], 0x589a01a8
        __asm _emit 0xC7
        __asm _emit 0x03
        __asm _emit 0xA8
        __asm _emit 0x01
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889B443: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5889B445: mov dword ptr [esp + 0x24], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5889B449: lea esi, [ebx + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x73
        __asm _emit 0x64
        // 0x5889B44C: lea edi, [ebp + 2]
        __asm _emit 0x8D
        __asm _emit 0x7D
        __asm _emit 0x02
        // 0x5889B44F: nop
        __asm _emit 0x90
        // 0x5889B450: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889B452: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5889B454: je 0x5889b460
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5889B456: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889B458: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889B45A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889B45C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889B45E: mov dword ptr [esi], ebp
        __asm _emit 0x89
        __asm _emit 0x2E
        // 0x5889B460: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5889B463: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x5889B466: jne 0x5889b450
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x5889B468: lea esi, [ebx + 0x74]
        __asm _emit 0x8D
        __asm _emit 0x73
        __asm _emit 0x74
        // 0x5889B46B: mov dword ptr [esp + 0x18], 9
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B473: mov ebx, 0x20
        __asm _emit 0xBB
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B478: jmp 0x5889b480
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x5889B480..0x5889B4B8; 56 mapped bytes.
extern "C" __declspec(naked) void FUN_5889b410_segment_01() {
    __asm {
        // 0x5889B480: mov edi, 2
        __asm _emit 0xBF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B485: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889B487: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5889B489: je 0x5889b495
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5889B48B: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889B48D: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889B48F: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889B491: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889B493: mov dword ptr [esi], ebp
        __asm _emit 0x89
        __asm _emit 0x2E
        // 0x5889B495: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5889B498: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x5889B49B: jne 0x5889b485
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x5889B49D: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5889B4A0: jne 0x5889b480
        __asm _emit 0x75
        __asm _emit 0xDE
        // 0x5889B4A2: sub dword ptr [esp + 0x18], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        // 0x5889B4A7: jne 0x5889b473
        __asm _emit 0x75
        __asm _emit 0xCA
        // 0x5889B4A9: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5889B4AD: add esi, 0xa74
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x74
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B4B3: lea ebx, [edi + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x5F
        __asm _emit 0x20
        // 0x5889B4B6: jmp 0x5889b4c0
        __asm _emit 0xEB
        __asm _emit 0x08
    }
}

// Ghidra body range 0x5889B4C0..0x5889B599; 217 mapped bytes.
extern "C" __declspec(naked) void FUN_5889b410_segment_02() {
    __asm {
        // 0x5889B4C0: mov edi, 2
        __asm _emit 0xBF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B4C5: mov ecx, dword ptr [esi - 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889B4CB: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5889B4CD: je 0x5889b4dd
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889B4CF: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889B4D1: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889B4D3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889B4D5: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889B4D7: mov dword ptr [esi - 0x100], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889B4DD: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889B4DF: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5889B4E1: je 0x5889b4ed
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5889B4E3: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889B4E5: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889B4E7: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889B4E9: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889B4EB: mov dword ptr [esi], ebp
        __asm _emit 0x89
        __asm _emit 0x2E
        // 0x5889B4ED: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5889B4F0: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x5889B4F3: jne 0x5889b4c5
        __asm _emit 0x75
        __asm _emit 0xD0
        // 0x5889B4F5: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5889B4F8: jne 0x5889b4c0
        __asm _emit 0x75
        __asm _emit 0xC6
        // 0x5889B4FA: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5889B4FE: mov ecx, dword ptr [eax + 0xb80]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x80
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B504: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5889B506: je 0x5889b51a
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5889B508: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5889B50A: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x5889B50C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889B50E: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5889B510: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5889B514: mov dword ptr [ecx + 0xb80], ebp
        __asm _emit 0x89
        __asm _emit 0xA9
        __asm _emit 0x80
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B51A: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5889B51E: mov ecx, dword ptr [edx + 0xb84]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x84
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B524: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5889B526: je 0x5889b53a
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5889B528: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889B52A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889B52C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889B52E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889B530: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5889B534: mov dword ptr [eax + 0xb84], ebp
        __asm _emit 0x89
        __asm _emit 0xA8
        __asm _emit 0x84
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B53A: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5889B53E: mov ecx, dword ptr [ecx + 0xb88]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B544: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5889B546: je 0x5889b55a
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5889B548: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5889B54A: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x5889B54C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889B54E: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5889B550: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5889B554: mov dword ptr [ecx + 0xb88], ebp
        __asm _emit 0x89
        __asm _emit 0xA9
        __asm _emit 0x88
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B55A: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5889B55E: mov ecx, dword ptr [edx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x60
        // 0x5889B561: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5889B563: je 0x5889b574
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x5889B565: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889B567: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889B569: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889B56B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889B56D: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5889B571: mov dword ptr [eax + 0x60], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x60
        // 0x5889B574: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5889B578: mov dword ptr [esp + 0x24], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889B580: call 0x58902c10
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889B585: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5889B589: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B590: pop ecx
        __asm _emit 0x59
        // 0x5889B591: pop edi
        __asm _emit 0x5F
        // 0x5889B592: pop esi
        __asm _emit 0x5E
        // 0x5889B593: pop ebp
        __asm _emit 0x5D
        // 0x5889B594: pop ebx
        __asm _emit 0x5B
        // 0x5889B595: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x5889B598: ret
        __asm _emit 0xC3
    }
}
