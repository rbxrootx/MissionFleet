// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58863540 .. +0x29B bytes.
// Source symbol alias: FUN_58863540.
extern "C" __declspec(naked) void FUN_58863540() {
    __asm {
        // 0x58863540: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58863542: push 0x58985a69
        __asm _emit 0x68
        __asm _emit 0x69
        __asm _emit 0x5A
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58863547: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886354D: push eax
        __asm _emit 0x50
        // 0x5886354E: push ecx
        __asm _emit 0x51
        // 0x5886354F: push ebx
        __asm _emit 0x53
        // 0x58863550: push ebp
        __asm _emit 0x55
        // 0x58863551: push esi
        __asm _emit 0x56
        // 0x58863552: push edi
        __asm _emit 0x57
        // 0x58863553: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58863558: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5886355A: push eax
        __asm _emit 0x50
        // 0x5886355B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5886355F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58863565: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58863567: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5886356B: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5886356F: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58863573: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58863577: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5886357B: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5886357F: push eax
        __asm _emit 0x50
        // 0x58863580: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58863584: push ecx
        __asm _emit 0x51
        // 0x58863585: push edx
        __asm _emit 0x52
        // 0x58863586: push ebp
        __asm _emit 0x55
        // 0x58863587: push ebx
        __asm _emit 0x53
        // 0x58863588: push eax
        __asm _emit 0x50
        // 0x58863589: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5886358B: call 0x58857f30
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x49
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58863590: mov dword ptr [esi], 0x5899ec18
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x18
        __asm _emit 0xEC
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58863596: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xA1
        __asm _emit 0xA0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5886359B: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5886359D: cmp dword ptr [eax + 0x164], 0x12d
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588635A7: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588635AB: jle 0x588635c3
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588635AD: cmp dword ptr [eax + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588635B3: je 0x588635c3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588635B5: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588635BB: mov eax, dword ptr [ecx + 0x4b4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588635C1: jmp 0x588635c5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588635C3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588635C5: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588635CB: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588635CE: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588635D0: je 0x588635fa
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588635D2: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588635D5: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588635D8: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588635DB: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588635DE: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588635E1: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588635E3: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588635E6: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588635E8: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588635EB: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588635EE: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588635F1: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588635F4: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588635F7: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588635FA: push 0xcc
        __asm _emit 0x68
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588635FF: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0x96
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x58863604: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58863607: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5886360B: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x58863610: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58863612: je 0x5886362a
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x58863614: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58863616: push edi
        __asm _emit 0x57
        // 0x58863617: push edi
        __asm _emit 0x57
        // 0x58863618: lea ecx, [ebp + 0x23]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x23
        // 0x5886361B: push ecx
        __asm _emit 0x51
        // 0x5886361C: lea edx, [ebx + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x14
        // 0x5886361F: push edx
        __asm _emit 0x52
        // 0x58863620: push esi
        __asm _emit 0x56
        // 0x58863621: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58863623: call 0x587c7db0
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0x47
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x58863628: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5886362A: mov dword ptr [esi + 0xa8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58863630: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x58863633: mov eax, 0x7d0
        __asm _emit 0xB8
        __asm _emit 0xD0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58863638: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5886363D: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x58863641: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58863643: je 0x5886364b
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58863645: push edi
        __asm _emit 0x57
        // 0x58863646: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0xF9
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x5886364B: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x5886364E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58863650: je 0x58863658
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58863652: push edi
        __asm _emit 0x57
        // 0x58863653: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0xF8
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58863658: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5886365E: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x58863660: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58863662: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x58863664: push 0x14
        __asm _emit 0x6A
        __asm _emit 0x14
        // 0x58863666: push ecx
        __asm _emit 0x51
        // 0x58863667: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886366D: call 0x587c7ed0
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0x48
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x58863672: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58863678: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x5886367A: call 0x587c7ce0
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0x46
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x5886367F: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x58863681: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0x95
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x58863686: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58863689: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5886368D: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x58863692: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58863694: je 0x588636d6
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x58863696: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5886369C: cmp dword ptr [ecx + 0x160], 0xc
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0C
        // 0x588636A3: jle 0x588636bc
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588636A5: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588636AC: je 0x588636bc
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588636AE: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588636B4: add ecx, 0x300
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588636BA: jmp 0x588636be
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588636BC: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588636BE: push 0xbb8
        __asm _emit 0x68
        __asm _emit 0xB8
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588636C3: lea edx, [ebp + 0x1d]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x1D
        // 0x588636C6: push edx
        __asm _emit 0x52
        // 0x588636C7: lea edx, [ebx + 8]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x08
        // 0x588636CA: push edx
        __asm _emit 0x52
        // 0x588636CB: push ecx
        __asm _emit 0x51
        // 0x588636CC: push esi
        __asm _emit 0x56
        // 0x588636CD: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588636CF: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0x13
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x588636D4: jmp 0x588636d8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588636D6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588636D8: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588636DD: mov dword ptr [esi + 0xac], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588636E3: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588636E7: push 0x6c
        __asm _emit 0x6A
        __asm _emit 0x6C
        // 0x588636E9: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588636EE: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0x95
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x588636F3: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588636F6: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588636FA: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x588636FF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58863701: je 0x58863743
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x58863703: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58863709: cmp dword ptr [ecx + 0x160], 0xd
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0D
        // 0x58863710: jle 0x58863729
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58863712: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58863719: je 0x58863729
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5886371B: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58863721: add edx, 0x340
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58863727: jmp 0x5886372b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58863729: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5886372B: push 0xbb8
        __asm _emit 0x68
        __asm _emit 0xB8
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58863730: add ebp, 0x17
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x17
        // 0x58863733: push ebp
        __asm _emit 0x55
        // 0x58863734: add ebx, 0x37
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x37
        // 0x58863737: push ebx
        __asm _emit 0x53
        // 0x58863738: push edx
        __asm _emit 0x52
        // 0x58863739: push esi
        __asm _emit 0x56
        // 0x5886373A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5886373C: call 0x58793ff0
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x08
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58863741: jmp 0x58863745
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58863743: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58863745: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58863747: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5886374C: mov dword ptr [esi + 0xb0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58863752: call 0x58793e00
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x06
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58863757: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5886375C: cmp dword ptr [eax + 0x170], 0x22
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x22
        // 0x58863763: jle 0x5886377c
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58863765: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886376C: je 0x5886377c
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5886376E: mov edx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58863774: mov eax, dword ptr [edx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886377A: jmp 0x5886377e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5886377C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5886377E: mov dword ptr [esi + 0xb4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58863784: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58863789: cmp dword ptr [eax + 0x170], 0x21
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x21
        // 0x58863790: jle 0x588637a9
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58863792: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58863799: je 0x588637a9
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5886379B: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588637A1: mov eax, dword ptr [eax + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588637A7: jmp 0x588637ab
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588637A9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588637AB: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588637AD: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588637AF: mov dword ptr [esi + 0xb8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588637B5: mov word ptr [esi + 0xa4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588637BC: mov word ptr [esi + 0xa6], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xA6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588637C3: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588637C5: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588637C9: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588637D0: pop ecx
        __asm _emit 0x59
        // 0x588637D1: pop edi
        __asm _emit 0x5F
        // 0x588637D2: pop esi
        __asm _emit 0x5E
        // 0x588637D3: pop ebp
        __asm _emit 0x5D
        // 0x588637D4: pop ebx
        __asm _emit 0x5B
        // 0x588637D5: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588637D8: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
