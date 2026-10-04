// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58874420 .. +0x399 bytes.
// Source symbol alias: FUN_58874420.
extern "C" __declspec(naked) void FUN_58874420() {
    __asm {
        // 0x58874420: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58874422: push 0x5898640f
        __asm _emit 0x68
        __asm _emit 0x0F
        __asm _emit 0x64
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58874427: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887442D: push eax
        __asm _emit 0x50
        // 0x5887442E: push ecx
        __asm _emit 0x51
        // 0x5887442F: push ebx
        __asm _emit 0x53
        // 0x58874430: push ebp
        __asm _emit 0x55
        // 0x58874431: push esi
        __asm _emit 0x56
        // 0x58874432: push edi
        __asm _emit 0x57
        // 0x58874433: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58874438: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5887443A: push eax
        __asm _emit 0x50
        // 0x5887443B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5887443F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58874445: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58874447: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5887444B: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5887444F: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58874453: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58874457: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5887445B: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5887445F: push eax
        __asm _emit 0x50
        // 0x58874460: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58874464: push ecx
        __asm _emit 0x51
        // 0x58874465: push edx
        __asm _emit 0x52
        // 0x58874466: push edi
        __asm _emit 0x57
        // 0x58874467: push ebx
        __asm _emit 0x53
        // 0x58874468: push eax
        __asm _emit 0x50
        // 0x58874469: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5887446B: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0xED
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58874470: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58874476: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5887447B: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5887447D: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x58874480: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x58874483: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887448A: mov dword ptr [esi + 0x5c], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x5C
        // 0x5887448D: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58874491: mov dword ptr [esi], 0x5899eeac
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xAC
        __asm _emit 0xEE
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58874497: mov dword ptr [esp + 0x38], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5887449B: mov ebx, 0x1040
        __asm _emit 0xBB
        __asm _emit 0x40
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588744A0: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588744A2: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x87
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x588744A7: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588744A9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588744AC: mov dword ptr [esp + 0x34], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588744B0: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588744B5: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588744B7: je 0x58874541
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588744BD: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588744C2: add ebp, 0x410
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588744C8: cmp dword ptr [eax + 0x164], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588744CE: jle 0x588744e8
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x588744D0: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x588744D2: jl 0x588744e8
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x588744D4: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588744DB: je 0x588744e8
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588744DD: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588744E3: mov ebp, dword ptr [ebx + ecx]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x0B
        // 0x588744E6: jmp 0x588744ea
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588744E8: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588744EA: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588744EE: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588744F2: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588744F6: push edx
        __asm _emit 0x52
        // 0x588744F7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588744F9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588744FB: push eax
        __asm _emit 0x50
        // 0x588744FC: push ecx
        __asm _emit 0x51
        // 0x588744FD: push esi
        __asm _emit 0x56
        // 0x588744FE: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58874500: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0xEC
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58874505: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5887450B: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x5887450E: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58874510: je 0x58874539
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x58874512: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x58874515: mov dword ptr [edi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x0C
        // 0x58874518: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x5887451B: mov dword ptr [edi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x5887451E: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x58874521: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x58874524: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x58874527: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5887452A: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x5887452D: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58874530: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x58874533: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58874536: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x58874539: mov ebp, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5887453D: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5887453F: jmp 0x58874543
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58874541: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58874543: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x58874545: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x58874547: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x58874549: and eax, 0x202
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887454E: add eax, 0xfffffeff
        __asm _emit 0x05
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58874553: push eax
        __asm _emit 0x50
        // 0x58874554: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58874559: mov dword ptr [esi + ebx - 0xfe0], ecx
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x1E
        __asm _emit 0x20
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58874560: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0xE7
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58874565: inc ebp
        __asm _emit 0x45
        // 0x58874566: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x58874569: mov dword ptr [esp + 0x38], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5887456D: cmp ebx, 0x1048
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0x48
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58874573: jne 0x588744a0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x27
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58874579: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887457E: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58874583: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58874586: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5887458A: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5887458E: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58874592: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x58874597: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58874599: je 0x588745cc
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x5887459B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5887459D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5887459F: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588745A4: lea ecx, [ebp + 0x54]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x54
        // 0x588745A7: push ecx
        __asm _emit 0x51
        // 0x588745A8: lea edx, [ebx + 0xc8]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588745AE: push edx
        __asm _emit 0x52
        // 0x588745AF: lea ecx, [ebp + 0x48]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x48
        // 0x588745B2: push ecx
        __asm _emit 0x51
        // 0x588745B3: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588745B9: lea edx, [ebx + 0x19]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x19
        // 0x588745BC: push edx
        __asm _emit 0x52
        // 0x588745BD: push ecx
        __asm _emit 0x51
        // 0x588745BE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588745C0: push esi
        __asm _emit 0x56
        // 0x588745C1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588745C3: call 0x58761090
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0xCA
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588745C8: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588745CA: jmp 0x588745ce
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588745CC: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588745CE: mov dx, word ptr [esp + 0x3c]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588745D3: mov dword ptr [esi + 0x68], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x68
        // 0x588745D6: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x588745D9: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x588745DE: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x588745E2: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588745E4: je 0x588745ec
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588745E6: push edi
        __asm _emit 0x57
        // 0x588745E7: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0xE9
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588745EC: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x588745EF: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588745F1: je 0x588745f9
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588745F3: push edi
        __asm _emit 0x57
        // 0x588745F4: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588745F9: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x588745FC: push 0xe
        __asm _emit 0x6A
        __asm _emit 0x0E
        // 0x588745FE: call 0x58748e40
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0x48
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x58874603: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x58874606: or word ptr [eax + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5887460B: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58874610: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58874615: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58874618: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5887461C: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x58874621: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58874623: je 0x58874662
        __asm _emit 0x74
        __asm _emit 0x3D
        // 0x58874625: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5887462B: cmp dword ptr [ecx + 0x160], 0x23
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x23
        // 0x58874632: jle 0x5887464b
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58874634: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887463B: je 0x5887464b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5887463D: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58874643: add edx, 0x8c0
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xC0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58874649: jmp 0x5887464d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5887464B: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5887464D: lea ecx, [ebp + 0x6f]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x6F
        // 0x58874650: push ecx
        __asm _emit 0x51
        // 0x58874651: lea ecx, [ebx + 0x19]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x19
        // 0x58874654: push ecx
        __asm _emit 0x51
        // 0x58874655: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58874657: push edx
        __asm _emit 0x52
        // 0x58874658: push esi
        __asm _emit 0x56
        // 0x58874659: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5887465B: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x2A
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58874660: jmp 0x58874664
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58874662: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58874664: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58874669: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5887466B: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58874670: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x58874673: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0xE6
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58874678: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887467D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58874682: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58874685: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58874689: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x5887468E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58874690: je 0x588746e6
        __asm _emit 0x74
        __asm _emit 0x54
        // 0x58874692: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58874698: cmp dword ptr [ecx + 0x160], 0x25
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x25
        // 0x5887469F: jle 0x588746b8
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588746A1: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588746A8: je 0x588746b8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588746AA: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588746B0: add ecx, 0x940
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588746B6: jmp 0x588746ba
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588746B8: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588746BA: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588746BE: push edx
        __asm _emit 0x52
        // 0x588746BF: lea edx, [ebp + 0x90]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588746C5: push edx
        __asm _emit 0x52
        // 0x588746C6: lea edx, [ebx + 0x88]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588746CC: push edx
        __asm _emit 0x52
        // 0x588746CD: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588746D3: push ecx
        __asm _emit 0x51
        // 0x588746D4: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588746DA: push esi
        __asm _emit 0x56
        // 0x588746DB: push ecx
        __asm _emit 0x51
        // 0x588746DC: push edx
        __asm _emit 0x52
        // 0x588746DD: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588746DF: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0x96
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588746E4: jmp 0x588746e8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588746E6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588746E8: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588746ED: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588746EF: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588746F4: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588746F7: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0xE6
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588746FC: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58874701: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58874706: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58874709: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5887470D: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x58874712: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58874714: je 0x5887476a
        __asm _emit 0x74
        __asm _emit 0x54
        // 0x58874716: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5887471C: cmp dword ptr [ecx + 0x160], 0x24
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x24
        // 0x58874723: jle 0x5887473c
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58874725: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887472C: je 0x5887473c
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5887472E: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58874734: add ecx, 0x900
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887473A: jmp 0x5887473e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5887473C: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5887473E: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58874742: push edx
        __asm _emit 0x52
        // 0x58874743: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58874749: add ebp, 0x90
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887474F: push ebp
        __asm _emit 0x55
        // 0x58874750: add ebx, 0xba
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58874756: push ebx
        __asm _emit 0x53
        // 0x58874757: push ecx
        __asm _emit 0x51
        // 0x58874758: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5887475E: push esi
        __asm _emit 0x56
        // 0x5887475F: push ecx
        __asm _emit 0x51
        // 0x58874760: push edx
        __asm _emit 0x52
        // 0x58874761: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58874763: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0x96
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58874768: jmp 0x5887476c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5887476A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5887476C: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58874771: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58874773: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58874778: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5887477B: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0xE5
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58874780: mov eax, 0xfff0
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58874785: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58874789: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5887478D: mov edx, 0xe5ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58874792: mov eax, 0x500
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58874797: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5887479A: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x5887479D: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588747A1: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588747A3: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588747A7: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588747AE: pop ecx
        __asm _emit 0x59
        // 0x588747AF: pop edi
        __asm _emit 0x5F
        // 0x588747B0: pop esi
        __asm _emit 0x5E
        // 0x588747B1: pop ebp
        __asm _emit 0x5D
        // 0x588747B2: pop ebx
        __asm _emit 0x5B
        // 0x588747B3: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588747B6: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
