// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588C7A50 .. +0x790 bytes.
// Source symbol alias: FUN_588c7a50.
extern "C" __declspec(naked) void FUN_588c7a50() {
    __asm {
        // 0x588C7A50: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588C7A52: push 0x58988b8d
        __asm _emit 0x68
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588C7A57: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7A5D: push eax
        __asm _emit 0x50
        // 0x588C7A5E: push ecx
        __asm _emit 0x51
        // 0x588C7A5F: push ebx
        __asm _emit 0x53
        // 0x588C7A60: push ebp
        __asm _emit 0x55
        // 0x588C7A61: push esi
        __asm _emit 0x56
        // 0x588C7A62: push edi
        __asm _emit 0x57
        // 0x588C7A63: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588C7A68: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588C7A6A: push eax
        __asm _emit 0x50
        // 0x588C7A6B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588C7A6F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7A75: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588C7A77: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588C7A7B: mov edi, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588C7A7F: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588C7A83: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588C7A87: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588C7A8B: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588C7A8D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588C7A8F: movsx eax, di
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0xC7
        // 0x588C7A92: push eax
        __asm _emit 0x50
        // 0x588C7A93: push ebp
        __asm _emit 0x55
        // 0x588C7A94: push ebx
        __asm _emit 0x53
        // 0x588C7A95: push ecx
        __asm _emit 0x51
        // 0x588C7A96: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588C7A98: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0xB7
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C7A9D: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588C7A9F: mov dword ptr [esp + 0x24], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7AA7: mov dword ptr [esi], 0x589a0c18
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x18
        __asm _emit 0x0C
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588C7AAD: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x51
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588C7AB2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588C7AB5: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588C7AB9: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588C7ABE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C7AC0: je 0x588c7afe
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x588C7AC2: mov ecx, dword ptr [0x58a24698]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C7AC8: cmp dword ptr [ecx + 0x164], 0x6e
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x6E
        // 0x588C7ACF: jle 0x588c7ae8
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588C7AD1: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7AD8: je 0x588c7ae8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588C7ADA: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7AE0: mov ecx, dword ptr [edx + 0x1b8]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7AE6: jmp 0x588c7aea
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C7AE8: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588C7AEA: lea edx, [edi + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x64
        // 0x588C7AED: push edx
        __asm _emit 0x52
        // 0x588C7AEE: push ebp
        __asm _emit 0x55
        // 0x588C7AEF: lea edx, [ebx - 0xa]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0xF6
        // 0x588C7AF2: push edx
        __asm _emit 0x52
        // 0x588C7AF3: push ecx
        __asm _emit 0x51
        // 0x588C7AF4: push esi
        __asm _emit 0x56
        // 0x588C7AF5: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588C7AF7: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588C7AFC: jmp 0x588c7b00
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C7AFE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C7B00: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588C7B02: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588C7B07: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588C7B0A: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x51
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588C7B0F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588C7B12: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588C7B16: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x588C7B1B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C7B1D: je 0x588c7b5b
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x588C7B1F: mov ecx, dword ptr [0x58a24698]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C7B25: cmp dword ptr [ecx + 0x164], 0x6f
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x6F
        // 0x588C7B2C: jle 0x588c7b45
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588C7B2E: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7B35: je 0x588c7b45
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588C7B37: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7B3D: mov ecx, dword ptr [ecx + 0x1bc]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7B43: jmp 0x588c7b47
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C7B45: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588C7B47: add edi, 0x63
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x63
        // 0x588C7B4A: push edi
        __asm _emit 0x57
        // 0x588C7B4B: push ebp
        __asm _emit 0x55
        // 0x588C7B4C: lea edx, [ebx - 0xa]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0xF6
        // 0x588C7B4F: push edx
        __asm _emit 0x52
        // 0x588C7B50: push ecx
        __asm _emit 0x51
        // 0x588C7B51: push esi
        __asm _emit 0x56
        // 0x588C7B52: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588C7B54: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0xA1
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588C7B59: jmp 0x588c7b5d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C7B5B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C7B5D: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588C7B62: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588C7B64: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588C7B69: mov dword ptr [esi + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x588C7B6C: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0xB1
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C7B71: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7B76: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0x50
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588C7B7B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588C7B7E: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588C7B82: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x588C7B87: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C7B89: je 0x588c7bc8
        __asm _emit 0x74
        __asm _emit 0x3D
        // 0x588C7B8B: mov ecx, dword ptr [0x58a24698]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C7B91: cmp dword ptr [ecx + 0x160], 0x25
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x25
        // 0x588C7B98: jle 0x588c7bb1
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588C7B9A: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7BA1: je 0x588c7bb1
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588C7BA3: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7BA9: add ecx, 0x940
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7BAF: jmp 0x588c7bb3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C7BB1: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588C7BB3: lea edx, [ebp + 5]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x05
        // 0x588C7BB6: push edx
        __asm _emit 0x52
        // 0x588C7BB7: lea edx, [ebx + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x14
        // 0x588C7BBA: push edx
        __asm _emit 0x52
        // 0x588C7BBB: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x588C7BBD: push ecx
        __asm _emit 0x51
        // 0x588C7BBE: push esi
        __asm _emit 0x56
        // 0x588C7BBF: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588C7BC1: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0xF5
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C7BC6: jmp 0x588c7bca
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C7BC8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C7BCA: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7BCF: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588C7BD1: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588C7BD6: mov dword ptr [esi + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x588C7BD9: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0xB1
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C7BDE: mov edi, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x58
        // 0x588C7BE1: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588C7BE5: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x588C7BE8: add eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x588C7BEB: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588C7BEF: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x588C7BF3: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588C7BF5: je 0x588c7bfd
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588C7BF7: push edi
        __asm _emit 0x57
        // 0x588C7BF8: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0xB3
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C7BFD: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x588C7C00: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588C7C02: je 0x588c7c0a
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588C7C04: push edi
        __asm _emit 0x57
        // 0x588C7C05: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0xB2
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C7C0A: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588C7C0C: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0x50
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588C7C11: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588C7C13: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588C7C16: mov dword ptr [esp + 0x2c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588C7C1A: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x588C7C1F: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588C7C21: je 0x588c7c48
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x588C7C23: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588C7C27: push eax
        __asm _emit 0x50
        // 0x588C7C28: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588C7C2A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588C7C2C: push ebp
        __asm _emit 0x55
        // 0x588C7C2D: lea ecx, [ebx + 0x3d]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x3D
        // 0x588C7C30: push ecx
        __asm _emit 0x51
        // 0x588C7C31: push esi
        __asm _emit 0x56
        // 0x588C7C32: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588C7C34: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0xB5
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C7C39: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588C7C3F: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7C46: jmp 0x588c7c4a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C7C48: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588C7C4A: mov edx, 0xfffb
        __asm _emit 0xBA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7C4F: mov dword ptr [esi + 0x60], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x60
        // 0x588C7C52: and word ptr [edi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x57
        __asm _emit 0x24
        // 0x588C7C56: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588C7C58: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588C7C5D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0x4F
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588C7C62: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588C7C64: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588C7C67: mov dword ptr [esp + 0x2c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588C7C6B: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x588C7C70: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588C7C72: je 0x588c7c9b
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x588C7C74: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588C7C78: push eax
        __asm _emit 0x50
        // 0x588C7C79: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588C7C7B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588C7C7D: push ebp
        __asm _emit 0x55
        // 0x588C7C7E: lea ecx, [ebx + 0xa]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x0A
        // 0x588C7C81: push ecx
        __asm _emit 0x51
        // 0x588C7C82: push esi
        __asm _emit 0x56
        // 0x588C7C83: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588C7C85: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0xB5
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C7C8A: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588C7C90: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7C97: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588C7C99: jmp 0x588c7c9d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C7C9B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588C7C9D: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7CA2: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588C7CA7: mov dword ptr [esi + 0x64], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x588C7CAA: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0xB0
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C7CAF: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x588C7CB1: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0x4F
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588C7CB6: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588C7CB9: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588C7CBD: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x588C7CC2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C7CC4: je 0x588c7cf8
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x588C7CC6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588C7CC8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588C7CCA: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588C7CCF: lea edx, [ebp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x1C
        // 0x588C7CD2: push edx
        __asm _emit 0x52
        // 0x588C7CD3: lea ecx, [ebx + 0x182]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7CD9: push ecx
        __asm _emit 0x51
        // 0x588C7CDA: lea edx, [ebp + 4]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x04
        // 0x588C7CDD: push edx
        __asm _emit 0x52
        // 0x588C7CDE: mov edx, dword ptr [0x58a24530]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C7CE4: lea ecx, [ebx + 0xba]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7CEA: push ecx
        __asm _emit 0x51
        // 0x588C7CEB: push edx
        __asm _emit 0x52
        // 0x588C7CEC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588C7CEE: push esi
        __asm _emit 0x56
        // 0x588C7CEF: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588C7CF1: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0xB5
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588C7CF6: jmp 0x588c7cfa
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C7CF8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C7CFA: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588C7CFC: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588C7D01: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x588C7D04: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x4F
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588C7D09: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588C7D0C: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588C7D10: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        // 0x588C7D15: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C7D17: je 0x588c7d63
        __asm _emit 0x74
        __asm _emit 0x4A
        // 0x588C7D19: mov ecx, dword ptr [0x58a24698]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C7D1F: cmp dword ptr [ecx + 0x164], 0x6b
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x6B
        // 0x588C7D26: jle 0x588c7d4f
        __asm _emit 0x7E
        __asm _emit 0x27
        // 0x588C7D28: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7D2F: je 0x588c7d4f
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x588C7D31: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588C7D35: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7D3B: mov ecx, dword ptr [ecx + 0x1ac]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7D41: push edx
        __asm _emit 0x52
        // 0x588C7D42: push ebp
        __asm _emit 0x55
        // 0x588C7D43: push ebx
        __asm _emit 0x53
        // 0x588C7D44: push ecx
        __asm _emit 0x51
        // 0x588C7D45: push esi
        __asm _emit 0x56
        // 0x588C7D46: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588C7D48: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0x9F
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588C7D4D: jmp 0x588c7d65
        __asm _emit 0xEB
        __asm _emit 0x16
        // 0x588C7D4F: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588C7D53: push edx
        __asm _emit 0x52
        // 0x588C7D54: push ebp
        __asm _emit 0x55
        // 0x588C7D55: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588C7D57: push ebx
        __asm _emit 0x53
        // 0x588C7D58: push ecx
        __asm _emit 0x51
        // 0x588C7D59: push esi
        __asm _emit 0x56
        // 0x588C7D5A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588C7D5C: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0x9E
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588C7D61: jmp 0x588c7d65
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C7D63: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C7D65: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588C7D67: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588C7D6C: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588C7D6F: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0x4E
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588C7D74: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588C7D77: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588C7D7B: mov byte ptr [esp + 0x20], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        // 0x588C7D80: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C7D82: je 0x588c7dc1
        __asm _emit 0x74
        __asm _emit 0x3D
        // 0x588C7D84: mov ecx, dword ptr [0x58a24698]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C7D8A: cmp dword ptr [ecx + 0x164], 0x6c
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x6C
        // 0x588C7D91: jle 0x588c7daa
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588C7D93: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7D9A: je 0x588c7daa
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588C7D9C: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7DA2: mov ecx, dword ptr [ecx + 0x1b0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7DA8: jmp 0x588c7dac
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C7DAA: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588C7DAC: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588C7DB0: add edx, 0x63
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x63
        // 0x588C7DB3: push edx
        __asm _emit 0x52
        // 0x588C7DB4: push ebp
        __asm _emit 0x55
        // 0x588C7DB5: push ebx
        __asm _emit 0x53
        // 0x588C7DB6: push ecx
        __asm _emit 0x51
        // 0x588C7DB7: push esi
        __asm _emit 0x56
        // 0x588C7DB8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588C7DBA: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0x9E
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588C7DBF: jmp 0x588c7dc3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C7DC1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C7DC3: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588C7DC8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588C7DCA: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588C7DCF: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588C7DD2: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0xAF
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C7DD7: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x588C7DD9: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0x4E
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588C7DDE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588C7DE1: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588C7DE5: mov byte ptr [esp + 0x20], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x09
        // 0x588C7DEA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C7DEC: je 0x588c7e2e
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x588C7DEE: mov ecx, dword ptr [0x58a24698]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C7DF4: cmp dword ptr [ecx + 0x160], 0x1b
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1B
        // 0x588C7DFB: jle 0x588c7e14
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588C7DFD: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7E04: je 0x588c7e14
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588C7E06: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7E0C: add edx, 0x6c0
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xC0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7E12: jmp 0x588c7e16
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C7E14: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588C7E16: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588C7E1A: add ecx, 0x96
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7E20: push ecx
        __asm _emit 0x51
        // 0x588C7E21: push ebp
        __asm _emit 0x55
        // 0x588C7E22: push ebx
        __asm _emit 0x53
        // 0x588C7E23: push edx
        __asm _emit 0x52
        // 0x588C7E24: push esi
        __asm _emit 0x56
        // 0x588C7E25: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588C7E27: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0xCC
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588C7E2C: jmp 0x588c7e30
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C7E2E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C7E30: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588C7E33: mov edx, 0xfffb
        __asm _emit 0xBA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7E38: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588C7E3C: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588C7E3F: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7E44: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588C7E49: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0xAE
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C7E4E: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588C7E50: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0x4D
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588C7E55: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588C7E58: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588C7E5C: mov byte ptr [esp + 0x20], 0xa
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0A
        // 0x588C7E61: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C7E63: je 0x588c7ea6
        __asm _emit 0x74
        __asm _emit 0x41
        // 0x588C7E65: mov ecx, dword ptr [0x58a24698]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C7E6B: cmp dword ptr [ecx + 0x164], 0x6d
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x6D
        // 0x588C7E72: jle 0x588c7e8b
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588C7E74: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7E7B: je 0x588c7e8b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588C7E7D: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7E83: mov ecx, dword ptr [ecx + 0x1b4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xB4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7E89: jmp 0x588c7e8d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C7E8B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588C7E8D: mov dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x588C7E91: add dx, 0x63
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x63
        // 0x588C7E95: movzx edx, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD2
        // 0x588C7E98: push edx
        __asm _emit 0x52
        // 0x588C7E99: push ebp
        __asm _emit 0x55
        // 0x588C7E9A: push ebx
        __asm _emit 0x53
        // 0x588C7E9B: push ecx
        __asm _emit 0x51
        // 0x588C7E9C: push esi
        __asm _emit 0x56
        // 0x588C7E9D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588C7E9F: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0x9D
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588C7EA4: jmp 0x588c7ea8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C7EA6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C7EA8: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7EAD: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588C7EB2: mov dword ptr [esi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7EB8: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0x4D
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588C7EBD: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588C7EC0: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588C7EC4: mov byte ptr [esp + 0x20], 0xb
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0B
        // 0x588C7EC9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C7ECB: je 0x588c7f12
        __asm _emit 0x74
        __asm _emit 0x45
        // 0x588C7ECD: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C7ED3: cmp dword ptr [ecx + 0x160], 0xce
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7EDD: jle 0x588c7ef6
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588C7EDF: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7EE6: je 0x588c7ef6
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588C7EE8: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7EEE: add edx, 0x3380
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x80
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7EF4: jmp 0x588c7ef8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C7EF6: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588C7EF8: lea ecx, [ebp + 6]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x06
        // 0x588C7EFB: push ecx
        __asm _emit 0x51
        // 0x588C7EFC: lea ecx, [ebx + 0x14f]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7F02: push ecx
        __asm _emit 0x51
        // 0x588C7F03: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x588C7F05: push edx
        __asm _emit 0x52
        // 0x588C7F06: push esi
        __asm _emit 0x56
        // 0x588C7F07: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588C7F09: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0xF1
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C7F0E: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588C7F10: jmp 0x588c7f14
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C7F12: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588C7F14: mov dx, word ptr [esp + 0x30]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588C7F19: mov dword ptr [esi + 0x78], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x78
        // 0x588C7F1C: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x588C7F1F: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x588C7F24: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x588C7F28: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588C7F2A: je 0x588c7f32
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588C7F2C: push edi
        __asm _emit 0x57
        // 0x588C7F2D: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0xB0
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C7F32: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x588C7F35: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588C7F37: je 0x588c7f3f
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588C7F39: push edi
        __asm _emit 0x57
        // 0x588C7F3A: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0xAF
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C7F3F: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x588C7F42: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7F47: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0xAD
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C7F4C: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7F51: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0x4C
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588C7F56: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588C7F59: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588C7F5D: mov byte ptr [esp + 0x20], 0xc
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0C
        // 0x588C7F62: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C7F64: je 0x588c7fab
        __asm _emit 0x74
        __asm _emit 0x45
        // 0x588C7F66: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C7F6C: cmp dword ptr [ecx + 0x160], 0xce
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7F76: jle 0x588c7f8f
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588C7F78: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7F7F: je 0x588c7f8f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588C7F81: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7F87: add edx, 0x3380
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x80
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7F8D: jmp 0x588c7f91
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C7F8F: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588C7F91: lea ecx, [ebp + 1]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x01
        // 0x588C7F94: push ecx
        __asm _emit 0x51
        // 0x588C7F95: lea ecx, [ebx + 0x1c2]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xC2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7F9B: push ecx
        __asm _emit 0x51
        // 0x588C7F9C: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x588C7F9E: push edx
        __asm _emit 0x52
        // 0x588C7F9F: push esi
        __asm _emit 0x56
        // 0x588C7FA0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588C7FA2: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0xF1
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C7FA7: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588C7FA9: jmp 0x588c7fad
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C7FAB: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588C7FAD: mov dx, word ptr [esp + 0x30]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588C7FB2: mov dword ptr [esi + 0x7c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x7C
        // 0x588C7FB5: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x588C7FB8: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x588C7FBD: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x588C7FC1: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588C7FC3: je 0x588c7fcb
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588C7FC5: push edi
        __asm _emit 0x57
        // 0x588C7FC6: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0xAF
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C7FCB: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x588C7FCE: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588C7FD0: je 0x588c7fd8
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588C7FD2: push edi
        __asm _emit 0x57
        // 0x588C7FD3: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0xAF
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C7FD8: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x588C7FDB: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7FE0: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0xAD
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C7FE5: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7FEA: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x4C
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588C7FEF: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588C7FF2: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588C7FF6: mov byte ptr [esp + 0x20], 0xd
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0D
        // 0x588C7FFB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C7FFD: je 0x588c8044
        __asm _emit 0x74
        __asm _emit 0x45
        // 0x588C7FFF: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C8005: cmp dword ptr [ecx + 0x160], 0xce
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C800F: jle 0x588c8028
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588C8011: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8018: je 0x588c8028
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588C801A: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8020: add edx, 0x3380
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x80
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8026: jmp 0x588c802a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C8028: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588C802A: lea ecx, [ebp + 1]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x01
        // 0x588C802D: push ecx
        __asm _emit 0x51
        // 0x588C802E: lea ecx, [ebx + 0x1f9]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xF9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8034: push ecx
        __asm _emit 0x51
        // 0x588C8035: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x588C8037: push edx
        __asm _emit 0x52
        // 0x588C8038: push esi
        __asm _emit 0x56
        // 0x588C8039: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588C803B: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0xF0
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C8040: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588C8042: jmp 0x588c8046
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C8044: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588C8046: mov dx, word ptr [esp + 0x30]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588C804B: mov dword ptr [esi + 0x80], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8051: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x588C8054: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x588C8059: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x588C805D: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588C805F: je 0x588c8067
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588C8061: push edi
        __asm _emit 0x57
        // 0x588C8062: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0xAE
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C8067: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x588C806A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588C806C: je 0x588c8074
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588C806E: push edi
        __asm _emit 0x57
        // 0x588C806F: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0xAE
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C8074: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C807A: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C807F: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0xAC
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C8084: push 0x74
        __asm _emit 0x6A
        __asm _emit 0x74
        // 0x588C8086: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0x4B
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588C808B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588C808E: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588C8092: mov byte ptr [esp + 0x20], 0xe
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0E
        // 0x588C8097: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C8099: je 0x588c80ee
        __asm _emit 0x74
        __asm _emit 0x53
        // 0x588C809B: mov ecx, dword ptr [0x58a24698]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C80A1: cmp dword ptr [ecx + 0x164], 0x6a
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x6A
        // 0x588C80A8: jle 0x588c80c1
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588C80AA: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C80B1: je 0x588c80c1
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588C80B3: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C80B9: mov ecx, dword ptr [ecx + 0x1a8]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xA8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C80BF: jmp 0x588c80c3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C80C1: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588C80C3: mov dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x588C80C7: add dx, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x0A
        // 0x588C80CB: movzx edx, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD2
        // 0x588C80CE: push edx
        __asm _emit 0x52
        // 0x588C80CF: lea edx, [ebp + 0xe]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x0E
        // 0x588C80D2: push edx
        __asm _emit 0x52
        // 0x588C80D3: lea edx, [ebx + 0x1c3]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0xC3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C80D9: push edx
        __asm _emit 0x52
        // 0x588C80DA: push ecx
        __asm _emit 0x51
        // 0x588C80DB: push esi
        __asm _emit 0x56
        // 0x588C80DC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588C80DE: push 0x5f5e0ff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xE0
        __asm _emit 0xF5
        __asm _emit 0x05
        // 0x588C80E3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588C80E5: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588C80E7: call 0x5877e800
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0x67
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588C80EC: jmp 0x588c80f0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C80EE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C80F0: push 0x74
        __asm _emit 0x6A
        __asm _emit 0x74
        // 0x588C80F2: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588C80F7: mov dword ptr [esi + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C80FD: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0x4B
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588C8102: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588C8105: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588C8109: mov byte ptr [esp + 0x20], 0xf
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0F
        // 0x588C810E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C8110: je 0x588c8168
        __asm _emit 0x74
        __asm _emit 0x56
        // 0x588C8112: mov ecx, dword ptr [0x58a24698]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C8118: cmp dword ptr [ecx + 0x164], 0xc5
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8122: jle 0x588c813b
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588C8124: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C812B: je 0x588c813b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588C812D: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8133: mov ecx, dword ptr [ecx + 0x314]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8139: jmp 0x588c813d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C813B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588C813D: mov dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x588C8141: add dx, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x0A
        // 0x588C8145: movzx edx, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD2
        // 0x588C8148: push edx
        __asm _emit 0x52
        // 0x588C8149: add ebp, 0xe
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x0E
        // 0x588C814C: push ebp
        __asm _emit 0x55
        // 0x588C814D: add ebx, 0x1c3
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0xC3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8153: push ebx
        __asm _emit 0x53
        // 0x588C8154: push ecx
        __asm _emit 0x51
        // 0x588C8155: push esi
        __asm _emit 0x56
        // 0x588C8156: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588C8158: push 0x5f5e0ff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xE0
        __asm _emit 0xF5
        __asm _emit 0x05
        // 0x588C815D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588C815F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588C8161: call 0x5877e800
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0x66
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588C8166: jmp 0x588c816a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C8168: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C816A: mov edi, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8170: mov ebx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588C8174: mov dword ptr [esi + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C817A: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x588C817D: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x588C8182: mov word ptr [edi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x26
        // 0x588C8186: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588C8188: je 0x588c8190
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588C818A: push edi
        __asm _emit 0x57
        // 0x588C818B: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0xAD
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C8190: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x588C8193: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588C8195: je 0x588c819d
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588C8197: push edi
        __asm _emit 0x57
        // 0x588C8198: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0xAD
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C819D: mov edi, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C81A3: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x588C81A6: mov word ptr [edi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x26
        // 0x588C81AA: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588C81AC: je 0x588c81b4
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588C81AE: push edi
        __asm _emit 0x57
        // 0x588C81AF: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0xAD
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C81B4: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x588C81B7: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588C81B9: je 0x588c81c1
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588C81BB: push edi
        __asm _emit 0x57
        // 0x588C81BC: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0xAD
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C81C1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588C81C3: call 0x588c78f0
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588C81C8: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588C81CA: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588C81CE: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C81D5: pop ecx
        __asm _emit 0x59
        // 0x588C81D6: pop edi
        __asm _emit 0x5F
        // 0x588C81D7: pop esi
        __asm _emit 0x5E
        // 0x588C81D8: pop ebp
        __asm _emit 0x5D
        // 0x588C81D9: pop ebx
        __asm _emit 0x5B
        // 0x588C81DA: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588C81DD: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
