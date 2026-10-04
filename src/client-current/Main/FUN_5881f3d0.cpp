// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5881F3D0 .. +0x6D8 bytes.
// Source symbol alias: FUN_5881f3d0.
extern "C" __declspec(naked) void FUN_5881f3d0() {
    __asm {
        // 0x5881F3D0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5881F3D2: push 0x5898370b
        __asm _emit 0x68
        __asm _emit 0x0B
        __asm _emit 0x37
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5881F3D7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F3DD: push eax
        __asm _emit 0x50
        // 0x5881F3DE: push ecx
        __asm _emit 0x51
        // 0x5881F3DF: push ebx
        __asm _emit 0x53
        // 0x5881F3E0: push ebp
        __asm _emit 0x55
        // 0x5881F3E1: push esi
        __asm _emit 0x56
        // 0x5881F3E2: push edi
        __asm _emit 0x57
        // 0x5881F3E3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5881F3E8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5881F3EA: push eax
        __asm _emit 0x50
        // 0x5881F3EB: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5881F3EF: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F3F5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5881F3F7: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5881F3FB: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5881F3FF: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5881F403: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5881F407: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5881F40B: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5881F40F: push eax
        __asm _emit 0x50
        // 0x5881F410: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5881F414: push ecx
        __asm _emit 0x51
        // 0x5881F415: push edx
        __asm _emit 0x52
        // 0x5881F416: push edi
        __asm _emit 0x57
        // 0x5881F417: push ebp
        __asm _emit 0x55
        // 0x5881F418: push eax
        __asm _emit 0x50
        // 0x5881F419: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5881F41B: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0x3D
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881F420: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5881F426: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5881F42B: mov dword ptr [esi], 0x5899da10
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x10
        __asm _emit 0xDA
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5881F431: mov ecx, dword ptr [0x58a24768]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881F437: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5881F439: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x5881F43B: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5881F43F: mov dword ptr [esi + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x5881F442: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0xD8
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5881F447: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881F44A: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5881F44E: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x5881F453: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5881F455: je 0x5881f493
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x5881F457: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881F45D: cmp dword ptr [ecx + 0x160], 0x22
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x22
        // 0x5881F464: jle 0x5881f47c
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5881F466: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F46C: je 0x5881f47c
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5881F46E: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F474: add ecx, 0x880
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x80
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F47A: jmp 0x5881f47e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881F47C: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5881F47E: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5881F480: lea edx, [edi + 0x2a]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x2A
        // 0x5881F483: push edx
        __asm _emit 0x52
        // 0x5881F484: lea edx, [ebp + 0x1e]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x1E
        // 0x5881F487: push edx
        __asm _emit 0x52
        // 0x5881F488: push ecx
        __asm _emit 0x51
        // 0x5881F489: push esi
        __asm _emit 0x56
        // 0x5881F48A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881F48C: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0x55
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5881F491: jmp 0x5881f495
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881F493: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881F495: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x5881F497: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5881F49B: mov dword ptr [esi + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x5881F49E: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0xD7
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5881F4A3: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881F4A6: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5881F4AA: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x5881F4AF: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5881F4B1: je 0x5881f4ef
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x5881F4B3: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881F4B9: cmp dword ptr [ecx + 0x160], 7
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x5881F4C0: jle 0x5881f4d8
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5881F4C2: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F4C8: je 0x5881f4d8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5881F4CA: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F4D0: add ecx, 0x1c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F4D6: jmp 0x5881f4da
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881F4D8: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5881F4DA: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5881F4DC: lea edx, [edi + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x28
        // 0x5881F4DF: push edx
        __asm _emit 0x52
        // 0x5881F4E0: lea edx, [ebp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x1C
        // 0x5881F4E3: push edx
        __asm _emit 0x52
        // 0x5881F4E4: push ecx
        __asm _emit 0x51
        // 0x5881F4E5: push esi
        __asm _emit 0x56
        // 0x5881F4E6: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881F4E8: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x55
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5881F4ED: jmp 0x5881f4f1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881F4EF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881F4F1: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x5881F4F3: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5881F4F7: mov dword ptr [esi + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x5881F4FA: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0xD7
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5881F4FF: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881F502: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5881F506: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x5881F50B: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5881F50D: je 0x5881f54b
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x5881F50F: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881F515: cmp dword ptr [ecx + 0x160], 8
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        // 0x5881F51C: jle 0x5881f534
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5881F51E: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F524: je 0x5881f534
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5881F526: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F52C: add edx, 0x200
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F532: jmp 0x5881f536
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881F534: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5881F536: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5881F538: add edi, 0x28
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x28
        // 0x5881F53B: push edi
        __asm _emit 0x57
        // 0x5881F53C: add ebp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x1C
        // 0x5881F53F: push ebp
        __asm _emit 0x55
        // 0x5881F540: push edx
        __asm _emit 0x52
        // 0x5881F541: push esi
        __asm _emit 0x56
        // 0x5881F542: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881F544: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x54
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5881F549: jmp 0x5881f54d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881F54B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881F54D: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x5881F550: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5881F555: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5881F559: mov dword ptr [esi + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x5881F55C: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0x37
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881F561: mov ecx, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x5C
        // 0x5881F564: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F569: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0x37
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881F56E: mov eax, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x5881F571: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F576: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5881F57A: mov dword ptr [esi + 0x60], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x60
        // 0x5881F57D: lea ebp, [esi + 0x84]
        __asm _emit 0x8D
        __asm _emit 0xAE
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F583: mov dword ptr [esp + 0x3c], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F58B: jmp 0x5881f590
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5881F58D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x5881F590: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5881F592: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0xD6
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5881F597: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5881F599: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881F59C: mov dword ptr [esp + 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5881F5A0: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x5881F5A5: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x5881F5A7: je 0x5881f5ce
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x5881F5A9: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5881F5AD: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5881F5B1: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5881F5B3: push ebx
        __asm _emit 0x53
        // 0x5881F5B4: push ebx
        __asm _emit 0x53
        // 0x5881F5B5: inc edx
        __asm _emit 0x42
        // 0x5881F5B6: push edx
        __asm _emit 0x52
        // 0x5881F5B7: add eax, -5
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xFB
        // 0x5881F5BA: push eax
        __asm _emit 0x50
        // 0x5881F5BB: push esi
        __asm _emit 0x56
        // 0x5881F5BC: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5881F5BE: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0x3B
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881F5C3: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5881F5C9: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x5881F5CC: jmp 0x5881f5d0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881F5CE: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5881F5D0: mov dword ptr [ebp], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0x00
        // 0x5881F5D3: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F5D8: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x5881F5DC: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x5881F5DF: sub dword ptr [esp + 0x3c], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x5881F5E4: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5881F5E8: jne 0x5881f590
        __asm _emit 0x75
        __asm _emit 0xA6
        // 0x5881F5EA: mov dword ptr [esp + 0x38], 6
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F5F2: lea edi, [esi + 0x74]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x74
        // 0x5881F5F5: mov dword ptr [esp + 0x3c], 0x180
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F5FD: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x5881F5FF: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0xD6
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5881F604: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x5881F606: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881F609: mov dword ptr [esp + 0x28], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5881F60D: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x5881F612: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x5881F614: je 0x5881f6a4
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F61A: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5881F61E: mov ecx, dword ptr [0x58a24ae0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0x4A
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881F624: inc eax
        __asm _emit 0x40
        // 0x5881F625: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F62B: jle 0x5881f64d
        __asm _emit 0x7E
        __asm _emit 0x20
        // 0x5881F62D: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5881F62F: jl 0x5881f64d
        __asm _emit 0x7C
        __asm _emit 0x1C
        // 0x5881F631: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F637: je 0x5881f64d
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x5881F639: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F63F: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5881F643: lea ecx, [edx + eax + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x40
        // 0x5881F647: mov dword ptr [esp + 0x34], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5881F64B: jmp 0x5881f651
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5881F64D: mov dword ptr [esp + 0x34], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5881F651: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5881F655: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5881F659: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5881F65B: push ebx
        __asm _emit 0x53
        // 0x5881F65C: push ebx
        __asm _emit 0x53
        // 0x5881F65D: push edx
        __asm _emit 0x52
        // 0x5881F65E: push eax
        __asm _emit 0x50
        // 0x5881F65F: push esi
        __asm _emit 0x56
        // 0x5881F660: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x5881F662: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0x3B
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881F667: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5881F66B: mov dword ptr [ebp], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5881F672: mov dword ptr [ebp + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0x50
        // 0x5881F675: mov dword ptr [ebp + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x54
        // 0x5881F678: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5881F67A: je 0x5881f6a6
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x5881F67C: mov ecx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x18
        // 0x5881F67F: mov dword ptr [ebp + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5881F682: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5881F685: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5881F688: mov dword ptr [ebp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x5881F68B: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5881F68D: mov dword ptr [ebp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x5881F690: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5881F693: mov dword ptr [ebp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x18
        // 0x5881F696: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5881F699: mov dword ptr [ebp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x1C
        // 0x5881F69C: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5881F69F: mov dword ptr [ebp + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x20
        // 0x5881F6A2: jmp 0x5881f6a6
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881F6A4: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5881F6A6: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x5881F6A8: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5881F6AC: mov dword ptr [edi], ebp
        __asm _emit 0x89
        __asm _emit 0x2F
        // 0x5881F6AE: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0xD5
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5881F6B3: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x5881F6B5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881F6B8: mov dword ptr [esp + 0x28], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5881F6BC: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x5881F6C1: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x5881F6C3: je 0x5881f751
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F6C9: mov eax, dword ptr [0x58a24ae0]
        __asm _emit 0xA1
        __asm _emit 0xE0
        __asm _emit 0x4A
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881F6CE: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5881F6D2: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F6D8: jle 0x5881f6f6
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x5881F6DA: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5881F6DC: jl 0x5881f6f6
        __asm _emit 0x7C
        __asm _emit 0x18
        // 0x5881F6DE: cmp dword ptr [eax + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F6E4: je 0x5881f6f6
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x5881F6E6: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F6EC: add eax, dword ptr [esp + 0x3c]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5881F6F0: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5881F6F4: jmp 0x5881f6fa
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5881F6F6: mov dword ptr [esp + 0x34], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5881F6FA: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5881F6FE: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5881F702: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5881F704: push ebx
        __asm _emit 0x53
        // 0x5881F705: push ebx
        __asm _emit 0x53
        // 0x5881F706: dec eax
        __asm _emit 0x48
        // 0x5881F707: push eax
        __asm _emit 0x50
        // 0x5881F708: add ecx, -4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0xFC
        // 0x5881F70B: push ecx
        __asm _emit 0x51
        // 0x5881F70C: push esi
        __asm _emit 0x56
        // 0x5881F70D: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x5881F70F: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x3A
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881F714: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5881F718: mov dword ptr [ebp], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5881F71F: mov dword ptr [ebp + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0x50
        // 0x5881F722: mov dword ptr [ebp + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x54
        // 0x5881F725: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5881F727: je 0x5881f753
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x5881F729: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5881F72C: mov dword ptr [ebp + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x5881F72F: mov ecx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x1C
        // 0x5881F732: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5881F735: mov dword ptr [ebp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x5881F738: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5881F73A: mov dword ptr [ebp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x14
        // 0x5881F73D: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5881F740: mov dword ptr [ebp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x5881F743: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5881F746: mov dword ptr [ebp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x1C
        // 0x5881F749: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5881F74C: mov dword ptr [ebp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x20
        // 0x5881F74F: jmp 0x5881f753
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881F751: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5881F753: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5881F755: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5881F75A: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5881F75E: mov dword ptr [edi - 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0xF0
        // 0x5881F761: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0x35
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881F766: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5881F768: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F76D: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0x35
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881F772: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5881F774: add dword ptr [esp + 0x38], 2
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        // 0x5881F779: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F77E: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5881F782: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5881F784: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5881F786: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5881F78A: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5881F78C: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5881F790: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5881F792: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F797: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5881F79B: mov eax, dword ptr [edi - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0xF0
        // 0x5881F79E: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5881F7A0: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5881F7A4: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5881F7A8: sub eax, -0x80
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x80
        // 0x5881F7AB: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5881F7AE: cmp eax, 0x300
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F7B3: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5881F7B7: jl 0x5881f5fd
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x40
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5881F7BD: lea ebp, [esi + 0x8c]
        __asm _emit 0x8D
        __asm _emit 0xAE
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F7C3: mov dword ptr [esp + 0x3c], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F7CB: jmp 0x5881f7d0
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5881F7CD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x5881F7D0: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5881F7D2: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0xD4
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5881F7D7: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5881F7D9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881F7DC: mov dword ptr [esp + 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5881F7E0: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        // 0x5881F7E5: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x5881F7E7: je 0x5881f810
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x5881F7E9: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5881F7ED: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5881F7F1: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5881F7F3: push ebx
        __asm _emit 0x53
        // 0x5881F7F4: push ebx
        __asm _emit 0x53
        // 0x5881F7F5: add edx, 2
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x02
        // 0x5881F7F8: push edx
        __asm _emit 0x52
        // 0x5881F7F9: add eax, -6
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xFA
        // 0x5881F7FC: push eax
        __asm _emit 0x50
        // 0x5881F7FD: push esi
        __asm _emit 0x56
        // 0x5881F7FE: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5881F800: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0x39
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881F805: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5881F80B: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x5881F80E: jmp 0x5881f812
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881F810: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5881F812: mov dword ptr [ebp], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0x00
        // 0x5881F815: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F81A: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x5881F81E: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x5881F821: sub dword ptr [esp + 0x3c], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x5881F826: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5881F82A: jne 0x5881f7d0
        __asm _emit 0x75
        __asm _emit 0xA4
        // 0x5881F82C: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x5881F82E: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0xD4
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5881F833: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881F836: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5881F83A: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5881F83E: mov byte ptr [esp + 0x20], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        // 0x5881F843: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5881F845: je 0x5881f878
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x5881F847: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5881F84B: push 0x10101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5881F850: push ebx
        __asm _emit 0x53
        // 0x5881F851: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5881F856: lea edx, [ebp + 5]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x05
        // 0x5881F859: push edx
        __asm _emit 0x52
        // 0x5881F85A: lea edx, [ecx + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x51
        __asm _emit 0x44
        // 0x5881F85D: push edx
        __asm _emit 0x52
        // 0x5881F85E: lea edx, [ebp - 0xf]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0xF1
        // 0x5881F861: push edx
        __asm _emit 0x52
        // 0x5881F862: add ecx, -2
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0xFE
        // 0x5881F865: push ecx
        __asm _emit 0x51
        // 0x5881F866: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881F86C: push ecx
        __asm _emit 0x51
        // 0x5881F86D: push ebx
        __asm _emit 0x53
        // 0x5881F86E: push esi
        __asm _emit 0x56
        // 0x5881F86F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881F871: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0x3A
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5881F876: jmp 0x5881f87a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881F878: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881F87A: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F880: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5881F885: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5881F889: mov dword ptr [esi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F88F: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x34
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881F894: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F89A: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5881F89F: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0x34
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881F8A4: push 0x88
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F8A9: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0xD3
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5881F8AE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881F8B1: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5881F8B5: mov byte ptr [esp + 0x20], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x09
        // 0x5881F8BA: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5881F8BC: je 0x5881f8d4
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x5881F8BE: mov edx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x5881F8C1: mov ecx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x5881F8C4: push edx
        __asm _emit 0x52
        // 0x5881F8C5: push ecx
        __asm _emit 0x51
        // 0x5881F8C6: push 0xa
        __asm _emit 0x6A
        __asm _emit 0x0A
        // 0x5881F8C8: push esi
        __asm _emit 0x56
        // 0x5881F8C9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881F8CB: call 0x58751e80
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0x25
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5881F8D0: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5881F8D2: jmp 0x5881f8d6
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881F8D4: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5881F8D6: mov dword ptr [esi + 0xd14], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x14
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F8DC: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x5881F8DF: mov edx, 0x7d0
        __asm _emit 0xBA
        __asm _emit 0xD0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F8E4: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5881F8E8: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x5881F8EC: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5881F8EE: je 0x5881f8f6
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5881F8F0: push edi
        __asm _emit 0x57
        // 0x5881F8F1: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0x36
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881F8F6: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x5881F8F9: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5881F8FB: je 0x5881f903
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5881F8FD: push edi
        __asm _emit 0x57
        // 0x5881F8FE: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0x35
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881F903: mov eax, dword ptr [esi + 0xd14]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F909: mov dword ptr [eax + 0x78], 0x64
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x78
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F910: mov eax, dword ptr [esi + 0xd14]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F916: mov dword ptr [eax + 0x6c], 0x82
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x6C
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F91D: mov dword ptr [eax + 0x70], 0x4b
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x70
        __asm _emit 0x4B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F924: mov ecx, dword ptr [esi + 0xd14]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F92A: mov dword ptr [ecx + 0x68], 0x12c
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x68
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F931: mov edx, dword ptr [esi + 0xd14]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x14
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F937: mov dword ptr [edx + 0x80], esi
        __asm _emit 0x89
        __asm _emit 0xB2
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F93D: mov eax, dword ptr [esi + 0xd14]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F943: mov ecx, 0x14
        __asm _emit 0xB9
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F948: mov word ptr [eax + 0x7c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x7C
        // 0x5881F94C: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5881F94F: mov dword ptr [esi + 0xd18], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x18
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F955: mov dword ptr [esi + 0xd8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F95B: mov dword ptr [esi + 0xdc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F961: mov dword ptr [esi + 0xe0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F967: mov dword ptr [esi + 0x98], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F96D: mov dword ptr [esi + 0x80], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F973: mov dword ptr [esi + 0x70], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x70
        // 0x5881F976: mov ecx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x1C
        // 0x5881F979: sub ecx, dword ptr [eax + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x5881F97C: mov edx, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x20
        // 0x5881F97F: sub edx, dword ptr [eax + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5881F982: mov eax, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x5881F985: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x5881F987: mov ecx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x5881F98A: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5881F98C: mov dword ptr [esi + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x1C
        // 0x5881F98F: mov dword ptr [esi + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x20
        // 0x5881F992: lea eax, [esi + 0xfc]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F998: mov ecx, 0x80
        __asm _emit 0xB9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F99D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x5881F9A0: mov byte ptr [eax], bl
        __asm _emit 0x88
        __asm _emit 0x18
        // 0x5881F9A2: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5881F9A5: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x5881F9A8: jne 0x5881f9a0
        __asm _emit 0x75
        __asm _emit 0xF6
        // 0x5881F9AA: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5881F9AE: mov edx, 1
        __asm _emit 0xBA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F9B3: mov word ptr [esi + 0xa4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F9BA: mov ecx, 0xe5ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F9BF: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5881F9C2: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F9C7: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x5881F9CA: mov byte ptr [esi + 0xe4], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F9D0: mov byte ptr [esi + 0xcfc], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0xFC
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F9D6: mov byte ptr [esi + 0x9c], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F9DC: mov dword ptr [esi + 0xa0], 0x400
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F9E6: mov dword ptr [esi + 0xa8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F9EC: mov dword ptr [esi + 0xac], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F9F2: mov dword ptr [esi + 0xb0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F9F8: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5881F9FC: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5881FA00: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5881FA02: push 0x594
        __asm _emit 0x68
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881FA07: mov word ptr [esi + 0xd24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881FA0E: mov dword ptr [esi + 0xc4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881FA14: lea ecx, [esi + 0xd2c]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x2C
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881FA1A: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5881FA1C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881FA1E: push ebx
        __asm _emit 0x53
        // 0x5881FA1F: push ecx
        __asm _emit 0x51
        // 0x5881FA20: mov dword ptr [esi + 0xd4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881FA26: mov dword ptr [esi + 0xcc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881FA2C: mov dword ptr [esi + 0xd1c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x1C
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881FA32: mov byte ptr [esi + 0xd0], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881FA38: mov dword ptr [esi + 0xc0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881FA3E: mov dword ptr [esi + 0xbc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881FA44: mov dword ptr [esi + 0xb8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881FA4A: mov dword ptr [esi + 0xb4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881FA50: mov dword ptr [esi + 0xc8], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881FA56: mov word ptr [esi + 0xd26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x26
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881FA5D: mov word ptr [esi + 0xd28], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881FA64: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0xD1
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5881FA69: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5881FA6C: mov dword ptr [esi + 0x12c4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881FA72: mov dword ptr [esi + 0x12c8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881FA78: mov dword ptr [esi + 0x12cc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xCC
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881FA7E: mov dword ptr [esi + 0x12d0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881FA84: mov dword ptr [esi + 0x12d4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881FA8A: mov byte ptr [esi + 0x12d8], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0xD8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881FA90: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5881FA92: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5881FA96: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881FA9D: pop ecx
        __asm _emit 0x59
        // 0x5881FA9E: pop edi
        __asm _emit 0x5F
        // 0x5881FA9F: pop esi
        __asm _emit 0x5E
        // 0x5881FAA0: pop ebp
        __asm _emit 0x5D
        // 0x5881FAA1: pop ebx
        __asm _emit 0x5B
        // 0x5881FAA2: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5881FAA5: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
