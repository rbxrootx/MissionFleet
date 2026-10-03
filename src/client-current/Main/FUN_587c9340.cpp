// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587C9340 .. +0x2C6 bytes.
extern "C" __declspec(naked) void FUN_587c9340() {
    __asm {
        // 0x587C9340: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587C9342: push 0x58981754
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0x17
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587C9347: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C934D: push eax
        __asm _emit 0x50
        // 0x587C934E: push ecx
        __asm _emit 0x51
        // 0x587C934F: push ebx
        __asm _emit 0x53
        // 0x587C9350: push ebp
        __asm _emit 0x55
        // 0x587C9351: push esi
        __asm _emit 0x56
        // 0x587C9352: push edi
        __asm _emit 0x57
        // 0x587C9353: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587C9358: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587C935A: push eax
        __asm _emit 0x50
        // 0x587C935B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587C935F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9365: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587C9367: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587C936B: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587C936F: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587C9373: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587C9377: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587C937B: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587C937F: push eax
        __asm _emit 0x50
        // 0x587C9380: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587C9384: push ecx
        __asm _emit 0x51
        // 0x587C9385: push edx
        __asm _emit 0x52
        // 0x587C9386: push ebp
        __asm _emit 0x55
        // 0x587C9387: push edi
        __asm _emit 0x57
        // 0x587C9388: push eax
        __asm _emit 0x50
        // 0x587C9389: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587C938B: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x9E
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587C9390: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587C9396: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587C939B: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587C939D: mov dword ptr [esi + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x50
        // 0x587C93A0: mov dword ptr [esi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x54
        // 0x587C93A3: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C93AA: mov dword ptr [esi + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x5C
        // 0x587C93AD: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C93B2: lea ecx, [esi + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x587C93B5: push ebx
        __asm _emit 0x53
        // 0x587C93B6: push ecx
        __asm _emit 0x51
        // 0x587C93B7: mov dword ptr [esp + 0x2c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587C93BB: mov dword ptr [esi], 0x5899afe4
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xE4
        __asm _emit 0xAF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587C93C1: mov dword ptr [esi + 0x60], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x60
        // 0x587C93C4: mov dword ptr [esi + 0xe4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C93CA: mov dword ptr [esi + 0xe8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C93D0: mov dword ptr [esi + 0xec], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C93D6: mov dword ptr [esi + 0xf0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C93DC: mov dword ptr [esi + 0xf4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C93E2: mov dword ptr [esi + 0xf8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C93E8: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0x38
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587C93ED: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C93F2: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0x38
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587C93F7: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587C93FA: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587C93FE: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x587C9403: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587C9405: je 0x587c9454
        __asm _emit 0x74
        __asm _emit 0x4D
        // 0x587C9407: mov ecx, dword ptr [0x58a24728]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x28
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C940D: cmp dword ptr [ecx + 0x160], 0xc
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0C
        // 0x587C9414: jle 0x587c942c
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x587C9416: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C941C: je 0x587c942c
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C941E: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9424: add ecx, 0x300
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C942A: jmp 0x587c942e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C942C: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587C942E: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587C9432: push edx
        __asm _emit 0x52
        // 0x587C9433: lea edx, [ebp - 5]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0xFB
        // 0x587C9436: push edx
        __asm _emit 0x52
        // 0x587C9437: lea edx, [edi + 0x48]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x48
        // 0x587C943A: push edx
        __asm _emit 0x52
        // 0x587C943B: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C9441: push ecx
        __asm _emit 0x51
        // 0x587C9442: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C9448: push esi
        __asm _emit 0x56
        // 0x587C9449: push ecx
        __asm _emit 0x51
        // 0x587C944A: push edx
        __asm _emit 0x52
        // 0x587C944B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587C944D: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0x49
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587C9452: jmp 0x587c9456
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C9454: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587C9456: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C945B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587C945D: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587C9461: mov dword ptr [esi + 0xf4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9467: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0x98
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587C946C: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9472: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9477: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587C947B: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9480: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0x37
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587C9485: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587C9488: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587C948C: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x587C9491: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587C9493: je 0x587c94e2
        __asm _emit 0x74
        __asm _emit 0x4D
        // 0x587C9495: mov ecx, dword ptr [0x58a24728]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x28
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C949B: cmp dword ptr [ecx + 0x160], 0xd
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0D
        // 0x587C94A2: jle 0x587c94ba
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x587C94A4: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C94AA: je 0x587c94ba
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C94AC: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C94B2: add ecx, 0x340
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C94B8: jmp 0x587c94bc
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C94BA: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587C94BC: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587C94C0: push edx
        __asm _emit 0x52
        // 0x587C94C1: lea edx, [ebp + 4]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x04
        // 0x587C94C4: push edx
        __asm _emit 0x52
        // 0x587C94C5: lea edx, [edi + 0x48]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x48
        // 0x587C94C8: push edx
        __asm _emit 0x52
        // 0x587C94C9: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C94CF: push ecx
        __asm _emit 0x51
        // 0x587C94D0: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C94D6: push esi
        __asm _emit 0x56
        // 0x587C94D7: push ecx
        __asm _emit 0x51
        // 0x587C94D8: push edx
        __asm _emit 0x52
        // 0x587C94D9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587C94DB: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0x48
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587C94E0: jmp 0x587c94e4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C94E2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587C94E4: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C94E9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587C94EB: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587C94EF: mov dword ptr [esi + 0xf8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C94F5: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0x98
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587C94FA: mov eax, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9500: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9505: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587C9509: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C950E: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x37
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587C9513: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587C9516: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587C951A: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x587C951F: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587C9521: je 0x587c956a
        __asm _emit 0x74
        __asm _emit 0x47
        // 0x587C9523: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C9529: cmp dword ptr [ecx + 0x160], 0x2c
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2C
        // 0x587C9530: jle 0x587c9557
        __asm _emit 0x7E
        __asm _emit 0x25
        // 0x587C9532: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9538: je 0x587c9557
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x587C953A: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9540: push ebp
        __asm _emit 0x55
        // 0x587C9541: push edi
        __asm _emit 0x57
        // 0x587C9542: add ecx, 0xb00
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9548: push 0xa
        __asm _emit 0x6A
        __asm _emit 0x0A
        // 0x587C954A: push ecx
        __asm _emit 0x51
        // 0x587C954B: push esi
        __asm _emit 0x56
        // 0x587C954C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587C954E: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0xDB
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587C9553: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587C9555: jmp 0x587c956c
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x587C9557: push ebp
        __asm _emit 0x55
        // 0x587C9558: push edi
        __asm _emit 0x57
        // 0x587C9559: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587C955B: push 0xa
        __asm _emit 0x6A
        __asm _emit 0x0A
        // 0x587C955D: push ecx
        __asm _emit 0x51
        // 0x587C955E: push esi
        __asm _emit 0x56
        // 0x587C955F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587C9561: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0xDB
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587C9566: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587C9568: jmp 0x587c956c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C956A: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587C956C: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587C9570: mov dword ptr [esi + 0xe8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9576: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x587C9579: add edx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x64
        // 0x587C957C: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587C9580: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x587C9584: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587C9586: je 0x587c958e
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587C9588: push edi
        __asm _emit 0x57
        // 0x587C9589: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0x99
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587C958E: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x587C9591: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587C9593: je 0x587c959b
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587C9595: push edi
        __asm _emit 0x57
        // 0x587C9596: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x99
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587C959B: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C95A1: push ebx
        __asm _emit 0x53
        // 0x587C95A2: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0xDD
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587C95A7: push 0xbc
        __asm _emit 0x68
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C95AC: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x36
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587C95B1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587C95B4: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587C95B8: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x587C95BD: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587C95BF: je 0x587c95e8
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x587C95C1: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587C95C5: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587C95C9: add ecx, 0x1f4
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C95CF: push ecx
        __asm _emit 0x51
        // 0x587C95D0: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587C95D4: push ebx
        __asm _emit 0x53
        // 0x587C95D5: push ebx
        __asm _emit 0x53
        // 0x587C95D6: push ebp
        __asm _emit 0x55
        // 0x587C95D7: push edx
        __asm _emit 0x52
        // 0x587C95D8: push ecx
        __asm _emit 0x51
        // 0x587C95D9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587C95DB: call 0x587c8960
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587C95E0: mov dword ptr [esi + 0xec], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C95E6: jmp 0x587c95ee
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x587C95E8: mov dword ptr [esi + 0xec], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C95EE: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587C95F0: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587C95F4: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C95FB: pop ecx
        __asm _emit 0x59
        // 0x587C95FC: pop edi
        __asm _emit 0x5F
        // 0x587C95FD: pop esi
        __asm _emit 0x5E
        // 0x587C95FE: pop ebp
        __asm _emit 0x5D
        // 0x587C95FF: pop ebx
        __asm _emit 0x5B
        // 0x587C9600: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587C9603: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
