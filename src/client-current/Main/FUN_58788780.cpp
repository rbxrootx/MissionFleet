// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58788780 .. +0xFF bytes.
// Source symbol alias: FUN_58788780.
extern "C" __declspec(naked) void FUN_58788780() {
    __asm {
        // 0x58788780: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58788782: push 0x5897faa2
        __asm _emit 0x68
        __asm _emit 0xA2
        __asm _emit 0xFA
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58788787: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878878D: push eax
        __asm _emit 0x50
        // 0x5878878E: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58788791: push ebx
        __asm _emit 0x53
        // 0x58788792: push ebp
        __asm _emit 0x55
        // 0x58788793: push esi
        __asm _emit 0x56
        // 0x58788794: push edi
        __asm _emit 0x57
        // 0x58788795: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5878879A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5878879C: push eax
        __asm _emit 0x50
        // 0x5878879D: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587887A1: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587887A7: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587887A9: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587887AD: lea ebp, [esi + 0x858]
        __asm _emit 0x8D
        __asm _emit 0xAE
        __asm _emit 0x58
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587887B3: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587887B5: mov dword ptr [esi], 0x58996b24
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x24
        __asm _emit 0x6B
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587887BB: call 0x588ffdb0
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0x75
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587887C0: lea ebx, [esi + 0x870]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0x70
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587887C6: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587887C8: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587887CA: mov dword ptr [esp + 0x24], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587887CE: call 0x588ffdb0
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0x75
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587887D3: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587887D5: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587887D7: mov byte ptr [esp + 0x28], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        // 0x587887DC: mov dword ptr [esi + 4], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x587887DF: mov dword ptr [esi + 8], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x587887E2: mov dword ptr [esi + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587887E5: call 0x58752830
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0xA0
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587887EA: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x587887EC: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587887EE: call 0x58752830
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587887F3: push 0x98
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587887F8: mov dword ptr [esi + 0x914], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x14
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587887FE: mov dword ptr [esi + 0x888], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x88
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788804: mov dword ptr [esi + 0x910], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878880A: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x44
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x5878880F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58788812: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58788816: mov byte ptr [esp + 0x24], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5878881B: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5878881D: je 0x5878882e
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x5878881F: push edi
        __asm _emit 0x57
        // 0x58788820: push 0x1000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788825: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58788827: call 0x588c60e0
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0xD8
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5878882C: jmp 0x58788830
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5878882E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58788830: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788835: mov byte ptr [esp + 0x28], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        // 0x5878883A: mov dword ptr [esi + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x5878883D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x44
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58788842: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58788845: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58788849: mov byte ptr [esp + 0x24], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x03
        // 0x5878884E: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58788850: je 0x58788866
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x58788852: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58788854: push edi
        __asm _emit 0x57
        // 0x58788855: push 0x58996b28
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x6B
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5878885A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5878885C: call 0x588f3d70
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0xB5
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58788861: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x58788864: jmp 0x58788869
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x58788866: mov dword ptr [esi + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x58788869: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5878886B: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5878886F: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788876: pop ecx
        __asm _emit 0x59
        // 0x58788877: pop edi
        __asm _emit 0x5F
        // 0x58788878: pop esi
        __asm _emit 0x5E
        // 0x58788879: pop ebp
        __asm _emit 0x5D
        // 0x5878887A: pop ebx
        __asm _emit 0x5B
        // 0x5878887B: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x5878887E: ret
        __asm _emit 0xC3
    }
}
