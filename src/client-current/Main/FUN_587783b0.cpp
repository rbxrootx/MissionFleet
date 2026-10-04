// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587783B0 .. +0x719 bytes.
// Source symbol alias: FUN_587783b0.
extern "C" __declspec(naked) void FUN_587783b0() {
    __asm {
        // 0x587783B0: push ecx
        __asm _emit 0x51
        // 0x587783B1: push ebx
        __asm _emit 0x53
        // 0x587783B2: push ebp
        __asm _emit 0x55
        // 0x587783B3: push esi
        __asm _emit 0x56
        // 0x587783B4: push edi
        __asm _emit 0x57
        // 0x587783B5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587783B7: push 0x154
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587783BC: lea edi, [esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x587783BF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587783C1: push edi
        __asm _emit 0x57
        // 0x587783C2: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0x48
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587783C7: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587783CA: push 0xce
        __asm _emit 0x68
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587783CF: lea ecx, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587783D2: push ecx
        __asm _emit 0x51
        // 0x587783D3: lea edx, [esi + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x587783D6: push edx
        __asm _emit 0x52
        // 0x587783D7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587783D9: lea ebx, [esi + 0x168]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587783DF: push ebx
        __asm _emit 0x53
        // 0x587783E0: push eax
        __asm _emit 0x50
        // 0x587783E1: push 0x58996780
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x67
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587783E6: push 0x5898d89c
        __asm _emit 0x68
        __asm _emit 0x9C
        __asm _emit 0xD8
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587783EB: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587783ED: mov word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x07
        // 0x587783F0: call 0x587781d0
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587783F5: push 0x390
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587783FA: mov dword ptr [esi + 0xe28], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778400: lea ecx, [esi + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x1C
        // 0x58778403: push ecx
        __asm _emit 0x51
        // 0x58778404: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778409: lea ebp, [esi + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x6E
        __asm _emit 0x18
        // 0x5877840C: lea edx, [esi + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x28
        // 0x5877840F: push edx
        __asm _emit 0x52
        // 0x58778410: mov word ptr [ebp], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58778414: lea eax, [esi + 0x228]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877841A: push eax
        __asm _emit 0x50
        // 0x5877841B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5877841D: push 0x58996754
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0x67
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58778422: push 0x5898d8ac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0xD8
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58778427: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58778429: call 0x587781d0
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877842E: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778433: mov dword ptr [esi + 0xe2c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778439: lea ecx, [esi + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x5877843C: push ecx
        __asm _emit 0x51
        // 0x5877843D: mov eax, 2
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778442: lea edx, [esi + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x3C
        // 0x58778445: push edx
        __asm _emit 0x52
        // 0x58778446: mov word ptr [esi + 0x2c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x2C
        // 0x5877844A: lea eax, [esi + 0x2e8]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778450: push eax
        __asm _emit 0x50
        // 0x58778451: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58778453: push 0x58996728
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x67
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58778458: push 0x5898d890
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0xD8
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5877845D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5877845F: call 0x587781d0
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58778464: push 0xa4
        __asm _emit 0x68
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778469: mov dword ptr [esi + 0xe30], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877846F: lea ecx, [esi + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x44
        // 0x58778472: push ecx
        __asm _emit 0x51
        // 0x58778473: mov eax, 3
        __asm _emit 0xB8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778478: lea edx, [esi + 0x50]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x50
        // 0x5877847B: push edx
        __asm _emit 0x52
        // 0x5877847C: mov word ptr [esi + 0x40], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x40
        // 0x58778480: lea eax, [esi + 0x3a8]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778486: push eax
        __asm _emit 0x50
        // 0x58778487: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58778489: push 0x589966fc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x66
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5877848E: push 0x5898d884
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0xD8
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58778493: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58778495: call 0x587781d0
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877849A: push 0xb4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877849F: mov dword ptr [esi + 0xe34], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587784A5: mov eax, 5
        __asm _emit 0xB8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587784AA: lea ecx, [esi + 0x6c]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x587784AD: push ecx
        __asm _emit 0x51
        // 0x587784AE: lea edx, [esi + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x78
        // 0x587784B1: mov word ptr [esi + 0x68], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x587784B5: lea eax, [esi + 0x468]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587784BB: push edx
        __asm _emit 0x52
        // 0x587784BC: push eax
        __asm _emit 0x50
        // 0x587784BD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587784BF: push 0x589966d0
        __asm _emit 0x68
        __asm _emit 0xD0
        __asm _emit 0x66
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587784C4: push 0x5898d878
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0xD8
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587784C9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587784CB: call 0x587781d0
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587784D0: push 0xa8
        __asm _emit 0x68
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587784D5: mov dword ptr [esi + 0xe38], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587784DB: lea ecx, [esi + 0x80]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587784E1: push ecx
        __asm _emit 0x51
        // 0x587784E2: mov eax, 6
        __asm _emit 0xB8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587784E7: lea edx, [esi + 0x8c]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587784ED: push edx
        __asm _emit 0x52
        // 0x587784EE: mov word ptr [esi + 0x7c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x587784F2: lea eax, [esi + 0x528]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587784F8: push eax
        __asm _emit 0x50
        // 0x587784F9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587784FB: push 0x589966a4
        __asm _emit 0x68
        __asm _emit 0xA4
        __asm _emit 0x66
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58778500: push 0x5898d868
        __asm _emit 0x68
        __asm _emit 0x68
        __asm _emit 0xD8
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58778505: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58778507: call 0x587781d0
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877850C: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778511: mov dword ptr [esi + 0xe3c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778517: lea ecx, [esi + 0xe4]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877851D: push ecx
        __asm _emit 0x51
        // 0x5877851E: mov eax, 0xb
        __asm _emit 0xB8
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778523: lea edx, [esi + 0xf0]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778529: push edx
        __asm _emit 0x52
        // 0x5877852A: mov word ptr [esi + 0xe0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778531: lea eax, [esi + 0x5e8]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778537: push eax
        __asm _emit 0x50
        // 0x58778538: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877853A: push 0x58996678
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0x66
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5877853F: push 0x5898d858
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0xD8
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58778544: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58778546: call 0x587781d0
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877854B: push 0xb4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778550: mov dword ptr [esi + 0xe40], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778556: lea ecx, [esi + 0xf8]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877855C: push ecx
        __asm _emit 0x51
        // 0x5877855D: mov eax, 0xc
        __asm _emit 0xB8
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778562: lea edx, [esi + 0x104]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778568: push edx
        __asm _emit 0x52
        // 0x58778569: mov word ptr [esi + 0xf4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778570: lea eax, [esi + 0x6a8]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778576: push eax
        __asm _emit 0x50
        // 0x58778577: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58778579: push 0x5899664c
        __asm _emit 0x68
        __asm _emit 0x4C
        __asm _emit 0x66
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5877857E: push 0x5898d848
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0xD8
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58778583: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58778585: call 0x587781d0
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877858A: push 0xd4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877858F: mov dword ptr [esi + 0xe44], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778595: lea ecx, [esi + 0x10c]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877859B: push ecx
        __asm _emit 0x51
        // 0x5877859C: mov eax, 0xd
        __asm _emit 0xB8
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587785A1: lea edx, [esi + 0x118]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587785A7: push edx
        __asm _emit 0x52
        // 0x587785A8: mov word ptr [esi + 0x108], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587785AF: lea eax, [esi + 0x768]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587785B5: push eax
        __asm _emit 0x50
        // 0x587785B6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587785B8: push 0x58996620
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x66
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587785BD: push 0x5898d838
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0xD8
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587785C2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587785C4: call 0x587781d0
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587785C9: push 0x9c
        __asm _emit 0x68
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587785CE: mov dword ptr [esi + 0xe48], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587785D4: lea ecx, [esi + 0x58]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x587785D7: push ecx
        __asm _emit 0x51
        // 0x587785D8: mov eax, 4
        __asm _emit 0xB8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587785DD: lea edx, [esi + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x64
        // 0x587785E0: push edx
        __asm _emit 0x52
        // 0x587785E1: mov word ptr [esi + 0x54], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x587785E5: lea eax, [esi + 0x828]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587785EB: push eax
        __asm _emit 0x50
        // 0x587785EC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587785EE: push 0x589965f4
        __asm _emit 0x68
        __asm _emit 0xF4
        __asm _emit 0x65
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587785F3: push 0x5898d82c
        __asm _emit 0x68
        __asm _emit 0x2C
        __asm _emit 0xD8
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587785F8: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587785FA: call 0x587781d0
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587785FF: mov dword ptr [esi + 0xe4c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778605: push 0x574
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877860A: lea ecx, [esi + 0xa8]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778610: push ecx
        __asm _emit 0x51
        // 0x58778611: mov eax, 8
        __asm _emit 0xB8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778616: lea edx, [esi + 0xb4]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877861C: push edx
        __asm _emit 0x52
        // 0x5877861D: mov word ptr [esi + 0xa4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778624: lea eax, [esi + 0x8e8]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877862A: push eax
        __asm _emit 0x50
        // 0x5877862B: push 0xa
        __asm _emit 0x6A
        __asm _emit 0x0A
        // 0x5877862D: push 0x589965d0
        __asm _emit 0x68
        __asm _emit 0xD0
        __asm _emit 0x65
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58778632: push 0x589965bc
        __asm _emit 0x68
        __asm _emit 0xBC
        __asm _emit 0x65
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58778637: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58778639: call 0x587781d0
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877863E: push 0x318
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778643: mov dword ptr [esi + 0xe50], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778649: lea ecx, [esi + 0xbc]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877864F: push ecx
        __asm _emit 0x51
        // 0x58778650: mov eax, 9
        __asm _emit 0xB8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778655: lea edx, [esi + 0xc8]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877865B: push edx
        __asm _emit 0x52
        // 0x5877865C: mov word ptr [esi + 0xb8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778663: lea eax, [esi + 0x9a8]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778669: push eax
        __asm _emit 0x50
        // 0x5877866A: push 0xb
        __asm _emit 0x6A
        __asm _emit 0x0B
        // 0x5877866C: push 0x58996590
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x65
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58778671: push 0x58996584
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x65
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58778676: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58778678: call 0x587781d0
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877867D: push 0xe0
        __asm _emit 0x68
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778682: mov dword ptr [esi + 0xe54], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778688: lea ecx, [esi + 0xd0]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877868E: push ecx
        __asm _emit 0x51
        // 0x5877868F: mov eax, 0xa
        __asm _emit 0xB8
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778694: lea edx, [esi + 0xdc]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877869A: push edx
        __asm _emit 0x52
        // 0x5877869B: mov word ptr [esi + 0xcc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587786A2: lea eax, [esi + 0xa68]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587786A8: push eax
        __asm _emit 0x50
        // 0x587786A9: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x587786AB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587786AD: push 0x58996574
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0x65
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587786B2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587786B4: call 0x587781d0
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587786B9: push 0x13c
        __asm _emit 0x68
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587786BE: mov dword ptr [esi + 0xe58], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587786C4: lea ecx, [esi + 0x94]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587786CA: push ecx
        __asm _emit 0x51
        // 0x587786CB: mov eax, 7
        __asm _emit 0xB8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587786D0: lea edx, [esi + 0xa0]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587786D6: push edx
        __asm _emit 0x52
        // 0x587786D7: mov word ptr [esi + 0x90], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587786DE: lea eax, [esi + 0xb28]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587786E4: push eax
        __asm _emit 0x50
        // 0x587786E5: push 0xd
        __asm _emit 0x6A
        __asm _emit 0x0D
        // 0x587786E7: push 0x58996548
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x65
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587786EC: push 0x58996530
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x65
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587786F1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587786F3: mov dword ptr [esi + 0xe5c], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x5C
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587786FD: call 0x587781d0
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58778702: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58778704: push 0xc0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778709: mov dword ptr [esi + 0xe5c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x5C
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877870F: mov ecx, dword ptr [0x58a24814]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58778715: push ebx
        __asm _emit 0x53
        // 0x58778716: call 0x5875ba80
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0x33
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x5877871B: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5877871D: push ebx
        __asm _emit 0x53
        // 0x5877871E: push 0x14
        __asm _emit 0x6A
        __asm _emit 0x14
        // 0x58778720: mov dword ptr [esi + 0xeb0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778726: mov ecx, dword ptr [0x58a24814]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877872C: push edi
        __asm _emit 0x57
        // 0x5877872D: call 0x5875ba80
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0x33
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58778732: push ebx
        __asm _emit 0x53
        // 0x58778733: mov dword ptr [esi + 0xe6c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778739: mov ecx, dword ptr [0x58a24814]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877873F: push 0xc0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778744: lea eax, [esi + 0x228]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877874A: push eax
        __asm _emit 0x50
        // 0x5877874B: call 0x5875ba80
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x33
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58778750: mov dword ptr [esi + 0xeb4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778756: mov ecx, dword ptr [0x58a24814]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877875C: push ebx
        __asm _emit 0x53
        // 0x5877875D: push 0x14
        __asm _emit 0x6A
        __asm _emit 0x14
        // 0x5877875F: push ebp
        __asm _emit 0x55
        // 0x58778760: call 0x5875ba80
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x33
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58778765: push ebx
        __asm _emit 0x53
        // 0x58778766: mov dword ptr [esi + 0xe70], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877876C: mov ecx, dword ptr [0x58a24814]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58778772: push 0xc0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778777: lea eax, [esi + 0x2e8]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877877D: push eax
        __asm _emit 0x50
        // 0x5877877E: call 0x5875ba80
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0x32
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58778783: push ebx
        __asm _emit 0x53
        // 0x58778784: mov dword ptr [esi + 0xeb8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877878A: mov ecx, dword ptr [0x58a24814]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58778790: push 0x14
        __asm _emit 0x6A
        __asm _emit 0x14
        // 0x58778792: lea eax, [esi + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x2C
        // 0x58778795: push eax
        __asm _emit 0x50
        // 0x58778796: call 0x5875ba80
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0x32
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x5877879B: push ebx
        __asm _emit 0x53
        // 0x5877879C: mov dword ptr [esi + 0xe74], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587787A2: mov ecx, dword ptr [0x58a24814]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587787A8: push 0xc0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587787AD: lea eax, [esi + 0x3a8]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587787B3: push eax
        __asm _emit 0x50
        // 0x587787B4: call 0x5875ba80
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0x32
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587787B9: push ebx
        __asm _emit 0x53
        // 0x587787BA: mov dword ptr [esi + 0xebc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587787C0: mov ecx, dword ptr [0x58a24814]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587787C6: push 0x14
        __asm _emit 0x6A
        __asm _emit 0x14
        // 0x587787C8: lea eax, [esi + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x40
        // 0x587787CB: push eax
        __asm _emit 0x50
        // 0x587787CC: call 0x5875ba80
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x32
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587787D1: push ebx
        __asm _emit 0x53
        // 0x587787D2: mov dword ptr [esi + 0xe78], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587787D8: mov ecx, dword ptr [0x58a24814]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587787DE: push 0xc0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587787E3: lea eax, [esi + 0x468]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587787E9: push eax
        __asm _emit 0x50
        // 0x587787EA: call 0x5875ba80
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0x32
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587787EF: push ebx
        __asm _emit 0x53
        // 0x587787F0: mov dword ptr [esi + 0xec0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587787F6: mov ecx, dword ptr [0x58a24814]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587787FC: push 0x14
        __asm _emit 0x6A
        __asm _emit 0x14
        // 0x587787FE: lea eax, [esi + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x58778801: push eax
        __asm _emit 0x50
        // 0x58778802: call 0x5875ba80
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x32
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58778807: push ebx
        __asm _emit 0x53
        // 0x58778808: mov dword ptr [esi + 0xe7c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877880E: mov ecx, dword ptr [0x58a24814]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58778814: push 0xc0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778819: lea eax, [esi + 0x528]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877881F: push eax
        __asm _emit 0x50
        // 0x58778820: call 0x5875ba80
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0x32
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58778825: push ebx
        __asm _emit 0x53
        // 0x58778826: mov dword ptr [esi + 0xec4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877882C: mov ecx, dword ptr [0x58a24814]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58778832: push 0x14
        __asm _emit 0x6A
        __asm _emit 0x14
        // 0x58778834: lea eax, [esi + 0x7c]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x58778837: push eax
        __asm _emit 0x50
        // 0x58778838: call 0x5875ba80
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x32
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x5877883D: push ebx
        __asm _emit 0x53
        // 0x5877883E: mov dword ptr [esi + 0xe80], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778844: mov ecx, dword ptr [0x58a24814]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877884A: push 0xc0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877884F: lea eax, [esi + 0x5e8]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778855: push eax
        __asm _emit 0x50
        // 0x58778856: call 0x5875ba80
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0x32
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x5877885B: push ebx
        __asm _emit 0x53
        // 0x5877885C: mov dword ptr [esi + 0xec8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778862: mov ecx, dword ptr [0x58a24814]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58778868: push 0x14
        __asm _emit 0x6A
        __asm _emit 0x14
        // 0x5877886A: lea eax, [esi + 0xe0]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778870: push eax
        __asm _emit 0x50
        // 0x58778871: call 0x5875ba80
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0x32
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58778876: push ebx
        __asm _emit 0x53
        // 0x58778877: mov dword ptr [esi + 0xe84], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877887D: mov ecx, dword ptr [0x58a24814]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58778883: push 0xc0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778888: lea eax, [esi + 0x6a8]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877888E: push eax
        __asm _emit 0x50
        // 0x5877888F: call 0x5875ba80
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0x31
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58778894: push ebx
        __asm _emit 0x53
        // 0x58778895: mov dword ptr [esi + 0xecc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877889B: mov ecx, dword ptr [0x58a24814]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587788A1: push 0x14
        __asm _emit 0x6A
        __asm _emit 0x14
        // 0x587788A3: lea eax, [esi + 0xf4]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587788A9: push eax
        __asm _emit 0x50
        // 0x587788AA: call 0x5875ba80
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0x31
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587788AF: push ebx
        __asm _emit 0x53
        // 0x587788B0: mov dword ptr [esi + 0xe88], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587788B6: mov ecx, dword ptr [0x58a24814]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587788BC: push 0xc0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587788C1: lea eax, [esi + 0x768]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587788C7: push eax
        __asm _emit 0x50
        // 0x587788C8: call 0x5875ba80
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0x31
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587788CD: push ebx
        __asm _emit 0x53
        // 0x587788CE: mov dword ptr [esi + 0xed0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587788D4: mov ecx, dword ptr [0x58a24814]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587788DA: push 0x14
        __asm _emit 0x6A
        __asm _emit 0x14
        // 0x587788DC: lea eax, [esi + 0x108]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587788E2: push eax
        __asm _emit 0x50
        // 0x587788E3: call 0x5875ba80
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0x31
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587788E8: push ebx
        __asm _emit 0x53
        // 0x587788E9: mov dword ptr [esi + 0xe8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587788EF: mov ecx, dword ptr [0x58a24814]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587788F5: push 0xc0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587788FA: lea eax, [esi + 0x828]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778900: push eax
        __asm _emit 0x50
        // 0x58778901: call 0x5875ba80
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0x31
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58778906: push ebx
        __asm _emit 0x53
        // 0x58778907: mov dword ptr [esi + 0xed4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877890D: mov ecx, dword ptr [0x58a24814]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58778913: push 0x14
        __asm _emit 0x6A
        __asm _emit 0x14
        // 0x58778915: lea eax, [esi + 0x54]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x58778918: push eax
        __asm _emit 0x50
        // 0x58778919: call 0x5875ba80
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0x31
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x5877891E: push ebx
        __asm _emit 0x53
        // 0x5877891F: mov dword ptr [esi + 0xe90], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778925: mov ecx, dword ptr [0x58a24814]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877892B: push 0xc0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778930: lea eax, [esi + 0x8e8]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778936: push eax
        __asm _emit 0x50
        // 0x58778937: call 0x5875ba80
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0x31
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x5877893C: push ebx
        __asm _emit 0x53
        // 0x5877893D: mov dword ptr [esi + 0xed8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778943: mov ecx, dword ptr [0x58a24814]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58778949: push 0x14
        __asm _emit 0x6A
        __asm _emit 0x14
        // 0x5877894B: lea eax, [esi + 0xa4]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778951: push eax
        __asm _emit 0x50
        // 0x58778952: call 0x5875ba80
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0x31
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58778957: push ebx
        __asm _emit 0x53
        // 0x58778958: mov dword ptr [esi + 0xe94], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877895E: mov ecx, dword ptr [0x58a24814]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58778964: push 0xc0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778969: lea eax, [esi + 0x9a8]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877896F: push eax
        __asm _emit 0x50
        // 0x58778970: call 0x5875ba80
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x31
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58778975: push ebx
        __asm _emit 0x53
        // 0x58778976: mov dword ptr [esi + 0xedc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877897C: mov ecx, dword ptr [0x58a24814]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58778982: push 0x14
        __asm _emit 0x6A
        __asm _emit 0x14
        // 0x58778984: lea eax, [esi + 0xb8]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877898A: push eax
        __asm _emit 0x50
        // 0x5877898B: call 0x5875ba80
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0x30
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58778990: push ebx
        __asm _emit 0x53
        // 0x58778991: mov dword ptr [esi + 0xe98], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778997: mov ecx, dword ptr [0x58a24814]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877899D: push 0xc0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587789A2: lea eax, [esi + 0xa68]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587789A8: push eax
        __asm _emit 0x50
        // 0x587789A9: call 0x5875ba80
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x30
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587789AE: push ebx
        __asm _emit 0x53
        // 0x587789AF: mov dword ptr [esi + 0xee0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587789B5: mov ecx, dword ptr [0x58a24814]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587789BB: push 0x14
        __asm _emit 0x6A
        __asm _emit 0x14
        // 0x587789BD: lea eax, [esi + 0xcc]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587789C3: push eax
        __asm _emit 0x50
        // 0x587789C4: call 0x5875ba80
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0x30
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587789C9: mov dword ptr [esi + 0xe9c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587789CF: mov dword ptr [esi + 0xee4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xE4
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587789D5: mov dword ptr [esi + 0xea0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA0
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587789DB: mov ecx, dword ptr [0x58a24814]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587789E1: push ebx
        __asm _emit 0x53
        // 0x587789E2: push 0xc0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587789E7: lea eax, [esi + 0xb28]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587789ED: push eax
        __asm _emit 0x50
        // 0x587789EE: call 0x5875ba80
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0x30
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587789F3: push ebx
        __asm _emit 0x53
        // 0x587789F4: mov dword ptr [esi + 0xee4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587789FA: mov ecx, dword ptr [0x58a24814]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58778A00: push 0x14
        __asm _emit 0x6A
        __asm _emit 0x14
        // 0x58778A02: lea eax, [esi + 0x90]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778A08: push eax
        __asm _emit 0x50
        // 0x58778A09: call 0x5875ba80
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0x30
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58778A0E: push ebx
        __asm _emit 0x53
        // 0x58778A0F: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778A14: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x58778A16: push ebx
        __asm _emit 0x53
        // 0x58778A17: push ebx
        __asm _emit 0x53
        // 0x58778A18: push 0x80000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x58778A1D: push 0x58996524
        __asm _emit 0x68
        __asm _emit 0x24
        __asm _emit 0x65
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58778A22: mov dword ptr [esi + 0xea0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778A28: mov dword ptr [esp + 0x2c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58778A2C: call dword ptr [0x5898c180]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58778A32: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58778A34: cmp edi, -1
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58778A37: jne 0x58778a8b
        __asm _emit 0x75
        __asm _emit 0x52
        // 0x58778A39: mov ecx, dword ptr [0x58a247f0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58778A3F: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778A44: push edi
        __asm _emit 0x57
        // 0x58778A45: push 0x58996524
        __asm _emit 0x68
        __asm _emit 0x24
        __asm _emit 0x65
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58778A4A: call 0x587750b0
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0xC6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58778A4F: mov eax, dword ptr [0x58a284c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58778A54: push ebx
        __asm _emit 0x53
        // 0x58778A55: push 0x5898ce74
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0xCE
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58778A5A: push 0x58996504
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x65
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58778A5F: push eax
        __asm _emit 0x50
        // 0x58778A60: call dword ptr [0x5898c3cc]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xCC
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58778A66: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58778A6C: call 0x58970ae0
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0x80
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58778A71: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58778A73: call dword ptr [0x5898c3c8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58778A79: mov dword ptr [esi + 0xef4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xF4
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778A7F: mov dword ptr [0x58a24818], edi
        __asm _emit 0x89
        __asm _emit 0x3D
        __asm _emit 0x18
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58778A85: pop edi
        __asm _emit 0x5F
        // 0x58778A86: pop esi
        __asm _emit 0x5E
        // 0x58778A87: pop ebp
        __asm _emit 0x5D
        // 0x58778A88: pop ebx
        __asm _emit 0x5B
        // 0x58778A89: pop ecx
        __asm _emit 0x59
        // 0x58778A8A: ret
        __asm _emit 0xC3
        // 0x58778A8B: push ebx
        __asm _emit 0x53
        // 0x58778A8C: push ebx
        __asm _emit 0x53
        // 0x58778A8D: push ebx
        __asm _emit 0x53
        // 0x58778A8E: push edi
        __asm _emit 0x57
        // 0x58778A8F: call dword ptr [0x5898c164]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58778A95: push ebx
        __asm _emit 0x53
        // 0x58778A96: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58778A9A: push ecx
        __asm _emit 0x51
        // 0x58778A9B: push 0x173f0
        __asm _emit 0x68
        __asm _emit 0xF0
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58778AA0: push 0x58a0b4d8
        __asm _emit 0x68
        __asm _emit 0xD8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58778AA5: push edi
        __asm _emit 0x57
        // 0x58778AA6: call dword ptr [0x5898c190]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58778AAC: push edi
        __asm _emit 0x57
        // 0x58778AAD: call dword ptr [0x5898c184]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58778AB3: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778AB8: pop edi
        __asm _emit 0x5F
        // 0x58778AB9: mov dword ptr [esi + 0xef4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778ABF: pop esi
        __asm _emit 0x5E
        // 0x58778AC0: pop ebp
        __asm _emit 0x5D
        // 0x58778AC1: mov dword ptr [0x58a24818], eax
        __asm _emit 0xA3
        __asm _emit 0x18
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58778AC6: pop ebx
        __asm _emit 0x5B
        // 0x58778AC7: pop ecx
        __asm _emit 0x59
        // 0x58778AC8: ret
        __asm _emit 0xC3
    }
}
