// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588AD730 .. +0x196 bytes.
// Source symbol alias: FUN_588ad730.
extern "C" __declspec(naked) void FUN_588ad730() {
    __asm {
        // 0x588AD730: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588AD732: push 0x58987f1e
        __asm _emit 0x68
        __asm _emit 0x1E
        __asm _emit 0x7F
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588AD737: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD73D: push eax
        __asm _emit 0x50
        // 0x588AD73E: push ecx
        __asm _emit 0x51
        // 0x588AD73F: push ebx
        __asm _emit 0x53
        // 0x588AD740: push ebp
        __asm _emit 0x55
        // 0x588AD741: push esi
        __asm _emit 0x56
        // 0x588AD742: push edi
        __asm _emit 0x57
        // 0x588AD743: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588AD748: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588AD74A: push eax
        __asm _emit 0x50
        // 0x588AD74B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588AD74F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD755: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x588AD757: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588AD75B: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588AD75F: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588AD763: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588AD767: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588AD769: lea eax, [ebp + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x64
        // 0x588AD76C: push eax
        __asm _emit 0x50
        // 0x588AD76D: lea ecx, [ebx + 0x400]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD773: push ecx
        __asm _emit 0x51
        // 0x588AD774: push ebp
        __asm _emit 0x55
        // 0x588AD775: push ebx
        __asm _emit 0x53
        // 0x588AD776: push edx
        __asm _emit 0x52
        // 0x588AD777: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588AD779: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x5A
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AD77E: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588AD780: mov dword ptr [esp + 0x24], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD788: mov dword ptr [edi], 0x589a080c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x0C
        __asm _emit 0x08
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588AD78E: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0xF4
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588AD793: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588AD796: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588AD79A: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588AD79F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588AD7A1: je 0x588ad7ea
        __asm _emit 0x74
        __asm _emit 0x47
        // 0x588AD7A3: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AD7A9: cmp dword ptr [ecx + 0x164], 2
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x588AD7B0: jle 0x588ad7d6
        __asm _emit 0x7E
        __asm _emit 0x24
        // 0x588AD7B2: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD7B9: je 0x588ad7d6
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x588AD7BB: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588AD7BF: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD7C5: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x08
        // 0x588AD7C8: push edx
        __asm _emit 0x52
        // 0x588AD7C9: push ebp
        __asm _emit 0x55
        // 0x588AD7CA: push ebx
        __asm _emit 0x53
        // 0x588AD7CB: push ecx
        __asm _emit 0x51
        // 0x588AD7CC: push edi
        __asm _emit 0x57
        // 0x588AD7CD: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588AD7CF: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x44
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588AD7D4: jmp 0x588ad7ec
        __asm _emit 0xEB
        __asm _emit 0x16
        // 0x588AD7D6: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588AD7DA: push edx
        __asm _emit 0x52
        // 0x588AD7DB: push ebp
        __asm _emit 0x55
        // 0x588AD7DC: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588AD7DE: push ebx
        __asm _emit 0x53
        // 0x588AD7DF: push ecx
        __asm _emit 0x51
        // 0x588AD7E0: push edi
        __asm _emit 0x57
        // 0x588AD7E1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588AD7E3: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0x44
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588AD7E8: jmp 0x588ad7ec
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AD7EA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588AD7EC: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x588AD7F1: mov dword ptr [edi + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x7C
        // 0x588AD7F4: lea esi, [edi + 0x5c]
        __asm _emit 0x8D
        __asm _emit 0x77
        __asm _emit 0x5C
        // 0x588AD7F7: mov dword ptr [esp + 0x30], 8
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD7FF: nop
        __asm _emit 0x90
        // 0x588AD800: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD805: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0xF4
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588AD80A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588AD80D: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588AD811: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x588AD816: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588AD818: je 0x588ad858
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x588AD81A: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AD820: cmp dword ptr [ecx + 0x160], 0x23
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x23
        // 0x588AD827: jle 0x588ad840
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588AD829: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD830: je 0x588ad840
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588AD832: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD838: add edx, 0x8c0
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xC0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD83E: jmp 0x588ad842
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AD840: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588AD842: movsx ecx, word ptr [esp + 0x34]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588AD847: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x02
        // 0x588AD84A: push ecx
        __asm _emit 0x51
        // 0x588AD84B: push ebp
        __asm _emit 0x55
        // 0x588AD84C: push ebx
        __asm _emit 0x53
        // 0x588AD84D: push edx
        __asm _emit 0x52
        // 0x588AD84E: push edi
        __asm _emit 0x57
        // 0x588AD84F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588AD851: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0x98
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AD856: jmp 0x588ad85a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AD858: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588AD85A: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD85F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588AD861: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588AD866: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x588AD868: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AD86D: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588AD86F: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD874: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588AD878: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588AD87B: sub dword ptr [esp + 0x30], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        // 0x588AD880: jne 0x588ad800
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x7A
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AD886: mov eax, 0xfff0
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD88B: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x588AD88F: mov cx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x588AD893: mov edx, 0xe5ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD898: mov eax, 0x500
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD89D: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588AD8A0: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x588AD8A3: mov dword ptr [edi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD8AA: mov word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x588AD8AE: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x588AD8B0: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588AD8B4: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD8BB: pop ecx
        __asm _emit 0x59
        // 0x588AD8BC: pop edi
        __asm _emit 0x5F
        // 0x588AD8BD: pop esi
        __asm _emit 0x5E
        // 0x588AD8BE: pop ebp
        __asm _emit 0x5D
        // 0x588AD8BF: pop ebx
        __asm _emit 0x5B
        // 0x588AD8C0: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588AD8C3: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
