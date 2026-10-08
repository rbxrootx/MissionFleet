// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 448 bytes in 1 exact ranges.
// Source symbol alias: FUN_587743e0.

// Ghidra body range 0x587743E0..0x587745A0; 448 mapped bytes.
extern "C" __declspec(naked) void FUN_587743e0_segment_00() {
    __asm {
        // 0x587743E0: push ebp
        __asm _emit 0x55
        // 0x587743E1: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x587743E3: and esp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xF8
        // 0x587743E6: sub esp, 0x154
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587743EC: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587743F1: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587743F3: mov dword ptr [esp + 0x150], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587743FA: push ebx
        __asm _emit 0x53
        // 0x587743FB: push esi
        __asm _emit 0x56
        // 0x587743FC: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x587743FE: mov eax, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x0C
        // 0x58774401: push edi
        __asm _emit 0x57
        // 0x58774402: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58774404: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58774408: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5877440C: test eax, 0x40000
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58774411: jne 0x58774465
        __asm _emit 0x75
        __asm _emit 0x52
        // 0x58774413: test eax, 0x80000
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58774418: je 0x58774465
        __asm _emit 0x74
        __asm _emit 0x4B
        // 0x5877441A: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5877441E: push eax
        __asm _emit 0x50
        // 0x5877441F: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58774421: call 0x58772160
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0xDD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58774426: push eax
        __asm _emit 0x50
        // 0x58774427: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5877442B: push ecx
        __asm _emit 0x51
        // 0x5877442C: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5877442E: call 0x58771f70
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0xDB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58774433: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58774435: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58774439: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x5877443B: je 0x58774465
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5877443D: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58774441: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58774443: je 0x5877444e
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58774445: push eax
        __asm _emit 0x50
        // 0x58774446: call 0x5897ce26
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0x89
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877444B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5877444E: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58774450: pop edi
        __asm _emit 0x5F
        // 0x58774451: pop esi
        __asm _emit 0x5E
        // 0x58774452: pop ebx
        __asm _emit 0x5B
        // 0x58774453: mov ecx, dword ptr [esp + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877445A: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5877445C: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x87
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58774461: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58774463: pop ebp
        __asm _emit 0x5D
        // 0x58774464: ret
        __asm _emit 0xC3
        // 0x58774465: cmp dword ptr [esp + 0x18], edi
        __asm _emit 0x39
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58774469: je 0x58774471
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5877446B: cmp dword ptr [esp + 0x10], edi
        __asm _emit 0x39
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5877446F: jne 0x587744ae
        __asm _emit 0x75
        __asm _emit 0x3D
        // 0x58774471: mov eax, 8
        __asm _emit 0xB8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774476: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58774478: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5877447A: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5877447E: mov dword ptr [esp + 0x2c], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774486: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5877448A: call 0x58772160
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0xDC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877448F: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58774493: mov eax, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x58774496: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58774498: sub esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x1C
        // 0x5877449B: mov edi, esp
        __asm _emit 0x8B
        __asm _emit 0xFC
        // 0x5877449D: mov ecx, 7
        __asm _emit 0xB9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587744A2: lea esi, [esp + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587744A6: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x587744A8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587744AA: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587744AC: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587744AE: mov edi, dword ptr [ebx + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x7B
        __asm _emit 0x70
        // 0x587744B1: add ebx, 0x60
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x60
        // 0x587744B4: cmp dword ptr [ebx + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7B
        __asm _emit 0x0C
        // 0x587744B7: jbe 0x587744be
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587744B9: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0x87
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587744BE: mov esi, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x73
        __asm _emit 0x0C
        // 0x587744C1: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x587744C3: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587744C7: cmp esi, dword ptr [ebx + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x73
        __asm _emit 0x10
        // 0x587744CA: jbe 0x587744d1
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587744CC: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0x87
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587744D1: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587744D5: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587744D7: push edi
        __asm _emit 0x57
        // 0x587744D8: push edx
        __asm _emit 0x52
        // 0x587744D9: push esi
        __asm _emit 0x56
        // 0x587744DA: push eax
        __asm _emit 0x50
        // 0x587744DB: lea eax, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587744DF: push eax
        __asm _emit 0x50
        // 0x587744E0: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587744E2: call 0x58772dc0
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587744E7: cmp dword ptr [esp + 0x14], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587744EC: jne 0x58774576
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587744F2: mov ecx, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x10
        // 0x587744F5: sub ecx, dword ptr [ebx + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x4B
        __asm _emit 0x0C
        // 0x587744F8: mov eax, 0xea0ea0eb
        __asm _emit 0xB8
        __asm _emit 0xEB
        __asm _emit 0xA0
        __asm _emit 0x0E
        __asm _emit 0xEA
        // 0x587744FD: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587744FF: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x58774501: sar edx, 8
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x58774504: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58774506: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x58774509: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5877450B: imul ecx, ecx, 0x118
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774511: cmp ecx, dword ptr [esp + 0x18]
        __asm _emit 0x3B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58774515: jae 0x58774576
        __asm _emit 0x73
        __asm _emit 0x5F
        // 0x58774517: mov ecx, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x10
        // 0x5877451A: sub ecx, dword ptr [ebx + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x4B
        __asm _emit 0x0C
        // 0x5877451D: mov eax, 0xea0ea0eb
        __asm _emit 0xB8
        __asm _emit 0xEB
        __asm _emit 0xA0
        __asm _emit 0x0E
        __asm _emit 0xEA
        // 0x58774522: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58774524: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x58774526: sar edx, 8
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x58774529: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x5877452B: shr esi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x1F
        // 0x5877452E: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x58774530: imul esi, esi, 0x118
        __asm _emit 0x69
        __asm _emit 0xF6
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774536: add esi, dword ptr [esp + 0x10]
        __asm _emit 0x03
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5877453A: mov ecx, 0x46
        __asm _emit 0xB9
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877453F: lea edi, [esp + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58774543: lea edx, [esp + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58774547: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58774549: push edx
        __asm _emit 0x52
        // 0x5877454A: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5877454C: call 0x58773a00
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58774551: mov ecx, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x10
        // 0x58774554: sub ecx, dword ptr [ebx + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x4B
        __asm _emit 0x0C
        // 0x58774557: mov eax, 0xea0ea0eb
        __asm _emit 0xB8
        __asm _emit 0xEB
        __asm _emit 0xA0
        __asm _emit 0x0E
        __asm _emit 0xEA
        // 0x5877455C: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5877455E: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x58774560: sar edx, 8
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x58774563: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58774565: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58774568: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5877456A: imul eax, eax, 0x118
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774570: cmp eax, dword ptr [esp + 0x18]
        __asm _emit 0x3B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58774574: jb 0x58774517
        __asm _emit 0x72
        __asm _emit 0xA1
        // 0x58774576: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5877457A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877457C: je 0x58774587
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5877457E: push eax
        __asm _emit 0x50
        // 0x5877457F: call 0x5897ce26
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0x88
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58774584: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58774587: mov ecx, dword ptr [esp + 0x15c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877458E: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58774592: pop edi
        __asm _emit 0x5F
        // 0x58774593: pop esi
        __asm _emit 0x5E
        // 0x58774594: pop ebx
        __asm _emit 0x5B
        // 0x58774595: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58774597: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877459C: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5877459E: pop ebp
        __asm _emit 0x5D
        // 0x5877459F: ret
        __asm _emit 0xC3
    }
}
