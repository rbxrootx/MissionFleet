// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587C45C0 .. +0x111 bytes.
// Source symbol alias: FUN_587c45c0.
extern "C" __declspec(naked) void FUN_587c45c0() {
    __asm {
        // 0x587C45C0: sub esp, 0x130
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C45C6: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587C45CB: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587C45CD: mov dword ptr [esp + 0x12c], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C45D4: push ebp
        __asm _emit 0x55
        // 0x587C45D5: mov ebp, dword ptr [esp + 0x138]
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C45DC: push edi
        __asm _emit 0x57
        // 0x587C45DD: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587C45DF: cmp dword ptr [edi + ebp*4 + 0xc], 1
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0xAF
        __asm _emit 0x0C
        __asm _emit 0x01
        // 0x587C45E4: jne 0x587c45f0
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x587C45E6: mov eax, 2
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C45EB: jmp 0x587c467d
        __asm _emit 0xE9
        __asm _emit 0x8D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C45F0: push esi
        __asm _emit 0x56
        // 0x587C45F1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587C45F3: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587C45F5: call 0x589714b8
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0xCE
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587C45FA: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587C45FC: mov dword ptr [esp + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587C4600: cmp esi, -1
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587C4603: jne 0x587c460c
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587C4605: mov eax, 3
        __asm _emit 0xB8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C460A: jmp 0x587c467c
        __asm _emit 0xEB
        __asm _emit 0x70
        // 0x587C460C: push ebx
        __asm _emit 0x53
        // 0x587C460D: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587C4611: push eax
        __asm _emit 0x50
        // 0x587C4612: push esi
        __asm _emit 0x56
        // 0x587C4613: mov dword ptr [esp + 0x1c], 0x128
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C461B: call 0x589714b2
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0xCE
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587C4620: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587C4622: je 0x587c4672
        __asm _emit 0x74
        __asm _emit 0x4E
        // 0x587C4624: mov ebx, dword ptr [0x5898c1a4]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587C462A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C4630: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587C4632: cmp dword ptr [edi + 8], esi
        __asm _emit 0x39
        __asm _emit 0x77
        __asm _emit 0x08
        // 0x587C4635: jle 0x587c465b
        __asm _emit 0x7E
        __asm _emit 0x24
        // 0x587C4637: jmp 0x587c4640
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x587C4639: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C4640: mov edx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x04
        // 0x587C4643: mov eax, dword ptr [edx + esi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xB2
        // 0x587C4646: lea ecx, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587C464A: push ecx
        __asm _emit 0x51
        // 0x587C464B: add eax, 0x38
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x38
        // 0x587C464E: push eax
        __asm _emit 0x50
        // 0x587C464F: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x587C4651: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587C4653: je 0x587c4696
        __asm _emit 0x74
        __asm _emit 0x41
        // 0x587C4655: inc esi
        __asm _emit 0x46
        // 0x587C4656: cmp esi, dword ptr [edi + 8]
        __asm _emit 0x3B
        __asm _emit 0x77
        __asm _emit 0x08
        // 0x587C4659: jl 0x587c4640
        __asm _emit 0x7C
        __asm _emit 0xE5
        // 0x587C465B: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587C465F: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587C4663: push ecx
        __asm _emit 0x51
        // 0x587C4664: push edx
        __asm _emit 0x52
        // 0x587C4665: call 0x589714ac
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0xCE
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587C466A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587C466C: jne 0x587c4630
        __asm _emit 0x75
        __asm _emit 0xC2
        // 0x587C466E: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587C4672: push esi
        __asm _emit 0x56
        // 0x587C4673: call dword ptr [0x5898c184]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587C4679: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587C467B: pop ebx
        __asm _emit 0x5B
        // 0x587C467C: pop esi
        __asm _emit 0x5E
        // 0x587C467D: mov ecx, dword ptr [esp + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C4684: pop edi
        __asm _emit 0x5F
        // 0x587C4685: pop ebp
        __asm _emit 0x5D
        // 0x587C4686: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587C4688: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0x85
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587C468D: add esp, 0x130
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C4693: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587C4696: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x587C4699: mov ebx, dword ptr [eax + esi*4]
        __asm _emit 0x8B
        __asm _emit 0x1C
        __asm _emit 0xB0
        // 0x587C469C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587C469E: mov edx, dword ptr [ecx + esi*4]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0xB1
        // 0x587C46A1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587C46A3: add edx, 8
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x08
        // 0x587C46A6: push edx
        __asm _emit 0x52
        // 0x587C46A7: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587C46AD: movzx ecx, word ptr [ebx + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4B
        __asm _emit 0x04
        // 0x587C46B1: inc eax
        __asm _emit 0x40
        // 0x587C46B2: push eax
        __asm _emit 0x50
        // 0x587C46B3: lea eax, [ebx + 8]
        __asm _emit 0x8D
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x587C46B6: push eax
        __asm _emit 0x50
        // 0x587C46B7: push ecx
        __asm _emit 0x51
        // 0x587C46B8: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C46BE: push ebp
        __asm _emit 0x55
        // 0x587C46BF: push 0x80025004
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x80
        // 0x587C46C4: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0xC5
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587C46C9: mov dword ptr [edi + ebp*4 + 0xc], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0xAF
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
