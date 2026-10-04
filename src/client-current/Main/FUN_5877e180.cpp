// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5877E180 .. +0x157 bytes.
// Source symbol alias: FUN_5877e180.
extern "C" __declspec(naked) void FUN_5877e180() {
    __asm {
        // 0x5877E180: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5877E182: push 0x5897f4c3
        __asm _emit 0x68
        __asm _emit 0xC3
        __asm _emit 0xF4
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5877E187: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877E18D: push eax
        __asm _emit 0x50
        // 0x5877E18E: push ecx
        __asm _emit 0x51
        // 0x5877E18F: push ebx
        __asm _emit 0x53
        // 0x5877E190: push ebp
        __asm _emit 0x55
        // 0x5877E191: push esi
        __asm _emit 0x56
        // 0x5877E192: push edi
        __asm _emit 0x57
        // 0x5877E193: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5877E198: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5877E19A: push eax
        __asm _emit 0x50
        // 0x5877E19B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5877E19F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877E1A5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5877E1A7: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5877E1AB: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877E1B0: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5877E1B2: cmp dword ptr [eax + 0x160], 9
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x09
        // 0x5877E1B9: jle 0x5877e1d0
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x5877E1BB: cmp dword ptr [eax + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877E1C1: je 0x5877e1d0
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x5877E1C3: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877E1C9: add eax, 0x240
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877E1CE: jmp 0x5877e1d2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5877E1D0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877E1D2: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5877E1D6: mov edi, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5877E1DA: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5877E1DE: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5877E1E2: push ecx
        __asm _emit 0x51
        // 0x5877E1E3: push edi
        __asm _emit 0x57
        // 0x5877E1E4: push ebp
        __asm _emit 0x55
        // 0x5877E1E5: push eax
        __asm _emit 0x50
        // 0x5877E1E6: push edx
        __asm _emit 0x52
        // 0x5877E1E7: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5877E1E9: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0x68
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x5877E1EE: mov eax, 0xdfff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xDF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877E1F3: mov dword ptr [esi], 0x58996990
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x90
        __asm _emit 0x69
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5877E1F9: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5877E1FD: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877E202: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5877E204: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5877E208: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0x4B
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5877E20D: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5877E211: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877E216: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5877E21A: mov edx, 0xbfff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877E21F: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5877E223: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5877E225: mov dword ptr [esi + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x5877E228: mov dword ptr [esi + 0x60], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x60
        // 0x5877E22B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0xEA
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x5877E230: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5877E233: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5877E237: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x5877E23C: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5877E23E: je 0x5877e286
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x5877E240: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877E246: cmp dword ptr [ecx + 0x164], 0xbc
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877E250: jle 0x5877e275
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x5877E252: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877E258: je 0x5877e275
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x5877E25A: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877E260: mov ecx, dword ptr [ecx + 0x2f0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xF0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877E266: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5877E268: push edi
        __asm _emit 0x57
        // 0x5877E269: push ebp
        __asm _emit 0x55
        // 0x5877E26A: push ecx
        __asm _emit 0x51
        // 0x5877E26B: push esi
        __asm _emit 0x56
        // 0x5877E26C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5877E26E: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0x39
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x5877E273: jmp 0x5877e288
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x5877E275: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5877E277: push edi
        __asm _emit 0x57
        // 0x5877E278: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5877E27A: push ebp
        __asm _emit 0x55
        // 0x5877E27B: push ecx
        __asm _emit 0x51
        // 0x5877E27C: push esi
        __asm _emit 0x56
        // 0x5877E27D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5877E27F: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0x39
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x5877E284: jmp 0x5877e288
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5877E286: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877E288: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877E28D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5877E28F: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5877E293: mov dword ptr [esi + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x5877E296: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x4A
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5877E29B: mov eax, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x5877E29E: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877E2A3: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5877E2A7: mov eax, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x5877E2AA: mov ecx, 0xbfff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877E2AF: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5877E2B3: mov dword ptr [esi + 0x64], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x64
        // 0x5877E2B6: mov dword ptr [esi + 0x68], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x68
        // 0x5877E2B9: mov dword ptr [esi + 0x6c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x6C
        // 0x5877E2BC: mov dword ptr [esi + 0x70], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x70
        // 0x5877E2BF: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5877E2C1: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5877E2C5: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877E2CC: pop ecx
        __asm _emit 0x59
        // 0x5877E2CD: pop edi
        __asm _emit 0x5F
        // 0x5877E2CE: pop esi
        __asm _emit 0x5E
        // 0x5877E2CF: pop ebp
        __asm _emit 0x5D
        // 0x5877E2D0: pop ebx
        __asm _emit 0x5B
        // 0x5877E2D1: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5877E2D4: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
