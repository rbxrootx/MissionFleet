// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58849B70 .. +0xA10 bytes.
// Source symbol alias: FUN_58849b70.
extern "C" __declspec(naked) void FUN_58849b70() {
    __asm {
        // 0x58849B70: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58849B72: push 0x58984e12
        __asm _emit 0x68
        __asm _emit 0x12
        __asm _emit 0x4E
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58849B77: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849B7D: push eax
        __asm _emit 0x50
        // 0x58849B7E: push ecx
        __asm _emit 0x51
        // 0x58849B7F: push ebx
        __asm _emit 0x53
        // 0x58849B80: push ebp
        __asm _emit 0x55
        // 0x58849B81: push esi
        __asm _emit 0x56
        // 0x58849B82: push edi
        __asm _emit 0x57
        // 0x58849B83: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58849B88: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58849B8A: push eax
        __asm _emit 0x50
        // 0x58849B8B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58849B8F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849B95: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58849B97: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58849B9B: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58849B9F: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58849BA3: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58849BA7: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58849BAB: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58849BAF: push eax
        __asm _emit 0x50
        // 0x58849BB0: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58849BB4: push ecx
        __asm _emit 0x51
        // 0x58849BB5: push edx
        __asm _emit 0x52
        // 0x58849BB6: push edi
        __asm _emit 0x57
        // 0x58849BB7: push ebx
        __asm _emit 0x53
        // 0x58849BB8: push eax
        __asm _emit 0x50
        // 0x58849BB9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58849BBB: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0x95
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58849BC0: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58849BC6: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58849BCB: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x58849BCE: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58849BD0: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x58849BD3: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849BDA: mov dword ptr [esi + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x5C
        // 0x58849BDD: lea edi, [esi + 0x74]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x74
        // 0x58849BE0: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58849BE2: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58849BE6: mov dword ptr [esi], 0x5899e780
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x80
        __asm _emit 0xE7
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58849BEC: call 0x588ffdb0
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0x61
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58849BF1: lea ebp, [esi + 0x8c]
        __asm _emit 0x8D
        __asm _emit 0xAE
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849BF7: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58849BF9: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x58849BFE: call 0x588ffdb0
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0x61
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58849C03: mov ecx, dword ptr [0x58a24768]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58849C09: mov dword ptr [esi + 0x60], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x58849C0C: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x58849C0E: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58849C10: mov byte ptr [esp + 0x24], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x58849C15: mov dword ptr [esi + 0x64], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x64
        // 0x58849C18: mov dword ptr [esi + 0x68], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x68
        // 0x58849C1B: mov dword ptr [esi + 0x6c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x6C
        // 0x58849C1E: mov dword ptr [esi + 0x70], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x70
        // 0x58849C21: mov dword ptr [esi + 0x108], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849C27: mov dword ptr [esi + 0x10c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849C2D: call 0x58752830
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0x8B
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58849C32: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x58849C34: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58849C36: call 0x58752830
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x8B
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58849C3B: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58849C3D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x30
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58849C42: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58849C45: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58849C49: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x58849C4E: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58849C50: je 0x58849c86
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x58849C52: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x58849C55: cmp dword ptr [ecx + 0x164], 0xa
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0A
        // 0x58849C5C: jle 0x58849c6d
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x58849C5E: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849C64: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58849C66: je 0x58849c6d
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58849C68: mov ecx, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x28
        // 0x58849C6B: jmp 0x58849c6f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58849C6D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58849C6F: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58849C73: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58849C75: push edx
        __asm _emit 0x52
        // 0x58849C76: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58849C7A: push edx
        __asm _emit 0x52
        // 0x58849C7B: push ecx
        __asm _emit 0x51
        // 0x58849C7C: push esi
        __asm _emit 0x56
        // 0x58849C7D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58849C7F: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0x7F
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58849C84: jmp 0x58849c88
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58849C86: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58849C88: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58849C8A: mov byte ptr [esp + 0x24], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x58849C8F: mov dword ptr [esi + 0xa4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849C95: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0x2F
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58849C9A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58849C9D: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58849CA1: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x58849CA6: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58849CA8: je 0x58849cde
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x58849CAA: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x58849CAD: cmp dword ptr [ecx + 0x164], 9
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x09
        // 0x58849CB4: jle 0x58849cc5
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x58849CB6: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849CBC: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58849CBE: je 0x58849cc5
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58849CC0: mov ecx, dword ptr [ecx + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x24
        // 0x58849CC3: jmp 0x58849cc7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58849CC5: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58849CC7: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58849CCB: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58849CCD: push edx
        __asm _emit 0x52
        // 0x58849CCE: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58849CD2: push edx
        __asm _emit 0x52
        // 0x58849CD3: push ecx
        __asm _emit 0x51
        // 0x58849CD4: push esi
        __asm _emit 0x56
        // 0x58849CD5: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58849CD7: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0x7F
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58849CDC: jmp 0x58849ce0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58849CDE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58849CE0: push 0x5c
        __asm _emit 0x6A
        __asm _emit 0x5C
        // 0x58849CE2: mov byte ptr [esp + 0x24], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x58849CE7: mov dword ptr [esi + 0xa8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849CED: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0x2F
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58849CF2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58849CF5: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58849CF9: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x58849CFE: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58849D00: je 0x58849d12
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x58849D02: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58849D04: push ebx
        __asm _emit 0x53
        // 0x58849D05: push ebx
        __asm _emit 0x53
        // 0x58849D06: push ebx
        __asm _emit 0x53
        // 0x58849D07: push ebx
        __asm _emit 0x53
        // 0x58849D08: push esi
        __asm _emit 0x56
        // 0x58849D09: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58849D0B: call 0x58759f60
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58849D10: jmp 0x58849d14
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58849D12: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58849D14: push 0x5c
        __asm _emit 0x6A
        __asm _emit 0x5C
        // 0x58849D16: mov byte ptr [esp + 0x24], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x58849D1B: mov dword ptr [esi + 0xac], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849D21: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x2F
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58849D26: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58849D29: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58849D2D: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x58849D32: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58849D34: je 0x58849d46
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x58849D36: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58849D38: push ebx
        __asm _emit 0x53
        // 0x58849D39: push ebx
        __asm _emit 0x53
        // 0x58849D3A: push ebx
        __asm _emit 0x53
        // 0x58849D3B: push ebx
        __asm _emit 0x53
        // 0x58849D3C: push esi
        __asm _emit 0x56
        // 0x58849D3D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58849D3F: call 0x58759f60
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58849D44: jmp 0x58849d48
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58849D46: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58849D48: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849D4E: push esi
        __asm _emit 0x56
        // 0x58849D4F: mov byte ptr [esp + 0x24], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x58849D54: mov dword ptr [esi + 0xb0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849D5A: call 0x58759f20
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0x01
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58849D5F: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849D65: push esi
        __asm _emit 0x56
        // 0x58849D66: call 0x58759f20
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0x01
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58849D6B: lea eax, [esi + 0xb4]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849D71: mov dword ptr [esp + 0x38], 8
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849D79: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58849D7D: mov ebx, 0x20
        __asm _emit 0xBB
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849D82: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58849D84: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0x2E
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58849D89: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58849D8B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58849D8E: mov dword ptr [esp + 0x28], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58849D92: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        // 0x58849D97: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58849D99: je 0x58849e12
        __asm _emit 0x74
        __asm _emit 0x77
        // 0x58849D9B: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x58849D9E: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58849DA2: cmp dword ptr [eax + 0x164], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849DA8: jle 0x58849dbd
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x58849DAA: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58849DAC: jl 0x58849dbd
        __asm _emit 0x7C
        __asm _emit 0x0F
        // 0x58849DAE: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849DB4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58849DB6: je 0x58849dbd
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58849DB8: mov ebp, dword ptr [ebx + eax]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x03
        // 0x58849DBB: jmp 0x58849dbf
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58849DBD: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58849DBF: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58849DC3: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58849DC7: mov eax, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849DCD: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58849DCF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58849DD1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58849DD3: push ecx
        __asm _emit 0x51
        // 0x58849DD4: push edx
        __asm _emit 0x52
        // 0x58849DD5: push eax
        __asm _emit 0x50
        // 0x58849DD6: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58849DD8: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0x93
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58849DDD: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58849DE3: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x58849DE6: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58849DE8: je 0x58849e14
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x58849DEA: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x58849DED: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x58849DF0: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x58849DF3: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x58849DF6: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x58849DF9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58849DFB: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        // 0x58849DFE: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58849E01: mov dword ptr [edi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x58849E04: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58849E07: mov dword ptr [edi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x1C
        // 0x58849E0A: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58849E0D: mov dword ptr [edi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x20
        // 0x58849E10: jmp 0x58849e14
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58849E12: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58849E14: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58849E18: dec dword ptr [esp + 0x38]
        __asm _emit 0xFF
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58849E1C: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        // 0x58849E1E: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58849E21: sub ebx, 4
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x58849E24: cmp ebx, 0x18
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x18
        // 0x58849E27: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x58849E2C: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58849E30: jg 0x58849d82
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0x4C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58849E36: mov dword ptr [esp + 0x38], 0x5b
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x5B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849E3E: mov ebx, 0x16c
        __asm _emit 0xBB
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849E43: mov dword ptr [esp + 0x34], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849E4B: jmp 0x58849e50
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x58849E4D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58849E50: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58849E52: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x2D
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58849E57: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58849E59: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58849E5C: mov dword ptr [esp + 0x28], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58849E60: mov byte ptr [esp + 0x20], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        // 0x58849E65: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58849E67: je 0x58849ee0
        __asm _emit 0x74
        __asm _emit 0x77
        // 0x58849E69: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x58849E6C: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58849E70: cmp dword ptr [eax + 0x164], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849E76: jle 0x58849e8b
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x58849E78: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58849E7A: jl 0x58849e8b
        __asm _emit 0x7C
        __asm _emit 0x0F
        // 0x58849E7C: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849E82: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58849E84: je 0x58849e8b
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58849E86: mov ebp, dword ptr [ebx + eax]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x03
        // 0x58849E89: jmp 0x58849e8d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58849E8B: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58849E8D: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58849E91: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58849E95: mov eax, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849E9B: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58849E9D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58849E9F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58849EA1: push ecx
        __asm _emit 0x51
        // 0x58849EA2: push edx
        __asm _emit 0x52
        // 0x58849EA3: push eax
        __asm _emit 0x50
        // 0x58849EA4: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58849EA6: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x92
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58849EAB: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58849EB1: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x58849EB4: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58849EB6: je 0x58849ee2
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x58849EB8: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x58849EBB: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x58849EBE: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x58849EC1: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x58849EC4: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x58849EC7: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58849EC9: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        // 0x58849ECC: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58849ECF: mov dword ptr [edi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x58849ED2: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58849ED5: mov dword ptr [edi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x1C
        // 0x58849ED8: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58849EDB: mov dword ptr [edi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x20
        // 0x58849EDE: jmp 0x58849ee2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58849EE0: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58849EE2: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849EE7: add dword ptr [esp + 0x38], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58849EEB: mov dword ptr [esi + ebx - 0xb0], edi
        __asm _emit 0x89
        __asm _emit 0xBC
        __asm _emit 0x1E
        __asm _emit 0x50
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58849EF2: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x58849EF5: sub dword ptr [esp + 0x34], eax
        __asm _emit 0x29
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58849EF9: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x58849EFE: jne 0x58849e50
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x4C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58849F04: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849F0A: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58849F0F: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x8E
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58849F14: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849F1A: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849F1F: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x8D
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58849F24: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849F29: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0x2D
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58849F2E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58849F31: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58849F35: mov byte ptr [esp + 0x20], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x09
        // 0x58849F3A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58849F3C: je 0x58849f89
        __asm _emit 0x74
        __asm _emit 0x4B
        // 0x58849F3E: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x58849F41: cmp dword ptr [ecx + 0x160], 1
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58849F48: jle 0x58849f59
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x58849F4A: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849F50: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58849F52: je 0x58849f59
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58849F54: add ecx, 0x40
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x40
        // 0x58849F57: jmp 0x58849f5b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58849F59: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58849F5B: mov ebx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58849F5F: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58849F63: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58849F65: lea edx, [ebx + 0xc8]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849F6B: push edx
        __asm _emit 0x52
        // 0x58849F6C: lea edx, [ebp + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x3C
        // 0x58849F6F: push edx
        __asm _emit 0x52
        // 0x58849F70: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58849F76: push ecx
        __asm _emit 0x51
        // 0x58849F77: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58849F7D: push esi
        __asm _emit 0x56
        // 0x58849F7E: push ecx
        __asm _emit 0x51
        // 0x58849F7F: push edx
        __asm _emit 0x52
        // 0x58849F80: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58849F82: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0x3E
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58849F87: jmp 0x58849f93
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x58849F89: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58849F8D: mov ebx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58849F91: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58849F93: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849F98: mov byte ptr [esp + 0x24], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x58849F9D: mov dword ptr [esi + 0xcc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849FA3: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0x2C
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58849FA8: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58849FAB: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58849FAF: mov byte ptr [esp + 0x20], 0xa
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0A
        // 0x58849FB4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58849FB6: je 0x58849ffb
        __asm _emit 0x74
        __asm _emit 0x43
        // 0x58849FB8: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x58849FBB: cmp dword ptr [ecx + 0x160], 2
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x58849FC2: jle 0x58849fd3
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x58849FC4: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849FCA: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58849FCC: je 0x58849fd3
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58849FCE: sub ecx, -0x80
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x80
        // 0x58849FD1: jmp 0x58849fd5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58849FD3: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58849FD5: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58849FD7: lea edx, [ebx + 0xc8]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849FDD: push edx
        __asm _emit 0x52
        // 0x58849FDE: lea edx, [ebp + 0x62]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x62
        // 0x58849FE1: push edx
        __asm _emit 0x52
        // 0x58849FE2: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58849FE8: push ecx
        __asm _emit 0x51
        // 0x58849FE9: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58849FEF: push esi
        __asm _emit 0x56
        // 0x58849FF0: push ecx
        __asm _emit 0x51
        // 0x58849FF1: push edx
        __asm _emit 0x52
        // 0x58849FF2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58849FF4: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x3D
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58849FF9: jmp 0x58849ffd
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58849FFB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58849FFD: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A002: mov byte ptr [esp + 0x24], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5884A007: mov dword ptr [esi + 0xd0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A00D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0x2C
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884A012: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884A015: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5884A019: mov byte ptr [esp + 0x20], 0xb
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0B
        // 0x5884A01E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884A020: je 0x5884a06b
        __asm _emit 0x74
        __asm _emit 0x49
        // 0x5884A022: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x5884A025: cmp dword ptr [ecx + 0x160], 3
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x5884A02C: jle 0x5884a040
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5884A02E: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A034: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884A036: je 0x5884a040
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5884A038: add ecx, 0xc0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A03E: jmp 0x5884a042
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884A040: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5884A042: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884A044: lea edx, [ebx + 0xc8]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A04A: push edx
        __asm _emit 0x52
        // 0x5884A04B: lea edx, [ebp + 0x88]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A051: push edx
        __asm _emit 0x52
        // 0x5884A052: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884A058: push ecx
        __asm _emit 0x51
        // 0x5884A059: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884A05F: push esi
        __asm _emit 0x56
        // 0x5884A060: push ecx
        __asm _emit 0x51
        // 0x5884A061: push edx
        __asm _emit 0x52
        // 0x5884A062: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884A064: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x3D
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5884A069: jmp 0x5884a06d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884A06B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884A06D: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A072: mov byte ptr [esp + 0x24], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5884A077: mov dword ptr [esi + 0xd4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A07D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0x2B
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884A082: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884A085: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5884A089: mov byte ptr [esp + 0x20], 0xc
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0C
        // 0x5884A08E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884A090: je 0x5884a0e0
        __asm _emit 0x74
        __asm _emit 0x4E
        // 0x5884A092: mov ecx, dword ptr [0x58a2476c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x6C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884A098: cmp dword ptr [ecx + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A09F: jle 0x5884a0b2
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x5884A0A1: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A0A8: je 0x5884a0b2
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5884A0AA: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A0B0: jmp 0x5884a0b4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884A0B2: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5884A0B4: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884A0B6: lea edx, [ebx + 0xe]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x0E
        // 0x5884A0B9: push edx
        __asm _emit 0x52
        // 0x5884A0BA: lea edx, [ebp + 0x8f]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A0C0: push edx
        __asm _emit 0x52
        // 0x5884A0C1: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884A0C7: push ecx
        __asm _emit 0x51
        // 0x5884A0C8: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A0CE: push ecx
        __asm _emit 0x51
        // 0x5884A0CF: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884A0D5: push edx
        __asm _emit 0x52
        // 0x5884A0D6: push ecx
        __asm _emit 0x51
        // 0x5884A0D7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884A0D9: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0x3C
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5884A0DE: jmp 0x5884a0e2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884A0E0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884A0E2: mov dword ptr [esi + 0xd8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A0E8: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A0ED: mov byte ptr [esp + 0x24], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5884A0F2: mov dword ptr [eax + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A0F9: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x2B
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884A0FE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884A101: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5884A105: mov byte ptr [esp + 0x20], 0xd
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0D
        // 0x5884A10A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884A10C: je 0x5884a162
        __asm _emit 0x74
        __asm _emit 0x54
        // 0x5884A10E: mov ecx, dword ptr [0x58a2476c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x6C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884A114: cmp dword ptr [ecx + 0x160], 4
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x5884A11B: jle 0x5884a134
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5884A11D: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A124: je 0x5884a134
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5884A126: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A12C: add edx, 0x100
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A132: jmp 0x5884a136
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884A134: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5884A136: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884A138: lea ecx, [ebx + 0xe]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x0E
        // 0x5884A13B: push ecx
        __asm _emit 0x51
        // 0x5884A13C: lea ecx, [ebp + 0x8f]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A142: push ecx
        __asm _emit 0x51
        // 0x5884A143: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884A149: push edx
        __asm _emit 0x52
        // 0x5884A14A: mov edx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A150: push edx
        __asm _emit 0x52
        // 0x5884A151: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884A157: push ecx
        __asm _emit 0x51
        // 0x5884A158: push edx
        __asm _emit 0x52
        // 0x5884A159: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884A15B: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x3C
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5884A160: jmp 0x5884a164
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884A162: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884A164: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A169: mov byte ptr [esp + 0x24], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5884A16E: mov dword ptr [esi + 0xdc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A174: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0x2A
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884A179: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884A17C: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5884A180: mov byte ptr [esp + 0x20], 0xe
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0E
        // 0x5884A185: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884A187: je 0x5884a1da
        __asm _emit 0x74
        __asm _emit 0x51
        // 0x5884A189: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884A18F: cmp dword ptr [ecx + 0x160], 0x1e
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1E
        // 0x5884A196: jle 0x5884a1af
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5884A198: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A19F: je 0x5884a1af
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5884A1A1: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A1A7: add ecx, 0x780
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A1AD: jmp 0x5884a1b1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884A1AF: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5884A1B1: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884A1B5: push edx
        __asm _emit 0x52
        // 0x5884A1B6: lea edx, [ebx + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x24
        // 0x5884A1B9: push edx
        __asm _emit 0x52
        // 0x5884A1BA: lea edx, [ebp + 0xa7]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xA7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A1C0: push edx
        __asm _emit 0x52
        // 0x5884A1C1: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884A1C7: push ecx
        __asm _emit 0x51
        // 0x5884A1C8: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884A1CE: push esi
        __asm _emit 0x56
        // 0x5884A1CF: push ecx
        __asm _emit 0x51
        // 0x5884A1D0: push edx
        __asm _emit 0x52
        // 0x5884A1D1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884A1D3: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0x3B
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5884A1D8: jmp 0x5884a1dc
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884A1DA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884A1DC: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A1E1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884A1E3: mov byte ptr [esp + 0x24], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5884A1E8: mov dword ptr [esi + 0x118], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A1EE: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0x8B
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884A1F3: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A1F8: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0x2A
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884A1FD: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884A200: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5884A204: mov byte ptr [esp + 0x20], 0xf
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0F
        // 0x5884A209: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884A20B: je 0x5884a261
        __asm _emit 0x74
        __asm _emit 0x54
        // 0x5884A20D: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884A213: cmp dword ptr [ecx + 0x160], 0x1f
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1F
        // 0x5884A21A: jle 0x5884a233
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5884A21C: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A223: je 0x5884a233
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5884A225: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A22B: add ecx, 0x7c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A231: jmp 0x5884a235
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884A233: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5884A235: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884A239: push edx
        __asm _emit 0x52
        // 0x5884A23A: lea edx, [ebx + 0xb3]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0xB3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A240: push edx
        __asm _emit 0x52
        // 0x5884A241: lea edx, [ebp + 0xa7]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xA7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A247: push edx
        __asm _emit 0x52
        // 0x5884A248: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884A24E: push ecx
        __asm _emit 0x51
        // 0x5884A24F: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884A255: push esi
        __asm _emit 0x56
        // 0x5884A256: push ecx
        __asm _emit 0x51
        // 0x5884A257: push edx
        __asm _emit 0x52
        // 0x5884A258: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884A25A: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0x3B
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5884A25F: jmp 0x5884a263
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884A261: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884A263: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A268: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884A26A: mov byte ptr [esp + 0x24], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5884A26F: mov dword ptr [esi + 0x11c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A275: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0x8A
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884A27A: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5884A27C: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x29
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884A281: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5884A283: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884A286: mov dword ptr [esp + 0x2c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5884A28A: mov byte ptr [esp + 0x20], 0x10
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x10
        // 0x5884A28F: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5884A291: je 0x5884a2be
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x5884A293: mov eax, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A299: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884A29B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884A29D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884A29F: lea ecx, [ebx + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x10
        // 0x5884A2A2: push ecx
        __asm _emit 0x51
        // 0x5884A2A3: lea edx, [ebp + 0x15]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x15
        // 0x5884A2A6: push edx
        __asm _emit 0x52
        // 0x5884A2A7: push eax
        __asm _emit 0x50
        // 0x5884A2A8: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5884A2AA: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0x8E
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884A2AF: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5884A2B5: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A2BC: jmp 0x5884a2c0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884A2BE: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5884A2C0: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5884A2C2: mov byte ptr [esp + 0x24], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5884A2C7: mov dword ptr [esi + 0xe0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A2CD: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0x29
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884A2D2: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5884A2D4: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884A2D7: mov dword ptr [esp + 0x2c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5884A2DB: mov byte ptr [esp + 0x20], 0x11
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x11
        // 0x5884A2E0: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5884A2E2: je 0x5884a30f
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x5884A2E4: mov eax, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A2EA: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884A2EC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884A2EE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884A2F0: lea ecx, [ebx + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x10
        // 0x5884A2F3: push ecx
        __asm _emit 0x51
        // 0x5884A2F4: lea edx, [ebp + 0x3d]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x3D
        // 0x5884A2F7: push edx
        __asm _emit 0x52
        // 0x5884A2F8: push eax
        __asm _emit 0x50
        // 0x5884A2F9: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5884A2FB: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x8E
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884A300: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5884A306: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A30D: jmp 0x5884a311
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884A30F: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5884A311: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A316: mov byte ptr [esp + 0x24], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5884A31B: mov dword ptr [esi + 0xe4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A321: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x29
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884A326: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884A329: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5884A32D: mov byte ptr [esp + 0x20], 0x12
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x12
        // 0x5884A332: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884A334: je 0x5884a381
        __asm _emit 0x74
        __asm _emit 0x4B
        // 0x5884A336: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x5884A339: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5884A33B: cmp dword ptr [ecx + 0x160], 0x30
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x30
        // 0x5884A342: jle 0x5884a356
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5884A344: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A34A: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5884A34C: je 0x5884a356
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5884A34E: add ecx, 0xc00
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A354: jmp 0x5884a358
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884A356: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5884A358: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884A35A: lea edx, [ebx + 0xe]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x0E
        // 0x5884A35D: push edx
        __asm _emit 0x52
        // 0x5884A35E: lea edx, [ebp + 0x47]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x47
        // 0x5884A361: push edx
        __asm _emit 0x52
        // 0x5884A362: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884A368: push ecx
        __asm _emit 0x51
        // 0x5884A369: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A36F: push ecx
        __asm _emit 0x51
        // 0x5884A370: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884A376: push edx
        __asm _emit 0x52
        // 0x5884A377: push ecx
        __asm _emit 0x51
        // 0x5884A378: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884A37A: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0x3A
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5884A37F: jmp 0x5884a385
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5884A381: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884A383: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5884A385: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A38A: mov byte ptr [esp + 0x24], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5884A38F: mov dword ptr [esi + 0xe8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A395: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0x28
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884A39A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884A39D: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5884A3A1: mov byte ptr [esp + 0x20], 0x13
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x13
        // 0x5884A3A6: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5884A3A8: je 0x5884a3f3
        __asm _emit 0x74
        __asm _emit 0x49
        // 0x5884A3AA: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x5884A3AD: cmp dword ptr [ecx + 0x160], 0x31
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x31
        // 0x5884A3B4: jle 0x5884a3c8
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5884A3B6: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A3BC: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5884A3BE: je 0x5884a3c8
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5884A3C0: add ecx, 0xc40
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x40
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A3C6: jmp 0x5884a3ca
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884A3C8: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5884A3CA: mov edx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A3D0: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884A3D2: add ebx, 0xe
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x0E
        // 0x5884A3D5: push ebx
        __asm _emit 0x53
        // 0x5884A3D6: add ebp, 0x6b
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x6B
        // 0x5884A3D9: push ebp
        __asm _emit 0x55
        // 0x5884A3DA: push ecx
        __asm _emit 0x51
        // 0x5884A3DB: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884A3E1: push edx
        __asm _emit 0x52
        // 0x5884A3E2: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884A3E8: push ecx
        __asm _emit 0x51
        // 0x5884A3E9: push edx
        __asm _emit 0x52
        // 0x5884A3EA: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884A3EC: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x39
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5884A3F1: jmp 0x5884a3f5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884A3F3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884A3F5: mov dword ptr [esi + 0xec], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A3FB: mov eax, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A401: mov dword ptr [eax + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x50
        // 0x5884A404: mov eax, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A40A: mov dword ptr [eax + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x50
        // 0x5884A40D: mov ecx, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A413: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A418: mov byte ptr [esp + 0x24], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5884A41D: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0x88
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884A422: mov ecx, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A428: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A42D: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0x88
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884A432: mov ecx, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A438: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A43D: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0x88
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884A442: push 0xa8
        __asm _emit 0x68
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A447: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x28
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884A44C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884A44F: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5884A453: mov byte ptr [esp + 0x20], 0x14
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x14
        // 0x5884A458: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5884A45A: je 0x5884a474
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x5884A45C: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884A45E: push edi
        __asm _emit 0x57
        // 0x5884A45F: push edi
        __asm _emit 0x57
        // 0x5884A460: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A465: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A46A: push esi
        __asm _emit 0x56
        // 0x5884A46B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884A46D: call 0x5884ca60
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A472: jmp 0x5884a476
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884A474: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884A476: push 0xa4
        __asm _emit 0x68
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A47B: mov byte ptr [esp + 0x24], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5884A480: mov dword ptr [esi + 0x110], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A486: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0x27
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884A48B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884A48E: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5884A492: mov byte ptr [esp + 0x20], 0x15
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x15
        // 0x5884A497: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5884A499: je 0x5884a4b3
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x5884A49B: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884A49D: push edi
        __asm _emit 0x57
        // 0x5884A49E: push edi
        __asm _emit 0x57
        // 0x5884A49F: push 0x14a
        __asm _emit 0x68
        __asm _emit 0x4A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A4A4: push 0x130
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A4A9: push esi
        __asm _emit 0x56
        // 0x5884A4AA: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884A4AC: call 0x58823270
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0x8D
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5884A4B1: jmp 0x5884a4b5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884A4B3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884A4B5: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A4BB: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884A4C0: mov byte ptr [esp + 0x24], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5884A4C5: mov dword ptr [esi + 0x114], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A4CB: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x88
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884A4D0: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A4D5: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5884A4D7: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5884A4D9: mov word ptr [esi + 0xc4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A4E0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884A4E2: mov word ptr [esi + 0xf4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A4E9: mov word ptr [esi + 0xfa], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A4F0: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x5884A4F3: mov word ptr [esi + 0xf0], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A4FA: mov word ptr [esi + 0xf6], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xF6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A501: mov word ptr [esi + 0xf2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A508: mov word ptr [esi + 0xf8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A50F: mov dword ptr [esi + 0xfc], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A515: mov dword ptr [esi + 0x100], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A51B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884A51D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x5884A520: cmp eax, dword ptr [esi + 0xa8]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A526: je 0x5884a531
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5884A528: mov edx, 0xbfff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A52D: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5884A531: mov eax, dword ptr [eax + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x38
        // 0x5884A534: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5884A536: jne 0x5884a520
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x5884A538: mov eax, 0xfff0
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A53D: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5884A541: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5884A545: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5884A547: mov eax, 0xe5ff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A54C: mov word ptr [esi + 0xf6], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xF6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A553: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x5884A556: mov ecx, 0x500
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A55B: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x5884A55E: mov dword ptr [esi + 0xc8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A564: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5884A568: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5884A56A: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5884A56E: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A575: pop ecx
        __asm _emit 0x59
        // 0x5884A576: pop edi
        __asm _emit 0x5F
        // 0x5884A577: pop esi
        __asm _emit 0x5E
        // 0x5884A578: pop ebp
        __asm _emit 0x5D
        // 0x5884A579: pop ebx
        __asm _emit 0x5B
        // 0x5884A57A: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5884A57D: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
