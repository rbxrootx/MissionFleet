// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 837 bytes in 1 exact ranges.
// Source symbol alias: FUN_5876c360.

// Ghidra body range 0x5876C360..0x5876C6A5; 837 mapped bytes.
extern "C" __declspec(naked) void FUN_5876c360_segment_00() {
    __asm {
        // 0x5876C360: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x5876C363: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876C367: sub ecx, dword ptr [esp + 0x20]
        __asm _emit 0x2B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5876C36B: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5876C370: imul ecx, ecx, 0xc8
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876C376: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5876C378: push ebx
        __asm _emit 0x53
        // 0x5876C379: push ebp
        __asm _emit 0x55
        // 0x5876C37A: mov ebp, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876C37E: sub ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x2B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5876C382: push esi
        __asm _emit 0x56
        // 0x5876C383: push edi
        __asm _emit 0x57
        // 0x5876C384: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5876C387: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x5876C389: shr edi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x1F
        // 0x5876C38C: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x5876C38E: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x5876C390: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x5876C392: imul eax, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC7
        // 0x5876C395: imul ecx, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCD
        // 0x5876C398: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x5876C39A: push eax
        __asm _emit 0x50
        // 0x5876C39B: call 0x5876bee0
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5876C3A0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5876C3A2: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5876C3A7: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5876C3A9: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5876C3AC: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5876C3AE: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x5876C3B1: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5876C3B3: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5876C3B6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5876C3B8: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5876C3BC: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876C3C0: mov ebx, 0x5f5e100
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0xE1
        __asm _emit 0xF5
        __asm _emit 0x05
        // 0x5876C3C5: mov dword ptr [esp + 0x2c], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876C3CD: mov esi, 0x58a0b500
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0xB5
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5876C3D2: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x5876C3D4: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5876C3D6: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x5876C3D8: sub eax, dword ptr [esp + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876C3DC: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876C3E0: imul eax, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC0
        // 0x5876C3E3: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876C3E7: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C3E9: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x5876C3EC: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876C3F0: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C3F2: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x5876C3F4: jle 0x5876c403
        __asm _emit 0x7E
        __asm _emit 0x0D
        // 0x5876C3F6: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5876C3F8: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5876C3FC: add eax, -2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xFE
        // 0x5876C3FF: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5876C403: mov eax, dword ptr [esi + 0x3818]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876C409: mov edx, dword ptr [esi - 0x28]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0xD8
        // 0x5876C40C: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x5876C40F: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876C413: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5876C415: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5876C41A: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5876C41C: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5876C41F: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C421: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5876C424: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C426: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876C42A: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876C42E: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x5876C431: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5876C433: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5876C438: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5876C43A: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5876C43D: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C43F: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5876C442: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C444: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x5876C446: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5876C448: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x5876C44A: sub eax, dword ptr [esp + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876C44E: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876C452: imul eax, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC0
        // 0x5876C455: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876C459: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C45B: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x5876C45E: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876C462: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C464: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x5876C466: jle 0x5876c473
        __asm _emit 0x7E
        __asm _emit 0x0B
        // 0x5876C468: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5876C46A: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5876C46E: dec eax
        __asm _emit 0x48
        // 0x5876C46F: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5876C473: mov eax, dword ptr [esi + 0x3840]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876C479: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5876C47B: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x5876C47E: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876C482: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5876C484: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5876C489: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5876C48B: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5876C48E: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C490: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5876C493: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C495: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876C499: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876C49D: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x5876C4A0: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5876C4A2: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5876C4A7: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5876C4A9: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5876C4AC: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C4AE: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5876C4B1: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C4B3: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x5876C4B5: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5876C4B7: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x5876C4B9: sub eax, dword ptr [esp + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876C4BD: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876C4C1: imul eax, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC0
        // 0x5876C4C4: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876C4C8: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C4CA: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x5876C4CD: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876C4D1: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C4D3: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x5876C4D5: jle 0x5876c4e1
        __asm _emit 0x7E
        __asm _emit 0x0A
        // 0x5876C4D7: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5876C4D9: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5876C4DD: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5876C4E1: mov eax, dword ptr [esi + 0x3868]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876C4E7: mov edx, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x28
        // 0x5876C4EA: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x5876C4ED: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876C4F1: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5876C4F3: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5876C4F8: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5876C4FA: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5876C4FD: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C4FF: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5876C502: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C504: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876C508: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876C50C: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x5876C50F: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5876C511: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5876C516: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5876C518: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5876C51B: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C51D: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5876C520: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C522: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x5876C524: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5876C526: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x5876C528: sub eax, dword ptr [esp + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876C52C: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876C530: imul eax, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC0
        // 0x5876C533: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876C537: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C539: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x5876C53C: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876C540: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C542: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x5876C544: jle 0x5876c551
        __asm _emit 0x7E
        __asm _emit 0x0B
        // 0x5876C546: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5876C548: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5876C54C: inc eax
        __asm _emit 0x40
        // 0x5876C54D: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5876C551: mov eax, dword ptr [esi + 0x3890]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876C557: mov edx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x50
        // 0x5876C55A: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x5876C55D: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876C561: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5876C563: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5876C568: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5876C56A: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5876C56D: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C56F: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5876C572: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C574: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876C578: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876C57C: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x5876C57F: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5876C581: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5876C586: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5876C588: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5876C58B: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C58D: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5876C590: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C592: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x5876C594: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5876C596: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x5876C598: sub eax, dword ptr [esp + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876C59C: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876C5A0: imul eax, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC0
        // 0x5876C5A3: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876C5A7: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C5A9: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x5876C5AC: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876C5B0: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C5B2: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x5876C5B4: jle 0x5876c5c3
        __asm _emit 0x7E
        __asm _emit 0x0D
        // 0x5876C5B6: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5876C5B8: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5876C5BC: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x5876C5BF: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5876C5C3: mov eax, dword ptr [esi + 0x38b8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876C5C9: mov edx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x78
        // 0x5876C5CC: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x5876C5CF: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876C5D3: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5876C5D5: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5876C5DA: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5876C5DC: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5876C5DF: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C5E1: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5876C5E4: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C5E6: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876C5EA: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876C5EE: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x5876C5F1: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5876C5F3: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5876C5F8: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5876C5FA: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5876C5FD: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C5FF: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5876C602: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C604: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x5876C606: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5876C608: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x5876C60A: sub eax, dword ptr [esp + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876C60E: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876C612: imul eax, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC0
        // 0x5876C615: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876C619: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C61B: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x5876C61E: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876C622: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C624: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x5876C626: jle 0x5876c635
        __asm _emit 0x7E
        __asm _emit 0x0D
        // 0x5876C628: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5876C62A: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5876C62E: add eax, 3
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x03
        // 0x5876C631: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5876C635: mov eax, dword ptr [esi + 0x38e0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876C63B: mov edx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876C641: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x5876C644: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876C648: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5876C64A: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5876C64F: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5876C651: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5876C654: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C656: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5876C659: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C65B: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876C65F: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876C663: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x5876C666: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5876C668: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5876C66D: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5876C66F: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5876C672: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C674: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5876C677: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C679: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5876C67D: add edx, 6
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x06
        // 0x5876C680: mov dword ptr [esp + 0x2c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5876C684: add edx, -2
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0xFE
        // 0x5876C687: add esi, 0xf0
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876C68D: cmp edx, 0x168
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876C693: jl 0x5876c3d2
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x39
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5876C699: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5876C69D: pop edi
        __asm _emit 0x5F
        // 0x5876C69E: pop esi
        __asm _emit 0x5E
        // 0x5876C69F: pop ebp
        __asm _emit 0x5D
        // 0x5876C6A0: pop ebx
        __asm _emit 0x5B
        // 0x5876C6A1: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5876C6A4: ret
        __asm _emit 0xC3
    }
}
