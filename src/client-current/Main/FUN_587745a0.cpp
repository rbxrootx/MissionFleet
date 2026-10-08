// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1246 bytes in 2 exact ranges.
// Source symbol alias: FUN_587745a0.

// Ghidra body range 0x587745A0..0x587745F9; 89 mapped bytes.
extern "C" __declspec(naked) void FUN_587745a0_segment_00() {
    __asm {
        // 0x587745A0: sub esp, 0x2cc
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587745A6: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587745AB: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587745AD: mov dword ptr [esp + 0x2c8], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xC8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587745B4: push ebx
        __asm _emit 0x53
        // 0x587745B5: push ebp
        __asm _emit 0x55
        // 0x587745B6: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587745B8: mov ecx, dword ptr [ebp + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x70
        // 0x587745BB: sub ecx, dword ptr [ebp + 0x6c]
        __asm _emit 0x2B
        __asm _emit 0x4D
        __asm _emit 0x6C
        // 0x587745BE: mov eax, 0xea0ea0eb
        __asm _emit 0xB8
        __asm _emit 0xEB
        __asm _emit 0xA0
        __asm _emit 0x0E
        __asm _emit 0xEA
        // 0x587745C3: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587745C5: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x587745C7: sar edx, 8
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x587745CA: push esi
        __asm _emit 0x56
        // 0x587745CB: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587745CD: push edi
        __asm _emit 0x57
        // 0x587745CE: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587745D0: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587745D3: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587745D5: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587745D7: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587745DB: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587745DF: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587745E3: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587745E7: mov dword ptr [esp + 0x34], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587745EF: je 0x587749f4
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587745F5: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587745F7: jmp 0x58774602
        __asm _emit 0xEB
        __asm _emit 0x09
    }
}

// Ghidra body range 0x58774600..0x58774A85; 1157 mapped bytes.
extern "C" __declspec(naked) void FUN_587745a0_segment_01() {
    __asm {
        // 0x58774600: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58774602: mov ecx, dword ptr [ebp + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x70
        // 0x58774605: sub ecx, dword ptr [ebp + 0x6c]
        __asm _emit 0x2B
        __asm _emit 0x4D
        __asm _emit 0x6C
        // 0x58774608: mov eax, 0xea0ea0eb
        __asm _emit 0xB8
        __asm _emit 0xEB
        __asm _emit 0xA0
        __asm _emit 0x0E
        __asm _emit 0xEA
        // 0x5877460D: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5877460F: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x58774611: sar edx, 8
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x58774614: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58774616: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x58774619: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5877461B: cmp esi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF1
        // 0x5877461D: jb 0x58774624
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5877461F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58774624: mov eax, dword ptr [ebp + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x6C
        // 0x58774627: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x58774629: add eax, 0x14
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x14
        // 0x5877462C: push eax
        __asm _emit 0x50
        // 0x5877462D: push edi
        __asm _emit 0x57
        // 0x5877462E: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58774630: call 0x58772160
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0xDB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58774635: push eax
        __asm _emit 0x50
        // 0x58774636: lea edx, [esp + 0x1dc]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xDC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877463D: push 0x58996310
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x63
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58774642: push edx
        __asm _emit 0x52
        // 0x58774643: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58774649: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x5877464C: push 0x5898d68c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58774651: lea eax, [esp + 0x1e8]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774658: push eax
        __asm _emit 0x50
        // 0x58774659: lea ecx, [esp + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5877465D: push ecx
        __asm _emit 0x51
        // 0x5877465E: call 0x5897ce4a
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x87
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58774663: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58774666: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58774668: jne 0x5877468d
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x5877466A: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5877466E: push edx
        __asm _emit 0x52
        // 0x5877466F: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58774671: call 0x587727b0
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58774676: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58774678: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5877467C: push eax
        __asm _emit 0x50
        // 0x5877467D: call 0x5897ce3e
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0x87
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58774682: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58774685: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58774687: jne 0x587747ca
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x3D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877468D: mov ecx, dword ptr [ebp + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x70
        // 0x58774690: sub ecx, dword ptr [ebp + 0x6c]
        __asm _emit 0x2B
        __asm _emit 0x4D
        __asm _emit 0x6C
        // 0x58774693: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774698: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5877469C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587746A0: mov eax, 0xea0ea0eb
        __asm _emit 0xB8
        __asm _emit 0xEB
        __asm _emit 0xA0
        __asm _emit 0x0E
        __asm _emit 0xEA
        // 0x587746A5: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587746A7: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x587746A9: mov ecx, dword ptr [ebp + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x70
        // 0x587746AC: sub ecx, dword ptr [ebp + 0x6c]
        __asm _emit 0x2B
        __asm _emit 0x4D
        __asm _emit 0x6C
        // 0x587746AF: sar edx, 8
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x587746B2: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x587746B4: shr edi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x1F
        // 0x587746B7: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x587746B9: mov eax, 0xea0ea0eb
        __asm _emit 0xB8
        __asm _emit 0xEB
        __asm _emit 0xA0
        __asm _emit 0x0E
        __asm _emit 0xEA
        // 0x587746BE: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587746C0: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x587746C2: sar edx, 8
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x587746C5: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587746C7: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587746CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587746CC: cmp esi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF1
        // 0x587746CE: jb 0x587746d5
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587746D0: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587746D5: mov edx, dword ptr [ebp + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x6C
        // 0x587746D8: push edi
        __asm _emit 0x57
        // 0x587746D9: lea eax, [esi + 1]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x01
        // 0x587746DC: push eax
        __asm _emit 0x50
        // 0x587746DD: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587746E1: lea eax, [ebx + edx + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x13
        __asm _emit 0x14
        // 0x587746E5: push eax
        __asm _emit 0x50
        // 0x587746E6: lea ecx, [esp + 0x160]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587746ED: push 0x58996408
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x64
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587746F2: push ecx
        __asm _emit 0x51
        // 0x587746F3: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587746F9: mov ecx, dword ptr [ebp + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x70
        // 0x587746FC: sub ecx, dword ptr [ebp + 0x6c]
        __asm _emit 0x2B
        __asm _emit 0x4D
        __asm _emit 0x6C
        // 0x587746FF: mov eax, 0xea0ea0eb
        __asm _emit 0xB8
        __asm _emit 0xEB
        __asm _emit 0xA0
        __asm _emit 0x0E
        __asm _emit 0xEA
        // 0x58774704: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58774706: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x58774708: sar edx, 8
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x5877470B: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5877470D: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58774710: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58774712: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58774715: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x58774717: jb 0x5877471e
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58774719: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877471E: mov ecx, dword ptr [ebp + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x6C
        // 0x58774721: lea edx, [ebx + ecx + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x0B
        __asm _emit 0x14
        // 0x58774725: push edx
        __asm _emit 0x52
        // 0x58774726: lea eax, [esp + 0x50]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x5877472A: push eax
        __asm _emit 0x50
        // 0x5877472B: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58774731: lea ecx, [esp + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x58774735: push ecx
        __asm _emit 0x51
        // 0x58774736: lea ecx, [ebp + 0x48]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x48
        // 0x58774739: call 0x58773950
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877473E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58774740: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774745: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x58774747: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58774749: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5877474B: push 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58774750: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x58774752: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58774754: call 0x58772160
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0xDA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58774759: push eax
        __asm _emit 0x50
        // 0x5877475A: call dword ptr [0x5898c180]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58774760: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58774762: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58774764: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58774766: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58774768: push esi
        __asm _emit 0x56
        // 0x58774769: call dword ptr [0x5898c164]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5877476F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58774771: lea edx, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58774775: push edx
        __asm _emit 0x52
        // 0x58774776: lea eax, [esp + 0x15c]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877477D: push eax
        __asm _emit 0x50
        // 0x5877477E: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58774784: mov edi, dword ptr [0x5898c1a0]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5877478A: push eax
        __asm _emit 0x50
        // 0x5877478B: lea ecx, [esp + 0x160]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774792: push ecx
        __asm _emit 0x51
        // 0x58774793: push esi
        __asm _emit 0x56
        // 0x58774794: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58774796: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58774798: lea edx, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5877479C: push edx
        __asm _emit 0x52
        // 0x5877479D: push 0x5898d040
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587747A2: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587747A8: push eax
        __asm _emit 0x50
        // 0x587747A9: push 0x5898d040
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587747AE: push esi
        __asm _emit 0x56
        // 0x587747AF: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587747B1: push esi
        __asm _emit 0x56
        // 0x587747B2: call dword ptr [0x5898c184]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587747B8: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587747BD: add dword ptr [esp + 0x20], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587747C1: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587747C5: jmp 0x587749a3
        __asm _emit 0xE9
        __asm _emit 0xD9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587747CA: mov ecx, dword ptr [ebp + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x70
        // 0x587747CD: sub ecx, dword ptr [ebp + 0x6c]
        __asm _emit 0x2B
        __asm _emit 0x4D
        __asm _emit 0x6C
        // 0x587747D0: mov eax, 0xea0ea0eb
        __asm _emit 0xB8
        __asm _emit 0xEB
        __asm _emit 0xA0
        __asm _emit 0x0E
        __asm _emit 0xEA
        // 0x587747D5: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587747D7: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x587747D9: sar edx, 8
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x587747DC: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587747DE: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587747E1: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587747E3: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x587747E5: jb 0x587747ec
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587747E7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587747EC: mov ecx, dword ptr [ebp + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x6C
        // 0x587747EF: cmp edi, dword ptr [ebx + ecx + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7C
        __asm _emit 0x0B
        __asm _emit 0x10
        // 0x587747F3: mov ecx, dword ptr [ebp + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x70
        // 0x587747F6: je 0x5877493e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587747FC: sub ecx, dword ptr [ebp + 0x6c]
        __asm _emit 0x2B
        __asm _emit 0x4D
        __asm _emit 0x6C
        // 0x587747FF: mov eax, 2
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774804: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58774808: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5877480C: mov eax, 0xea0ea0eb
        __asm _emit 0xB8
        __asm _emit 0xEB
        __asm _emit 0xA0
        __asm _emit 0x0E
        __asm _emit 0xEA
        // 0x58774811: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58774813: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x58774815: mov ecx, dword ptr [ebp + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x70
        // 0x58774818: sub ecx, dword ptr [ebp + 0x6c]
        __asm _emit 0x2B
        __asm _emit 0x4D
        __asm _emit 0x6C
        // 0x5877481B: sar edx, 8
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x5877481E: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58774820: shr edi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x1F
        // 0x58774823: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x58774825: mov eax, 0xea0ea0eb
        __asm _emit 0xB8
        __asm _emit 0xEB
        __asm _emit 0xA0
        __asm _emit 0x0E
        __asm _emit 0xEA
        // 0x5877482A: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5877482C: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x5877482E: sar edx, 8
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x58774831: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58774833: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58774836: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58774838: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x5877483A: jb 0x58774841
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5877483C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0x84
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58774841: mov ecx, dword ptr [ebp + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x6C
        // 0x58774844: push edi
        __asm _emit 0x57
        // 0x58774845: lea eax, [esi + 1]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x01
        // 0x58774848: push eax
        __asm _emit 0x50
        // 0x58774849: lea edx, [ecx + ebx + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x19
        __asm _emit 0x14
        // 0x5877484D: push edx
        __asm _emit 0x52
        // 0x5877484E: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58774852: lea eax, [esp + 0x160]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774859: push 0x589963f0
        __asm _emit 0x68
        __asm _emit 0xF0
        __asm _emit 0x63
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5877485E: push eax
        __asm _emit 0x50
        // 0x5877485F: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58774865: mov ecx, dword ptr [ebp + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x70
        // 0x58774868: sub ecx, dword ptr [ebp + 0x6c]
        __asm _emit 0x2B
        __asm _emit 0x4D
        __asm _emit 0x6C
        // 0x5877486B: mov eax, 0xea0ea0eb
        __asm _emit 0xB8
        __asm _emit 0xEB
        __asm _emit 0xA0
        __asm _emit 0x0E
        __asm _emit 0xEA
        // 0x58774870: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58774872: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x58774874: sar edx, 8
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x58774877: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58774879: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x5877487C: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5877487E: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58774881: cmp esi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF1
        // 0x58774883: jb 0x5877488a
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58774885: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877488A: mov edx, dword ptr [ebp + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x6C
        // 0x5877488D: lea eax, [ebx + edx + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x13
        __asm _emit 0x14
        // 0x58774891: push eax
        __asm _emit 0x50
        // 0x58774892: lea ecx, [esp + 0x50]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x58774896: push ecx
        __asm _emit 0x51
        // 0x58774897: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5877489D: lea edx, [esp + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x587748A1: push edx
        __asm _emit 0x52
        // 0x587748A2: lea ecx, [ebp + 0x48]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x48
        // 0x587748A5: mov dword ptr [esp + 0x154], 2
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587748B0: call 0x58773950
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587748B5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587748B7: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587748BC: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587748BE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587748C0: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587748C2: push 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587748C7: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x587748C9: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587748CB: call 0x58772160
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0xD8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587748D0: push eax
        __asm _emit 0x50
        // 0x587748D1: call dword ptr [0x5898c180]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587748D7: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587748D9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587748DB: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587748DD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587748DF: push esi
        __asm _emit 0x56
        // 0x587748E0: call dword ptr [0x5898c164]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587748E6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587748E8: lea eax, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587748EC: push eax
        __asm _emit 0x50
        // 0x587748ED: lea ecx, [esp + 0x15c]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587748F4: push ecx
        __asm _emit 0x51
        // 0x587748F5: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587748FB: mov edi, dword ptr [0x5898c1a0]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58774901: push eax
        __asm _emit 0x50
        // 0x58774902: lea edx, [esp + 0x160]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774909: push edx
        __asm _emit 0x52
        // 0x5877490A: push esi
        __asm _emit 0x56
        // 0x5877490B: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5877490D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877490F: lea eax, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58774913: push eax
        __asm _emit 0x50
        // 0x58774914: push 0x5898d040
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58774919: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5877491F: push eax
        __asm _emit 0x50
        // 0x58774920: push 0x5898d040
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58774925: push esi
        __asm _emit 0x56
        // 0x58774926: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58774928: push esi
        __asm _emit 0x56
        // 0x58774929: call dword ptr [0x5898c184]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5877492F: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774934: add dword ptr [esp + 0x18], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58774938: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5877493C: jmp 0x587749a3
        __asm _emit 0xEB
        __asm _emit 0x65
        // 0x5877493E: sub ecx, dword ptr [ebp + 0x6c]
        __asm _emit 0x2B
        __asm _emit 0x4D
        __asm _emit 0x6C
        // 0x58774941: mov eax, 0xea0ea0eb
        __asm _emit 0xB8
        __asm _emit 0xEB
        __asm _emit 0xA0
        __asm _emit 0x0E
        __asm _emit 0xEA
        // 0x58774946: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58774948: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x5877494A: mov ecx, dword ptr [ebp + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x70
        // 0x5877494D: sub ecx, dword ptr [ebp + 0x6c]
        __asm _emit 0x2B
        __asm _emit 0x4D
        __asm _emit 0x6C
        // 0x58774950: sar edx, 8
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x58774953: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58774955: shr edi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x1F
        // 0x58774958: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x5877495A: mov eax, 0xea0ea0eb
        __asm _emit 0xB8
        __asm _emit 0xEB
        __asm _emit 0xA0
        __asm _emit 0x0E
        __asm _emit 0xEA
        // 0x5877495F: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58774961: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x58774963: sar edx, 8
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x58774966: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58774968: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x5877496B: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5877496D: mov dword ptr [esp + 0x3c], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774975: cmp esi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF1
        // 0x58774977: jb 0x5877497e
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58774979: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0x82
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877497E: mov edx, dword ptr [ebp + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x6C
        // 0x58774981: push edi
        __asm _emit 0x57
        // 0x58774982: inc esi
        __asm _emit 0x46
        // 0x58774983: push esi
        __asm _emit 0x56
        // 0x58774984: lea eax, [ebx + edx + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x13
        __asm _emit 0x14
        // 0x58774988: push eax
        __asm _emit 0x50
        // 0x58774989: lea ecx, [esp + 0x160]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774990: push 0x589963dc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0x63
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58774995: push ecx
        __asm _emit 0x51
        // 0x58774996: mov dword ptr [esp + 0x30], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5877499A: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587749A0: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587749A3: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x587749A6: sub esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x1C
        // 0x587749A9: lea edx, [esp + 0x170]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587749B0: mov dword ptr [esp + 0x54], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x587749B4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587749B6: mov edi, esp
        __asm _emit 0x8B
        __asm _emit 0xFC
        // 0x587749B8: mov ecx, 7
        __asm _emit 0xB9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587749BD: lea esi, [esp + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x587749C1: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x587749C3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587749C5: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587749C7: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587749C9: mov ecx, dword ptr [ebp + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x70
        // 0x587749CC: sub ecx, dword ptr [ebp + 0x6c]
        __asm _emit 0x2B
        __asm _emit 0x4D
        __asm _emit 0x6C
        // 0x587749CF: mov esi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587749D3: mov eax, 0xea0ea0eb
        __asm _emit 0xB8
        __asm _emit 0xEB
        __asm _emit 0xA0
        __asm _emit 0x0E
        __asm _emit 0xEA
        // 0x587749D8: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587749DA: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x587749DC: sar edx, 8
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x587749DF: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587749E1: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587749E4: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587749E6: add ebx, 0x118
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587749EC: cmp esi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF1
        // 0x587749EE: jb 0x58774600
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x0C
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587749F4: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x587749F7: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587749F9: sub esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x1C
        // 0x587749FC: mov edi, esp
        __asm _emit 0x8B
        __asm _emit 0xFC
        // 0x587749FE: mov ecx, 7
        __asm _emit 0xB9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774A03: lea esi, [esp + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x58774A07: mov dword ptr [esp + 0x50], 8
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774A0F: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58774A11: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58774A13: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58774A15: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58774A17: push 0x32
        __asm _emit 0x6A
        __asm _emit 0x32
        // 0x58774A19: call dword ptr [0x5898c154]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58774A1F: cmp dword ptr [esp + 0x14], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58774A24: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x58774A27: lea esi, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58774A2B: jne 0x58774a37
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x58774A2D: mov dword ptr [esp + 0x34], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774A35: jmp 0x58774a50
        __asm _emit 0xEB
        __asm _emit 0x19
        // 0x58774A37: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58774A3B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58774A3D: cmp dword ptr [esp + 0x20], edx
        __asm _emit 0x39
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58774A41: mov dword ptr [esp + 0x34], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774A49: setle cl
        __asm _emit 0x0F
        __asm _emit 0x9E
        __asm _emit 0xC1
        // 0x58774A4C: inc ecx
        __asm _emit 0x41
        // 0x58774A4D: mov dword ptr [ebp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x58774A50: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58774A52: sub esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x1C
        // 0x58774A55: mov edi, esp
        __asm _emit 0x8B
        __asm _emit 0xFC
        // 0x58774A57: mov ecx, 7
        __asm _emit 0xB9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774A5C: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58774A5E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58774A60: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58774A62: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58774A64: mov ecx, dword ptr [esp + 0x2d8]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xD8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774A6B: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58774A6F: pop edi
        __asm _emit 0x5F
        // 0x58774A70: pop esi
        __asm _emit 0x5E
        // 0x58774A71: mov byte ptr [ebp + 0x14], 1
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x58774A75: pop ebp
        __asm _emit 0x5D
        // 0x58774A76: pop ebx
        __asm _emit 0x5B
        // 0x58774A77: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58774A79: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0x81
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58774A7E: add esp, 0x2cc
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774A84: ret
        __asm _emit 0xC3
    }
}
