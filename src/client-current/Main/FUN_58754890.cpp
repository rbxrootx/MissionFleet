// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58754890 .. +0xCB bytes.
// Source symbol alias: FUN_58754890.
extern "C" __declspec(naked) void FUN_58754890() {
    __asm {
        // 0x58754890: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58754893: push ebx
        __asm _emit 0x53
        // 0x58754894: push ebp
        __asm _emit 0x55
        // 0x58754895: push esi
        __asm _emit 0x56
        // 0x58754896: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58754898: mov ebx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x5875489B: push edi
        __asm _emit 0x57
        // 0x5875489C: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x5875489F: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587548A1: sub ecx, edi
        __asm _emit 0x2B
        __asm _emit 0xCF
        // 0x587548A3: mov eax, 0x38e38e39
        __asm _emit 0xB8
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0xE3
        __asm _emit 0x38
        // 0x587548A8: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587548AA: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x587548AD: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587548AF: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587548B2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587548B4: jne 0x587548ba
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x587548B6: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587548B8: jmp 0x587548ed
        __asm _emit 0xEB
        __asm _emit 0x33
        // 0x587548BA: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587548BC: jbe 0x587548c3
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587548BE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x83
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x587548C3: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587548C7: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587548C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587548CB: je 0x587548d1
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587548CD: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x587548CF: je 0x587548d6
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587548D1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x83
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x587548D6: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587548DA: sub ecx, edi
        __asm _emit 0x2B
        __asm _emit 0xCF
        // 0x587548DC: mov eax, 0x38e38e39
        __asm _emit 0xB8
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0xE3
        __asm _emit 0x38
        // 0x587548E1: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587548E3: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x587548E6: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x587548E8: shr edi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x1F
        // 0x587548EB: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x587548ED: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587548F1: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587548F5: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587548F9: push ecx
        __asm _emit 0x51
        // 0x587548FA: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587548FC: push edx
        __asm _emit 0x52
        // 0x587548FD: push eax
        __asm _emit 0x50
        // 0x587548FE: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58754900: call 0x587540c0
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58754905: mov ebx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x58754908: cmp ebx, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x5875490B: jbe 0x58754912
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5875490D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0x83
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58754912: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x58754914: mov ebp, esi
        __asm _emit 0x8B
        __asm _emit 0xEE
        // 0x58754916: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5875491A: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5875491C: jne 0x58754938
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x5875491E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x83
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58754923: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58754925: lea ecx, [edi + edi*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xFF
        // 0x58754928: lea edi, [ebx + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0xCB
        // 0x5875492B: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x5875492E: ja 0x58754943
        __asm _emit 0x77
        __asm _emit 0x13
        // 0x58754930: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58754932: je 0x5875493c
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58754934: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x58754936: jmp 0x5875493e
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x58754938: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5875493A: jmp 0x58754925
        __asm _emit 0xEB
        __asm _emit 0xE9
        // 0x5875493C: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5875493E: cmp edi, dword ptr [esi + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x58754941: jae 0x58754948
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x58754943: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x83
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58754948: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875494C: mov dword ptr [eax + 4], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x5875494F: pop edi
        __asm _emit 0x5F
        // 0x58754950: pop esi
        __asm _emit 0x5E
        // 0x58754951: mov dword ptr [eax], ebp
        __asm _emit 0x89
        __asm _emit 0x28
        // 0x58754953: pop ebp
        __asm _emit 0x5D
        // 0x58754954: pop ebx
        __asm _emit 0x5B
        // 0x58754955: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58754958: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
