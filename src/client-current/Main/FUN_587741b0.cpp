// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 559 bytes in 1 exact ranges.
// Source symbol alias: FUN_587741b0.

// Ghidra body range 0x587741B0..0x587743DF; 559 mapped bytes.
extern "C" __declspec(naked) void FUN_587741b0_segment_00() {
    __asm {
        // 0x587741B0: sub esp, 0x198
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587741B6: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587741BB: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587741BD: mov dword ptr [esp + 0x194], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587741C4: push ebx
        __asm _emit 0x53
        // 0x587741C5: mov ebx, dword ptr [esp + 0x1a4]
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0x24
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587741CC: push ebp
        __asm _emit 0x55
        // 0x587741CD: push esi
        __asm _emit 0x56
        // 0x587741CE: mov esi, dword ptr [esp + 0x1a8]
        __asm _emit 0x8B
        __asm _emit 0xB4
        __asm _emit 0x24
        __asm _emit 0xA8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587741D5: push edi
        __asm _emit 0x57
        // 0x587741D6: mov edi, dword ptr [0x5898c1a8]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587741DC: push esi
        __asm _emit 0x56
        // 0x587741DD: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587741DF: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587741E3: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587741E5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587741E7: je 0x587743c2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587741ED: push ebx
        __asm _emit 0x53
        // 0x587741EE: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587741F0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587741F2: je 0x587743c2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587741F8: push 0x7f
        __asm _emit 0x6A
        __asm _emit 0x7F
        // 0x587741FA: lea eax, [esp + 0x129]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774201: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58774203: push eax
        __asm _emit 0x50
        // 0x58774204: mov byte ptr [esp + 0x130], 0
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877420C: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x8A
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58774211: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58774215: lea ecx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58774219: push ecx
        __asm _emit 0x51
        // 0x5877421A: push edx
        __asm _emit 0x52
        // 0x5877421B: push esi
        __asm _emit 0x56
        // 0x5877421C: mov ebx, 3
        __asm _emit 0xBB
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774221: mov dword ptr [esp + 0x28], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58774229: mov dword ptr [esp + 0x30], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774231: call 0x5897cebc
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58774236: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58774238: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5877423B: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5877423D: je 0x587743bb
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774243: mov edi, dword ptr [0x5898c3c4]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58774249: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774250: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774255: lea eax, [esp + 0x128]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877425C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877425E: push eax
        __asm _emit 0x50
        // 0x5877425F: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0x89
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58774264: push esi
        __asm _emit 0x56
        // 0x58774265: lea ecx, [esp + 0x134]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877426C: push 0x5898d0d4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58774271: push ecx
        __asm _emit 0x51
        // 0x58774272: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58774274: mov esi, dword ptr [0x5898c1a4]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5877427A: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5877427D: push 0x589963d0
        __asm _emit 0x68
        __asm _emit 0xD0
        __asm _emit 0x63
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58774282: lea edx, [esp + 0x128]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774289: push edx
        __asm _emit 0x52
        // 0x5877428A: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x5877428C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877428E: jne 0x5877429b
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x58774290: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58774292: inc dword ptr [esp + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58774296: jmp 0x5877439d
        __asm _emit 0xE9
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877429B: push 0x589963c8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x63
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587742A0: lea eax, [esp + 0x128]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587742A7: push eax
        __asm _emit 0x50
        // 0x587742A8: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x587742AA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587742AC: jne 0x587742b6
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x587742AE: lea ebx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x58
        __asm _emit 0x01
        // 0x587742B1: jmp 0x5877439d
        __asm _emit 0xE9
        __asm _emit 0xE7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587742B6: push 0x589963bc
        __asm _emit 0x68
        __asm _emit 0xBC
        __asm _emit 0x63
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587742BB: lea ecx, [esp + 0x128]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587742C2: push ecx
        __asm _emit 0x51
        // 0x587742C3: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x587742C5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587742C7: jne 0x587742d1
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x587742C9: lea ebx, [eax + 2]
        __asm _emit 0x8D
        __asm _emit 0x58
        __asm _emit 0x02
        // 0x587742CC: jmp 0x5877439d
        __asm _emit 0xE9
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587742D1: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x587742D3: sub eax, 0
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x00
        // 0x587742D6: je 0x58774350
        __asm _emit 0x74
        __asm _emit 0x78
        // 0x587742D8: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x587742DB: je 0x5877431d
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x587742DD: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x587742E0: jne 0x5877439d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587742E6: push 0x108
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587742EB: push eax
        __asm _emit 0x50
        // 0x587742EC: lea edx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587742F0: push edx
        __asm _emit 0x52
        // 0x587742F1: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0x89
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587742F6: lea eax, [esp + 0x130]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587742FD: push eax
        __asm _emit 0x50
        // 0x587742FE: lea ecx, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58774302: push ecx
        __asm _emit 0x51
        // 0x58774303: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58774305: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58774308: lea edx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5877430C: mov dword ptr [esp + 0x120], 2
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774317: push edx
        __asm _emit 0x52
        // 0x58774318: lea ecx, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x5877431B: jmp 0x58774398
        __asm _emit 0xEB
        __asm _emit 0x7B
        // 0x5877431D: push 0x108
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774322: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58774326: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58774328: push eax
        __asm _emit 0x50
        // 0x58774329: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0x89
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877432E: lea ecx, [esp + 0x130]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774335: push ecx
        __asm _emit 0x51
        // 0x58774336: lea edx, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5877433A: push edx
        __asm _emit 0x52
        // 0x5877433B: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5877433D: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58774340: mov dword ptr [esp + 0x120], 4
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877434B: lea ecx, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x5877434E: jmp 0x58774393
        __asm _emit 0xEB
        __asm _emit 0x43
        // 0x58774350: push 0x108
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774355: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58774359: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877435B: push ecx
        __asm _emit 0x51
        // 0x5877435C: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x88
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58774361: mov esi, dword ptr [0x5898c15c]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x5C
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58774367: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5877436A: lea edx, [esp + 0x124]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774371: push edx
        __asm _emit 0x52
        // 0x58774372: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58774376: push eax
        __asm _emit 0x50
        // 0x58774377: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x58774379: push 0x589963b8
        __asm _emit 0x68
        __asm _emit 0xB8
        __asm _emit 0x63
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5877437E: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58774382: push ecx
        __asm _emit 0x51
        // 0x58774383: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x58774385: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58774389: mov dword ptr [esp + 0x120], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774390: lea ecx, [ebp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x30
        // 0x58774393: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58774397: push eax
        __asm _emit 0x50
        // 0x58774398: call 0x58773950
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877439D: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587743A1: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587743A5: push ecx
        __asm _emit 0x51
        // 0x587743A6: push edx
        __asm _emit 0x52
        // 0x587743A7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587743A9: call 0x5897cebc
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x8B
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587743AE: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587743B0: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587743B3: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587743B5: jne 0x58774250
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587743BB: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587743C0: jmp 0x587743c4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587743C2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587743C4: mov ecx, dword ptr [esp + 0x1a4]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587743CB: pop edi
        __asm _emit 0x5F
        // 0x587743CC: pop esi
        __asm _emit 0x5E
        // 0x587743CD: pop ebp
        __asm _emit 0x5D
        // 0x587743CE: pop ebx
        __asm _emit 0x5B
        // 0x587743CF: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587743D1: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0x88
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587743D6: add esp, 0x198
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587743DC: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
