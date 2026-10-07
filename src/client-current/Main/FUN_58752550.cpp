// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58752550 .. +0x95 bytes.
// Source symbol alias: FUN_58752550.
extern "C" __declspec(naked) void FUN_58752550() {
    __asm {
        // 0x58752550: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58752554: push ebx
        __asm _emit 0x53
        // 0x58752555: push ebp
        __asm _emit 0x55
        // 0x58752556: push edi
        __asm _emit 0x57
        // 0x58752557: push eax
        __asm _emit 0x50
        // 0x58752558: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5875255A: call 0x587522f0
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875255F: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58752561: mov eax, dword ptr [edi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58752567: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58752569: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x5875256B: jne 0x587525a6
        __asm _emit 0x75
        __asm _emit 0x39
        // 0x5875256D: mov ecx, dword ptr [eax + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x54
        // 0x58752570: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x58752572: je 0x5875258c
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x58752574: push esi
        __asm _emit 0x56
        // 0x58752575: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58752577: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58752579: mov esi, dword ptr [ecx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x54
        // 0x5875257C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5875257E: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58752580: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x58752582: je 0x5875258b
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58752584: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x58752587: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x58752589: jne 0x58752575
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x5875258B: pop esi
        __asm _emit 0x5E
        // 0x5875258C: mov dword ptr [edi + 0x90], ebp
        __asm _emit 0x89
        __asm _emit 0xAF
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58752592: mov dword ptr [edi + 0x94], ebp
        __asm _emit 0x89
        __asm _emit 0xAF
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58752598: mov dword ptr [edi + 0x98], ebp
        __asm _emit 0x89
        __asm _emit 0xAF
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875259E: mov dword ptr [edi + 0xa0], ebp
        __asm _emit 0x89
        __asm _emit 0xAF
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587525A4: jmp 0x587525d1
        __asm _emit 0xEB
        __asm _emit 0x2B
        // 0x587525A6: cmp ebx, dword ptr [edi + 0x94]
        __asm _emit 0x3B
        __asm _emit 0x9F
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587525AC: jne 0x587525bf
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x587525AE: mov ecx, dword ptr [ebx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x50
        // 0x587525B1: mov dword ptr [edi + 0x94], ecx
        __asm _emit 0x89
        __asm _emit 0x8F
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587525B7: mov edx, dword ptr [ebx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x50
        // 0x587525BA: mov dword ptr [edx + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x587525BD: jmp 0x587525d1
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x587525BF: mov eax, dword ptr [ebx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x50
        // 0x587525C2: mov ecx, dword ptr [ebx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x54
        // 0x587525C5: mov dword ptr [eax + 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x54
        // 0x587525C8: mov edx, dword ptr [ebx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x54
        // 0x587525CB: mov eax, dword ptr [ebx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x50
        // 0x587525CE: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x587525D1: cmp ebx, ebp
        __asm _emit 0x3B
        __asm _emit 0xDD
        // 0x587525D3: je 0x587525df
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587525D5: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x587525D7: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587525D9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587525DB: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587525DD: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587525DF: pop edi
        __asm _emit 0x5F
        // 0x587525E0: pop ebp
        __asm _emit 0x5D
        // 0x587525E1: pop ebx
        __asm _emit 0x5B
        // 0x587525E2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
