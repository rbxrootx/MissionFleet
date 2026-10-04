// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588EA420 .. +0x10A bytes.
// Source symbol alias: FUN_588ea420.
extern "C" __declspec(naked) void FUN_588ea420() {
    __asm {
        // 0x588EA420: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588EA422: push 0x58989889
        __asm _emit 0x68
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588EA427: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA42D: push eax
        __asm _emit 0x50
        // 0x588EA42E: push ecx
        __asm _emit 0x51
        // 0x588EA42F: push ebx
        __asm _emit 0x53
        // 0x588EA430: push ebp
        __asm _emit 0x55
        // 0x588EA431: push esi
        __asm _emit 0x56
        // 0x588EA432: push edi
        __asm _emit 0x57
        // 0x588EA433: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588EA438: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588EA43A: push eax
        __asm _emit 0x50
        // 0x588EA43B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588EA43F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA445: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x588EA447: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588EA44B: mov dword ptr [edi], 0x589a1468
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588EA451: mov ecx, dword ptr [edi + 0x4830]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x30
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA457: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588EA459: mov dword ptr [esp + 0x20], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA461: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588EA463: je 0x588ea473
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EA465: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EA467: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EA469: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EA46B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EA46D: mov dword ptr [edi + 0x4830], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0x30
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA473: mov ecx, dword ptr [edi + 0x4834]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x34
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA479: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588EA47B: je 0x588ea48b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EA47D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EA47F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EA481: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EA483: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EA485: mov dword ptr [edi + 0x4834], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0x34
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA48B: lea esi, [edi + 0x1008]
        __asm _emit 0x8D
        __asm _emit 0xB7
        __asm _emit 0x08
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA491: mov ebp, 0x200
        __asm _emit 0xBD
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA496: mov ecx, dword ptr [esi - 0x800]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588EA49C: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588EA49E: je 0x588ea4ae
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EA4A0: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EA4A2: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EA4A4: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EA4A6: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EA4A8: mov dword ptr [esi - 0x800], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588EA4AE: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588EA4B0: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588EA4B2: je 0x588ea4be
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588EA4B4: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EA4B6: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EA4B8: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EA4BA: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EA4BC: mov dword ptr [esi], ebx
        __asm _emit 0x89
        __asm _emit 0x1E
        // 0x588EA4BE: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588EA4C1: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x588EA4C4: jne 0x588ea496
        __asm _emit 0x75
        __asm _emit 0xD0
        // 0x588EA4C6: push 0x587536c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x36
        __asm _emit 0x75
        __asm _emit 0x58
        // 0x588EA4CB: push 0x200
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA4D0: push 0x18
        __asm _emit 0x6A
        __asm _emit 0x18
        // 0x588EA4D2: lea eax, [edi + 0x1820]
        __asm _emit 0x8D
        __asm _emit 0x87
        __asm _emit 0x20
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA4D8: push eax
        __asm _emit 0x50
        // 0x588EA4D9: mov byte ptr [esp + 0x30], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588EA4DD: call 0x5897d05b
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x2B
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EA4E2: mov eax, dword ptr [edi + 0x1814]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x14
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA4E8: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588EA4EA: je 0x588ea4f5
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588EA4EC: push eax
        __asm _emit 0x50
        // 0x588EA4ED: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x27
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EA4F2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588EA4F5: mov ecx, dword ptr [edi + 0x1808]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x08
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA4FB: push ecx
        __asm _emit 0x51
        // 0x588EA4FC: mov dword ptr [edi + 0x1814], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0x14
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA502: mov dword ptr [edi + 0x1818], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0x18
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA508: mov dword ptr [edi + 0x181c], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0x1C
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA50E: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x27
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EA513: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588EA516: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588EA51A: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA521: pop ecx
        __asm _emit 0x59
        // 0x588EA522: pop edi
        __asm _emit 0x5F
        // 0x588EA523: pop esi
        __asm _emit 0x5E
        // 0x588EA524: pop ebp
        __asm _emit 0x5D
        // 0x588EA525: pop ebx
        __asm _emit 0x5B
        // 0x588EA526: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588EA529: ret
        __asm _emit 0xC3
    }
}
