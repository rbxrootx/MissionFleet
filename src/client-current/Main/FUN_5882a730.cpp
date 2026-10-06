// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5882A730 .. +0x901 bytes.
// Source symbol alias: FUN_5882a730.
// Ghidra recovers the object's vtable as CPannelCommunicatorConfigFormTab.
// Byte-matched FUN_58843380 calls this after allocating 0xB8 bytes and stores
// the returned child at +0x15C; the constructor builds paired sprite/text sets.
// Exact child roles, resources, labels, and geometry units remain uncertain.
// See docs/current-main-communicator-config-tab.md for mapped evidence.
extern "C" __declspec(naked) void FUN_5882a730() {
    __asm {
        // 0x5882A730: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5882A732: push 0x58983c43
        __asm _emit 0x68
        __asm _emit 0x43
        __asm _emit 0x3C
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882A737: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A73D: push eax
        __asm _emit 0x50
        // 0x5882A73E: push ecx
        __asm _emit 0x51
        // 0x5882A73F: push ebx
        __asm _emit 0x53
        // 0x5882A740: push ebp
        __asm _emit 0x55
        // 0x5882A741: push esi
        __asm _emit 0x56
        // 0x5882A742: push edi
        __asm _emit 0x57
        // 0x5882A743: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5882A748: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5882A74A: push eax
        __asm _emit 0x50
        // 0x5882A74B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5882A74F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A755: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5882A757: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5882A75B: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5882A75F: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5882A763: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5882A767: mov ebx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5882A76B: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5882A76F: push eax
        __asm _emit 0x50
        // 0x5882A770: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5882A774: push ecx
        __asm _emit 0x51
        // 0x5882A775: push edx
        __asm _emit 0x52
        // 0x5882A776: push ebx
        __asm _emit 0x53
        // 0x5882A777: push ebp
        __asm _emit 0x55
        // 0x5882A778: push eax
        __asm _emit 0x50
        // 0x5882A779: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5882A77B: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0x8A
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882A780: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882A786: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5882A78B: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5882A78D: mov dword ptr [esi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x50
        // 0x5882A790: mov dword ptr [esi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x54
        // 0x5882A793: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A79A: mov dword ptr [esi + 0x5c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x5C
        // 0x5882A79D: mov dword ptr [esi], 0x5899ded8
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xD8
        __asm _emit 0xDE
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5882A7A3: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882A7A9: mov eax, dword ptr [ecx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5882A7AC: push 0x5c
        __asm _emit 0x6A
        __asm _emit 0x5C
        // 0x5882A7AE: mov dword ptr [esp + 0x24], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5882A7B2: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5882A7B5: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5882A7BA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5882A7BD: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5882A7C1: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x5882A7C6: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5882A7C8: je 0x5882a7da
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x5882A7CA: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5882A7CC: push edi
        __asm _emit 0x57
        // 0x5882A7CD: push edi
        __asm _emit 0x57
        // 0x5882A7CE: push edi
        __asm _emit 0x57
        // 0x5882A7CF: push edi
        __asm _emit 0x57
        // 0x5882A7D0: push esi
        __asm _emit 0x56
        // 0x5882A7D1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882A7D3: call 0x58759f60
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0xF7
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5882A7D8: jmp 0x5882a7dc
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5882A7DA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882A7DC: push esi
        __asm _emit 0x56
        // 0x5882A7DD: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882A7DF: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5882A7E4: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x5882A7E7: call 0x58759f20
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0xF7
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5882A7EC: push 0x5c
        __asm _emit 0x6A
        __asm _emit 0x5C
        // 0x5882A7EE: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0x24
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5882A7F3: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5882A7F6: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5882A7FA: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x5882A7FF: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5882A801: je 0x5882a813
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x5882A803: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5882A805: push edi
        __asm _emit 0x57
        // 0x5882A806: push edi
        __asm _emit 0x57
        // 0x5882A807: push edi
        __asm _emit 0x57
        // 0x5882A808: push edi
        __asm _emit 0x57
        // 0x5882A809: push esi
        __asm _emit 0x56
        // 0x5882A80A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882A80C: call 0x58759f60
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0xF7
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5882A811: jmp 0x5882a815
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5882A813: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882A815: push esi
        __asm _emit 0x56
        // 0x5882A816: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882A818: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5882A81D: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5882A820: call 0x58759f20
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0xF6
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5882A825: mov dword ptr [esp + 0x38], 0x6a
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x6A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A82D: mov dword ptr [esp + 0x3c], 0x1a8
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0xA8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A835: mov dword ptr [esp + 0x34], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A83D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x5882A840: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5882A842: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0x24
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5882A847: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5882A849: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5882A84C: mov dword ptr [esp + 0x30], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5882A850: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x5882A855: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5882A857: je 0x5882a8d2
        __asm _emit 0x74
        __asm _emit 0x79
        // 0x5882A859: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5882A85C: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5882A860: cmp dword ptr [eax + 0x164], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A866: jle 0x5882a87f
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5882A868: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5882A86A: jl 0x5882a87f
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x5882A86C: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A872: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882A874: je 0x5882a87f
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5882A876: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5882A87A: mov ebp, dword ptr [eax + edx]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x10
        // 0x5882A87D: jmp 0x5882a881
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5882A87F: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5882A881: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5882A885: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x5882A888: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5882A88A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A88C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A88E: push ebx
        __asm _emit 0x53
        // 0x5882A88F: push ecx
        __asm _emit 0x51
        // 0x5882A890: push eax
        __asm _emit 0x50
        // 0x5882A891: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5882A893: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882A898: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882A89E: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x5882A8A1: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5882A8A3: je 0x5882a8cc
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x5882A8A5: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x5882A8A8: mov dword ptr [edi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x0C
        // 0x5882A8AB: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x5882A8AE: mov dword ptr [edi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x5882A8B1: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x5882A8B4: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5882A8B7: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x5882A8BA: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5882A8BD: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x5882A8C0: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5882A8C3: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x5882A8C6: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5882A8C9: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x5882A8CC: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5882A8D0: jmp 0x5882a8d4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5882A8D2: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5882A8D4: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5882A8D8: mov dword ptr [esi + eax - 0x138], edi
        __asm _emit 0x89
        __asm _emit 0xBC
        __asm _emit 0x06
        __asm _emit 0xC8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882A8DF: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x5882A8E2: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5882A8E6: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A8EB: add dword ptr [esp + 0x38], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5882A8EF: sub dword ptr [esp + 0x34], eax
        __asm _emit 0x29
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5882A8F3: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5882A8F8: jne 0x5882a840
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x42
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882A8FE: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A903: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5882A908: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5882A90B: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5882A90F: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x5882A914: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882A916: je 0x5882a950
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x5882A918: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A91A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A91C: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5882A921: lea ecx, [ebx + 0x81]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A927: push ecx
        __asm _emit 0x51
        // 0x5882A928: lea edx, [ebp + 0x108]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A92E: push edx
        __asm _emit 0x52
        // 0x5882A92F: lea ecx, [ebx + 0x72]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x72
        // 0x5882A932: push ecx
        __asm _emit 0x51
        // 0x5882A933: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882A939: lea edx, [ebp + 0x93]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A93F: push edx
        __asm _emit 0x52
        // 0x5882A940: mov edx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x68
        // 0x5882A943: push ecx
        __asm _emit 0x51
        // 0x5882A944: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A946: push edx
        __asm _emit 0x52
        // 0x5882A947: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882A949: call 0x58761090
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0x67
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5882A94E: jmp 0x5882a952
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5882A950: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882A952: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A957: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5882A95C: mov dword ptr [esi + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x5882A95F: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0x22
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5882A964: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5882A967: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5882A96B: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x5882A970: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882A972: je 0x5882a9af
        __asm _emit 0x74
        __asm _emit 0x3B
        // 0x5882A974: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A976: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A978: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5882A97D: lea ecx, [ebx + 0x95]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A983: push ecx
        __asm _emit 0x51
        // 0x5882A984: lea edx, [ebp + 0x108]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A98A: push edx
        __asm _emit 0x52
        // 0x5882A98B: lea ecx, [ebx + 0x86]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A991: push ecx
        __asm _emit 0x51
        // 0x5882A992: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882A998: lea edx, [ebp + 0x93]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A99E: push edx
        __asm _emit 0x52
        // 0x5882A99F: mov edx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x68
        // 0x5882A9A2: push ecx
        __asm _emit 0x51
        // 0x5882A9A3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A9A5: push edx
        __asm _emit 0x52
        // 0x5882A9A6: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882A9A8: call 0x58761090
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0x66
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5882A9AD: jmp 0x5882a9b1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5882A9AF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882A9B1: push 0x9c
        __asm _emit 0x68
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A9B6: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5882A9BB: mov dword ptr [esi + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x5882A9BE: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0x22
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5882A9C3: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5882A9C6: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5882A9CA: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x5882A9CF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882A9D1: je 0x5882aa0c
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x5882A9D3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A9D5: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5882A9DA: lea ecx, [ebx + 0xbd]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xBD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A9E0: push ecx
        __asm _emit 0x51
        // 0x5882A9E1: lea edx, [ebp + 0x108]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A9E7: push edx
        __asm _emit 0x52
        // 0x5882A9E8: lea ecx, [ebx + 0xae]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xAE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A9EE: push ecx
        __asm _emit 0x51
        // 0x5882A9EF: mov ecx, dword ptr [0x58a24548]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x48
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882A9F5: lea edx, [ebp + 0x93]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A9FB: push edx
        __asm _emit 0x52
        // 0x5882A9FC: mov edx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x68
        // 0x5882A9FF: push ecx
        __asm _emit 0x51
        // 0x5882AA00: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882AA02: push edx
        __asm _emit 0x52
        // 0x5882AA03: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882AA05: call 0x5890a5b0
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0xFB
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882AA0A: jmp 0x5882aa0e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5882AA0C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882AA0E: push 0x9c
        __asm _emit 0x68
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AA13: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5882AA18: mov dword ptr [esi + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AA1E: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0x22
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5882AA23: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5882AA26: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5882AA2A: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        // 0x5882AA2F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882AA31: je 0x5882aa6c
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x5882AA33: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882AA35: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5882AA3A: lea ecx, [ebx + 0xd1]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xD1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AA40: push ecx
        __asm _emit 0x51
        // 0x5882AA41: lea edx, [ebp + 0x108]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AA47: push edx
        __asm _emit 0x52
        // 0x5882AA48: lea ecx, [ebx + 0xc2]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AA4E: push ecx
        __asm _emit 0x51
        // 0x5882AA4F: mov ecx, dword ptr [0x58a24548]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x48
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882AA55: lea edx, [ebp + 0x93]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AA5B: push edx
        __asm _emit 0x52
        // 0x5882AA5C: mov edx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x68
        // 0x5882AA5F: push ecx
        __asm _emit 0x51
        // 0x5882AA60: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882AA62: push edx
        __asm _emit 0x52
        // 0x5882AA63: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882AA65: call 0x5890a5b0
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0xFB
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882AA6A: jmp 0x5882aa6e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5882AA6C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882AA6E: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AA73: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5882AA78: mov dword ptr [esi + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AA7E: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0x21
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5882AA83: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5882AA86: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5882AA8A: mov byte ptr [esp + 0x20], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        // 0x5882AA8F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882AA91: je 0x5882aacb
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x5882AA93: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882AA95: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882AA97: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5882AA9C: lea ecx, [ebx + 0x14d]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AAA2: push ecx
        __asm _emit 0x51
        // 0x5882AAA3: lea edx, [ebp + 0x117]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AAA9: push edx
        __asm _emit 0x52
        // 0x5882AAAA: lea ecx, [ebx + 0xf0]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AAB0: push ecx
        __asm _emit 0x51
        // 0x5882AAB1: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882AAB7: lea edx, [ebp + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x4C
        // 0x5882AABA: push edx
        __asm _emit 0x52
        // 0x5882AABB: mov edx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x68
        // 0x5882AABE: push ecx
        __asm _emit 0x51
        // 0x5882AABF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882AAC1: push edx
        __asm _emit 0x52
        // 0x5882AAC2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882AAC4: call 0x58761090
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0x65
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5882AAC9: jmp 0x5882aacd
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5882AACB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882AACD: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x5882AAD0: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882AAD5: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5882AADA: mov dword ptr [esi + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AAE0: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x82
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882AAE5: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x5882AAE8: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AAED: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0x82
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882AAF2: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x5882AAF5: push 0x11
        __asm _emit 0x6A
        __asm _emit 0x11
        // 0x5882AAF7: call 0x58748e40
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0xE3
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5882AAFC: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x5882AAFF: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x5882AB01: call 0x58748e40
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0xE3
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5882AB06: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AB0C: mov ecx, 0x17
        __asm _emit 0xB9
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AB11: mov dword ptr [eax + 0x8c], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AB17: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AB1D: mov dword ptr [eax + 0x8c], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AB23: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AB29: push 0x7ff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AB2E: call 0x58748e40
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0xE3
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5882AB33: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AB39: mov ecx, 0x20
        __asm _emit 0xB9
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AB3E: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AB43: mov word ptr [eax + 0x9c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AB4A: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0x20
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5882AB4F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5882AB52: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5882AB56: mov byte ptr [esp + 0x20], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x09
        // 0x5882AB5B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882AB5D: je 0x5882abab
        __asm _emit 0x74
        __asm _emit 0x4C
        // 0x5882AB5F: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5882AB62: cmp dword ptr [ecx + 0x160], 0x15
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x15
        // 0x5882AB69: jle 0x5882ab7d
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5882AB6B: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AB71: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5882AB73: je 0x5882ab7d
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5882AB75: add ecx, 0x540
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AB7B: jmp 0x5882ab7f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5882AB7D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5882AB7F: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5882AB81: lea edx, [ebx + 0x157]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AB87: push edx
        __asm _emit 0x52
        // 0x5882AB88: lea edx, [ebp + 0xc8]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AB8E: push edx
        __asm _emit 0x52
        // 0x5882AB8F: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882AB95: push ecx
        __asm _emit 0x51
        // 0x5882AB96: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x5882AB99: push ecx
        __asm _emit 0x51
        // 0x5882AB9A: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882ABA0: push edx
        __asm _emit 0x52
        // 0x5882ABA1: push ecx
        __asm _emit 0x51
        // 0x5882ABA2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882ABA4: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x31
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5882ABA9: jmp 0x5882abad
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5882ABAB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882ABAD: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882ABB2: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5882ABB7: mov dword ptr [esi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882ABBD: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x20
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5882ABC2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5882ABC5: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5882ABC9: mov byte ptr [esp + 0x20], 0xa
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0A
        // 0x5882ABCE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882ABD0: je 0x5882ac1e
        __asm _emit 0x74
        __asm _emit 0x4C
        // 0x5882ABD2: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5882ABD5: cmp dword ptr [ecx + 0x160], 0x16
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x16
        // 0x5882ABDC: jle 0x5882abf0
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5882ABDE: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882ABE4: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5882ABE6: je 0x5882abf0
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5882ABE8: add ecx, 0x580
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x80
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882ABEE: jmp 0x5882abf2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5882ABF0: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5882ABF2: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5882ABF4: lea edx, [ebx + 0x157]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882ABFA: push edx
        __asm _emit 0x52
        // 0x5882ABFB: lea edx, [ebp + 0xf9]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AC01: push edx
        __asm _emit 0x52
        // 0x5882AC02: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882AC08: push ecx
        __asm _emit 0x51
        // 0x5882AC09: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x5882AC0C: push ecx
        __asm _emit 0x51
        // 0x5882AC0D: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882AC13: push edx
        __asm _emit 0x52
        // 0x5882AC14: push ecx
        __asm _emit 0x51
        // 0x5882AC15: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882AC17: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0x31
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5882AC1C: jmp 0x5882ac20
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5882AC1E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882AC20: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5882AC25: mov dword ptr [esi + 0x90], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AC2B: mov dword ptr [esp + 0x38], 0x6c
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x6C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AC33: mov dword ptr [esp + 0x3c], 0x1b0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0xB0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AC3B: mov dword ptr [esp + 0x34], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AC43: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5882AC45: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5882AC4A: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5882AC4C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5882AC4F: mov dword ptr [esp + 0x30], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5882AC53: mov byte ptr [esp + 0x20], 0xb
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0B
        // 0x5882AC58: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5882AC5A: je 0x5882acd5
        __asm _emit 0x74
        __asm _emit 0x79
        // 0x5882AC5C: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5882AC5F: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5882AC63: cmp dword ptr [eax + 0x164], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AC69: jle 0x5882ac82
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5882AC6B: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5882AC6D: jl 0x5882ac82
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x5882AC6F: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AC75: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882AC77: je 0x5882ac82
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5882AC79: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5882AC7D: mov ebp, dword ptr [edx + eax]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x02
        // 0x5882AC80: jmp 0x5882ac84
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5882AC82: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5882AC84: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5882AC88: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5882AC8B: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5882AC8D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882AC8F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882AC91: push ebx
        __asm _emit 0x53
        // 0x5882AC92: push ecx
        __asm _emit 0x51
        // 0x5882AC93: push eax
        __asm _emit 0x50
        // 0x5882AC94: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5882AC96: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x85
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882AC9B: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882ACA1: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x5882ACA4: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5882ACA6: je 0x5882accf
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x5882ACA8: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x5882ACAB: mov dword ptr [edi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x0C
        // 0x5882ACAE: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x5882ACB1: mov dword ptr [edi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x5882ACB4: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x5882ACB7: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5882ACBA: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x5882ACBD: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5882ACC0: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x5882ACC3: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5882ACC6: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x5882ACC9: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5882ACCC: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x5882ACCF: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5882ACD3: jmp 0x5882acd7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5882ACD5: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5882ACD7: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5882ACDB: mov dword ptr [esi + eax - 0x11c], edi
        __asm _emit 0x89
        __asm _emit 0xBC
        __asm _emit 0x06
        __asm _emit 0xE4
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882ACE2: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x5882ACE5: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5882ACE9: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882ACEE: add dword ptr [esp + 0x38], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5882ACF2: sub dword ptr [esp + 0x34], eax
        __asm _emit 0x29
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5882ACF6: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5882ACFB: jne 0x5882ac43
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x42
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882AD01: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AD06: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x1F
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5882AD0B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5882AD0E: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5882AD12: mov byte ptr [esp + 0x20], 0xc
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0C
        // 0x5882AD17: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882AD19: je 0x5882ad53
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x5882AD1B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882AD1D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882AD1F: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5882AD24: lea ecx, [ebx + 0x81]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AD2A: push ecx
        __asm _emit 0x51
        // 0x5882AD2B: lea edx, [ebp + 0x212]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AD31: push edx
        __asm _emit 0x52
        // 0x5882AD32: lea ecx, [ebx + 0x72]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x72
        // 0x5882AD35: push ecx
        __asm _emit 0x51
        // 0x5882AD36: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882AD3C: lea edx, [ebp + 0x19d]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x9D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AD42: push edx
        __asm _emit 0x52
        // 0x5882AD43: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x5882AD46: push ecx
        __asm _emit 0x51
        // 0x5882AD47: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882AD49: push edx
        __asm _emit 0x52
        // 0x5882AD4A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882AD4C: call 0x58761090
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x63
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5882AD51: jmp 0x5882ad55
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5882AD53: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882AD55: push 0x9c
        __asm _emit 0x68
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AD5A: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5882AD5F: mov dword ptr [esi + 0x9c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AD65: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0x1E
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5882AD6A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5882AD6D: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5882AD71: mov byte ptr [esp + 0x20], 0xd
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0D
        // 0x5882AD76: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882AD78: je 0x5882adb3
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x5882AD7A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882AD7C: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5882AD81: lea ecx, [ebx + 0xbd]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xBD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AD87: push ecx
        __asm _emit 0x51
        // 0x5882AD88: lea edx, [ebp + 0x208]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AD8E: push edx
        __asm _emit 0x52
        // 0x5882AD8F: lea ecx, [ebx + 0xae]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xAE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AD95: push ecx
        __asm _emit 0x51
        // 0x5882AD96: mov ecx, dword ptr [0x58a24548]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x48
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882AD9C: lea edx, [ebp + 0x19d]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x9D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882ADA2: push edx
        __asm _emit 0x52
        // 0x5882ADA3: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x5882ADA6: push ecx
        __asm _emit 0x51
        // 0x5882ADA7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882ADA9: push edx
        __asm _emit 0x52
        // 0x5882ADAA: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882ADAC: call 0x5890a5b0
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xF7
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882ADB1: jmp 0x5882adb5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5882ADB3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882ADB5: push 0x9c
        __asm _emit 0x68
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882ADBA: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5882ADBF: mov dword ptr [esi + 0xa0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882ADC5: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0x1E
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5882ADCA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5882ADCD: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5882ADD1: mov byte ptr [esp + 0x20], 0xe
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0E
        // 0x5882ADD6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882ADD8: je 0x5882ae13
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x5882ADDA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882ADDC: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5882ADE1: lea ecx, [ebx + 0xd1]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xD1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882ADE7: push ecx
        __asm _emit 0x51
        // 0x5882ADE8: lea edx, [ebp + 0x208]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882ADEE: push edx
        __asm _emit 0x52
        // 0x5882ADEF: lea ecx, [ebx + 0xc2]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882ADF5: push ecx
        __asm _emit 0x51
        // 0x5882ADF6: mov ecx, dword ptr [0x58a24548]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x48
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882ADFC: lea edx, [ebp + 0x19d]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x9D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AE02: push edx
        __asm _emit 0x52
        // 0x5882AE03: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x5882AE06: push ecx
        __asm _emit 0x51
        // 0x5882AE07: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882AE09: push edx
        __asm _emit 0x52
        // 0x5882AE0A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882AE0C: call 0x5890a5b0
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0xF7
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882AE11: jmp 0x5882ae15
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5882AE13: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882AE15: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AE1A: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5882AE1F: mov dword ptr [esi + 0xa4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AE25: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0x1E
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5882AE2A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5882AE2D: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5882AE31: mov byte ptr [esp + 0x20], 0xf
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0F
        // 0x5882AE36: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882AE38: je 0x5882ae75
        __asm _emit 0x74
        __asm _emit 0x3B
        // 0x5882AE3A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882AE3C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882AE3E: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5882AE43: lea ecx, [ebx + 0x14d]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AE49: push ecx
        __asm _emit 0x51
        // 0x5882AE4A: lea edx, [ebp + 0x221]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x21
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AE50: push edx
        __asm _emit 0x52
        // 0x5882AE51: lea ecx, [ebx + 0xf0]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AE57: push ecx
        __asm _emit 0x51
        // 0x5882AE58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882AE5E: lea edx, [ebp + 0x156]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AE64: push edx
        __asm _emit 0x52
        // 0x5882AE65: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x5882AE68: push ecx
        __asm _emit 0x51
        // 0x5882AE69: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882AE6B: push edx
        __asm _emit 0x52
        // 0x5882AE6C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882AE6E: call 0x58761090
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0x62
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5882AE73: jmp 0x5882ae77
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5882AE75: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882AE77: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AE7D: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882AE82: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5882AE87: mov dword ptr [esi + 0xa8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AE8D: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0x7E
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882AE92: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AE98: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AE9D: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x7E
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882AEA2: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AEA8: push 0x11
        __asm _emit 0x6A
        __asm _emit 0x11
        // 0x5882AEAA: call 0x58748e40
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0xDF
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5882AEAF: mov eax, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AEB5: mov ecx, 0x17
        __asm _emit 0xB9
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AEBA: mov dword ptr [eax + 0x8c], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AEC0: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AEC6: mov dword ptr [eax + 0x8c], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AECC: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AED2: push 0x7ff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AED7: call 0x58748e40
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0xDF
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5882AEDC: mov eax, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AEE2: mov ecx, 0x20
        __asm _emit 0xB9
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AEE7: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AEEC: mov word ptr [eax + 0x9c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AEF3: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x1D
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5882AEF8: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5882AEFB: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5882AEFF: mov byte ptr [esp + 0x20], 0x10
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x10
        // 0x5882AF04: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882AF06: je 0x5882af54
        __asm _emit 0x74
        __asm _emit 0x4C
        // 0x5882AF08: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5882AF0B: cmp dword ptr [ecx + 0x160], 0x15
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x15
        // 0x5882AF12: jle 0x5882af26
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5882AF14: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AF1A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5882AF1C: je 0x5882af26
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5882AF1E: add ecx, 0x540
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AF24: jmp 0x5882af28
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5882AF26: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5882AF28: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5882AF2A: lea edx, [ebx + 0x157]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AF30: push edx
        __asm _emit 0x52
        // 0x5882AF31: lea edx, [ebp + 0x1d2]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xD2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AF37: push edx
        __asm _emit 0x52
        // 0x5882AF38: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882AF3E: push ecx
        __asm _emit 0x51
        // 0x5882AF3F: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x5882AF42: push ecx
        __asm _emit 0x51
        // 0x5882AF43: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882AF49: push edx
        __asm _emit 0x52
        // 0x5882AF4A: push ecx
        __asm _emit 0x51
        // 0x5882AF4B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882AF4D: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0x2E
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5882AF52: jmp 0x5882af56
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5882AF54: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882AF56: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AF5B: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5882AF60: mov dword ptr [esi + 0xac], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AF66: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0x1C
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5882AF6B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5882AF6E: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5882AF72: mov byte ptr [esp + 0x20], 0x11
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x11
        // 0x5882AF77: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882AF79: je 0x5882afc7
        __asm _emit 0x74
        __asm _emit 0x4C
        // 0x5882AF7B: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5882AF7E: cmp dword ptr [ecx + 0x160], 0x16
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x16
        // 0x5882AF85: jle 0x5882af99
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5882AF87: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AF8D: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5882AF8F: je 0x5882af99
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5882AF91: add ecx, 0x580
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x80
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AF97: jmp 0x5882af9b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5882AF99: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5882AF9B: mov edx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x68
        // 0x5882AF9E: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5882AFA0: add ebx, 0x157
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AFA6: push ebx
        __asm _emit 0x53
        // 0x5882AFA7: add ebp, 0x203
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AFAD: push ebp
        __asm _emit 0x55
        // 0x5882AFAE: push ecx
        __asm _emit 0x51
        // 0x5882AFAF: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882AFB5: push edx
        __asm _emit 0x52
        // 0x5882AFB6: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882AFBC: push ecx
        __asm _emit 0x51
        // 0x5882AFBD: push edx
        __asm _emit 0x52
        // 0x5882AFBE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882AFC0: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0x2D
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5882AFC5: jmp 0x5882afc9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5882AFC7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882AFC9: push 0x800
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AFCE: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5882AFD3: mov dword ptr [esi + 0xb0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AFD9: mov byte ptr [esi + 0x60], 1
        __asm _emit 0xC6
        __asm _emit 0x46
        __asm _emit 0x60
        __asm _emit 0x01
        // 0x5882AFDD: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0x65
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5882AFE2: push 0x800
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AFE7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882AFE9: push eax
        __asm _emit 0x50
        // 0x5882AFEA: mov dword ptr [esi + 0xb4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AFF0: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x1C
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5882AFF5: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5882AFF9: mov ecx, 0xe5ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882AFFE: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5882B001: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B006: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x5882B009: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5882B00D: mov eax, 0xfff0
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B012: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5882B015: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5882B019: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5882B01B: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5882B01F: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B026: pop ecx
        __asm _emit 0x59
        // 0x5882B027: pop edi
        __asm _emit 0x5F
        // 0x5882B028: pop esi
        __asm _emit 0x5E
        // 0x5882B029: pop ebp
        __asm _emit 0x5D
        // 0x5882B02A: pop ebx
        __asm _emit 0x5B
        // 0x5882B02B: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5882B02E: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
