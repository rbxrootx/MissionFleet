// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5873C2E0 .. +0x181 bytes.
// Source symbol alias: FUN_5873c2e0.
extern "C" __declspec(naked) void FUN_5873c2e0() {
    __asm {
        // 0x5873C2E0: push esi
        __asm _emit 0x56
        // 0x5873C2E1: push edi
        __asm _emit 0x57
        // 0x5873C2E2: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5873C2E6: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5873C2E8: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x5873C2EB: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x5873C2EE: push edi
        __asm _emit 0x57
        // 0x5873C2EF: push eax
        __asm _emit 0x50
        // 0x5873C2F0: push esi
        __asm _emit 0x56
        // 0x5873C2F1: call 0x588e04f0
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0x41
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5873C2F6: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x5873C2F9: mov edx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x7C
        // 0x5873C2FC: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5873C2FF: shl edx, 4
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x04
        // 0x5873C302: push ecx
        __asm _emit 0x51
        // 0x5873C303: lea ecx, [edx + eax + 0x138c]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x02
        __asm _emit 0x8C
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C30A: call 0x5873bcf0
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873C30F: cmp dword ptr [esi + 0x474], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C316: je 0x5873c35a
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x5873C318: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x5873C31B: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x5873C31E: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5873C320: shl edx, 4
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x04
        // 0x5873C323: mov dword ptr [esi + 0x474], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C32D: cmp dword ptr [edx + ecx + 0x1398], 0
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x0A
        __asm _emit 0x98
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C335: je 0x5873c35a
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x5873C337: add eax, 0x139
        __asm _emit 0x05
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C33C: shl eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x04
        // 0x5873C33F: mov eax, dword ptr [eax + ecx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x08
        // 0x5873C342: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5873C345: mov ecx, dword ptr [eax + 0x504]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C34B: or word ptr [ecx + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5873C350: mov dword ptr [eax + 0x474], 1
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C35A: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873C360: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x5873C363: cmp eax, dword ptr [esi + 0x74]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5873C366: jne 0x5873c45c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C36C: mov edx, dword ptr [eax + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C372: mov al, byte ptr [edx + 4]
        __asm _emit 0x8A
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5873C375: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x5873C377: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5873C379: je 0x5873c3d1
        __asm _emit 0x74
        __asm _emit 0x56
        // 0x5873C37B: cmp al, 9
        __asm _emit 0x3C
        __asm _emit 0x09
        // 0x5873C37D: jne 0x5873c3a8
        __asm _emit 0x75
        __asm _emit 0x29
        // 0x5873C37F: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x5873C382: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873C388: push ecx
        __asm _emit 0x51
        // 0x5873C389: mov ecx, dword ptr [edx + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C38F: call 0x588626b0
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x63
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5873C394: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x5873C397: pop edi
        __asm _emit 0x5F
        // 0x5873C398: pop esi
        __asm _emit 0x5E
        // 0x5873C399: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5873C39D: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873C3A3: jmp 0x587eadd0
        __asm _emit 0xE9
        __asm _emit 0x28
        __asm _emit 0xEA
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5873C3A8: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x5873C3AB: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873C3B1: mov ecx, dword ptr [ecx + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C3B7: push eax
        __asm _emit 0x50
        // 0x5873C3B8: call 0x58859cc0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0xD9
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x5873C3BD: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x5873C3C0: pop edi
        __asm _emit 0x5F
        // 0x5873C3C1: pop esi
        __asm _emit 0x5E
        // 0x5873C3C2: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5873C3C6: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873C3CC: jmp 0x587eadd0
        __asm _emit 0xE9
        __asm _emit 0xFF
        __asm _emit 0xE9
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5873C3D1: cmp al, 9
        __asm _emit 0x3C
        __asm _emit 0x09
        // 0x5873C3D3: jne 0x5873c3ec
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x5873C3D5: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x5873C3D8: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873C3DE: push ecx
        __asm _emit 0x51
        // 0x5873C3DF: mov ecx, dword ptr [edx + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C3E5: call 0x588627c0
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x63
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5873C3EA: jmp 0x5873c401
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x5873C3EC: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x5873C3EF: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873C3F5: mov ecx, dword ptr [ecx + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C3FB: push eax
        __asm _emit 0x50
        // 0x5873C3FC: call 0x58859bb0
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0xD7
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x5873C401: cmp word ptr [esi + 0x2d6], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xD6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C409: je 0x5873c448
        __asm _emit 0x74
        __asm _emit 0x3D
        // 0x5873C40B: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873C411: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5873C414: mov ecx, dword ptr [eax + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C41A: mov dl, byte ptr [ecx + 4]
        __asm _emit 0x8A
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5873C41D: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873C422: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x5873C425: cmp dl, 9
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x09
        // 0x5873C428: jne 0x5873c432
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5873C42A: mov ecx, dword ptr [eax + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C430: jmp 0x5873c438
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x5873C432: mov ecx, dword ptr [eax + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C438: movzx eax, word ptr [esi + 0x2cc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C43F: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5873C441: mov edx, dword ptr [edx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x30
        // 0x5873C444: dec eax
        __asm _emit 0x48
        // 0x5873C445: push eax
        __asm _emit 0x50
        // 0x5873C446: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5873C448: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x5873C44B: pop edi
        __asm _emit 0x5F
        // 0x5873C44C: pop esi
        __asm _emit 0x5E
        // 0x5873C44D: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5873C451: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873C457: jmp 0x587eadd0
        __asm _emit 0xE9
        __asm _emit 0x74
        __asm _emit 0xE9
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5873C45C: pop edi
        __asm _emit 0x5F
        // 0x5873C45D: pop esi
        __asm _emit 0x5E
        // 0x5873C45E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
