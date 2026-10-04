// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5889C8D0 .. +0x7A0 bytes.
// Source symbol alias: FUN_5889c8d0.
extern "C" __declspec(naked) void FUN_5889c8d0() {
    __asm {
        // 0x5889C8D0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5889C8D2: push 0x58987641
        __asm _emit 0x68
        __asm _emit 0x41
        __asm _emit 0x76
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889C8D7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C8DD: push eax
        __asm _emit 0x50
        // 0x5889C8DE: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x5889C8E1: push ebx
        __asm _emit 0x53
        // 0x5889C8E2: push ebp
        __asm _emit 0x55
        // 0x5889C8E3: push esi
        __asm _emit 0x56
        // 0x5889C8E4: push edi
        __asm _emit 0x57
        // 0x5889C8E5: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889C8EA: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5889C8EC: push eax
        __asm _emit 0x50
        // 0x5889C8ED: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5889C8F1: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C8F7: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5889C8F9: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5889C8FD: mov eax, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5889C901: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5889C905: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5889C909: mov esi, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5889C90D: mov ebx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5889C911: push eax
        __asm _emit 0x50
        // 0x5889C912: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5889C916: push ecx
        __asm _emit 0x51
        // 0x5889C917: push edx
        __asm _emit 0x52
        // 0x5889C918: push esi
        __asm _emit 0x56
        // 0x5889C919: push ebx
        __asm _emit 0x53
        // 0x5889C91A: push eax
        __asm _emit 0x50
        // 0x5889C91B: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5889C91D: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x68
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889C922: mov dword ptr [edi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889C928: or word ptr [edi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4F
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5889C92D: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x5889C930: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5889C932: mov dword ptr [edi + 0x54], esi
        __asm _emit 0x89
        __asm _emit 0x77
        __asm _emit 0x54
        // 0x5889C935: mov dword ptr [edi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C93C: mov dword ptr [edi + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x5C
        // 0x5889C93F: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C944: mov dword ptr [esp + 0x2c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5889C948: mov dword ptr [edi], 0x589a01a8
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0xA8
        __asm _emit 0x01
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889C94E: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0x02
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5889C953: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5889C956: mov dword ptr [esp + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5889C95A: mov byte ptr [esp + 0x28], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        // 0x5889C95F: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5889C961: je 0x5889c974
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5889C963: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889C965: push ebx
        __asm _emit 0x53
        // 0x5889C966: push 0x589a01c4
        __asm _emit 0x68
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889C96B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889C96D: call 0x588f3d70
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0x73
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x5889C972: jmp 0x5889c976
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889C974: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889C976: mov dword ptr [edi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x60
        // 0x5889C979: mov ecx, 2
        __asm _emit 0xB9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C97E: lea eax, [edi + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x64
        // 0x5889C981: mov byte ptr [esp + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5889C985: mov dword ptr [esp + 0x40], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5889C989: mov dword ptr [esp + 0x44], 8
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C991: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5889C995: mov dword ptr [esp + 0x38], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5889C999: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C9A0: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5889C9A2: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x02
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5889C9A7: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5889C9A9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5889C9AC: mov dword ptr [esp + 0x34], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5889C9B0: mov byte ptr [esp + 0x28], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x02
        // 0x5889C9B5: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x5889C9B7: je 0x5889ca2d
        __asm _emit 0x74
        __asm _emit 0x74
        // 0x5889C9B9: mov eax, dword ptr [edi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x60
        // 0x5889C9BC: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5889C9C0: cmp dword ptr [eax + 0x164], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C9C6: jle 0x5889c9df
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5889C9C8: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5889C9CA: jl 0x5889c9df
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x5889C9CC: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C9D2: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5889C9D4: je 0x5889c9df
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5889C9D6: mov ecx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5889C9DA: mov ebp, dword ptr [ecx + eax]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x01
        // 0x5889C9DD: jmp 0x5889c9e1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889C9DF: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5889C9E1: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5889C9E3: push ebx
        __asm _emit 0x53
        // 0x5889C9E4: push ebx
        __asm _emit 0x53
        // 0x5889C9E5: push 0x99
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C9EA: push 0xad
        __asm _emit 0x68
        __asm _emit 0xAD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C9EF: push edi
        __asm _emit 0x57
        // 0x5889C9F0: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889C9F2: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x67
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889C9F7: mov dword ptr [esi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889C9FD: mov dword ptr [esi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x50
        // 0x5889CA00: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x5889CA02: je 0x5889ca2f
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x5889CA04: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x5889CA07: mov dword ptr [esi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x5889CA0A: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x5889CA0D: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5889CA10: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x5889CA13: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5889CA16: mov dword ptr [esi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x5889CA19: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5889CA1C: mov dword ptr [esi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x5889CA1F: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5889CA22: mov dword ptr [esi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x1C
        // 0x5889CA25: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5889CA28: mov dword ptr [esi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x20
        // 0x5889CA2B: jmp 0x5889ca2f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889CA2D: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5889CA2F: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5889CA33: add dword ptr [esp + 0x44], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x04
        // 0x5889CA38: mov dword ptr [eax], esi
        __asm _emit 0x89
        __asm _emit 0x30
        // 0x5889CA3A: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x5889CA3D: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5889CA41: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CA46: add dword ptr [esp + 0x40], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5889CA4A: sub dword ptr [esp + 0x38], eax
        __asm _emit 0x29
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5889CA4E: mov byte ptr [esp + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5889CA52: jne 0x5889c9a0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889CA58: lea eax, [edi + 0x6c]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x6C
        // 0x5889CA5B: mov dword ptr [esp + 0x44], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5889CA5F: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5889CA63: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5889CA65: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0x01
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5889CA6A: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5889CA6C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5889CA6F: mov dword ptr [esp + 0x3c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5889CA73: mov byte ptr [esp + 0x28], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x03
        // 0x5889CA78: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x5889CA7A: je 0x5889caec
        __asm _emit 0x74
        __asm _emit 0x70
        // 0x5889CA7C: mov eax, dword ptr [edi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x60
        // 0x5889CA7F: mov ecx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5889CA83: cmp dword ptr [eax + 0x164], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CA89: jle 0x5889ca9e
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x5889CA8B: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5889CA8D: jl 0x5889ca9e
        __asm _emit 0x7C
        __asm _emit 0x0F
        // 0x5889CA8F: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CA95: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5889CA97: je 0x5889ca9e
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5889CA99: mov ebp, dword ptr [eax + ecx*4]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x88
        // 0x5889CA9C: jmp 0x5889caa0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889CA9E: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5889CAA0: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5889CAA2: push ebx
        __asm _emit 0x53
        // 0x5889CAA3: push ebx
        __asm _emit 0x53
        // 0x5889CAA4: push 0x99
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CAA9: push 0xad
        __asm _emit 0x68
        __asm _emit 0xAD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CAAE: push edi
        __asm _emit 0x57
        // 0x5889CAAF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889CAB1: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0x66
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889CAB6: mov dword ptr [esi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889CABC: mov dword ptr [esi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x50
        // 0x5889CABF: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x5889CAC1: je 0x5889caee
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x5889CAC3: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x5889CAC6: mov dword ptr [esi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x5889CAC9: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x5889CACC: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5889CACF: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x5889CAD2: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5889CAD5: mov dword ptr [esi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x5889CAD8: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5889CADB: mov dword ptr [esi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x5889CADE: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5889CAE1: mov dword ptr [esi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x1C
        // 0x5889CAE4: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5889CAE7: mov dword ptr [esi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x20
        // 0x5889CAEA: jmp 0x5889caee
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889CAEC: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5889CAEE: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5889CAF2: mov eax, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5889CAF6: inc eax
        __asm _emit 0x40
        // 0x5889CAF7: mov dword ptr [ecx], esi
        __asm _emit 0x89
        __asm _emit 0x31
        // 0x5889CAF9: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5889CAFC: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5889CAFF: mov byte ptr [esp + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5889CB03: mov dword ptr [esp + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5889CB07: mov dword ptr [esp + 0x40], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5889CB0B: jl 0x5889ca63
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x52
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889CB11: mov ecx, dword ptr [edi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x6C
        // 0x5889CB14: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889CB19: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x62
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889CB1E: mov ecx, dword ptr [edi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x70
        // 0x5889CB21: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CB26: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x61
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889CB2B: mov ecx, dword ptr [edi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x64
        // 0x5889CB2E: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889CB33: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889CB38: mov ecx, dword ptr [edi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x68
        // 0x5889CB3B: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CB40: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0x61
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889CB45: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5889CB49: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CB50: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5889CB54: mov ecx, dword ptr [eax*4 + 0x589c9078]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889CB5B: mov dword ptr [esp + 0x44], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5889CB5F: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x5889CB62: je 0x5889cb76
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5889CB64: mov dword ptr [esp + 0x30], 0xad
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0xAD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CB6C: mov dword ptr [esp + 0x34], 0x99
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CB74: jmp 0x5889cb86
        __asm _emit 0xEB
        __asm _emit 0x10
        // 0x5889CB76: mov dword ptr [esp + 0x30], 0x11c
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CB7E: mov dword ptr [esp + 0x34], 0xed
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0xED
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CB86: shl eax, 5
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x05
        // 0x5889CB89: lea edx, [edi + eax*8 + 0x74]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0xC7
        __asm _emit 0x74
        // 0x5889CB8D: mov dword ptr [esp + 0x40], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5889CB91: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5889CB95: mov dword ptr [esp + 0x38], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5889CB99: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CBA0: mov ebp, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5889CBA4: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5889CBA8: cmp byte ptr [eax + ebp + 0x589c90a0], bl
        __asm _emit 0x38
        __asm _emit 0x9C
        __asm _emit 0x28
        __asm _emit 0xA0
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889CBAF: jne 0x5889cbc1
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x5889CBB1: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5889CBB5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889CBB7: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        // 0x5889CBB9: mov dword ptr [ecx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x5889CBBC: jmp 0x5889cd4d
        __asm _emit 0xE9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CBC1: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5889CBC3: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5889CBC8: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5889CBCA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5889CBCD: mov dword ptr [esp + 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5889CBD1: mov byte ptr [esp + 0x28], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x04
        // 0x5889CBD6: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x5889CBD8: je 0x5889cc4f
        __asm _emit 0x74
        __asm _emit 0x75
        // 0x5889CBDA: mov eax, dword ptr [edi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x60
        // 0x5889CBDD: mov ecx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5889CBE1: cmp dword ptr [eax + 0x164], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CBE7: jle 0x5889cbfc
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x5889CBE9: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5889CBEB: jl 0x5889cbfc
        __asm _emit 0x7C
        __asm _emit 0x0F
        // 0x5889CBED: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CBF3: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5889CBF5: je 0x5889cbfc
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5889CBF7: mov ebp, dword ptr [eax + ecx*4]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x88
        // 0x5889CBFA: jmp 0x5889cbfe
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889CBFC: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5889CBFE: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5889CC02: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5889CC06: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5889CC08: push ebx
        __asm _emit 0x53
        // 0x5889CC09: push ebx
        __asm _emit 0x53
        // 0x5889CC0A: push edx
        __asm _emit 0x52
        // 0x5889CC0B: push eax
        __asm _emit 0x50
        // 0x5889CC0C: push edi
        __asm _emit 0x57
        // 0x5889CC0D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889CC0F: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x65
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889CC14: mov dword ptr [esi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889CC1A: mov dword ptr [esi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x50
        // 0x5889CC1D: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x5889CC1F: je 0x5889cc47
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x5889CC21: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x5889CC24: mov dword ptr [esi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x5889CC27: mov edx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x14
        // 0x5889CC2A: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5889CC2D: mov dword ptr [esi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x10
        // 0x5889CC30: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5889CC32: mov dword ptr [esi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x5889CC35: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5889CC38: mov dword ptr [esi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x5889CC3B: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5889CC3E: mov dword ptr [esi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x1C
        // 0x5889CC41: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5889CC44: mov dword ptr [esi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x20
        // 0x5889CC47: mov ebp, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5889CC4B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889CC4D: jmp 0x5889cc51
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889CC4F: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889CC51: mov esi, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5889CC55: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889CC5A: mov byte ptr [esp + 0x2c], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5889CC5E: mov dword ptr [esi], ecx
        __asm _emit 0x89
        __asm _emit 0x0E
        // 0x5889CC60: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x60
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889CC65: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5889CC67: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5889CC6B: inc dword ptr [esp + 0x44]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5889CC6F: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CC74: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5889CC78: cmp byte ptr [edx + ebp + 0x589c90a0], 2
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x2A
        __asm _emit 0xA0
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x02
        // 0x5889CC80: jne 0x5889cd43
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xBD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CC86: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5889CC88: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0xFF
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5889CC8D: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5889CC8F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5889CC92: mov dword ptr [esp + 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5889CC96: mov byte ptr [esp + 0x28], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x05
        // 0x5889CC9B: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x5889CC9D: je 0x5889cd10
        __asm _emit 0x74
        __asm _emit 0x71
        // 0x5889CC9F: mov eax, dword ptr [edi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x60
        // 0x5889CCA2: mov ecx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5889CCA6: cmp dword ptr [eax + 0x164], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CCAC: jle 0x5889ccc1
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x5889CCAE: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5889CCB0: jl 0x5889ccc1
        __asm _emit 0x7C
        __asm _emit 0x0F
        // 0x5889CCB2: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CCB8: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5889CCBA: je 0x5889ccc1
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5889CCBC: mov ebp, dword ptr [eax + ecx*4]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x88
        // 0x5889CCBF: jmp 0x5889ccc3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889CCC1: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5889CCC3: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5889CCC7: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5889CCCB: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5889CCCD: push ebx
        __asm _emit 0x53
        // 0x5889CCCE: push ebx
        __asm _emit 0x53
        // 0x5889CCCF: push edx
        __asm _emit 0x52
        // 0x5889CCD0: push eax
        __asm _emit 0x50
        // 0x5889CCD1: push edi
        __asm _emit 0x57
        // 0x5889CCD2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889CCD4: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0x64
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889CCD9: mov dword ptr [esi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889CCDF: mov dword ptr [esi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x50
        // 0x5889CCE2: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x5889CCE4: je 0x5889cd0c
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x5889CCE6: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x5889CCE9: mov dword ptr [esi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x5889CCEC: mov edx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x14
        // 0x5889CCEF: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5889CCF2: mov dword ptr [esi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x10
        // 0x5889CCF5: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5889CCF7: mov dword ptr [esi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x5889CCFA: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5889CCFD: mov dword ptr [esi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x5889CD00: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5889CD03: mov dword ptr [esi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x1C
        // 0x5889CD06: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5889CD09: mov dword ptr [esi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x20
        // 0x5889CD0C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889CD0E: jmp 0x5889cd12
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889CD10: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889CD12: mov edx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5889CD16: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5889CD1A: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5889CD1C: lea ebp, [edi + eax*8 + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x6C
        __asm _emit 0xC7
        __asm _emit 0x78
        // 0x5889CD20: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CD25: mov byte ptr [esp + 0x2c], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5889CD29: mov dword ptr [ebp], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x5889CD2C: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0x5F
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889CD31: mov ebp, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x6D
        __asm _emit 0x00
        // 0x5889CD34: mov eax, 0xfffe
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CD39: and word ptr [ebp + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x45
        __asm _emit 0x24
        // 0x5889CD3D: inc dword ptr [esp + 0x44]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5889CD41: jmp 0x5889cd4d
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x5889CD43: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5889CD47: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x5889CD49: mov dword ptr [edi + ecx*8 + 0x78], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0xCF
        __asm _emit 0x78
        // 0x5889CD4D: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5889CD51: add dword ptr [esp + 0x38], 8
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x08
        // 0x5889CD56: inc eax
        __asm _emit 0x40
        // 0x5889CD57: cmp eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x20
        // 0x5889CD5A: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5889CD5E: jl 0x5889cba0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x3C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889CD64: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5889CD68: inc eax
        __asm _emit 0x40
        // 0x5889CD69: cmp eax, 9
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x5889CD6C: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5889CD70: jl 0x5889cb50
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xDA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889CD76: lea ebp, [edi + 0xa74]
        __asm _emit 0x8D
        __asm _emit 0xAF
        __asm _emit 0x74
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CD7C: mov dword ptr [esp + 0x40], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5889CD80: mov dword ptr [esp + 0x3c], 0x20
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CD88: jmp 0x5889cd90
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x5889CD8A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CD90: mov dword ptr [esp + 0x44], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CD98: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x5889CD9A: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0xFE
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5889CD9F: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5889CDA1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5889CDA4: mov dword ptr [esp + 0x38], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5889CDA8: mov byte ptr [esp + 0x28], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x06
        // 0x5889CDAD: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x5889CDAF: je 0x5889cdcd
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x5889CDB1: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5889CDB3: push ebx
        __asm _emit 0x53
        // 0x5889CDB4: push ebx
        __asm _emit 0x53
        // 0x5889CDB5: push ebx
        __asm _emit 0x53
        // 0x5889CDB6: push ebx
        __asm _emit 0x53
        // 0x5889CDB7: push edi
        __asm _emit 0x57
        // 0x5889CDB8: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889CDBA: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0x63
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889CDBF: mov dword ptr [esi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889CDC5: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x5889CDC8: mov dword ptr [esi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x54
        // 0x5889CDCB: jmp 0x5889cdcf
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889CDCD: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5889CDCF: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x5889CDD1: mov byte ptr [esp + 0x2c], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5889CDD5: mov dword ptr [ebp - 0x100], esi
        __asm _emit 0x89
        __asm _emit 0xB5
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889CDDB: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0xFE
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5889CDE0: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5889CDE2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5889CDE5: mov dword ptr [esp + 0x38], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5889CDE9: mov byte ptr [esp + 0x28], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x07
        // 0x5889CDEE: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x5889CDF0: je 0x5889ce0e
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x5889CDF2: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5889CDF4: push ebx
        __asm _emit 0x53
        // 0x5889CDF5: push ebx
        __asm _emit 0x53
        // 0x5889CDF6: push ebx
        __asm _emit 0x53
        // 0x5889CDF7: push ebx
        __asm _emit 0x53
        // 0x5889CDF8: push edi
        __asm _emit 0x57
        // 0x5889CDF9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889CDFB: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x63
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889CE00: mov dword ptr [esi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889CE06: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x5889CE09: mov dword ptr [esi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x54
        // 0x5889CE0C: jmp 0x5889ce10
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889CE0E: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5889CE10: mov eax, dword ptr [ebp - 0x100]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889CE16: mov dword ptr [ebp], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0x00
        // 0x5889CE19: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CE1E: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5889CE22: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x5889CE25: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5889CE27: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5889CE2B: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x5889CE2E: sub dword ptr [esp + 0x44], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x01
        // 0x5889CE33: mov byte ptr [esp + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5889CE37: jne 0x5889cd98
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x5B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889CE3D: mov esi, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5889CE41: mov ecx, dword ptr [esi - 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889CE47: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889CE4C: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0x5E
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889CE51: mov ecx, dword ptr [esi - 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889CE57: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CE5C: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0x5E
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889CE61: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889CE63: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889CE68: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0x5E
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889CE6D: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5889CE70: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CE75: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0x5E
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889CE7A: mov esi, 1
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CE7F: sub dword ptr [esp + 0x3c], esi
        __asm _emit 0x29
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5889CE83: mov dword ptr [esp + 0x40], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5889CE87: jne 0x5889cd90
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889CE8D: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CE92: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0xFD
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5889CE97: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5889CE9A: mov dword ptr [esp + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5889CE9E: mov byte ptr [esp + 0x28], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x08
        // 0x5889CEA3: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5889CEA5: je 0x5889ceec
        __asm _emit 0x74
        __asm _emit 0x45
        // 0x5889CEA7: mov ecx, dword ptr [edi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x60
        // 0x5889CEAA: cmp dword ptr [ecx + 0x160], 0x17
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x17
        // 0x5889CEB1: jle 0x5889cec5
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5889CEB3: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CEB9: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5889CEBB: je 0x5889cec5
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5889CEBD: add ecx, 0x5c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CEC3: jmp 0x5889cec7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889CEC5: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889CEC7: mov edx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889CECD: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5889CECF: push 0x19f
        __asm _emit 0x68
        __asm _emit 0x9F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CED4: push 0xc0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CED9: push ecx
        __asm _emit 0x51
        // 0x5889CEDA: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889CEE0: push edi
        __asm _emit 0x57
        // 0x5889CEE1: push edx
        __asm _emit 0x52
        // 0x5889CEE2: push ecx
        __asm _emit 0x51
        // 0x5889CEE3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889CEE5: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0x0E
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x5889CEEA: jmp 0x5889ceee
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889CEEC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889CEEE: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CEF3: mov byte ptr [esp + 0x2c], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5889CEF7: mov dword ptr [edi + 0xb7c], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x7C
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CEFD: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0xFD
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5889CF02: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5889CF05: mov dword ptr [esp + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5889CF09: mov byte ptr [esp + 0x28], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x09
        // 0x5889CF0E: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5889CF10: je 0x5889cf4e
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x5889CF12: mov ecx, dword ptr [edi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x60
        // 0x5889CF15: cmp dword ptr [ecx + 0x160], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CF1B: jle 0x5889cf27
        __asm _emit 0x7E
        __asm _emit 0x0A
        // 0x5889CF1D: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CF23: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5889CF25: jne 0x5889cf29
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5889CF27: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889CF29: mov edx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889CF2F: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5889CF31: push 0x19f
        __asm _emit 0x68
        __asm _emit 0x9F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CF36: push 0x1d2
        __asm _emit 0x68
        __asm _emit 0xD2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CF3B: push ecx
        __asm _emit 0x51
        // 0x5889CF3C: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889CF42: push edi
        __asm _emit 0x57
        // 0x5889CF43: push edx
        __asm _emit 0x52
        // 0x5889CF44: push ecx
        __asm _emit 0x51
        // 0x5889CF45: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889CF47: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0x0E
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x5889CF4C: jmp 0x5889cf50
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889CF4E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889CF50: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CF55: mov byte ptr [esp + 0x2c], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5889CF59: mov dword ptr [edi + 0xb88], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x88
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CF5F: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0xFC
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5889CF64: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5889CF67: mov dword ptr [esp + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5889CF6B: mov byte ptr [esp + 0x28], 0xa
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x0A
        // 0x5889CF70: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5889CF72: je 0x5889cfb5
        __asm _emit 0x74
        __asm _emit 0x41
        // 0x5889CF74: mov ecx, dword ptr [edi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x60
        // 0x5889CF77: cmp dword ptr [ecx + 0x160], esi
        __asm _emit 0x39
        __asm _emit 0xB1
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CF7D: jle 0x5889cf8e
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x5889CF7F: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CF85: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5889CF87: je 0x5889cf8e
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5889CF89: add ecx, 0x40
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x40
        // 0x5889CF8C: jmp 0x5889cf90
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889CF8E: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889CF90: mov edx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889CF96: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5889CF98: push 0x19f
        __asm _emit 0x68
        __asm _emit 0x9F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CF9D: push 0x201
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CFA2: push ecx
        __asm _emit 0x51
        // 0x5889CFA3: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889CFA9: push edi
        __asm _emit 0x57
        // 0x5889CFAA: push edx
        __asm _emit 0x52
        // 0x5889CFAB: push ecx
        __asm _emit 0x51
        // 0x5889CFAC: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889CFAE: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x5889CFB3: jmp 0x5889cfb7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889CFB5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889CFB7: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CFBC: mov byte ptr [esp + 0x2c], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5889CFC0: mov dword ptr [edi + 0xb80], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CFC6: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0xFC
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5889CFCB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5889CFCE: mov dword ptr [esp + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5889CFD2: mov byte ptr [esp + 0x28], 0xb
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x0B
        // 0x5889CFD7: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5889CFD9: je 0x5889d01d
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x5889CFDB: mov ecx, dword ptr [edi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x60
        // 0x5889CFDE: cmp dword ptr [ecx + 0x160], 2
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x5889CFE5: jle 0x5889cff6
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x5889CFE7: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889CFED: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5889CFEF: je 0x5889cff6
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5889CFF1: sub ecx, -0x80
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x80
        // 0x5889CFF4: jmp 0x5889cff8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889CFF6: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889CFF8: mov edx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889CFFE: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5889D000: push 0x19f
        __asm _emit 0x68
        __asm _emit 0x9F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D005: push 0x232
        __asm _emit 0x68
        __asm _emit 0x32
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D00A: push ecx
        __asm _emit 0x51
        // 0x5889D00B: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889D011: push edi
        __asm _emit 0x57
        // 0x5889D012: push edx
        __asm _emit 0x52
        // 0x5889D013: push ecx
        __asm _emit 0x51
        // 0x5889D014: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889D016: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x5889D01B: jmp 0x5889d01f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889D01D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889D01F: mov dword ptr [edi + 0xb84], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x84
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D025: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D02A: and word ptr [edi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x57
        __asm _emit 0x24
        // 0x5889D02E: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x5889D032: mov ecx, 0xe5ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D037: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5889D03A: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D03F: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x5889D042: mov byte ptr [edi + 0xb74], bl
        __asm _emit 0x88
        __asm _emit 0x9F
        __asm _emit 0x74
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D048: mov byte ptr [edi + 0xb75], bl
        __asm _emit 0x88
        __asm _emit 0x9F
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D04E: mov dword ptr [edi + 0xb78], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0x78
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D054: mov word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x5889D058: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x5889D05A: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5889D05E: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D065: pop ecx
        __asm _emit 0x59
        // 0x5889D066: pop edi
        __asm _emit 0x5F
        // 0x5889D067: pop esi
        __asm _emit 0x5E
        // 0x5889D068: pop ebp
        __asm _emit 0x5D
        // 0x5889D069: pop ebx
        __asm _emit 0x5B
        // 0x5889D06A: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5889D06D: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
