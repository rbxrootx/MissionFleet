// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587D74D0 .. +0x34B bytes.
// Source symbol alias: FUN_587d74d0.
extern "C" __declspec(naked) void FUN_587d74d0() {
    __asm {
        // 0x587D74D0: push ebx
        __asm _emit 0x53
        // 0x587D74D1: push esi
        __asm _emit 0x56
        // 0x587D74D2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587D74D4: push edi
        __asm _emit 0x57
        // 0x587D74D5: mov edi, dword ptr [esi + 0x45c]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x5C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D74DB: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D74DD: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0xB7
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D74E2: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D74E4: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0xB7
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D74E9: mov edi, dword ptr [esi + 0x460]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x60
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D74EF: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D74F1: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0xB7
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D74F6: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D74F8: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0xB7
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D74FD: mov edi, dword ptr [esi + 0x464]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7503: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D7505: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0xB7
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D750A: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D750C: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0xB7
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D7511: mov edi, dword ptr [esi + 0x468]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7517: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D7519: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0xB7
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D751E: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D7520: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0xB7
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D7525: mov edi, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D752B: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D752D: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0xB6
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D7532: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D7534: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0xB7
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D7539: mov edi, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D753F: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D7541: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0xB6
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D7546: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D7548: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0xB7
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D754D: mov edi, dword ptr [esi + 0x348]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7553: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D7555: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0xB6
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D755A: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D755C: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D7561: mov edi, dword ptr [esi + 0x34c]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7567: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D7569: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0xB6
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D756E: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D7570: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0xB6
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D7575: mov edi, dword ptr [esi + 0x47c]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D757B: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D757D: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0xB6
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D7582: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D7584: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0xB6
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D7589: mov edi, dword ptr [esi + 0x480]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D758F: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D7591: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0xB6
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D7596: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D7598: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0xB6
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D759D: mov edi, dword ptr [esi + 0xd84]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x84
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D75A3: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D75A5: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0xB6
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D75AA: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D75AC: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0xB6
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D75B1: mov edi, dword ptr [esi + 0xd88]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x88
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D75B7: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D75B9: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0xB6
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D75BE: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D75C0: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0xB6
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D75C5: mov edi, dword ptr [esi + 0xd8c]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x8C
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D75CB: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D75CD: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0xB6
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D75D2: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D75D4: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0xB6
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D75D9: mov edi, dword ptr [esi + 0xd90]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D75DF: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D75E1: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0xB6
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D75E6: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D75E8: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0xB6
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D75ED: mov edi, dword ptr [esi + 0xd94]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x94
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D75F3: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D75F5: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0xB6
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D75FA: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D75FC: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0xB6
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D7601: mov edi, dword ptr [esi + 0xd98]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7607: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D7609: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0xB6
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D760E: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D7610: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0xB6
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D7615: mov edi, dword ptr [esi + 0xd9c]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D761B: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D761D: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0xB5
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D7622: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D7624: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0xB6
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D7629: mov edi, dword ptr [esi + 0xda4]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D762F: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D7631: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0xB5
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D7636: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D7638: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0xB6
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D763D: mov edi, dword ptr [esi + 0xda0]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xA0
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7643: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D7645: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0xB5
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D764A: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D764C: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0xB6
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D7651: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7657: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587D7659: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D765B: je 0x587d766b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D765D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D765F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D7661: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D7663: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D7665: mov dword ptr [esi + 0xa4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D766B: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7671: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D7673: je 0x587d7683
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D7675: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D7677: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D7679: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D767B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D767D: mov dword ptr [esi + 0xac], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7683: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7689: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D768B: je 0x587d769b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D768D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D768F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D7691: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D7693: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D7695: mov dword ptr [esi + 0xb0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D769B: mov ecx, dword ptr [esi + 0x348]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D76A1: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D76A3: je 0x587d76b3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D76A5: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D76A7: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D76A9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D76AB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D76AD: mov dword ptr [esi + 0x348], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D76B3: mov ecx, dword ptr [esi + 0x34c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D76B9: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D76BB: je 0x587d76cb
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D76BD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D76BF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D76C1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D76C3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D76C5: mov dword ptr [esi + 0x34c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D76CB: mov ecx, dword ptr [esi + 0x47c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D76D1: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D76D3: je 0x587d76e3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D76D5: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D76D7: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D76D9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D76DB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D76DD: mov dword ptr [esi + 0x47c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D76E3: mov ecx, dword ptr [esi + 0x480]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D76E9: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D76EB: je 0x587d76fb
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D76ED: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D76EF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D76F1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D76F3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D76F5: mov dword ptr [esi + 0x480], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D76FB: mov ecx, dword ptr [esi + 0xd84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7701: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D7703: je 0x587d7713
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D7705: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D7707: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D7709: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D770B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D770D: mov dword ptr [esi + 0xd84], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x84
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7713: mov ecx, dword ptr [esi + 0xd88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7719: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D771B: je 0x587d772b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D771D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D771F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D7721: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D7723: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D7725: mov dword ptr [esi + 0xd88], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x88
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D772B: mov ecx, dword ptr [esi + 0xd8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7731: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D7733: je 0x587d7743
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D7735: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D7737: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D7739: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D773B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D773D: mov dword ptr [esi + 0xd8c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x8C
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7743: mov ecx, dword ptr [esi + 0xd90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7749: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D774B: je 0x587d775b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D774D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D774F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D7751: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D7753: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D7755: mov dword ptr [esi + 0xd90], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D775B: mov ecx, dword ptr [esi + 0xd94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7761: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D7763: je 0x587d7773
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D7765: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D7767: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D7769: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D776B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D776D: mov dword ptr [esi + 0xd94], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x94
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7773: mov ecx, dword ptr [esi + 0xd98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7779: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D777B: je 0x587d778b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D777D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D777F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D7781: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D7783: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D7785: mov dword ptr [esi + 0xd98], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D778B: mov ecx, dword ptr [esi + 0xd9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7791: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D7793: je 0x587d77a3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D7795: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D7797: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D7799: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D779B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D779D: mov dword ptr [esi + 0xd9c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D77A3: mov ecx, dword ptr [esi + 0xda4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D77A9: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D77AB: je 0x587d77bb
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D77AD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D77AF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D77B1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D77B3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D77B5: mov dword ptr [esi + 0xda4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D77BB: mov ecx, dword ptr [esi + 0xda0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D77C1: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D77C3: je 0x587d77d3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D77C5: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D77C7: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D77C9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D77CB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D77CD: mov dword ptr [esi + 0xda0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA0
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D77D3: mov ebx, 0x58a238c8
        __asm _emit 0xBB
        __asm _emit 0xC8
        __asm _emit 0x38
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D77D8: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x587D77DA: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D77DC: je 0x587d77e8
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587D77DE: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D77E0: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D77E2: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D77E4: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D77E6: mov dword ptr [ebx], edi
        __asm _emit 0x89
        __asm _emit 0x3B
        // 0x587D77E8: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x587D77EB: cmp ebx, 0x58a240c8
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0xC8
        __asm _emit 0x40
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D77F1: jl 0x587d77d8
        __asm _emit 0x7C
        __asm _emit 0xE5
        // 0x587D77F3: mov eax, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D77F9: mov dword ptr [eax + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x54
        // 0x587D77FC: mov ecx, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7802: mov dword ptr [ecx + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x54
        // 0x587D7805: mov edx, dword ptr [esi + 0x350]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D780B: mov dword ptr [edx + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x54
        // 0x587D780E: mov eax, dword ptr [esi + 0x354]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7814: mov dword ptr [eax + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x54
        // 0x587D7817: pop edi
        __asm _emit 0x5F
        // 0x587D7818: pop esi
        __asm _emit 0x5E
        // 0x587D7819: pop ebx
        __asm _emit 0x5B
        // 0x587D781A: ret
        __asm _emit 0xC3
    }
}
