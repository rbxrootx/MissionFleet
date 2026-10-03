// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588AC750 .. +0x2EF bytes.
extern "C" __declspec(naked) void FUN_588ac750() {
    __asm {
        // 0x588AC750: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588AC752: push 0x58987e69
        __asm _emit 0x68
        __asm _emit 0x69
        __asm _emit 0x7E
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588AC757: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC75D: push eax
        __asm _emit 0x50
        // 0x588AC75E: push ecx
        __asm _emit 0x51
        // 0x588AC75F: push ebx
        __asm _emit 0x53
        // 0x588AC760: push ebp
        __asm _emit 0x55
        // 0x588AC761: push esi
        __asm _emit 0x56
        // 0x588AC762: push edi
        __asm _emit 0x57
        // 0x588AC763: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588AC768: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588AC76A: push eax
        __asm _emit 0x50
        // 0x588AC76B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588AC76F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC775: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588AC777: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588AC77B: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588AC77F: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588AC783: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588AC787: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588AC78B: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588AC78F: push eax
        __asm _emit 0x50
        // 0x588AC790: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588AC794: push ecx
        __asm _emit 0x51
        // 0x588AC795: push edx
        __asm _emit 0x52
        // 0x588AC796: push ebp
        __asm _emit 0x55
        // 0x588AC797: push ebx
        __asm _emit 0x53
        // 0x588AC798: push eax
        __asm _emit 0x50
        // 0x588AC799: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588AC79B: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x6A
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AC7A0: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588AC7A6: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588AC7AB: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588AC7AD: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x588AC7B0: mov dword ptr [esi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x54
        // 0x588AC7B3: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC7BA: mov dword ptr [esi + 0x5c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x5C
        // 0x588AC7BD: mov ecx, 0xdfff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xDF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC7C2: mov dword ptr [esi], 0x589a07a4
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xA4
        __asm _emit 0x07
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588AC7C8: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588AC7CC: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588AC7CE: mov dword ptr [esp + 0x24], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588AC7D2: mov dword ptr [esi + 0x68], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x68
        // 0x588AC7D5: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588AC7DA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588AC7DD: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588AC7E1: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588AC7E6: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588AC7E8: je 0x588ac823
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x588AC7EA: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AC7F0: cmp dword ptr [ecx + 0x164], 0x6c
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x6C
        // 0x588AC7F7: jle 0x588ac80f
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588AC7F9: cmp dword ptr [ecx + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC7FF: je 0x588ac80f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588AC801: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC807: mov ecx, dword ptr [edx + 0x1b0]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xB0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC80D: jmp 0x588ac811
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AC80F: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588AC811: push 0x320
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC816: push ebp
        __asm _emit 0x55
        // 0x588AC817: push ebx
        __asm _emit 0x53
        // 0x588AC818: push ecx
        __asm _emit 0x51
        // 0x588AC819: push esi
        __asm _emit 0x56
        // 0x588AC81A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588AC81C: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x54
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588AC821: jmp 0x588ac825
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AC823: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588AC825: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC82A: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588AC82F: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588AC832: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x04
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588AC837: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588AC83A: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588AC83E: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x588AC843: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588AC845: je 0x588ac877
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x588AC847: push 0x646464
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x588AC84C: push edi
        __asm _emit 0x57
        // 0x588AC84D: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588AC852: lea ecx, [ebp + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x3C
        // 0x588AC855: push ecx
        __asm _emit 0x51
        // 0x588AC856: lea edx, [ebx + 0xdc]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC85C: push edx
        __asm _emit 0x52
        // 0x588AC85D: lea ecx, [ebp + 0x21]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x21
        // 0x588AC860: push ecx
        __asm _emit 0x51
        // 0x588AC861: mov ecx, dword ptr [0x58a24548]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x48
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AC867: lea edx, [ebx + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x3C
        // 0x588AC86A: push edx
        __asm _emit 0x52
        // 0x588AC86B: push ecx
        __asm _emit 0x51
        // 0x588AC86C: push edi
        __asm _emit 0x57
        // 0x588AC86D: push esi
        __asm _emit 0x56
        // 0x588AC86E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588AC870: call 0x58761090
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x48
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588AC875: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588AC877: mov dword ptr [esi + 0x6c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x6C
        // 0x588AC87A: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x588AC87D: mov edx, 0x3e8
        __asm _emit 0xBA
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC882: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x588AC887: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x588AC88B: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588AC88D: je 0x588ac895
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588AC88F: push edi
        __asm _emit 0x57
        // 0x588AC890: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AC895: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x588AC898: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588AC89A: je 0x588ac8a2
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588AC89C: push edi
        __asm _emit 0x57
        // 0x588AC89D: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AC8A2: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588AC8A5: push 0x10
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x588AC8A7: call 0x58748e40
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0xC5
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588AC8AC: push 0xd4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC8B1: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588AC8B6: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588AC8B9: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588AC8BD: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588AC8BF: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x588AC8C4: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588AC8C6: je 0x588ac8e3
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x588AC8C8: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC8CD: add ebp, 0x1e
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x1E
        // 0x588AC8D0: push ebp
        __asm _emit 0x55
        // 0x588AC8D1: add ebx, 0xc4
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC8D7: push ebx
        __asm _emit 0x53
        // 0x588AC8D8: push edi
        __asm _emit 0x57
        // 0x588AC8D9: push esi
        __asm _emit 0x56
        // 0x588AC8DA: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588AC8DC: call 0x58794600
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0x7D
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588AC8E1: jmp 0x588ac8e5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AC8E3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588AC8E5: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588AC8E8: mov ecx, dword ptr [0x58a246d8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AC8EE: cmp dword ptr [ecx + 0x170], 0x16
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x16
        // 0x588AC8F5: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x588AC8FA: jle 0x588ac90f
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588AC8FC: cmp dword ptr [ecx + 0x194], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC902: je 0x588ac90f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588AC904: mov ecx, dword ptr [ecx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC90A: mov edx, dword ptr [ecx + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x58
        // 0x588AC90D: jmp 0x588ac911
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AC90F: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588AC911: mov ecx, dword ptr [0x58a246f0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AC917: cmp dword ptr [ecx + 0x170], 2
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x588AC91E: jle 0x588ac933
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588AC920: cmp dword ptr [ecx + 0x194], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC926: je 0x588ac933
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588AC928: mov ecx, dword ptr [ecx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC92E: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x08
        // 0x588AC931: jmp 0x588ac935
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AC933: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588AC935: push edx
        __asm _emit 0x52
        // 0x588AC936: push ecx
        __asm _emit 0x51
        // 0x588AC937: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588AC939: call 0x587941a0
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0x78
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588AC93E: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588AC941: call 0x587945c0
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0x7C
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588AC946: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AC94B: cmp dword ptr [eax + 0x160], 0x8c
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC955: jle 0x588ac96c
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x588AC957: cmp dword ptr [eax + 0x190], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC95D: je 0x588ac96c
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x588AC95F: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC965: add eax, 0x2300
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC96A: jmp 0x588ac96e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AC96C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588AC96E: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588AC971: push edi
        __asm _emit 0x57
        // 0x588AC972: push edi
        __asm _emit 0x57
        // 0x588AC973: push eax
        __asm _emit 0x50
        // 0x588AC974: call 0x587941e0
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x78
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588AC979: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AC97E: cmp dword ptr [eax + 0x160], 0x8d
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x8D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC988: jle 0x588ac99f
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x588AC98A: cmp dword ptr [eax + 0x190], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC990: je 0x588ac99f
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x588AC992: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC998: add eax, 0x2340
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC99D: jmp 0x588ac9a1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AC99F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588AC9A1: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588AC9A4: push edi
        __asm _emit 0x57
        // 0x588AC9A5: push edi
        __asm _emit 0x57
        // 0x588AC9A6: push eax
        __asm _emit 0x50
        // 0x588AC9A7: call 0x587940d0
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0x77
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588AC9AC: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AC9B1: cmp dword ptr [eax + 0x160], 0x8e
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC9BB: jle 0x588ac9d2
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x588AC9BD: cmp dword ptr [eax + 0x190], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC9C3: je 0x588ac9d2
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x588AC9C5: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC9CB: add eax, 0x2380
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC9D0: jmp 0x588ac9d4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AC9D2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588AC9D4: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588AC9D7: push edi
        __asm _emit 0x57
        // 0x588AC9D8: push edi
        __asm _emit 0x57
        // 0x588AC9D9: push edi
        __asm _emit 0x57
        // 0x588AC9DA: push eax
        __asm _emit 0x50
        // 0x588AC9DB: call 0x58794110
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x77
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588AC9E0: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588AC9E3: push edi
        __asm _emit 0x57
        // 0x588AC9E4: push edi
        __asm _emit 0x57
        // 0x588AC9E5: push edi
        __asm _emit 0x57
        // 0x588AC9E6: call 0x58794150
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0x77
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588AC9EB: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588AC9EE: push edi
        __asm _emit 0x57
        // 0x588AC9EF: call 0x588a5380
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x89
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AC9F4: mov edx, 0xfffd
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC9F9: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588AC9FD: mov dword ptr [esi + 0x7c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x7C
        // 0x588ACA00: mov dword ptr [esi + 0x78], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x78
        // 0x588ACA03: lea eax, [esi + 0x80]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ACA09: mov ecx, 0x20
        __asm _emit 0xB9
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ACA0E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588ACA10: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ACA13: add eax, 0x100
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ACA18: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x588ACA1B: jne 0x588aca10
        __asm _emit 0x75
        __asm _emit 0xF3
        // 0x588ACA1D: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588ACA21: mov dword ptr [esi + 0x2080], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ACA27: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588ACA29: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588ACA2D: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ACA34: pop ecx
        __asm _emit 0x59
        // 0x588ACA35: pop edi
        __asm _emit 0x5F
        // 0x588ACA36: pop esi
        __asm _emit 0x5E
        // 0x588ACA37: pop ebp
        __asm _emit 0x5D
        // 0x588ACA38: pop ebx
        __asm _emit 0x5B
        // 0x588ACA39: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588ACA3C: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
