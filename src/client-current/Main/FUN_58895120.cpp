// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58895120 .. +0x2C7 bytes.
// Source symbol alias: FUN_58895120.
extern "C" __declspec(naked) void FUN_58895120() {
    __asm {
        // 0x58895120: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58895122: push 0x5898715f
        __asm _emit 0x68
        __asm _emit 0x5F
        __asm _emit 0x71
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58895127: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889512D: push eax
        __asm _emit 0x50
        // 0x5889512E: push ecx
        __asm _emit 0x51
        // 0x5889512F: push ebx
        __asm _emit 0x53
        // 0x58895130: push ebp
        __asm _emit 0x55
        // 0x58895131: push esi
        __asm _emit 0x56
        // 0x58895132: push edi
        __asm _emit 0x57
        // 0x58895133: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58895138: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5889513A: push eax
        __asm _emit 0x50
        // 0x5889513B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5889513F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895145: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58895147: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5889514B: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5889514F: mov edi, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58895153: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58895157: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5889515B: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5889515F: push eax
        __asm _emit 0x50
        // 0x58895160: push edi
        __asm _emit 0x57
        // 0x58895161: push ebp
        __asm _emit 0x55
        // 0x58895162: push ecx
        __asm _emit 0x51
        // 0x58895163: push edx
        __asm _emit 0x52
        // 0x58895164: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58895166: call 0x587b69e0
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0x18
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5889516B: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5889516D: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5889516F: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58895173: mov dword ptr [esi], 0x589a0060
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58895179: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0x7A
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5889517E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58895181: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58895185: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x5889518A: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5889518C: je 0x588951d1
        __asm _emit 0x74
        __asm _emit 0x43
        // 0x5889518E: mov ecx, dword ptr [0x58a24604]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x04
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58895194: cmp dword ptr [ecx + 0x164], 0x72
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x72
        // 0x5889519B: jle 0x588951c0
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x5889519D: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588951A3: je 0x588951c0
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x588951A5: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588951AB: mov ecx, dword ptr [ecx + 0x1c8]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588951B1: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588951B3: push edi
        __asm _emit 0x57
        // 0x588951B4: push ebp
        __asm _emit 0x55
        // 0x588951B5: push ecx
        __asm _emit 0x51
        // 0x588951B6: push esi
        __asm _emit 0x56
        // 0x588951B7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588951B9: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0xCA
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588951BE: jmp 0x588951d3
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x588951C0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588951C2: push edi
        __asm _emit 0x57
        // 0x588951C3: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588951C5: push ebp
        __asm _emit 0x55
        // 0x588951C6: push ecx
        __asm _emit 0x51
        // 0x588951C7: push esi
        __asm _emit 0x56
        // 0x588951C8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588951CA: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0xCA
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588951CF: jmp 0x588951d3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588951D1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588951D3: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588951D8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588951DA: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588951DE: mov dword ptr [esi + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x588951E1: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0xDB
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x588951E6: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x588951E9: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588951EE: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588951F2: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588951F4: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0x7A
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x588951F9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588951FC: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58895200: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x58895205: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58895207: je 0x5889524c
        __asm _emit 0x74
        __asm _emit 0x43
        // 0x58895209: mov ecx, dword ptr [0x58a24604]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x04
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889520F: cmp dword ptr [ecx + 0x164], 0x73
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x73
        // 0x58895216: jle 0x5889523b
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x58895218: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889521E: je 0x5889523b
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x58895220: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895226: mov ecx, dword ptr [ecx + 0x1cc]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xCC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889522C: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5889522E: push edi
        __asm _emit 0x57
        // 0x5889522F: push ebp
        __asm _emit 0x55
        // 0x58895230: push ecx
        __asm _emit 0x51
        // 0x58895231: push esi
        __asm _emit 0x56
        // 0x58895232: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58895234: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0xCA
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x58895239: jmp 0x5889524e
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x5889523B: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5889523D: push edi
        __asm _emit 0x57
        // 0x5889523E: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58895240: push ebp
        __asm _emit 0x55
        // 0x58895241: push ecx
        __asm _emit 0x51
        // 0x58895242: push esi
        __asm _emit 0x56
        // 0x58895243: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58895245: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0xCA
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x5889524A: jmp 0x5889524e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889524C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889524E: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895253: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58895255: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58895259: mov dword ptr [esi + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889525F: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0xDA
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58895264: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889526A: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889526F: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58895273: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58895275: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0x79
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5889527A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5889527D: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58895281: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x58895286: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58895288: je 0x588952cc
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x5889528A: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58895290: cmp dword ptr [ecx + 0x164], 0x9a
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889529A: jle 0x588952b2
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5889529C: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588952A2: je 0x588952b2
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588952A4: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588952AA: mov ecx, dword ptr [ecx + 0x268]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588952B0: jmp 0x588952b4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588952B2: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588952B4: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588952B6: lea edx, [edi + 0x1e]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x1E
        // 0x588952B9: push edx
        __asm _emit 0x52
        // 0x588952BA: lea edx, [ebp + 0x2b7]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xB7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588952C0: push edx
        __asm _emit 0x52
        // 0x588952C1: push ecx
        __asm _emit 0x51
        // 0x588952C2: push esi
        __asm _emit 0x56
        // 0x588952C3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588952C5: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0xC9
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588952CA: jmp 0x588952ce
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588952CC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588952CE: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588952D3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588952D5: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588952D9: mov dword ptr [esi + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588952DF: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0xDA
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x588952E4: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588952EA: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588952EF: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588952F3: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588952F8: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0x79
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x588952FD: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58895300: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58895304: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x58895309: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5889530B: je 0x58895349
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x5889530D: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58895313: cmp dword ptr [ecx + 0x160], 0x23
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x23
        // 0x5889531A: jle 0x58895332
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5889531C: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895322: je 0x58895332
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58895324: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889532A: add ecx, 0x8c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895330: jmp 0x58895334
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58895332: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58895334: lea edx, [edi + 5]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x05
        // 0x58895337: push edx
        __asm _emit 0x52
        // 0x58895338: lea edx, [ebp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x28
        // 0x5889533B: push edx
        __asm _emit 0x52
        // 0x5889533C: push 0xa
        __asm _emit 0x6A
        __asm _emit 0x0A
        // 0x5889533E: push ecx
        __asm _emit 0x51
        // 0x5889533F: push esi
        __asm _emit 0x56
        // 0x58895340: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58895342: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0x1D
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58895347: jmp 0x5889534b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58895349: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889534B: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895350: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58895352: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58895356: mov dword ptr [esi + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889535C: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0xD9
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58895361: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895366: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0x78
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5889536B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5889536E: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58895372: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x58895377: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58895379: je 0x588953b7
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x5889537B: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58895381: cmp dword ptr [ecx + 0x160], 0x23
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x23
        // 0x58895388: jle 0x588953a0
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5889538A: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895390: je 0x588953a0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58895392: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895398: add edx, 0x8c0
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xC0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889539E: jmp 0x588953a2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588953A0: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588953A2: add edi, 0x11
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x11
        // 0x588953A5: push edi
        __asm _emit 0x57
        // 0x588953A6: add ebp, 0x28
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x28
        // 0x588953A9: push ebp
        __asm _emit 0x55
        // 0x588953AA: push 0xa
        __asm _emit 0x6A
        __asm _emit 0x0A
        // 0x588953AC: push edx
        __asm _emit 0x52
        // 0x588953AD: push esi
        __asm _emit 0x56
        // 0x588953AE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588953B0: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0x1D
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588953B5: jmp 0x588953b9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588953B7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588953B9: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588953BE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588953C0: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588953C4: mov dword ptr [esi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588953CA: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0xD9
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x588953CF: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588953D1: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588953D5: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588953DC: pop ecx
        __asm _emit 0x59
        // 0x588953DD: pop edi
        __asm _emit 0x5F
        // 0x588953DE: pop esi
        __asm _emit 0x5E
        // 0x588953DF: pop ebp
        __asm _emit 0x5D
        // 0x588953E0: pop ebx
        __asm _emit 0x5B
        // 0x588953E1: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588953E4: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
