// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587D9460 .. +0x22E bytes.
// Source symbol alias: FUN_587d9460.
extern "C" __declspec(naked) void FUN_587d9460() {
    __asm {
        // 0x587D9460: sub esp, 0x88
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9466: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587D946B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587D946D: mov dword ptr [esp + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9474: push ebp
        __asm _emit 0x55
        // 0x587D9475: push esi
        __asm _emit 0x56
        // 0x587D9476: push edi
        __asm _emit 0x57
        // 0x587D9477: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587D9479: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D947F: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x587D9482: mov dl, byte ptr [edi + 0x61]
        __asm _emit 0x8A
        __asm _emit 0x57
        __asm _emit 0x61
        // 0x587D9485: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D9487: mov dword ptr [esp + 0xc], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D948F: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9494: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587D9496: je 0x587d94c4
        __asm _emit 0x74
        __asm _emit 0x2C
        // 0x587D9498: jmp 0x587d94a0
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x587D949A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D94A0: mov esi, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D94A6: cmp byte ptr [esi + 0x35c], dl
        __asm _emit 0x38
        __asm _emit 0x96
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D94AC: jne 0x587d94b6
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x587D94AE: cmp dword ptr [ecx + 0xec], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D94B4: je 0x587d94c2
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587D94B6: mov ecx, dword ptr [ecx + 0xce4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xE4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D94BC: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587D94BE: jne 0x587d94a0
        __asm _emit 0x75
        __asm _emit 0xE0
        // 0x587D94C0: jmp 0x587d94c4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D94C2: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587D94C4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D94C6: je 0x587d9539
        __asm _emit 0x74
        __asm _emit 0x71
        // 0x587D94C8: jmp 0x587d94d0
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x587D94CA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D94D0: mov ecx, dword ptr [edi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D94D6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587D94D8: je 0x587d9539
        __asm _emit 0x74
        __asm _emit 0x5F
        // 0x587D94DA: mov edx, dword ptr [ecx + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x48
        // 0x587D94DD: shr edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0A
        // 0x587D94E0: movzx ecx, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xCA
        // 0x587D94E3: mov edx, dword ptr [eax + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x48
        // 0x587D94E6: shr edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0A
        // 0x587D94E9: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x587D94EB: je 0x587d9539
        __asm _emit 0x74
        __asm _emit 0x4C
        // 0x587D94ED: mov eax, dword ptr [eax + 0xce4]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xE4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D94F3: mov cl, byte ptr [edi + 0x61]
        __asm _emit 0x8A
        __asm _emit 0x4F
        __asm _emit 0x61
        // 0x587D94F6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587D94F8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D94FA: je 0x587d9525
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x587D94FC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587D9500: mov edx, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9506: cmp byte ptr [edx + 0x35c], cl
        __asm _emit 0x38
        __asm _emit 0x8A
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D950C: jne 0x587d9517
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x587D950E: cmp dword ptr [eax + 0xec], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9515: je 0x587d9523
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587D9517: mov eax, dword ptr [eax + 0xce4]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xE4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D951D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D951F: jne 0x587d9500
        __asm _emit 0x75
        __asm _emit 0xDF
        // 0x587D9521: jmp 0x587d9525
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D9523: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587D9525: push esi
        __asm _emit 0x56
        // 0x587D9526: call 0x5876c8b0
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x33
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587D952B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587D952E: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x587D9530: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x587D9532: and eax, esi
        __asm _emit 0x23
        __asm _emit 0xC6
        // 0x587D9534: inc ebp
        __asm _emit 0x45
        // 0x587D9535: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D9537: jne 0x587d94d0
        __asm _emit 0x75
        __asm _emit 0x97
        // 0x587D9539: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xA1
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D953E: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587D9541: mov dl, byte ptr [edi + 0x61]
        __asm _emit 0x8A
        __asm _emit 0x57
        __asm _emit 0x61
        // 0x587D9544: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587D9546: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D9548: je 0x587d9575
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x587D954A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9550: mov esi, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9556: cmp byte ptr [esi + 0x35c], dl
        __asm _emit 0x38
        __asm _emit 0x96
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D955C: jne 0x587d9567
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x587D955E: cmp dword ptr [eax + 0xec], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9565: je 0x587d9573
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587D9567: mov eax, dword ptr [eax + 0xce4]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xE4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D956D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D956F: jne 0x587d9550
        __asm _emit 0x75
        __asm _emit 0xDF
        // 0x587D9571: jmp 0x587d9575
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D9573: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587D9575: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587D9577: je 0x587d95e9
        __asm _emit 0x74
        __asm _emit 0x70
        // 0x587D9579: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9580: mov edx, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9586: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587D958A: shr ax, 5
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x05
        // 0x587D958E: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x587D9592: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587D9596: je 0x587d959e
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587D9598: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x587D959C: jne 0x587d95a2
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x587D959E: inc dword ptr [esp + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587D95A2: mov eax, dword ptr [ecx + 0xce4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xE4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D95A8: mov dl, byte ptr [edi + 0x61]
        __asm _emit 0x8A
        __asm _emit 0x57
        __asm _emit 0x61
        // 0x587D95AB: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587D95AD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D95AF: je 0x587d95d6
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x587D95B1: mov ecx, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D95B7: cmp byte ptr [ecx + 0x35c], dl
        __asm _emit 0x38
        __asm _emit 0x91
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D95BD: jne 0x587d95c8
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x587D95BF: cmp dword ptr [eax + 0xec], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D95C6: je 0x587d95d4
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587D95C8: mov eax, dword ptr [eax + 0xce4]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xE4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D95CE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D95D0: jne 0x587d95b1
        __asm _emit 0x75
        __asm _emit 0xDF
        // 0x587D95D2: jmp 0x587d95d6
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D95D4: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587D95D6: push esi
        __asm _emit 0x56
        // 0x587D95D7: call 0x5876c8b0
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0x32
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587D95DC: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587D95DF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D95E1: je 0x587d95e9
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587D95E3: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587D95E5: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587D95E7: jne 0x587d9580
        __asm _emit 0x75
        __asm _emit 0x97
        // 0x587D95E9: mov ax, word ptr [edi + 0xd54]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x54
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D95F0: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x587D95F4: je 0x587d963f
        __asm _emit 0x74
        __asm _emit 0x49
        // 0x587D95F6: cmp dword ptr [edi + 0xd78], 0
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D95FD: je 0x587d9663
        __asm _emit 0x74
        __asm _emit 0x64
        // 0x587D95FF: movzx edx, word ptr [esp + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587D9604: dec eax
        __asm _emit 0x48
        // 0x587D9605: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x587D9608: movzx ecx, byte ptr [eax + 0x58a0b4cc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x88
        __asm _emit 0xCC
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587D960F: push edx
        __asm _emit 0x52
        // 0x587D9610: add ecx, 6
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x06
        // 0x587D9613: push ecx
        __asm _emit 0x51
        // 0x587D9614: movzx edx, bp
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD5
        // 0x587D9617: push edx
        __asm _emit 0x52
        // 0x587D9618: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587D961C: push 0x5899b848
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0xB8
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587D9621: push eax
        __asm _emit 0x50
        // 0x587D9622: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587D9628: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587D962B: mov ecx, dword ptr [edi + 0x5f4]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xF4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9631: lea edx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D9635: mov dword ptr [ecx + 0x60], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D963C: push edx
        __asm _emit 0x52
        // 0x587D963D: jmp 0x587d9677
        __asm _emit 0xEB
        __asm _emit 0x38
        // 0x587D963F: cmp dword ptr [edi + 0xd78], 0
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9646: je 0x587d9663
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x587D9648: movzx edx, bp
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD5
        // 0x587D964B: push 6
        __asm _emit 0x6A
        __asm _emit 0x06
        // 0x587D964D: push edx
        __asm _emit 0x52
        // 0x587D964E: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D9652: push 0x5899b840
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0xB8
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587D9657: push eax
        __asm _emit 0x50
        // 0x587D9658: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587D965E: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587D9661: jmp 0x587d962b
        __asm _emit 0xEB
        __asm _emit 0xC8
        // 0x587D9663: mov eax, dword ptr [edi + 0x5f8]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xF8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9669: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D966E: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587D9672: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587D9677: mov ecx, dword ptr [edi + 0x5f4]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xF4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D967D: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0x86
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587D9682: mov ecx, dword ptr [esp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9689: pop edi
        __asm _emit 0x5F
        // 0x587D968A: pop esi
        __asm _emit 0x5E
        // 0x587D968B: pop ebp
        __asm _emit 0x5D
        // 0x587D968C: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
    }
}
