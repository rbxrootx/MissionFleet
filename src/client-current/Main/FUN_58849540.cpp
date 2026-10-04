// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58849540 .. +0x293 bytes.
// Source symbol alias: FUN_58849540.
extern "C" __declspec(naked) void FUN_58849540() {
    __asm {
        // 0x58849540: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58849542: push 0x58984d01
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x4D
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58849547: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884954D: push eax
        __asm _emit 0x50
        // 0x5884954E: push ecx
        __asm _emit 0x51
        // 0x5884954F: push ebx
        __asm _emit 0x53
        // 0x58849550: push ebp
        __asm _emit 0x55
        // 0x58849551: push esi
        __asm _emit 0x56
        // 0x58849552: push edi
        __asm _emit 0x57
        // 0x58849553: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58849558: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5884955A: push eax
        __asm _emit 0x50
        // 0x5884955B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5884955F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849565: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58849567: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5884956B: mov dword ptr [esi], 0x5899e780
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x80
        __asm _emit 0xE7
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58849571: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849577: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58849579: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884957E: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58849582: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58849584: je 0x58849594
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58849586: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58849588: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5884958A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5884958C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5884958E: mov dword ptr [esi + 0xa4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849594: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884959A: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5884959C: je 0x588495ac
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5884959E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588495A0: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588495A2: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588495A4: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588495A6: mov dword ptr [esi + 0xa8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588495AC: lea ebx, [esi + 0xb4]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588495B2: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x588495B4: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588495B6: je 0x588495c2
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588495B8: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588495BA: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588495BC: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588495BE: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588495C0: mov dword ptr [ebx], edi
        __asm _emit 0x89
        __asm _emit 0x3B
        // 0x588495C2: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x588495C5: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x588495C8: jne 0x588495b2
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x588495CA: lea ebx, [esi + 0xbc]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588495D0: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588495D5: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x588495D7: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588495D9: je 0x588495e5
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588495DB: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588495DD: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588495DF: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588495E1: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588495E3: mov dword ptr [ebx], edi
        __asm _emit 0x89
        __asm _emit 0x3B
        // 0x588495E5: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x588495E8: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x588495EB: jne 0x588495d5
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x588495ED: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588495EF: call 0x58848610
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588495F4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588495F6: call 0x58848680
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588495FB: mov ecx, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849601: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58849603: je 0x58849613
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58849605: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58849607: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58849609: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5884960B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5884960D: mov dword ptr [esi + 0xcc], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849613: mov ecx, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849619: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5884961B: je 0x5884962b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5884961D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5884961F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58849621: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58849623: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58849625: mov dword ptr [esi + 0xd0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884962B: mov ecx, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849631: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58849633: je 0x58849643
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58849635: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58849637: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58849639: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5884963B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5884963D: mov dword ptr [esi + 0xd4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849643: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849649: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5884964B: je 0x5884965b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5884964D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5884964F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58849651: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58849653: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58849655: mov dword ptr [esi + 0xe0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884965B: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849661: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58849663: je 0x58849673
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58849665: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58849667: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58849669: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5884966B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5884966D: mov dword ptr [esi + 0xe4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849673: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849679: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5884967B: je 0x5884968b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5884967D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5884967F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58849681: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58849683: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58849685: mov dword ptr [esi + 0xe8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884968B: mov ecx, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849691: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58849693: je 0x588496a3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58849695: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58849697: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58849699: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5884969B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5884969D: mov dword ptr [esi + 0xec], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588496A3: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588496A9: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588496AB: je 0x588496bb
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588496AD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588496AF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588496B1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588496B3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588496B5: mov dword ptr [esi + 0xb0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588496BB: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588496C1: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588496C3: je 0x588496d3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588496C5: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588496C7: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588496C9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588496CB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588496CD: mov dword ptr [esi + 0xac], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588496D3: mov ecx, dword ptr [esi + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588496D9: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588496DB: je 0x588496eb
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588496DD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588496DF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588496E1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588496E3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588496E5: mov dword ptr [esi + 0x114], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588496EB: mov ecx, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588496F1: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588496F3: je 0x58849703
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588496F5: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588496F7: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588496F9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588496FB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588496FD: mov dword ptr [esi + 0xd8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849703: mov ecx, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849709: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5884970B: je 0x5884971b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5884970D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5884970F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58849711: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58849713: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58849715: mov dword ptr [esi + 0xdc], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884971B: mov ecx, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849721: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58849723: je 0x58849733
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58849725: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58849727: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58849729: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5884972B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5884972D: mov dword ptr [esi + 0x118], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849733: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849739: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5884973B: je 0x5884974b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5884973D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5884973F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58849741: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58849743: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58849745: mov dword ptr [esi + 0x11c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884974B: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849751: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58849753: je 0x5884975e
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58849755: push eax
        __asm _emit 0x50
        // 0x58849756: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x34
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884975B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884975E: mov eax, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849764: push eax
        __asm _emit 0x50
        // 0x58849765: mov dword ptr [esi + 0x98], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884976B: mov dword ptr [esi + 0x9c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849771: mov dword ptr [esi + 0xa0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849777: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0x34
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884977C: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849782: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58849785: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58849787: je 0x58849792
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58849789: push eax
        __asm _emit 0x50
        // 0x5884978A: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0x34
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884978F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58849792: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x58849795: push eax
        __asm _emit 0x50
        // 0x58849796: mov dword ptr [esi + 0x80], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884979C: mov dword ptr [esi + 0x84], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588497A2: mov dword ptr [esi + 0x88], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588497A8: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0x34
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x588497AD: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588497B0: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588497B2: mov dword ptr [esp + 0x20], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588497BA: call 0x58902c10
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0x94
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588497BF: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588497C3: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588497CA: pop ecx
        __asm _emit 0x59
        // 0x588497CB: pop edi
        __asm _emit 0x5F
        // 0x588497CC: pop esi
        __asm _emit 0x5E
        // 0x588497CD: pop ebp
        __asm _emit 0x5D
        // 0x588497CE: pop ebx
        __asm _emit 0x5B
        // 0x588497CF: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588497D2: ret
        __asm _emit 0xC3
    }
}
