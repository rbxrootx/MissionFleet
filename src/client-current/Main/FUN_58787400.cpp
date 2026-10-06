// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1893 bytes in 3 discontiguous ranges.
// Source symbol alias: FUN_58787400.

// Ghidra body range 0x58787400..0x58787819; 1049 mapped bytes.
extern "C" __declspec(naked) void FUN_58787400_segment_00() {
    __asm {
        // 0x58787400: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58787402: push 0x5897f9f7
        __asm _emit 0x68
        __asm _emit 0xF7
        __asm _emit 0xF9
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58787407: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878740D: push eax
        __asm _emit 0x50
        // 0x5878740E: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x58787411: push ebx
        __asm _emit 0x53
        // 0x58787412: push ebp
        __asm _emit 0x55
        // 0x58787413: push esi
        __asm _emit 0x56
        // 0x58787414: push edi
        __asm _emit 0x57
        // 0x58787415: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5878741A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5878741C: push eax
        __asm _emit 0x50
        // 0x5878741D: lea eax, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58787421: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787427: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58787429: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878742E: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x58
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58787433: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58787436: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5878743A: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5878743C: mov dword ptr [esp + 0x2c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58787440: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58787442: je 0x58787455
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x58787444: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58787446: push edi
        __asm _emit 0x57
        // 0x58787447: push 0x58996b10
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x6B
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5878744C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5878744E: call 0x588f3d70
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0xC9
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58787453: jmp 0x58787457
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58787455: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58787457: or esi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCE
        __asm _emit 0xFF
        // 0x5878745A: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878745F: mov dword ptr [esp + 0x30], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58787463: mov dword ptr [ebx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x58787466: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0x57
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x5878746B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5878746E: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58787472: mov dword ptr [esp + 0x2c], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878747A: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5878747C: je 0x5878748f
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5878747E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58787480: push edi
        __asm _emit 0x57
        // 0x58787481: push 0x58996afc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x6A
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58787486: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58787488: call 0x588f3d70
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0xC8
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5878748D: jmp 0x58787491
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5878748F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58787491: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787496: mov dword ptr [esp + 0x30], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5878749A: mov dword ptr [ebx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x5878749D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0x57
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x587874A2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587874A5: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587874A9: mov dword ptr [esp + 0x2c], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587874B1: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587874B3: je 0x587874c6
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587874B5: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587874B7: push edi
        __asm _emit 0x57
        // 0x587874B8: push 0x58996ae8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587874BD: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587874BF: call 0x588f3d70
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0xC8
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x587874C4: jmp 0x587874c8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587874C6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587874C8: mov dword ptr [ebx + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x10
        // 0x587874CB: mov eax, dword ptr [0x58a245a8]
        __asm _emit 0xA1
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587874D0: cmp word ptr [eax + 0x204], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        // 0x587874D8: mov dword ptr [esp + 0x2c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587874DC: jne 0x58787a1f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x3D
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587874E2: push 0x18
        __asm _emit 0x6A
        __asm _emit 0x18
        // 0x587874E4: mov dword ptr [ebx + 0x92c], esi
        __asm _emit 0x89
        __asm _emit 0xB3
        __asm _emit 0x2C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587874EA: mov dword ptr [ebx + 0x918], edi
        __asm _emit 0x89
        __asm _emit 0xBB
        __asm _emit 0x18
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587874F0: mov dword ptr [ebx + 0x91c], edi
        __asm _emit 0x89
        __asm _emit 0xBB
        __asm _emit 0x1C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587874F6: mov dword ptr [ebx + 0x920], edi
        __asm _emit 0x89
        __asm _emit 0xBB
        __asm _emit 0x20
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587874FC: mov dword ptr [ebx + 0x924], edi
        __asm _emit 0x89
        __asm _emit 0xBB
        __asm _emit 0x24
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787502: mov dword ptr [ebx + 0x928], edi
        __asm _emit 0x89
        __asm _emit 0xBB
        __asm _emit 0x28
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787508: mov byte ptr [ebx + 0x88c], 6
        __asm _emit 0xC6
        __asm _emit 0x83
        __asm _emit 0x8C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        // 0x5878750F: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0xA0
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x58787514: mov dword ptr [ebx + 0x910], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878751A: mov eax, 0x328
        __asm _emit 0xB8
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878751F: lea esi, [ebx + 0x890]
        __asm _emit 0x8D
        __asm _emit 0xB3
        __asm _emit 0x90
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787525: mov dword ptr [esi], 0x12c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878752B: mov dword ptr [ebx + 0x894], 0xba3
        __asm _emit 0xC7
        __asm _emit 0x83
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xA3
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787535: mov dword ptr [ebx + 0x898], 0x10be
        __asm _emit 0xC7
        __asm _emit 0x83
        __asm _emit 0x98
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xBE
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878753F: mov dword ptr [ebx + 0x89c], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x9C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787545: mov dword ptr [ebx + 0x8a0], 0x20bd
        __asm _emit 0xC7
        __asm _emit 0x83
        __asm _emit 0xA0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xBD
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878754F: mov dword ptr [ebx + 0x8a4], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0xA4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787555: mov dword ptr [ebx + 0x8a8], 0x10d6
        __asm _emit 0xC7
        __asm _emit 0x83
        __asm _emit 0xA8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xD6
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878755F: mov dword ptr [ebx + 0x8ac], 0x160a
        __asm _emit 0xC7
        __asm _emit 0x83
        __asm _emit 0xAC
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0A
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787569: mov dword ptr [ebx + 0x8b0], 0x205a
        __asm _emit 0xC7
        __asm _emit 0x83
        __asm _emit 0xB0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x5A
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787573: mov dword ptr [ebx + 0x8b4], 0x1600
        __asm _emit 0xC7
        __asm _emit 0x83
        __asm _emit 0xB4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878757D: mov dword ptr [ebx + 0x8b8], 0x2cbf
        __asm _emit 0xC7
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xBF
        __asm _emit 0x2C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787587: mov dword ptr [ebx + 0x8bc], 0xc12
        __asm _emit 0xC7
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x12
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787591: mov eax, dword ptr [0x58a24640]
        __asm _emit 0xA1
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58787596: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58787599: cmp dword ptr [eax + 0x164], 0xbf
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587875A3: jle 0x587875bb
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x587875A5: cmp dword ptr [eax + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587875AB: je 0x587875bb
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587875AD: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587875B3: mov eax, dword ptr [ecx + 0x2fc]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587875B9: jmp 0x587875bd
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587875BB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587875BD: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587875C3: mov ecx, dword ptr [edx + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587875C9: mov ecx, dword ptr [ecx + 0x5a0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xA0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587875CF: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587875D2: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587875D4: je 0x587875fe
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587875D6: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587875D9: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587875DC: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x587875DF: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x587875E2: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587875E5: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587875E7: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587875EA: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587875EC: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587875EF: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587875F2: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587875F5: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587875F8: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587875FB: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587875FE: mov eax, dword ptr [0x58a24640]
        __asm _emit 0xA1
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58787603: mov edx, 0xbb
        __asm _emit 0xBA
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787608: cmp dword ptr [eax + 0x164], edx
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878760E: jle 0x58787626
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58787610: cmp dword ptr [eax + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787616: je 0x58787626
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58787618: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878761E: mov eax, dword ptr [ecx + 0x2ec]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787624: jmp 0x58787628
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58787626: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58787628: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5878762E: mov ecx, dword ptr [ecx + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787634: mov ecx, dword ptr [ecx + 0x5a4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xA4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878763A: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5878763D: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5878763F: je 0x58787669
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58787641: mov ebp, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x58787644: mov dword ptr [ecx + 0xc], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x0C
        // 0x58787647: mov ebp, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x14
        // 0x5878764A: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5878764D: mov dword ptr [ecx + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x10
        // 0x58787650: mov ebp, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x28
        // 0x58787652: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58787655: mov dword ptr [ecx], ebp
        __asm _emit 0x89
        __asm _emit 0x29
        // 0x58787657: mov ebp, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x04
        // 0x5878765A: mov dword ptr [ecx + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x04
        // 0x5878765D: mov ebp, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x08
        // 0x58787660: mov dword ptr [ecx + 8], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x08
        // 0x58787663: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58787666: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58787669: mov eax, dword ptr [0x58a24640]
        __asm _emit 0xA1
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5878766E: cmp dword ptr [eax + 0x164], edx
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787674: jle 0x5878768c
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58787676: cmp dword ptr [eax + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878767C: je 0x5878768c
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5878767E: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787684: mov eax, dword ptr [ecx + 0x2ec]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878768A: jmp 0x5878768e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5878768C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5878768E: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58787694: mov ecx, dword ptr [ecx + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878769A: mov ecx, dword ptr [ecx + 0x5a8]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xA8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587876A0: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587876A3: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587876A5: je 0x587876cf
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587876A7: mov ebp, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x587876AA: mov dword ptr [ecx + 0xc], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x0C
        // 0x587876AD: mov ebp, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x14
        // 0x587876B0: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x587876B3: mov dword ptr [ecx + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x10
        // 0x587876B6: mov ebp, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x28
        // 0x587876B8: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587876BB: mov dword ptr [ecx], ebp
        __asm _emit 0x89
        __asm _emit 0x29
        // 0x587876BD: mov ebp, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x04
        // 0x587876C0: mov dword ptr [ecx + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x04
        // 0x587876C3: mov ebp, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x08
        // 0x587876C6: mov dword ptr [ecx + 8], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x08
        // 0x587876C9: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587876CC: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587876CF: mov eax, dword ptr [0x58a24640]
        __asm _emit 0xA1
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587876D4: cmp dword ptr [eax + 0x164], edx
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587876DA: jle 0x587876f2
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x587876DC: cmp dword ptr [eax + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587876E2: je 0x587876f2
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587876E4: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587876EA: mov eax, dword ptr [ecx + 0x2ec]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587876F0: jmp 0x587876f4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587876F2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587876F4: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587876FA: mov ecx, dword ptr [ecx + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787700: mov ecx, dword ptr [ecx + 0x5ac]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xAC
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787706: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58787709: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5878770B: je 0x58787735
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5878770D: mov ebp, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x58787710: mov dword ptr [ecx + 0xc], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x0C
        // 0x58787713: mov ebp, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x14
        // 0x58787716: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58787719: mov dword ptr [ecx + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x10
        // 0x5878771C: mov ebp, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x28
        // 0x5878771E: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58787721: mov dword ptr [ecx], ebp
        __asm _emit 0x89
        __asm _emit 0x29
        // 0x58787723: mov ebp, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x04
        // 0x58787726: mov dword ptr [ecx + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x04
        // 0x58787729: mov ebp, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x08
        // 0x5878772C: mov dword ptr [ecx + 8], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x08
        // 0x5878772F: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58787732: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58787735: mov eax, dword ptr [0x58a24640]
        __asm _emit 0xA1
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5878773A: cmp dword ptr [eax + 0x164], edx
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787740: jle 0x58787758
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58787742: cmp dword ptr [eax + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787748: je 0x58787758
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5878774A: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787750: mov eax, dword ptr [ecx + 0x2ec]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787756: jmp 0x5878775a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58787758: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5878775A: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58787760: mov ecx, dword ptr [edx + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787766: mov ecx, dword ptr [ecx + 0x5b0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878776C: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5878776F: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58787771: je 0x5878779b
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58787773: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58787776: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58787779: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5878777C: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5878777F: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58787782: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58787784: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58787787: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58787789: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5878778C: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5878778F: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58787792: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58787795: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58787798: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5878779B: mov eax, dword ptr [0x58a24640]
        __asm _emit 0xA1
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587877A0: cmp dword ptr [eax + 0x164], 0xbe
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587877AA: jle 0x587877c2
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x587877AC: cmp dword ptr [eax + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587877B2: je 0x587877c2
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587877B4: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587877BA: mov eax, dword ptr [ecx + 0x2f8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587877C0: jmp 0x587877c4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587877C2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587877C4: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587877CA: mov ecx, dword ptr [edx + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587877D0: mov ecx, dword ptr [ecx + 0x5b4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xB4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587877D6: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587877D9: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587877DB: je 0x58787805
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587877DD: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587877E0: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587877E3: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x587877E6: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x587877E9: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587877EC: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587877EE: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587877F1: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587877F3: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587877F6: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587877F9: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587877FC: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587877FF: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58787802: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58787805: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58787807: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5878780B: mov dword ptr [esp + 0x1c], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58787813: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58787817: jmp 0x5878782a
        __asm _emit 0xEB
        __asm _emit 0x11
    }
}

// Ghidra body range 0x58787820..0x58787AAF; 655 mapped bytes.
extern "C" __declspec(naked) void FUN_58787400_segment_01() {
    __asm {
        // 0x58787820: mov ebp, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58787824: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58787828: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5878782A: push 0xdc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878782F: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0x54
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58787834: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58787837: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5878783B: mov dword ptr [esp + 0x2c], 3
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787843: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58787845: je 0x58787864
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x58787847: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5878784B: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x5878784E: push ecx
        __asm _emit 0x51
        // 0x5878784F: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58787851: push edx
        __asm _emit 0x52
        // 0x58787852: mov edx, dword ptr [ebx + 0x914]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0x14
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787858: push ecx
        __asm _emit 0x51
        // 0x58787859: push edx
        __asm _emit 0x52
        // 0x5878785A: push ebx
        __asm _emit 0x53
        // 0x5878785B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5878785D: call 0x587808a0
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0x90
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58787862: jmp 0x58787866
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58787864: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58787866: mov ecx, dword ptr [ebx + 0x910]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878786C: mov dword ptr [ecx + ebp*4], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0xA9
        // 0x5878786F: mov edx, dword ptr [ebx + 0x910]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787875: mov esi, dword ptr [edx + ebp*4]
        __asm _emit 0x8B
        __asm _emit 0x34
        __asm _emit 0xAA
        // 0x58787878: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x5878787B: mov eax, 0x1f3
        __asm _emit 0xB8
        __asm _emit 0xF3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787880: mov dword ptr [esp + 0x2c], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58787888: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        // 0x5878788C: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5878788E: je 0x58787896
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58787890: push esi
        __asm _emit 0x56
        // 0x58787891: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0xB6
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58787896: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x58787899: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5878789B: je 0x587878a3
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5878789D: push esi
        __asm _emit 0x56
        // 0x5878789E: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0xB6
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587878A3: mov eax, 0xcccccccd
        __asm _emit 0xB8
        __asm _emit 0xCD
        __asm _emit 0xCC
        __asm _emit 0xCC
        __asm _emit 0xCC
        // 0x587878A8: mul ebp
        __asm _emit 0xF7
        __asm _emit 0xE5
        // 0x587878AA: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587878AE: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587878B1: shr edx, 2
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x02
        // 0x587878B4: lea ecx, [edx + edx*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x92
        // 0x587878B7: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587878BD: sub ebp, ecx
        __asm _emit 0x2B
        __asm _emit 0xE9
        // 0x587878BF: mov ecx, dword ptr [edx + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587878C5: mov esi, ebp
        __asm _emit 0x8B
        __asm _emit 0xF5
        // 0x587878C7: neg esi
        __asm _emit 0xF7
        __asm _emit 0xDE
        // 0x587878C9: sbb esi, esi
        __asm _emit 0x1B
        __asm _emit 0xF6
        // 0x587878CB: cdq
        __asm _emit 0x99
        // 0x587878CC: and esi, 0xfffffff1
        __asm _emit 0x83
        __asm _emit 0xE6
        __asm _emit 0xF1
        // 0x587878CF: add esi, 0xf
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x0F
        // 0x587878D2: mov edi, ebp
        __asm _emit 0x8B
        __asm _emit 0xFD
        // 0x587878D4: neg edi
        __asm _emit 0xF7
        __asm _emit 0xDF
        // 0x587878D6: sbb edi, edi
        __asm _emit 0x1B
        __asm _emit 0xFF
        // 0x587878D8: and edx, 0x3f
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x3F
        // 0x587878DB: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587878DD: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587878E0: sar eax, 6
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x587878E3: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x587878E5: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587878E9: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587878EB: sub edx, esi
        __asm _emit 0x2B
        __asm _emit 0xD6
        // 0x587878ED: sub edx, 0xe
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x0E
        // 0x587878F0: push edx
        __asm _emit 0x52
        // 0x587878F1: cdq
        __asm _emit 0x99
        // 0x587878F2: and edx, 0x3f
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x3F
        // 0x587878F5: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587878F7: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587878FA: sar eax, 6
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x587878FD: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x587878FF: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58787903: mov ecx, dword ptr [ecx + eax*4 + 0x5a0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x81
        __asm _emit 0xA0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878790A: and edi, 0xfffffffd
        __asm _emit 0x83
        __asm _emit 0xE7
        __asm _emit 0xFD
        // 0x5878790D: add edi, 3
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x03
        // 0x58787910: sub edx, edi
        __asm _emit 0x2B
        __asm _emit 0xD7
        // 0x58787912: sub edx, 8
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x58787915: push edx
        __asm _emit 0x52
        // 0x58787916: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0xB9
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x5878791B: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5878791F: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58787922: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58787928: mov ecx, dword ptr [ecx + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878792E: cdq
        __asm _emit 0x99
        // 0x5878792F: and edx, 0x3f
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x3F
        // 0x58787932: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58787934: sar eax, 6
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x58787937: add eax, dword ptr [ecx + 8]
        __asm _emit 0x03
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x5878793A: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x5878793C: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58787940: sub eax, 0xe
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x0E
        // 0x58787943: push eax
        __asm _emit 0x50
        // 0x58787944: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58787948: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x5878794A: cdq
        __asm _emit 0x99
        // 0x5878794B: and edx, 0x3f
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x3F
        // 0x5878794E: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58787950: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58787953: mov ecx, dword ptr [ecx + esi*4 + 0x5b8]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xB1
        __asm _emit 0xB8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878795A: sar eax, 6
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x5878795D: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x5878795F: sub edx, edi
        __asm _emit 0x2B
        __asm _emit 0xD7
        // 0x58787961: sub edx, 8
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x58787964: push edx
        __asm _emit 0x52
        // 0x58787965: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0xB9
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x5878796A: mov ecx, dword ptr [0x58a24640]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58787970: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58787972: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58787974: setne al
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC0
        // 0x58787977: add eax, 0xc3
        __asm _emit 0x05
        __asm _emit 0xC3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878797C: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787982: jle 0x5878799c
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x58787984: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58787986: jl 0x5878799c
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x58787988: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878798F: je 0x5878799c
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58787991: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787997: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x5878799A: jmp 0x5878799e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5878799C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5878799E: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587879A4: mov ecx, dword ptr [edx + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587879AA: mov ecx, dword ptr [ecx + esi*4 + 0x5b8]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xB1
        __asm _emit 0xB8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587879B1: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587879B4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587879B6: je 0x587879e0
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587879B8: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587879BB: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587879BE: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x587879C1: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x587879C4: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587879C7: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587879C9: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587879CC: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587879CE: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587879D1: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587879D4: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587879D7: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587879DA: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587879DD: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587879E0: mov ecx, dword ptr [ebx + 0x910]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587879E6: mov edx, dword ptr [ecx + esi*4]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0xB1
        // 0x587879E9: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587879ED: add dword ptr [esp + 0x14], 8
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x08
        // 0x587879F2: dec eax
        __asm _emit 0x48
        // 0x587879F3: mov dword ptr [edx + 0xc8], esi
        __asm _emit 0x89
        __asm _emit 0xB2
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587879F9: inc esi
        __asm _emit 0x46
        // 0x587879FA: cmp eax, -7
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xF9
        // 0x587879FD: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58787A01: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58787A05: jg 0x58787820
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0x15
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58787A0B: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58787A0F: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787A16: pop ecx
        __asm _emit 0x59
        // 0x58787A17: pop edi
        __asm _emit 0x5F
        // 0x58787A18: pop esi
        __asm _emit 0x5E
        // 0x58787A19: pop ebp
        __asm _emit 0x5D
        // 0x58787A1A: pop ebx
        __asm _emit 0x5B
        // 0x58787A1B: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58787A1E: ret
        __asm _emit 0xC3
        // 0x58787A1F: mov cx, word ptr [0x58a0add0]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xD0
        __asm _emit 0xAD
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58787A26: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58787A28: mov eax, 0x589baab0
        __asm _emit 0xB8
        __asm _emit 0xB0
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x58787A2D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58787A30: cmp word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x08
        // 0x58787A33: je 0x58787a56
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x58787A35: add eax, 0xe84
        __asm _emit 0x05
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787A3A: inc esi
        __asm _emit 0x46
        // 0x58787A3B: cmp eax, 0x589c2d54
        __asm _emit 0x3D
        __asm _emit 0x54
        __asm _emit 0x2D
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58787A40: jl 0x58787a30
        __asm _emit 0x7C
        __asm _emit 0xEE
        // 0x58787A42: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58787A46: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787A4D: pop ecx
        __asm _emit 0x59
        // 0x58787A4E: pop edi
        __asm _emit 0x5F
        // 0x58787A4F: pop esi
        __asm _emit 0x5E
        // 0x58787A50: pop ebp
        __asm _emit 0x5D
        // 0x58787A51: pop ebx
        __asm _emit 0x5B
        // 0x58787A52: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58787A55: ret
        __asm _emit 0xC3
        // 0x58787A56: imul esi, esi, 0xe84
        __asm _emit 0x69
        __asm _emit 0xF6
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787A5C: mov al, byte ptr [esi + 0x589bb8c8]
        __asm _emit 0x8A
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0xB8
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x58787A62: mov byte ptr [ebx + 0x88c], al
        __asm _emit 0x88
        __asm _emit 0x83
        __asm _emit 0x8C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787A68: movzx eax, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC0
        // 0x58787A6B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58787A6D: mov edx, 4
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787A72: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x58787A74: seto cl
        __asm _emit 0x0F
        __asm _emit 0x90
        __asm _emit 0xC1
        // 0x58787A77: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58787A7B: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x58787A7D: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x58787A7F: push ecx
        __asm _emit 0x51
        // 0x58787A80: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x9A
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x58787A85: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58787A88: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58787A8A: cmp byte ptr [ebx + 0x88c], 0
        __asm _emit 0x80
        __asm _emit 0xBB
        __asm _emit 0x8C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787A91: mov dword ptr [ebx + 0x910], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787A97: jbe 0x58787b59
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787A9D: lea eax, [esi + 0x589bb8d0]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0xB8
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x58787AA3: lea ebp, [ebx + 0x890]
        __asm _emit 0x8D
        __asm _emit 0xAB
        __asm _emit 0x90
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787AA9: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58787AAD: jmp 0x58787ab8
        __asm _emit 0xEB
        __asm _emit 0x09
    }
}

// Ghidra body range 0x58787AB0..0x58787B6D; 189 mapped bytes.
extern "C" __declspec(naked) void FUN_58787400_segment_02() {
    __asm {
        // 0x58787AB0: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58787AB4: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58787AB8: mov ecx, dword ptr [eax - 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0xFC
        // 0x58787ABB: mov dword ptr [ebp], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x58787ABE: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58787AC0: push 0xdc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787AC5: mov dword ptr [ebp + 4], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x04
        // 0x58787AC8: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0x51
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58787ACD: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58787AD0: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58787AD4: mov dword ptr [esp + 0x2c], 4
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787ADC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58787ADE: je 0x58787b02
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x58787AE0: movzx ecx, byte ptr [esi + edi + 0x589bb90c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8C
        __asm _emit 0x3E
        __asm _emit 0x0C
        __asm _emit 0xB9
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x58787AE8: mov edx, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x04
        // 0x58787AEB: push ecx
        __asm _emit 0x51
        // 0x58787AEC: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x58787AEF: push edx
        __asm _emit 0x52
        // 0x58787AF0: mov edx, dword ptr [ebx + 0x914]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0x14
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787AF6: push ecx
        __asm _emit 0x51
        // 0x58787AF7: push edx
        __asm _emit 0x52
        // 0x58787AF8: push ebx
        __asm _emit 0x53
        // 0x58787AF9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58787AFB: call 0x587808a0
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x8D
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58787B00: jmp 0x58787b04
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58787B02: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58787B04: mov ecx, dword ptr [ebx + 0x910]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787B0A: mov dword ptr [ecx + edi*4], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0xB9
        // 0x58787B0D: mov edx, dword ptr [ebx + 0x910]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787B13: mov esi, dword ptr [edx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x34
        __asm _emit 0xBA
        // 0x58787B16: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x58787B19: mov eax, 0x1f3
        __asm _emit 0xB8
        __asm _emit 0xF3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787B1E: mov dword ptr [esp + 0x2c], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58787B26: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        // 0x58787B2A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58787B2C: je 0x58787b34
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58787B2E: push esi
        __asm _emit 0x56
        // 0x58787B2F: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0xB4
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58787B34: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x58787B37: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58787B39: je 0x58787b41
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58787B3B: push esi
        __asm _emit 0x56
        // 0x58787B3C: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0xB3
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58787B41: movzx ecx, byte ptr [ebx + 0x88c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787B48: add dword ptr [esp + 0x1c], 8
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x08
        // 0x58787B4D: inc edi
        __asm _emit 0x47
        // 0x58787B4E: add ebp, 8
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x08
        // 0x58787B51: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x58787B53: jl 0x58787ab0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x57
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58787B59: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58787B5D: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787B64: pop ecx
        __asm _emit 0x59
        // 0x58787B65: pop edi
        __asm _emit 0x5F
        // 0x58787B66: pop esi
        __asm _emit 0x5E
        // 0x58787B67: pop ebp
        __asm _emit 0x5D
        // 0x58787B68: pop ebx
        __asm _emit 0x5B
        // 0x58787B69: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58787B6C: ret
        __asm _emit 0xC3
    }
}
