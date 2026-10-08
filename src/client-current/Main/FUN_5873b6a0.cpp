// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5873B6A0 .. +0x2A6 bytes.
// Source symbol alias: FUN_5873b6a0.
extern "C" __declspec(naked) void FUN_5873b6a0() {
    __asm {
        // 0x5873B6A0: cmp dword ptr [esp + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5873B6A5: push ebx
        __asm _emit 0x53
        // 0x5873B6A6: push ebp
        __asm _emit 0x55
        // 0x5873B6A7: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5873B6A9: je 0x5873b6b8
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x5873B6AB: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873B6B0: mov ebp, dword ptr [eax + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0xA8
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B6B6: jmp 0x5873b6c4
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x5873B6B8: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873B6BE: mov ebp, dword ptr [ecx + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0xA9
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B6C4: cmp dword ptr [esp + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5873B6C9: push esi
        __asm _emit 0x56
        // 0x5873B6CA: push edi
        __asm _emit 0x57
        // 0x5873B6CB: je 0x5873b8f9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B6D1: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5873B6D5: mov cl, al
        __asm _emit 0x8A
        __asm _emit 0xC8
        // 0x5873B6D7: mov dword ptr [ebx + 0xbc], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B6DD: cmp cl, 0xc
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x0C
        // 0x5873B6E0: jne 0x5873b780
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B6E6: cmp word ptr [ebx + 0x2cc], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x5873B6EE: jne 0x5873b780
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B6F4: cmp dword ptr [esp + 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5873B6F9: je 0x5873b754
        __asm _emit 0x74
        __asm _emit 0x59
        // 0x5873B6FB: mov edx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x5873B6FE: mov eax, dword ptr [edx + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x2C
        // 0x5873B701: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x5873B703: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x5873B705: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5873B707: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5873B709: jle 0x5873b90b
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B70F: mov ecx, dword ptr [ebx + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B715: push ecx
        __asm _emit 0x51
        // 0x5873B716: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873B71C: call 0x58778e20
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xD6
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x5873B721: lea edi, [ebx + 0x16c]
        __asm _emit 0x8D
        __asm _emit 0xBB
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B727: mov ecx, 0x2d
        __asm _emit 0xB9
        __asm _emit 0x2D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B72C: mov dx, word ptr [esp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5873B731: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5873B733: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5873B735: movzx ecx, word ptr [ebx + 0x2cc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8B
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B73C: mov word ptr [ebx + 0x2d6], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0xD6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B743: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x5873B746: mov edx, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x34
        // 0x5873B749: dec ecx
        __asm _emit 0x49
        // 0x5873B74A: push ecx
        __asm _emit 0x51
        // 0x5873B74B: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x5873B74D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5873B74F: jmp 0x5873b90b
        __asm _emit 0xE9
        __asm _emit 0xB7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B754: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873B75A: push eax
        __asm _emit 0x50
        // 0x5873B75B: call 0x58778e20
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0xD6
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x5873B760: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5873B762: mov ax, word ptr [esp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5873B767: lea edi, [ebx + 0x16c]
        __asm _emit 0x8D
        __asm _emit 0xBB
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B76D: mov ecx, 0x2d
        __asm _emit 0xB9
        __asm _emit 0x2D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B772: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5873B774: mov word ptr [ebx + 0x2d6], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0xD6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B77B: jmp 0x5873b90b
        __asm _emit 0xE9
        __asm _emit 0x8B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B780: cmp cl, 0xb
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x0B
        // 0x5873B783: jne 0x5873b8ee
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B789: cmp word ptr [ebx + 0x2cc], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x5873B791: jne 0x5873b7fc
        __asm _emit 0x75
        __asm _emit 0x69
        // 0x5873B793: cmp dword ptr [esp + 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5873B798: je 0x5873b7d0
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x5873B79A: mov edx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x5873B79D: mov eax, dword ptr [edx + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x2C
        // 0x5873B7A0: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x5873B7A2: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x5873B7A4: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5873B7A6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5873B7A8: jle 0x5873b90b
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x5D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B7AE: mov ecx, dword ptr [ebx + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B7B4: push ecx
        __asm _emit 0x51
        // 0x5873B7B5: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873B7BB: call 0x58778dc0
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0xD6
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x5873B7C0: lea edi, [ebx + 0xc0]
        __asm _emit 0x8D
        __asm _emit 0xBB
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B7C6: mov ecx, 0x2b
        __asm _emit 0xB9
        __asm _emit 0x2B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B7CB: jmp 0x5873b72c
        __asm _emit 0xE9
        __asm _emit 0x5C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873B7D0: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873B7D6: push eax
        __asm _emit 0x50
        // 0x5873B7D7: call 0x58778dc0
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0xD5
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x5873B7DC: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5873B7DE: mov ax, word ptr [esp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5873B7E3: lea edi, [ebx + 0xc0]
        __asm _emit 0x8D
        __asm _emit 0xBB
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B7E9: mov ecx, 0x2b
        __asm _emit 0xB9
        __asm _emit 0x2B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B7EE: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5873B7F0: mov word ptr [ebx + 0x2d6], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0xD6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B7F7: jmp 0x5873b90b
        __asm _emit 0xE9
        __asm _emit 0x0F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B7FC: cmp cl, 0xb
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x0B
        // 0x5873B7FF: jne 0x5873b8ee
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B805: cmp word ptr [ebx + 0x2cc], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x5873B80D: jne 0x5873b8ee
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xDB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B813: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873B819: push eax
        __asm _emit 0x50
        // 0x5873B81A: call 0x58778dc0
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0xD5
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x5873B81F: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5873B821: lea edi, [ebx + 0xc0]
        __asm _emit 0x8D
        __asm _emit 0xBB
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B827: mov ecx, 0x2b
        __asm _emit 0xB9
        __asm _emit 0x2B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B82C: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5873B82E: mov cl, byte ptr [ebx + 0x15b]
        __asm _emit 0x8A
        __asm _emit 0x8B
        __asm _emit 0x5B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B834: and cl, 0xf
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x0F
        // 0x5873B837: movzx ax, cl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC1
        // 0x5873B83B: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x5873B83F: jne 0x5873b851
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x5873B841: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873B847: cmp word ptr [edx + 0x105f0], 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x0A
        // 0x5873B84F: je 0x5873b85b
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5873B851: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x5873B855: jne 0x5873b902
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B85B: cmp dword ptr [esp + 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5873B860: je 0x5873b8bf
        __asm _emit 0x74
        __asm _emit 0x5D
        // 0x5873B862: movzx ecx, word ptr [ebx + 0x2cc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8B
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B869: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x5873B86C: mov edx, dword ptr [eax + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x2C
        // 0x5873B86F: dec ecx
        __asm _emit 0x49
        // 0x5873B870: push ecx
        __asm _emit 0x51
        // 0x5873B871: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x5873B873: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5873B875: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5873B877: jle 0x5873b90b
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B87D: mov eax, dword ptr [ebx + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B883: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873B889: push eax
        __asm _emit 0x50
        // 0x5873B88A: call 0x58778dc0
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0xD5
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x5873B88F: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5873B891: movzx eax, word ptr [ebx + 0x2cc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x83
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B898: mov ecx, 0x2b
        __asm _emit 0xB9
        __asm _emit 0x2B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B89D: lea edi, [ebx + 0xc0]
        __asm _emit 0x8D
        __asm _emit 0xBB
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B8A3: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5873B8A5: mov cx, word ptr [esp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5873B8AA: mov word ptr [ebx + 0x2d6], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8B
        __asm _emit 0xD6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B8B1: mov edx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x5873B8B4: mov edx, dword ptr [edx + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x34
        // 0x5873B8B7: dec eax
        __asm _emit 0x48
        // 0x5873B8B8: push eax
        __asm _emit 0x50
        // 0x5873B8B9: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x5873B8BB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5873B8BD: jmp 0x5873b90b
        __asm _emit 0xEB
        __asm _emit 0x4C
        // 0x5873B8BF: mov eax, dword ptr [ebx + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B8C5: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873B8CB: push eax
        __asm _emit 0x50
        // 0x5873B8CC: call 0x58778dc0
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0xD4
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x5873B8D1: mov ecx, 0x2b
        __asm _emit 0xB9
        __asm _emit 0x2B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B8D6: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5873B8D8: lea edi, [ebx + 0xc0]
        __asm _emit 0x8D
        __asm _emit 0xBB
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B8DE: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5873B8E0: mov cx, word ptr [esp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5873B8E5: mov word ptr [ebx + 0x2d6], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8B
        __asm _emit 0xD6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B8EC: jmp 0x5873b90b
        __asm _emit 0xEB
        __asm _emit 0x1D
        // 0x5873B8EE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5873B8F0: mov word ptr [ebx + 0x2d6], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0xD6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B8F7: jmp 0x5873b90b
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x5873B8F9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5873B8FB: mov word ptr [ebx + 0xbe], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B902: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5873B904: mov word ptr [ebx + 0x2d6], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0xD6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B90B: cmp word ptr [ebx + 0x2cc], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x5873B913: pop edi
        __asm _emit 0x5F
        // 0x5873B914: pop esi
        __asm _emit 0x5E
        // 0x5873B915: jne 0x5873b92e
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x5873B917: mov eax, dword ptr [ebx + 0x228]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B91D: mov ecx, dword ptr [ebx + 0x514]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B923: push eax
        __asm _emit 0x50
        // 0x5873B924: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0xBA
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5873B929: pop ebp
        __asm _emit 0x5D
        // 0x5873B92A: pop ebx
        __asm _emit 0x5B
        // 0x5873B92B: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5873B92E: movzx ecx, word ptr [ebx + 0x2d6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8B
        __asm _emit 0xD6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B935: push ecx
        __asm _emit 0x51
        // 0x5873B936: mov ecx, dword ptr [ebx + 0x514]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B93C: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0xBA
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5873B941: pop ebp
        __asm _emit 0x5D
        // 0x5873B942: pop ebx
        __asm _emit 0x5B
        // 0x5873B943: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
