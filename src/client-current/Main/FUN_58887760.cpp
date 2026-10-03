// Complete Ghidra body ranges; intervening unowned gaps are excluded.
// Total body size: 2772 bytes across nine ranges.

// Ghidra range: 0x58887760 .. +0x86A bytes.
extern "C" __declspec(naked) void FUN_58887760_segment_00() {
    __asm {
        // 0x58887760: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58887762: push 0x58986c48
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x6C
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58887767: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888776D: push eax
        __asm _emit 0x50
        // 0x5888776E: push ecx
        __asm _emit 0x51
        // 0x5888776F: push ebx
        __asm _emit 0x53
        // 0x58887770: push ebp
        __asm _emit 0x55
        // 0x58887771: push esi
        __asm _emit 0x56
        // 0x58887772: push edi
        __asm _emit 0x57
        // 0x58887773: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58887778: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5888777A: push eax
        __asm _emit 0x50
        // 0x5888777B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5888777F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887785: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58887787: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5888778B: mov edi, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5888778F: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58887793: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58887797: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5888779B: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5888779F: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588877A3: push edi
        __asm _emit 0x57
        // 0x588877A4: push eax
        __asm _emit 0x50
        // 0x588877A5: push ecx
        __asm _emit 0x51
        // 0x588877A6: push ebp
        __asm _emit 0x55
        // 0x588877A7: push ebx
        __asm _emit 0x53
        // 0x588877A8: push edx
        __asm _emit 0x52
        // 0x588877A9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588877AB: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0xB9
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588877B0: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588877B6: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588877BB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588877BD: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x588877C0: mov dword ptr [esi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x54
        // 0x588877C3: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588877CA: mov dword ptr [esi + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x588877CD: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588877D1: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588877D5: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588877D7: mov dword ptr [esi], 0x5899f9bc
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xBC
        __asm _emit 0xF9
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588877DD: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588877E0: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0x54
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588877E5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588877E8: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588877EC: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588877F1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588877F3: je 0x5888782f
        __asm _emit 0x74
        __asm _emit 0x3A
        // 0x588877F5: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588877F8: cmp dword ptr [ecx + 0x164], 0x41
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x41
        // 0x588877FF: jle 0x5888781f
        __asm _emit 0x7E
        __asm _emit 0x1E
        // 0x58887801: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887807: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58887809: je 0x5888781f
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x5888780B: mov ecx, dword ptr [ecx + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887811: push edi
        __asm _emit 0x57
        // 0x58887812: push ebp
        __asm _emit 0x55
        // 0x58887813: push ebx
        __asm _emit 0x53
        // 0x58887814: push ecx
        __asm _emit 0x51
        // 0x58887815: push esi
        __asm _emit 0x56
        // 0x58887816: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58887818: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0xA4
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x5888781D: jmp 0x58887831
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x5888781F: push edi
        __asm _emit 0x57
        // 0x58887820: push ebp
        __asm _emit 0x55
        // 0x58887821: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58887823: push ebx
        __asm _emit 0x53
        // 0x58887824: push ecx
        __asm _emit 0x51
        // 0x58887825: push esi
        __asm _emit 0x56
        // 0x58887826: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58887828: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0xA4
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x5888782D: jmp 0x58887831
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5888782F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58887831: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58887836: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58887838: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5888783D: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x58887840: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0xB4
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58887845: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58887847: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x54
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5888784C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5888784F: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58887853: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x58887858: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888785A: je 0x58887896
        __asm _emit 0x74
        __asm _emit 0x3A
        // 0x5888785C: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x5888785F: cmp dword ptr [ecx + 0x164], 0x42
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x42
        // 0x58887866: jle 0x58887886
        __asm _emit 0x7E
        __asm _emit 0x1E
        // 0x58887868: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888786E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58887870: je 0x58887886
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x58887872: mov ecx, dword ptr [ecx + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887878: push edi
        __asm _emit 0x57
        // 0x58887879: push ebp
        __asm _emit 0x55
        // 0x5888787A: push ebx
        __asm _emit 0x53
        // 0x5888787B: push ecx
        __asm _emit 0x51
        // 0x5888787C: push esi
        __asm _emit 0x56
        // 0x5888787D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5888787F: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0xA3
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x58887884: jmp 0x58887898
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x58887886: push edi
        __asm _emit 0x57
        // 0x58887887: push ebp
        __asm _emit 0x55
        // 0x58887888: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5888788A: push ebx
        __asm _emit 0x53
        // 0x5888788B: push ecx
        __asm _emit 0x51
        // 0x5888788C: push esi
        __asm _emit 0x56
        // 0x5888788D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5888788F: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0xA3
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x58887894: jmp 0x58887898
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58887896: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58887898: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888789D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5888789F: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588878A4: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x588878A7: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0xB4
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588878AC: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588878AE: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0x53
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588878B3: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588878B5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588878B8: mov dword ptr [esp + 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588878BC: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x588878C1: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588878C3: je 0x588878e7
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x588878C5: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588878C9: push ecx
        __asm _emit 0x51
        // 0x588878CA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588878CC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588878CE: push ebp
        __asm _emit 0x55
        // 0x588878CF: push ebx
        __asm _emit 0x53
        // 0x588878D0: push esi
        __asm _emit 0x56
        // 0x588878D1: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588878D3: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0xB8
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588878D8: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588878DE: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588878E5: jmp 0x588878e9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588878E7: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588878E9: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588878EE: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588878F0: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588878F5: mov dword ptr [esi + 0x6c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x6C
        // 0x588878F8: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0xB4
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588878FD: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588878FF: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0x53
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58887904: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58887906: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58887909: mov dword ptr [esp + 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5888790D: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x58887912: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58887914: je 0x58887938
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x58887916: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5888791A: push edx
        __asm _emit 0x52
        // 0x5888791B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5888791D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5888791F: push ebp
        __asm _emit 0x55
        // 0x58887920: push ebx
        __asm _emit 0x53
        // 0x58887921: push esi
        __asm _emit 0x56
        // 0x58887922: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58887924: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0xB8
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58887929: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888792F: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887936: jmp 0x5888793a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58887938: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5888793A: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888793F: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58887941: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58887946: mov dword ptr [esi + 0x70], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x70
        // 0x58887949: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0xB3
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888794E: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58887950: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0x52
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58887955: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58887958: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5888795C: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x58887961: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58887963: je 0x5888799d
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x58887965: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x58887968: cmp dword ptr [ecx + 0x164], 0x47
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x47
        // 0x5888796F: jle 0x58887983
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x58887971: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887977: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58887979: je 0x58887983
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5888797B: mov ecx, dword ptr [ecx + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887981: jmp 0x58887985
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58887983: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58887985: mov edi, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58887989: push edi
        __asm _emit 0x57
        // 0x5888798A: lea edx, [ebp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x5888798D: push edx
        __asm _emit 0x52
        // 0x5888798E: lea edx, [ebx + 0x6a]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x6A
        // 0x58887991: push edx
        __asm _emit 0x52
        // 0x58887992: push ecx
        __asm _emit 0x51
        // 0x58887993: push esi
        __asm _emit 0x56
        // 0x58887994: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58887996: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0xA2
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x5888799B: jmp 0x588879a3
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x5888799D: mov edi, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588879A1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588879A3: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588879A8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588879AA: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588879AF: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588879B2: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0xB3
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588879B7: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588879BC: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0x52
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588879C1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588879C4: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588879C8: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x588879CD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588879CF: je 0x58887a13
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x588879D1: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588879D4: cmp dword ptr [ecx + 0x160], 0xf
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        // 0x588879DB: jle 0x588879ef
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x588879DD: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588879E3: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588879E5: je 0x588879ef
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588879E7: add ecx, 0x3c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588879ED: jmp 0x588879f1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588879EF: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588879F1: push edi
        __asm _emit 0x57
        // 0x588879F2: lea edx, [ebp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x588879F5: push edx
        __asm _emit 0x52
        // 0x588879F6: lea edx, [ebx + 0x6a]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x6A
        // 0x588879F9: push edx
        __asm _emit 0x52
        // 0x588879FA: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58887A00: push ecx
        __asm _emit 0x51
        // 0x58887A01: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58887A07: push esi
        __asm _emit 0x56
        // 0x58887A08: push ecx
        __asm _emit 0x51
        // 0x58887A09: push edx
        __asm _emit 0x52
        // 0x58887A0A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58887A0C: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x63
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x58887A11: jmp 0x58887a15
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58887A13: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58887A15: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887A1A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58887A1C: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58887A21: mov dword ptr [esi + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x58887A24: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0xB2
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58887A29: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887A2E: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x52
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58887A33: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58887A36: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58887A3A: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        // 0x58887A3F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58887A41: je 0x58887a85
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x58887A43: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x58887A46: cmp dword ptr [ecx + 0x160], 0xf
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        // 0x58887A4D: jle 0x58887a61
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x58887A4F: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887A55: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58887A57: je 0x58887a61
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58887A59: add ecx, 0x3c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887A5F: jmp 0x58887a63
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58887A61: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58887A63: push edi
        __asm _emit 0x57
        // 0x58887A64: lea edx, [ebp + 0x21]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x21
        // 0x58887A67: push edx
        __asm _emit 0x52
        // 0x58887A68: lea edx, [ebx + 0x6a]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x6A
        // 0x58887A6B: push edx
        __asm _emit 0x52
        // 0x58887A6C: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58887A72: push ecx
        __asm _emit 0x51
        // 0x58887A73: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58887A79: push esi
        __asm _emit 0x56
        // 0x58887A7A: push ecx
        __asm _emit 0x51
        // 0x58887A7B: push edx
        __asm _emit 0x52
        // 0x58887A7C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58887A7E: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0x63
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x58887A83: jmp 0x58887a87
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58887A85: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58887A87: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887A8C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58887A8E: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58887A93: mov dword ptr [esi + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x58887A96: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0xB2
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58887A9B: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887AA0: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x51
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58887AA5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58887AA8: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58887AAC: mov byte ptr [esp + 0x20], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        // 0x58887AB1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58887AB3: je 0x58887af7
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x58887AB5: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x58887AB8: cmp dword ptr [ecx + 0x160], 0xf
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        // 0x58887ABF: jle 0x58887ad3
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x58887AC1: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887AC7: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58887AC9: je 0x58887ad3
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58887ACB: add ecx, 0x3c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887AD1: jmp 0x58887ad5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58887AD3: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58887AD5: push edi
        __asm _emit 0x57
        // 0x58887AD6: lea edx, [ebp + 0x32]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x32
        // 0x58887AD9: push edx
        __asm _emit 0x52
        // 0x58887ADA: lea edx, [ebx + 0x6a]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x6A
        // 0x58887ADD: push edx
        __asm _emit 0x52
        // 0x58887ADE: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58887AE4: push ecx
        __asm _emit 0x51
        // 0x58887AE5: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58887AEB: push esi
        __asm _emit 0x56
        // 0x58887AEC: push ecx
        __asm _emit 0x51
        // 0x58887AED: push edx
        __asm _emit 0x52
        // 0x58887AEE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58887AF0: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0x62
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x58887AF5: jmp 0x58887af9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58887AF7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58887AF9: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887AFE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58887B00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58887B05: mov dword ptr [esi + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887B0B: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0xB2
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58887B10: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887B15: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x51
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58887B1A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58887B1D: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58887B21: mov byte ptr [esp + 0x20], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x09
        // 0x58887B26: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58887B28: je 0x58887b6c
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x58887B2A: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x58887B2D: cmp dword ptr [ecx + 0x160], 0xf
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        // 0x58887B34: jle 0x58887b48
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x58887B36: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887B3C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58887B3E: je 0x58887b48
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58887B40: add ecx, 0x3c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887B46: jmp 0x58887b4a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58887B48: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58887B4A: push edi
        __asm _emit 0x57
        // 0x58887B4B: lea edx, [ebp + 0x43]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x43
        // 0x58887B4E: push edx
        __asm _emit 0x52
        // 0x58887B4F: lea edx, [ebx + 0x6a]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x6A
        // 0x58887B52: push edx
        __asm _emit 0x52
        // 0x58887B53: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58887B59: push ecx
        __asm _emit 0x51
        // 0x58887B5A: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58887B60: push esi
        __asm _emit 0x56
        // 0x58887B61: push ecx
        __asm _emit 0x51
        // 0x58887B62: push edx
        __asm _emit 0x52
        // 0x58887B63: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58887B65: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x62
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x58887B6A: jmp 0x58887b6e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58887B6C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58887B6E: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887B73: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58887B75: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58887B7A: mov dword ptr [esi + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887B80: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0xB1
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58887B85: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887B8A: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0x50
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58887B8F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58887B92: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58887B96: mov byte ptr [esp + 0x20], 0xa
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0A
        // 0x58887B9B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58887B9D: je 0x58887be1
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x58887B9F: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x58887BA2: cmp dword ptr [ecx + 0x160], 0xf
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        // 0x58887BA9: jle 0x58887bbd
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x58887BAB: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887BB1: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58887BB3: je 0x58887bbd
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58887BB5: add ecx, 0x3c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887BBB: jmp 0x58887bbf
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58887BBD: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58887BBF: push edi
        __asm _emit 0x57
        // 0x58887BC0: lea edx, [ebp + 0x54]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x54
        // 0x58887BC3: push edx
        __asm _emit 0x52
        // 0x58887BC4: lea edx, [ebx + 0x6a]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x6A
        // 0x58887BC7: push edx
        __asm _emit 0x52
        // 0x58887BC8: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58887BCE: push ecx
        __asm _emit 0x51
        // 0x58887BCF: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58887BD5: push esi
        __asm _emit 0x56
        // 0x58887BD6: push ecx
        __asm _emit 0x51
        // 0x58887BD7: push edx
        __asm _emit 0x52
        // 0x58887BD8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58887BDA: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0x61
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x58887BDF: jmp 0x58887be3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58887BE1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58887BE3: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887BE8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58887BEA: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58887BEF: mov dword ptr [esi + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887BF5: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0xB1
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58887BFA: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887BFF: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0x50
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58887C04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58887C07: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58887C0B: mov byte ptr [esp + 0x20], 0xb
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0B
        // 0x58887C10: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58887C12: je 0x58887c56
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x58887C14: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x58887C17: cmp dword ptr [ecx + 0x160], 0xf
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        // 0x58887C1E: jle 0x58887c32
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x58887C20: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887C26: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58887C28: je 0x58887c32
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58887C2A: add ecx, 0x3c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887C30: jmp 0x58887c34
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58887C32: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58887C34: push edi
        __asm _emit 0x57
        // 0x58887C35: lea edx, [ebp + 0x65]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x65
        // 0x58887C38: push edx
        __asm _emit 0x52
        // 0x58887C39: lea edx, [ebx + 0x6a]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x6A
        // 0x58887C3C: push edx
        __asm _emit 0x52
        // 0x58887C3D: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58887C43: push ecx
        __asm _emit 0x51
        // 0x58887C44: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58887C4A: push esi
        __asm _emit 0x56
        // 0x58887C4B: push ecx
        __asm _emit 0x51
        // 0x58887C4C: push edx
        __asm _emit 0x52
        // 0x58887C4D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58887C4F: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0x61
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x58887C54: jmp 0x58887c58
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58887C56: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58887C58: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887C5D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58887C5F: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58887C64: mov dword ptr [esi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887C6A: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0xB0
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58887C6F: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887C74: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0x4F
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58887C79: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58887C7C: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58887C80: mov byte ptr [esp + 0x20], 0xc
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0C
        // 0x58887C85: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58887C87: je 0x58887ccb
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x58887C89: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x58887C8C: cmp dword ptr [ecx + 0x160], 0xf
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        // 0x58887C93: jle 0x58887ca7
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x58887C95: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887C9B: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58887C9D: je 0x58887ca7
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58887C9F: add ecx, 0x3c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887CA5: jmp 0x58887ca9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58887CA7: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58887CA9: push edi
        __asm _emit 0x57
        // 0x58887CAA: lea edx, [ebp + 0x76]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x76
        // 0x58887CAD: push edx
        __asm _emit 0x52
        // 0x58887CAE: lea edx, [ebx + 0x6a]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x6A
        // 0x58887CB1: push edx
        __asm _emit 0x52
        // 0x58887CB2: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58887CB8: push ecx
        __asm _emit 0x51
        // 0x58887CB9: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58887CBF: push esi
        __asm _emit 0x56
        // 0x58887CC0: push ecx
        __asm _emit 0x51
        // 0x58887CC1: push edx
        __asm _emit 0x52
        // 0x58887CC2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58887CC4: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0x60
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x58887CC9: jmp 0x58887ccd
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58887CCB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58887CCD: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887CD2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58887CD4: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58887CD9: mov dword ptr [esi + 0x90], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887CDF: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0xB0
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58887CE4: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887CE9: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0x4F
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58887CEE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58887CF1: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58887CF5: mov byte ptr [esp + 0x20], 0xd
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0D
        // 0x58887CFA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58887CFC: je 0x58887d43
        __asm _emit 0x74
        __asm _emit 0x45
        // 0x58887CFE: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x58887D01: cmp dword ptr [ecx + 0x160], 0xf
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        // 0x58887D08: jle 0x58887d1c
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x58887D0A: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887D10: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58887D12: je 0x58887d1c
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58887D14: add ecx, 0x3c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887D1A: jmp 0x58887d1e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58887D1C: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58887D1E: push edi
        __asm _emit 0x57
        // 0x58887D1F: lea edx, [ebp + 0x98]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887D25: push edx
        __asm _emit 0x52
        // 0x58887D26: lea edx, [ebx + 0x6a]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x6A
        // 0x58887D29: push edx
        __asm _emit 0x52
        // 0x58887D2A: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58887D30: push ecx
        __asm _emit 0x51
        // 0x58887D31: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58887D37: push esi
        __asm _emit 0x56
        // 0x58887D38: push ecx
        __asm _emit 0x51
        // 0x58887D39: push edx
        __asm _emit 0x52
        // 0x58887D3A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58887D3C: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x60
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x58887D41: jmp 0x58887d45
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58887D43: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58887D45: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887D4A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58887D4C: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58887D51: mov dword ptr [esi + 0x98], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887D57: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0xAF
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58887D5C: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887D61: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58887D66: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58887D69: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58887D6D: mov byte ptr [esp + 0x20], 0xe
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0E
        // 0x58887D72: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58887D74: je 0x58887dbb
        __asm _emit 0x74
        __asm _emit 0x45
        // 0x58887D76: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x58887D79: cmp dword ptr [ecx + 0x160], 0xf
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        // 0x58887D80: jle 0x58887d94
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x58887D82: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887D88: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58887D8A: je 0x58887d94
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58887D8C: add ecx, 0x3c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887D92: jmp 0x58887d96
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58887D94: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58887D96: push edi
        __asm _emit 0x57
        // 0x58887D97: lea edx, [ebp + 0x87]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887D9D: push edx
        __asm _emit 0x52
        // 0x58887D9E: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58887DA4: add ebx, 0x6a
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x6A
        // 0x58887DA7: push ebx
        __asm _emit 0x53
        // 0x58887DA8: push ecx
        __asm _emit 0x51
        // 0x58887DA9: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58887DAF: push esi
        __asm _emit 0x56
        // 0x58887DB0: push ecx
        __asm _emit 0x51
        // 0x58887DB1: push edx
        __asm _emit 0x52
        // 0x58887DB2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58887DB4: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x5F
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x58887DB9: jmp 0x58887dbd
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58887DBB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58887DBD: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887DC2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58887DC4: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58887DC9: mov dword ptr [esi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887DCF: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0xAF
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58887DD4: add ebp, 0x13
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x13
        // 0x58887DD7: mov dword ptr [esp + 0x38], 0x6a
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x6A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887DDF: mov ebx, 0x1a8
        __asm _emit 0xBB
        __asm _emit 0xA8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887DE4: mov dword ptr [esp + 0x34], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58887DE8: mov dword ptr [esp + 0x28], 8
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887DF0: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58887DF2: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0x4E
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58887DF7: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58887DF9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58887DFC: mov dword ptr [esp + 0x40], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58887E00: mov byte ptr [esp + 0x20], 0xf
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0F
        // 0x58887E05: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58887E07: je 0x58887e87
        __asm _emit 0x74
        __asm _emit 0x7E
        // 0x58887E09: mov eax, dword ptr [0x58a246b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58887E0E: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58887E12: cmp dword ptr [eax + 0x164], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887E18: jle 0x58887e32
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x58887E1A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58887E1C: jl 0x58887e32
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x58887E1E: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887E25: je 0x58887e32
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58887E27: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887E2D: mov ebp, dword ptr [ebx + eax]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x03
        // 0x58887E30: jmp 0x58887e34
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58887E32: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58887E34: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58887E38: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58887E3C: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58887E40: push ecx
        __asm _emit 0x51
        // 0x58887E41: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58887E43: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58887E45: push edx
        __asm _emit 0x52
        // 0x58887E46: add eax, 0x74
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x74
        // 0x58887E49: push eax
        __asm _emit 0x50
        // 0x58887E4A: push esi
        __asm _emit 0x56
        // 0x58887E4B: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58887E4D: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0xB3
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58887E52: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58887E58: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x58887E5B: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58887E5D: je 0x58887e89
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x58887E5F: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x58887E62: mov dword ptr [edi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x58887E65: mov edx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x14
        // 0x58887E68: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x58887E6B: mov dword ptr [edi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x10
        // 0x58887E6E: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58887E70: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x58887E73: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58887E76: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x58887E79: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58887E7C: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x58887E7F: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58887E82: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x58887E85: jmp 0x58887e89
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58887E87: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58887E89: add dword ptr [esp + 0x34], 0x11
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x11
        // 0x58887E8E: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887E93: add dword ptr [esp + 0x38], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58887E97: mov dword ptr [esi + ebx - 0x10c], edi
        __asm _emit 0x89
        __asm _emit 0xBC
        __asm _emit 0x1E
        __asm _emit 0xF4
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58887E9E: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x58887EA1: sub dword ptr [esp + 0x28], eax
        __asm _emit 0x29
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58887EA5: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58887EAA: jne 0x58887df0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58887EB0: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58887EB4: lea ebx, [esi + 0xbc]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887EBA: add ebp, 0x12
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x12
        // 0x58887EBD: mov dword ptr [esp + 0x30], 9
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887EC5: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x58887EC7: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0x4D
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58887ECC: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58887ECF: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58887ED3: mov byte ptr [esp + 0x20], 0x10
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x10
        // 0x58887ED8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58887EDA: je 0x58887f11
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x58887EDC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58887EDE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58887EE0: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58887EE5: lea ecx, [ebp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x58887EE8: push ecx
        __asm _emit 0x51
        // 0x58887EE9: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58887EED: lea edx, [ecx + 0xbd]
        __asm _emit 0x8D
        __asm _emit 0x91
        __asm _emit 0xBD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887EF3: push edx
        __asm _emit 0x52
        // 0x58887EF4: push ebp
        __asm _emit 0x55
        // 0x58887EF5: add ecx, 0x85
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887EFB: push ecx
        __asm _emit 0x51
        // 0x58887EFC: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58887F02: push ecx
        __asm _emit 0x51
        // 0x58887F03: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58887F05: push esi
        __asm _emit 0x56
        // 0x58887F06: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58887F08: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0xB3
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x58887F0D: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58887F0F: jmp 0x58887f13
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58887F11: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58887F13: mov dx, word ptr [esp + 0x3c]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58887F18: mov dword ptr [ebx], edi
        __asm _emit 0x89
        __asm _emit 0x3B
        // 0x58887F1A: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x58887F1D: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58887F22: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x58887F26: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58887F28: je 0x58887f30
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58887F2A: push edi
        __asm _emit 0x57
        // 0x58887F2B: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0xB0
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58887F30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x58887F33: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58887F35: je 0x58887f3d
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58887F37: push edi
        __asm _emit 0x57
        // 0x58887F38: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0xAF
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58887F3D: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58887F3F: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x58887F42: add ebp, 0x11
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x11
        // 0x58887F45: sub dword ptr [esp + 0x30], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        // 0x58887F4A: mov dword ptr [eax + 0x54], 6
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x54
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887F51: jne 0x58887ec5
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x6E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58887F57: mov ebx, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58887F5D: push 0x5899fae8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58887F62: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58887F64: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887F6A: mov ecx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x6C
        // 0x58887F6D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58887F70: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58887F72: je 0x58887fa4
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x58887F74: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58887F76: je 0x58887fa4
        __asm _emit 0x74
        __asm _emit 0x2C
        // 0x58887F78: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58887F7A: mov edi, 0x80
        __asm _emit 0xBF
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887F7F: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58887F81: lea ecx, [edi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x58887F87: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58887F89: je 0x58887f9c
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x58887F8B: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x58887F8D: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58887F8F: je 0x58887f9c
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58887F91: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x58887F93: inc eax
        __asm _emit 0x40
        // 0x58887F94: inc edx
        __asm _emit 0x42
        // 0x58887F95: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x58887F98: jne 0x58887f81
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x58887F9A: jmp 0x58887fa0
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x58887F9C: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58887F9E: jne 0x58887fa1
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x58887FA0: dec eax
        __asm _emit 0x48
        // 0x58887FA1: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887FA4: push 0x5899fac8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0xFA
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58887FA9: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58887FAB: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887FB1: mov ecx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x6C
        // 0x58887FB4: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58887FB7: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58887FB9: je 0x58887ff3
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x58887FBB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58887FBD: je 0x58887ff3
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x58887FBF: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58887FC1: mov edi, 0x80
        __asm _emit 0xBF
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887FC6: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58887FC8: jmp 0x58887fd0
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra range: 0x58887FD0 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_58887760_segment_01() {
    __asm {
        // 0x58887FD0: lea ecx, [edi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x58887FD6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58887FD8: je 0x58887feb
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x58887FDA: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x58887FDC: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58887FDE: je 0x58887feb
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58887FE0: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x58887FE2: inc eax
        __asm _emit 0x40
        // 0x58887FE3: inc edx
        __asm _emit 0x42
        // 0x58887FE4: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x58887FE7: jne 0x58887fd0
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x58887FE9: jmp 0x58887fef
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x58887FEB: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58887FED: jne 0x58887ff0
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x58887FEF: dec eax
        __asm _emit 0x48
        // 0x58887FF0: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887FF3: push 0x5899faa8
        __asm _emit 0x68
        __asm _emit 0xA8
        __asm _emit 0xFA
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58887FF8: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58887FFA: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888000: mov ecx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x6C
        // 0x58888003: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58888006: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58888008: je 0x58888043
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x5888800A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888800C: je 0x58888043
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x5888800E: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58888010: mov edi, 0x80
        __asm _emit 0xBF
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888015: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58888017: jmp 0x58888020
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra range: 0x58888020 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_58887760_segment_02() {
    __asm {
        // 0x58888020: lea ecx, [edi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x58888026: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58888028: je 0x5888803b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5888802A: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x5888802C: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5888802E: je 0x5888803b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58888030: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x58888032: inc eax
        __asm _emit 0x40
        // 0x58888033: inc edx
        __asm _emit 0x42
        // 0x58888034: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x58888037: jne 0x58888020
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x58888039: jmp 0x5888803f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5888803B: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5888803D: jne 0x58888040
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x5888803F: dec eax
        __asm _emit 0x48
        // 0x58888040: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888043: push 0x5899fa88
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0xFA
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58888048: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5888804A: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888050: mov ecx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x6C
        // 0x58888053: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58888056: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58888058: je 0x58888093
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x5888805A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888805C: je 0x58888093
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x5888805E: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58888060: mov edi, 0x80
        __asm _emit 0xBF
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888065: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58888067: jmp 0x58888070
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra range: 0x58888070 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_58887760_segment_03() {
    __asm {
        // 0x58888070: lea ecx, [edi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x58888076: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58888078: je 0x5888808b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5888807A: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x5888807C: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5888807E: je 0x5888808b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58888080: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x58888082: inc eax
        __asm _emit 0x40
        // 0x58888083: inc edx
        __asm _emit 0x42
        // 0x58888084: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x58888087: jne 0x58888070
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x58888089: jmp 0x5888808f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5888808B: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5888808D: jne 0x58888090
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x5888808F: dec eax
        __asm _emit 0x48
        // 0x58888090: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888093: push 0x5899fa64
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0xFA
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58888098: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5888809A: mov ecx, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588880A0: mov ecx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x6C
        // 0x588880A3: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588880A6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588880A8: je 0x588880e3
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x588880AA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588880AC: je 0x588880e3
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x588880AE: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588880B0: mov edi, 0x80
        __asm _emit 0xBF
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588880B5: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588880B7: jmp 0x588880c0
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra range: 0x588880C0 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_58887760_segment_04() {
    __asm {
        // 0x588880C0: lea ecx, [edi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x588880C6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588880C8: je 0x588880db
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588880CA: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x588880CC: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x588880CE: je 0x588880db
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588880D0: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x588880D2: inc eax
        __asm _emit 0x40
        // 0x588880D3: inc edx
        __asm _emit 0x42
        // 0x588880D4: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x588880D7: jne 0x588880c0
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x588880D9: jmp 0x588880df
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x588880DB: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588880DD: jne 0x588880e0
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x588880DF: dec eax
        __asm _emit 0x48
        // 0x588880E0: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588880E3: push 0x5899fa40
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0xFA
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588880E8: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x588880EA: mov ecx, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588880F0: mov ecx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x6C
        // 0x588880F3: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588880F6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588880F8: je 0x58888133
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x588880FA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588880FC: je 0x58888133
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x588880FE: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58888100: mov edi, 0x80
        __asm _emit 0xBF
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888105: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58888107: jmp 0x58888110
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra range: 0x58888110 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_58887760_segment_05() {
    __asm {
        // 0x58888110: lea ecx, [edi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x58888116: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58888118: je 0x5888812b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5888811A: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x5888811C: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5888811E: je 0x5888812b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58888120: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x58888122: inc eax
        __asm _emit 0x40
        // 0x58888123: inc edx
        __asm _emit 0x42
        // 0x58888124: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x58888127: jne 0x58888110
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x58888129: jmp 0x5888812f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5888812B: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5888812D: jne 0x58888130
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x5888812F: dec eax
        __asm _emit 0x48
        // 0x58888130: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888133: push 0x5899fa1c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xFA
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58888138: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5888813A: mov ecx, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888140: mov ecx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x6C
        // 0x58888143: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58888146: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58888148: je 0x58888183
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x5888814A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888814C: je 0x58888183
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x5888814E: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58888150: mov edi, 0x80
        __asm _emit 0xBF
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888155: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58888157: jmp 0x58888160
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra range: 0x58888160 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_58887760_segment_06() {
    __asm {
        // 0x58888160: lea ecx, [edi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x58888166: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58888168: je 0x5888817b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5888816A: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x5888816C: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5888816E: je 0x5888817b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58888170: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x58888172: inc eax
        __asm _emit 0x40
        // 0x58888173: inc edx
        __asm _emit 0x42
        // 0x58888174: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x58888177: jne 0x58888160
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x58888179: jmp 0x5888817f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5888817B: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5888817D: jne 0x58888180
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x5888817F: dec eax
        __asm _emit 0x48
        // 0x58888180: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888183: push 0x5899f9f8
        __asm _emit 0x68
        __asm _emit 0xF8
        __asm _emit 0xF9
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58888188: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5888818A: mov ecx, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888190: mov ecx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x6C
        // 0x58888193: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58888196: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58888198: je 0x588881d3
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x5888819A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888819C: je 0x588881d3
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x5888819E: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588881A0: mov edi, 0x80
        __asm _emit 0xBF
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588881A5: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588881A7: jmp 0x588881b0
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra range: 0x588881B0 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_58887760_segment_07() {
    __asm {
        // 0x588881B0: lea ecx, [edi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x588881B6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588881B8: je 0x588881cb
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588881BA: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x588881BC: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x588881BE: je 0x588881cb
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588881C0: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x588881C2: inc eax
        __asm _emit 0x40
        // 0x588881C3: inc edx
        __asm _emit 0x42
        // 0x588881C4: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x588881C7: jne 0x588881b0
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x588881C9: jmp 0x588881cf
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x588881CB: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588881CD: jne 0x588881d0
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x588881CF: dec eax
        __asm _emit 0x48
        // 0x588881D0: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588881D3: push 0x5899f9d8
        __asm _emit 0x68
        __asm _emit 0xD8
        __asm _emit 0xF9
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588881D8: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x588881DA: mov ecx, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588881E0: mov ecx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x6C
        // 0x588881E3: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588881E6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588881E8: je 0x58888223
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x588881EA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588881EC: je 0x58888223
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x588881EE: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588881F0: mov edi, 0x80
        __asm _emit 0xBF
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588881F5: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588881F7: jmp 0x58888200
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra range: 0x58888200 .. +0x6B bytes.
extern "C" __declspec(naked) void FUN_58887760_segment_08() {
    __asm {
        // 0x58888200: lea ecx, [edi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x58888206: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58888208: je 0x5888821b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5888820A: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x5888820C: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5888820E: je 0x5888821b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58888210: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x58888212: inc eax
        __asm _emit 0x40
        // 0x58888213: inc edx
        __asm _emit 0x42
        // 0x58888214: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x58888217: jne 0x58888200
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x58888219: jmp 0x5888821f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5888821B: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5888821D: jne 0x58888220
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x5888821F: dec eax
        __asm _emit 0x48
        // 0x58888220: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888223: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58888225: mov eax, 0xfff0
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888822A: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5888822E: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58888232: mov word ptr [esi + 0xe0], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888239: mov dword ptr [esi + 0xe4], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888823F: mov edx, 0xe5ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888244: mov eax, 0x500
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888249: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5888824C: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x5888824F: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58888253: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58888255: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58888259: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888260: pop ecx
        __asm _emit 0x59
        // 0x58888261: pop edi
        __asm _emit 0x5F
        // 0x58888262: pop esi
        __asm _emit 0x5E
        // 0x58888263: pop ebp
        __asm _emit 0x5D
        // 0x58888264: pop ebx
        __asm _emit 0x5B
        // 0x58888265: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58888268: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
