// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587AF6D0 .. +0x216 bytes.
// Source symbol alias: FUN_587af6d0.
extern "C" __declspec(naked) void FUN_587af6d0() {
    __asm {
        // 0x587AF6D0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587AF6D2: push 0x58980d2a
        __asm _emit 0x68
        __asm _emit 0x2A
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587AF6D7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF6DD: push eax
        __asm _emit 0x50
        // 0x587AF6DE: sub esp, 0x164
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF6E4: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587AF6E9: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587AF6EB: mov dword ptr [esp + 0x160], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF6F2: push ebx
        __asm _emit 0x53
        // 0x587AF6F3: push ebp
        __asm _emit 0x55
        // 0x587AF6F4: push esi
        __asm _emit 0x56
        // 0x587AF6F5: push edi
        __asm _emit 0x57
        // 0x587AF6F6: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587AF6FB: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587AF6FD: push eax
        __asm _emit 0x50
        // 0x587AF6FE: lea eax, [esp + 0x178]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF705: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF70B: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587AF70D: lea edi, [esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x587AF710: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587AF712: mov dword ptr [esp + 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587AF716: mov dword ptr [esi], 0x58999de8
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587AF71C: call 0x588ffdb0
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x06
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587AF721: lea ebx, [esi + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x5E
        __asm _emit 0x1C
        // 0x587AF724: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587AF726: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587AF728: mov dword ptr [esp + 0x180], ebp
        __asm _emit 0x89
        __asm _emit 0xAC
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF72F: call 0x588ffdb0
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0x06
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587AF734: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x587AF736: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587AF738: mov byte ptr [esp + 0x184], 1
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587AF740: call 0x58752830
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0x30
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x587AF745: lea eax, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587AF749: push eax
        __asm _emit 0x50
        // 0x587AF74A: push 0x58999dec
        __asm _emit 0x68
        __asm _emit 0xEC
        __asm _emit 0x9D
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587AF74F: call dword ptr [0x5898c118]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587AF755: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587AF759: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587AF75D: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587AF760: je 0x587af8bc
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF766: jmp 0x587af772
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x587AF768: jmp 0x587af770
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x587AF76A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF770: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587AF772: test byte ptr [esp + 0x34], 0x10
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x10
        // 0x587AF777: jne 0x587af8a4
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF77D: push 0x448
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF782: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0xD4
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF787: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587AF78A: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587AF78E: mov byte ptr [esp + 0x180], 2
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x587AF796: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x587AF798: je 0x587af7b0
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x587AF79A: push ebp
        __asm _emit 0x55
        // 0x587AF79B: push ebp
        __asm _emit 0x55
        // 0x587AF79C: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587AF79E: lea ecx, [esp + 0x6c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x6C
        // 0x587AF7A2: push ecx
        __asm _emit 0x51
        // 0x587AF7A3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587AF7A5: call 0x587ad4b0
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0xDD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AF7AA: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AF7AE: jmp 0x587af7b4
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587AF7B0: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AF7B4: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AF7B8: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AF7BC: push eax
        __asm _emit 0x50
        // 0x587AF7BD: lea ecx, [esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587AF7C0: mov byte ptr [esp + 0x184], 1
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587AF7C8: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AF7CC: call 0x587a54d0
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0x5C
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AF7D1: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF7D6: cmp dword ptr [esp + 0x20], edi
        __asm _emit 0x39
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587AF7DA: je 0x587af7f1
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x587AF7DC: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AF7E0: push ecx
        __asm _emit 0x51
        // 0x587AF7E1: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587AF7E3: call 0x587a54d0
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AF7E8: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587AF7EC: jmp 0x587af8a4
        __asm _emit 0xE9
        __asm _emit 0xB3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF7F1: mov ebp, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x6B
        __asm _emit 0x0C
        // 0x587AF7F4: cmp ebp, dword ptr [ebx + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x6B
        __asm _emit 0x10
        // 0x587AF7F7: jbe 0x587af7fe
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AF7F9: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0xD4
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF7FE: mov edi, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x3B
        // 0x587AF800: mov esi, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x73
        __asm _emit 0x10
        // 0x587AF803: cmp dword ptr [ebx + 0xc], esi
        __asm _emit 0x39
        __asm _emit 0x73
        __asm _emit 0x0C
        // 0x587AF806: jbe 0x587af80d
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AF808: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0xD4
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF80D: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587AF80F: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AF811: je 0x587af817
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587AF813: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x587AF815: je 0x587af81c
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587AF817: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0xD4
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF81C: cmp ebp, esi
        __asm _emit 0x3B
        __asm _emit 0xEE
        // 0x587AF81E: je 0x587af894
        __asm _emit 0x74
        __asm _emit 0x74
        // 0x587AF820: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AF822: jne 0x587af877
        __asm _emit 0x75
        __asm _emit 0x53
        // 0x587AF824: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0xD4
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF829: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AF82B: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x587AF82E: jb 0x587af835
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AF830: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0xD4
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF835: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AF839: mov esi, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x00
        // 0x587AF83C: add edx, 0x30
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x30
        // 0x587AF83F: push edx
        __asm _emit 0x52
        // 0x587AF840: add esi, 0x30
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x30
        // 0x587AF843: call 0x5897ceda
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0xD6
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF848: push esi
        __asm _emit 0x56
        // 0x587AF849: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587AF84D: call 0x5897ceda
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0xD6
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF852: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587AF856: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587AF859: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x587AF85B: jg 0x587af87f
        __asm _emit 0x7F
        __asm _emit 0x22
        // 0x587AF85D: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AF85F: jne 0x587af87b
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x587AF861: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0xD4
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF866: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AF868: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x587AF86B: jb 0x587af872
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AF86D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0xD4
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF872: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x587AF875: jmp 0x587af800
        __asm _emit 0xEB
        __asm _emit 0x89
        // 0x587AF877: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587AF879: jmp 0x587af82b
        __asm _emit 0xEB
        __asm _emit 0xB0
        // 0x587AF87B: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587AF87D: jmp 0x587af868
        __asm _emit 0xEB
        __asm _emit 0xE9
        // 0x587AF87F: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AF883: push eax
        __asm _emit 0x50
        // 0x587AF884: push ebp
        __asm _emit 0x55
        // 0x587AF885: push edi
        __asm _emit 0x57
        // 0x587AF886: lea ecx, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587AF88A: push ecx
        __asm _emit 0x51
        // 0x587AF88B: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587AF88D: call 0x588f6890
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0x6F
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587AF892: jmp 0x587af8a0
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x587AF894: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AF898: push edx
        __asm _emit 0x52
        // 0x587AF899: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587AF89B: call 0x587a54d0
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x5C
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AF8A0: mov esi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587AF8A4: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587AF8A8: lea eax, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587AF8AC: push eax
        __asm _emit 0x50
        // 0x587AF8AD: push ecx
        __asm _emit 0x51
        // 0x587AF8AE: call dword ptr [0x5898c11c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x1C
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587AF8B4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AF8B6: jne 0x587af770
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB4
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AF8BC: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587AF8BE: mov ecx, dword ptr [esp + 0x178]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF8C5: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF8CC: pop ecx
        __asm _emit 0x59
        // 0x587AF8CD: pop edi
        __asm _emit 0x5F
        // 0x587AF8CE: pop esi
        __asm _emit 0x5E
        // 0x587AF8CF: pop ebp
        __asm _emit 0x5D
        // 0x587AF8D0: pop ebx
        __asm _emit 0x5B
        // 0x587AF8D1: mov ecx, dword ptr [esp + 0x160]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF8D8: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587AF8DA: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0xD2
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF8DF: add esp, 0x170
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF8E5: ret
        __asm _emit 0xC3
    }
}
