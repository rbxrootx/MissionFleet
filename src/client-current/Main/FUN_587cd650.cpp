// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 876 bytes in 2 exact ranges.
// Source symbol alias: FUN_587cd650.

// Ghidra body range 0x587CD650..0x587CD887; 567 mapped bytes.
extern "C" __declspec(naked) void FUN_587cd650_segment_00() {
    __asm {
        // 0x587CD650: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587CD652: push 0x58981a01
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x1A
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587CD657: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD65D: push eax
        __asm _emit 0x50
        // 0x587CD65E: sub esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x14
        // 0x587CD661: push ebx
        __asm _emit 0x53
        // 0x587CD662: push ebp
        __asm _emit 0x55
        // 0x587CD663: push esi
        __asm _emit 0x56
        // 0x587CD664: push edi
        __asm _emit 0x57
        // 0x587CD665: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587CD66A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587CD66C: push eax
        __asm _emit 0x50
        // 0x587CD66D: lea eax, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587CD671: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD677: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587CD679: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587CD67D: mov al, byte ptr [esp + 0x38]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587CD681: and al, 1
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x587CD683: movzx cx, al
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC8
        // 0x587CD687: mov eax, 0xe4
        __asm _emit 0xB8
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD68C: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587CD68E: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x587CD690: mov word ptr [esp + 0x16], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x16
        // 0x587CD695: lea ebp, [edi + 0x48]
        __asm _emit 0x8D
        __asm _emit 0x6F
        __asm _emit 0x48
        // 0x587CD698: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587CD69C: cmp dword ptr [ebp], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD6A0: jne 0x587cd76c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD6A6: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x587CD6A8: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0xF5
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587CD6AD: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587CD6AF: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587CD6B2: mov dword ptr [esp + 0x24], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587CD6B6: mov dword ptr [esp + 0x30], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD6BE: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587CD6C0: je 0x587cd75f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD6C6: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CD6CB: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587CD6CE: mov edi, dword ptr [0x58a24638]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0x38
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CD6D4: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587CD6D7: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587CD6DB: lea ecx, [ebx + 0x4b]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x4B
        // 0x587CD6DE: cmp dword ptr [edi + 0x164], ecx
        __asm _emit 0x39
        __asm _emit 0x8F
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD6E4: jle 0x587cd704
        __asm _emit 0x7E
        __asm _emit 0x1E
        // 0x587CD6E6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587CD6E8: jl 0x587cd704
        __asm _emit 0x7C
        __asm _emit 0x1A
        // 0x587CD6EA: cmp dword ptr [edi + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD6F1: je 0x587cd704
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587CD6F3: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587CD6F7: mov edi, dword ptr [edi + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0xBF
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD6FD: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x587CD6FF: mov edi, dword ptr [ecx + edi]
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x39
        // 0x587CD702: jmp 0x587cd706
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CD704: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587CD706: push 0x2710
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD70B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CD70D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CD70F: add edx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x64
        // 0x587CD712: push edx
        __asm _emit 0x52
        // 0x587CD713: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587CD717: add edx, 0xfa
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD71D: push edx
        __asm _emit 0x52
        // 0x587CD71E: push eax
        __asm _emit 0x50
        // 0x587CD71F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CD721: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0x5A
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CD726: mov dword ptr [esi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587CD72C: mov dword ptr [esi + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x50
        // 0x587CD72F: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587CD731: je 0x587cd759
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x587CD733: mov eax, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x587CD736: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x587CD739: mov ecx, dword ptr [edi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x587CD73C: lea eax, [edi + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x587CD73F: mov dword ptr [esi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x587CD742: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587CD744: mov dword ptr [esi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x587CD747: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587CD74A: mov dword ptr [esi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x587CD74D: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587CD750: mov dword ptr [esi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x1C
        // 0x587CD753: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587CD756: mov dword ptr [esi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x20
        // 0x587CD759: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587CD75D: jmp 0x587cd761
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CD75F: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587CD761: mov dword ptr [esp + 0x30], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CD769: mov dword ptr [ebp], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0x00
        // 0x587CD76C: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587CD76E: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x587CD770: sbb ecx, ecx
        __asm _emit 0x1B
        __asm _emit 0xC9
        // 0x587CD772: and ecx, 0x202
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD778: add ecx, 0xfffffeff
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CD77E: push ecx
        __asm _emit 0x51
        // 0x587CD77F: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x587CD782: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x55
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CD787: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587CD78A: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587CD78E: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD793: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD1
        // 0x587CD796: or dx, word ptr [esp + 0x16]
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x16
        // 0x587CD79B: inc ebx
        __asm _emit 0x43
        // 0x587CD79C: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x587CD79F: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587CD7A3: cmp ebx, 2
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x02
        // 0x587CD7A6: jne 0x587cd69c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF0
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CD7AC: cmp dword ptr [edi + 0x50], 0
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x587CD7B0: jne 0x587cd857
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD7B6: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD7BB: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587CD7C0: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587CD7C3: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587CD7C7: mov dword ptr [esp + 0x30], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD7CF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587CD7D1: je 0x587cd81b
        __asm _emit 0x74
        __asm _emit 0x48
        // 0x587CD7D3: mov edx, dword ptr [edi + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x48
        // 0x587CD7D6: mov esi, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CD7DC: cmp dword ptr [esi + 0x160], 0x26
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x26
        // 0x587CD7E3: mov ebx, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x5A
        __asm _emit 0x08
        // 0x587CD7E6: mov ebp, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587CD7E9: jle 0x587cd802
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x587CD7EB: cmp dword ptr [esi + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD7F2: je 0x587cd802
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587CD7F4: mov esi, dword ptr [esi + 0x190]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD7FA: add esi, 0x980
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x80
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD800: jmp 0x587cd804
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CD802: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587CD804: add ebx, 0x11
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x11
        // 0x587CD807: push ebx
        __asm _emit 0x53
        // 0x587CD808: add ebp, 0x5a
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x5A
        // 0x587CD80B: push ebp
        __asm _emit 0x55
        // 0x587CD80C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CD80E: push esi
        __asm _emit 0x56
        // 0x587CD80F: push edx
        __asm _emit 0x52
        // 0x587CD810: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587CD812: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0x98
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CD817: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587CD819: jmp 0x587cd81d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CD81B: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587CD81D: mov dword ptr [edi + 0x50], esi
        __asm _emit 0x89
        __asm _emit 0x77
        __asm _emit 0x50
        // 0x587CD820: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x587CD823: mov edx, 0x2710
        __asm _emit 0xBA
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD828: mov dword ptr [esp + 0x30], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CD830: mov word ptr [esi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x587CD834: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587CD836: je 0x587cd83e
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587CD838: push esi
        __asm _emit 0x56
        // 0x587CD839: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x57
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CD83E: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x587CD841: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587CD843: je 0x587cd84b
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587CD845: push esi
        __asm _emit 0x56
        // 0x587CD846: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0x56
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CD84B: mov eax, dword ptr [edi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x50
        // 0x587CD84E: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD853: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587CD857: mov eax, dword ptr [edi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x50
        // 0x587CD85A: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587CD85E: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD863: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD1
        // 0x587CD866: or dx, word ptr [esp + 0x16]
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x16
        // 0x587CD86B: cmp dword ptr [esp + 0x38], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x00
        // 0x587CD870: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587CD874: je 0x587cd883
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587CD876: movzx edx, byte ptr [edi + 0xd]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x57
        __asm _emit 0x0D
        // 0x587CD87A: mov ecx, dword ptr [edi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x50
        // 0x587CD87D: push edx
        __asm _emit 0x52
        // 0x587CD87E: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0x9A
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CD883: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587CD885: jmp 0x587cd890
        __asm _emit 0xEB
        __asm _emit 0x09
    }
}

// Ghidra body range 0x587CD890..0x587CD9C5; 309 mapped bytes.
extern "C" __declspec(naked) void FUN_587cd650_segment_01() {
    __asm {
        // 0x587CD890: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587CD894: cmp dword ptr [ebx + edi*4 + 0x54], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0xBB
        __asm _emit 0x54
        __asm _emit 0x00
        // 0x587CD899: jne 0x587cd94e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD89F: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD8A4: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0xF3
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587CD8A9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587CD8AC: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587CD8B0: mov dword ptr [esp + 0x30], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD8B8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587CD8BA: je 0x587cd910
        __asm _emit 0x74
        __asm _emit 0x54
        // 0x587CD8BC: mov esi, dword ptr [ebx + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x73
        __asm _emit 0x48
        // 0x587CD8BF: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CD8C5: cmp dword ptr [ecx + 0x160], 0x26
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x26
        // 0x587CD8CC: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x587CD8CF: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587CD8D2: jle 0x587cd8eb
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x587CD8D4: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD8DB: je 0x587cd8eb
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587CD8DD: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD8E3: add ecx, 0x980
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x80
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD8E9: jmp 0x587cd8ed
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CD8EB: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587CD8ED: add edx, 0x11
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x11
        // 0x587CD8F0: push edx
        __asm _emit 0x52
        // 0x587CD8F1: lea edx, [edi + 4]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x04
        // 0x587CD8F4: mov ebp, edx
        __asm _emit 0x8B
        __asm _emit 0xEA
        // 0x587CD8F6: shl ebp, 4
        __asm _emit 0xC1
        __asm _emit 0xE5
        __asm _emit 0x04
        // 0x587CD8F9: sub ebp, edx
        __asm _emit 0x2B
        __asm _emit 0xEA
        // 0x587CD8FB: lea eax, [eax + ebp*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xA8
        // 0x587CD8FE: push eax
        __asm _emit 0x50
        // 0x587CD8FF: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587CD901: push ecx
        __asm _emit 0x51
        // 0x587CD902: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587CD906: push esi
        __asm _emit 0x56
        // 0x587CD907: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0x97
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CD90C: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587CD90E: jmp 0x587cd912
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CD910: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587CD912: mov ecx, 0x2710
        __asm _emit 0xB9
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD917: mov dword ptr [ebx + edi*4 + 0x54], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0xBB
        __asm _emit 0x54
        // 0x587CD91B: mov word ptr [esi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x26
        // 0x587CD91F: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x587CD922: mov dword ptr [esp + 0x30], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CD92A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587CD92C: je 0x587cd934
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587CD92E: push esi
        __asm _emit 0x56
        // 0x587CD92F: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x56
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CD934: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x587CD937: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587CD939: je 0x587cd941
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587CD93B: push esi
        __asm _emit 0x56
        // 0x587CD93C: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0x55
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CD941: mov eax, dword ptr [ebx + edi*4 + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0xBB
        __asm _emit 0x54
        // 0x587CD945: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD94A: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587CD94E: mov eax, dword ptr [ebx + edi*4 + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0xBB
        __asm _emit 0x54
        // 0x587CD952: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587CD956: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD95B: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x587CD95E: or cx, word ptr [esp + 0x16]
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x16
        // 0x587CD963: cmp dword ptr [esp + 0x38], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x00
        // 0x587CD968: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587CD96C: je 0x587cd9a5
        __asm _emit 0x74
        __asm _emit 0x37
        // 0x587CD96E: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587CD970: jne 0x587cd983
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x587CD972: movzx eax, byte ptr [ebx + 0xd]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x43
        __asm _emit 0x0D
        // 0x587CD976: mov ecx, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x04
        // 0x587CD979: lea eax, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x40
        // 0x587CD97C: movzx eax, byte ptr [eax + ecx - 3]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x44
        __asm _emit 0x08
        __asm _emit 0xFD
        // 0x587CD981: jmp 0x587cd99b
        __asm _emit 0xEB
        __asm _emit 0x18
        // 0x587CD983: cmp edi, 1
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x01
        // 0x587CD986: jne 0x587cd999
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x587CD988: movzx eax, byte ptr [ebx + 0xd]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x43
        __asm _emit 0x0D
        // 0x587CD98C: lea edx, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x40
        // 0x587CD98F: mov eax, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x587CD992: movzx eax, byte ptr [edx + eax - 2]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0xFE
        // 0x587CD997: jmp 0x587cd99b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CD999: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587CD99B: mov ecx, dword ptr [ebx + edi*4 + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0xBB
        __asm _emit 0x54
        // 0x587CD99F: push eax
        __asm _emit 0x50
        // 0x587CD9A0: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x99
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CD9A5: inc edi
        __asm _emit 0x47
        // 0x587CD9A6: cmp edi, 2
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x587CD9A9: jne 0x587cd890
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE1
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CD9AF: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587CD9B3: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD9BA: pop ecx
        __asm _emit 0x59
        // 0x587CD9BB: pop edi
        __asm _emit 0x5F
        // 0x587CD9BC: pop esi
        __asm _emit 0x5E
        // 0x587CD9BD: pop ebp
        __asm _emit 0x5D
        // 0x587CD9BE: pop ebx
        __asm _emit 0x5B
        // 0x587CD9BF: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x587CD9C2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
