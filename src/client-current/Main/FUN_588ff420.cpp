// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 270 bytes in 1 exact ranges.
// Source symbol alias: FUN_588ff420.

// Ghidra body range 0x588FF420..0x588FF52E; 270 mapped bytes.
extern "C" __declspec(naked) void FUN_588ff420_segment_00() {
    __asm {
        // 0x588FF420: push ebp
        __asm _emit 0x55
        // 0x588FF421: mov ebp, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588FF425: push esi
        __asm _emit 0x56
        // 0x588FF426: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FF428: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF42E: push edi
        __asm _emit 0x57
        // 0x588FF42F: mov dword ptr [eax + 0x6c], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x6C
        // 0x588FF432: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x588FF435: push ebp
        __asm _emit 0x55
        // 0x588FF436: call 0x588fb510
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0xC0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF43B: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588FF43E: sub ecx, dword ptr [esi + 0x70]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588FF441: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588FF443: sar ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x588FF446: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588FF448: jbe 0x588ff528
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0xDA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF44E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588FF450: mov edx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x74
        // 0x588FF453: sub edx, dword ptr [esi + 0x70]
        __asm _emit 0x2B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x588FF456: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588FF459: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x588FF45B: jb 0x588ff462
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588FF45D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0xD8
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FF462: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588FF465: mov ecx, dword ptr [eax + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xB8
        // 0x588FF468: movzx edx, byte ptr [ecx + 0x6a]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x51
        __asm _emit 0x6A
        // 0x588FF46C: cmp edx, dword ptr [esi + 0x88]
        __asm _emit 0x3B
        __asm _emit 0x96
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF472: jne 0x588ff516
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF478: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x588FF47A: sub eax, 0
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x00
        // 0x588FF47D: je 0x588ff4f7
        __asm _emit 0x74
        __asm _emit 0x78
        // 0x588FF47F: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x588FF482: je 0x588ff4a3
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x588FF484: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x588FF487: jne 0x588ff516
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF48D: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588FF490: sub eax, dword ptr [esi + 0x70]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588FF493: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588FF496: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588FF498: jb 0x588ff49f
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588FF49A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0xD7
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FF49F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FF4A1: jmp 0x588ff50b
        __asm _emit 0xEB
        __asm _emit 0x68
        // 0x588FF4A3: mov edx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x74
        // 0x588FF4A6: sub edx, dword ptr [esi + 0x70]
        __asm _emit 0x2B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x588FF4A9: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588FF4AC: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x588FF4AE: jb 0x588ff4b5
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588FF4B0: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0xD7
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FF4B5: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588FF4B8: mov ecx, dword ptr [eax + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xB8
        // 0x588FF4BB: cmp byte ptr [ecx + 0x6b], 0xc
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x6B
        __asm _emit 0x0C
        // 0x588FF4BF: jbe 0x588ff4dc
        __asm _emit 0x76
        __asm _emit 0x1B
        // 0x588FF4C1: mov edx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x74
        // 0x588FF4C4: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x588FF4C6: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588FF4C9: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x588FF4CB: jb 0x588ff4d2
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588FF4CD: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0xD7
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FF4D2: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588FF4D5: mov ecx, dword ptr [eax + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xB8
        // 0x588FF4D8: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588FF4DA: jmp 0x588ff511
        __asm _emit 0xEB
        __asm _emit 0x35
        // 0x588FF4DC: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588FF4DF: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x588FF4E1: sar ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x588FF4E4: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x588FF4E6: jb 0x588ff4ed
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588FF4E8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0xD7
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FF4ED: mov edx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x588FF4F0: mov ecx, dword ptr [edx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xBA
        // 0x588FF4F3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FF4F5: jmp 0x588ff511
        __asm _emit 0xEB
        __asm _emit 0x1A
        // 0x588FF4F7: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588FF4FA: sub eax, dword ptr [esi + 0x70]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588FF4FD: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588FF500: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588FF502: jb 0x588ff509
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588FF504: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0xD7
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FF509: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588FF50B: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588FF50E: mov ecx, dword ptr [ecx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xB9
        // 0x588FF511: call 0x588f7d00
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0x87
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF516: mov edx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x74
        // 0x588FF519: sub edx, dword ptr [esi + 0x70]
        __asm _emit 0x2B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x588FF51C: inc edi
        __asm _emit 0x47
        // 0x588FF51D: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588FF520: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x588FF522: jb 0x588ff450
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x28
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF528: pop edi
        __asm _emit 0x5F
        // 0x588FF529: pop esi
        __asm _emit 0x5E
        // 0x588FF52A: pop ebp
        __asm _emit 0x5D
        // 0x588FF52B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
