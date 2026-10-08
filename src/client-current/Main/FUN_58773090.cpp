// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 695 bytes in 3 exact ranges.
// Source symbol alias: FUN_58773090.

// Ghidra body range 0x58773090..0x58773218; 392 mapped bytes.
extern "C" __declspec(naked) void FUN_58773090_segment_00() {
    __asm {
        // 0x58773090: push ebp
        __asm _emit 0x55
        // 0x58773091: lea ebp, [esp - 0x10c]
        __asm _emit 0x8D
        __asm _emit 0xAC
        __asm _emit 0x24
        __asm _emit 0xF4
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58773098: sub esp, 0x10c
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877309E: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587730A0: push 0x5897f0d0
        __asm _emit 0x68
        __asm _emit 0xD0
        __asm _emit 0xF0
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x587730A5: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587730AB: push eax
        __asm _emit 0x50
        // 0x587730AC: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x587730AF: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587730B4: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xC5
        // 0x587730B6: mov dword ptr [ebp + 0x108], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587730BC: push ebx
        __asm _emit 0x53
        // 0x587730BD: push esi
        __asm _emit 0x56
        // 0x587730BE: push edi
        __asm _emit 0x57
        // 0x587730BF: push eax
        __asm _emit 0x50
        // 0x587730C0: lea eax, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x587730C3: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587730C9: mov dword ptr [ebp - 0x10], esp
        __asm _emit 0x89
        __asm _emit 0x65
        __asm _emit 0xF0
        // 0x587730CC: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x587730CE: mov eax, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x0C
        // 0x587730D1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587730D3: jne 0x587730d9
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x587730D5: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587730D7: jmp 0x587730ef
        __asm _emit 0xEB
        __asm _emit 0x16
        // 0x587730D9: mov edx, dword ptr [ebx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x14
        // 0x587730DC: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x587730DE: mov eax, 0x3e0f83e1
        __asm _emit 0xB8
        __asm _emit 0xE1
        __asm _emit 0x83
        __asm _emit 0x0F
        __asm _emit 0x3E
        // 0x587730E3: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587730E5: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587730E8: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x587730EA: shr esi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x1F
        // 0x587730ED: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x587730EF: mov edi, dword ptr [ebp + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0xBD
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587730F5: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587730F7: je 0x58773338
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x3B
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587730FD: mov ecx, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x10
        // 0x58773100: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58773102: sub edx, dword ptr [ebx + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x53
        __asm _emit 0x0C
        // 0x58773105: mov eax, 0x3e0f83e1
        __asm _emit 0xB8
        __asm _emit 0xE1
        __asm _emit 0x83
        __asm _emit 0x0F
        __asm _emit 0x3E
        // 0x5877310A: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5877310C: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5877310F: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58773111: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58773114: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58773116: mov edx, 0xf83e0f
        __asm _emit 0xBA
        __asm _emit 0x0F
        __asm _emit 0x3E
        __asm _emit 0xF8
        __asm _emit 0x00
        // 0x5877311B: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5877311D: mov dword ptr [ebp - 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xEC
        // 0x58773120: cmp edx, edi
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x58773122: jae 0x58773129
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x58773124: call 0x588f6660
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x35
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x58773129: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5877312B: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x5877312D: jae 0x58773251
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0x1E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773133: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58773135: shr ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xE9
        // 0x58773137: mov edx, 0xf83e0f
        __asm _emit 0xBA
        __asm _emit 0x0F
        __asm _emit 0x3E
        __asm _emit 0xF8
        __asm _emit 0x00
        // 0x5877313C: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x5877313E: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x58773140: jae 0x58773146
        __asm _emit 0x73
        __asm _emit 0x04
        // 0x58773142: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58773144: jmp 0x58773148
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58773146: add esi, ecx
        __asm _emit 0x03
        __asm _emit 0xF1
        // 0x58773148: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x5877314A: jae 0x5877314e
        __asm _emit 0x73
        __asm _emit 0x02
        // 0x5877314C: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5877314E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58773150: push esi
        __asm _emit 0x56
        // 0x58773151: call 0x58772470
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58773156: mov edx, dword ptr [ebp + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877315C: sub edx, dword ptr [ebx + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x53
        __asm _emit 0x0C
        // 0x5877315F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58773161: mov eax, 0x3e0f83e1
        __asm _emit 0xB8
        __asm _emit 0xE1
        __asm _emit 0x83
        __asm _emit 0x0F
        __asm _emit 0x3E
        // 0x58773166: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58773168: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5877316B: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5877316D: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58773170: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58773172: mov edx, dword ptr [ebp + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773178: mov dword ptr [ebp - 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE8
        // 0x5877317B: imul eax, eax, 0x108
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773181: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58773184: push edx
        __asm _emit 0x52
        // 0x58773185: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x58773187: push edi
        __asm _emit 0x57
        // 0x58773188: mov dword ptr [ebp - 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xEC
        // 0x5877318B: push eax
        __asm _emit 0x50
        // 0x5877318C: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5877318E: mov dword ptr [ebp - 4], 0
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773195: call 0x58772cb0
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877319A: mov eax, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x0C
        // 0x5877319D: mov byte ptr [ebp - 0x1c], 0
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xE4
        __asm _emit 0x00
        // 0x587731A1: mov edx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xE4
        // 0x587731A4: push edx
        __asm _emit 0x52
        // 0x587731A5: mov edx, dword ptr [ebp - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xE8
        // 0x587731A8: push edx
        __asm _emit 0x52
        // 0x587731A9: mov edx, dword ptr [ebp + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587731AF: lea ecx, [ebx + 8]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x08
        // 0x587731B2: push ecx
        __asm _emit 0x51
        // 0x587731B3: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xEC
        // 0x587731B6: push ecx
        __asm _emit 0x51
        // 0x587731B7: push edx
        __asm _emit 0x52
        // 0x587731B8: push eax
        __asm _emit 0x50
        // 0x587731B9: call 0x58772900
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587731BE: mov eax, dword ptr [ebp - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xE8
        // 0x587731C1: mov ecx, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x10
        // 0x587731C4: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x587731C6: imul eax, eax, 0x108
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587731CC: add eax, dword ptr [ebp - 0x14]
        __asm _emit 0x03
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x587731CF: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x587731D2: mov byte ptr [ebp - 0x18], 0
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xE8
        __asm _emit 0x00
        // 0x587731D6: mov edx, dword ptr [ebp - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xE8
        // 0x587731D9: push edx
        __asm _emit 0x52
        // 0x587731DA: mov edx, dword ptr [ebp - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xE8
        // 0x587731DD: push edx
        __asm _emit 0x52
        // 0x587731DE: lea edx, [ebx + 8]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x08
        // 0x587731E1: push edx
        __asm _emit 0x52
        // 0x587731E2: push eax
        __asm _emit 0x50
        // 0x587731E3: mov eax, dword ptr [ebp + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587731E9: push ecx
        __asm _emit 0x51
        // 0x587731EA: push eax
        __asm _emit 0x50
        // 0x587731EB: call 0x58772900
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587731F0: mov ecx, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x0C
        // 0x587731F3: mov edx, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x10
        // 0x587731F6: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x587731F8: mov eax, 0x3e0f83e1
        __asm _emit 0xB8
        __asm _emit 0xE1
        __asm _emit 0x83
        __asm _emit 0x0F
        __asm _emit 0x3E
        // 0x587731FD: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587731FF: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58773202: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58773204: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58773207: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58773209: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5877320C: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x5877320E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58773210: je 0x5877321b
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58773212: push ecx
        __asm _emit 0x51
        // 0x58773213: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x9A
        __asm _emit 0x20
        __asm _emit 0x00
    }
}

// Ghidra body range 0x5877321B..0x5877323C; 33 mapped bytes.
extern "C" __declspec(naked) void FUN_58773090_segment_01() {
    __asm {
        // 0x5877321B: mov eax, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x5877321E: imul esi, esi, 0x108
        __asm _emit 0x69
        __asm _emit 0xF6
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773224: imul edi, edi, 0x108
        __asm _emit 0x69
        __asm _emit 0xFF
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877322A: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xF0
        // 0x5877322C: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x5877322E: mov dword ptr [ebx + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x73
        __asm _emit 0x14
        // 0x58773231: mov dword ptr [ebx + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7B
        __asm _emit 0x10
        // 0x58773234: mov dword ptr [ebx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x0C
        // 0x58773237: jmp 0x58773338
        __asm _emit 0xE9
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58773251..0x5877335F; 270 mapped bytes.
extern "C" __declspec(naked) void FUN_58773090_segment_02() {
    __asm {
        // 0x58773251: sub ecx, dword ptr [ebp + 0x118]
        __asm _emit 0x2B
        __asm _emit 0x8D
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773257: mov esi, dword ptr [ebp + 0x120]
        __asm _emit 0x8B
        __asm _emit 0xB5
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877325D: mov eax, 0x3e0f83e1
        __asm _emit 0xB8
        __asm _emit 0xE1
        __asm _emit 0x83
        __asm _emit 0x0F
        __asm _emit 0x3E
        // 0x58773262: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58773264: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58773267: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58773269: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5877326C: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5877326E: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58773270: mov ecx, 0x42
        __asm _emit 0xB9
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773275: lea edi, [ebp]
        __asm _emit 0x8D
        __asm _emit 0x7D
        __asm _emit 0x00
        // 0x58773278: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5877327A: jae 0x587732f1
        __asm _emit 0x73
        __asm _emit 0x75
        // 0x5877327C: mov edi, dword ptr [ebp + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0xBD
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773282: mov eax, dword ptr [ebp + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773288: mov edx, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xEC
        // 0x5877328B: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x5877328D: imul esi, esi, 0x108
        __asm _emit 0x69
        __asm _emit 0xF6
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773293: lea ecx, [esi + eax]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x06
        // 0x58773296: push ecx
        __asm _emit 0x51
        // 0x58773297: push edx
        __asm _emit 0x52
        // 0x58773298: push eax
        __asm _emit 0x50
        // 0x58773299: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5877329B: call 0x58772e50
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587732A0: mov ecx, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x10
        // 0x587732A3: sub ecx, dword ptr [ebp + 0x118]
        __asm _emit 0x2B
        __asm _emit 0x8D
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587732A9: lea eax, [ebp]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587732AC: push eax
        __asm _emit 0x50
        // 0x587732AD: mov eax, 0x3e0f83e1
        __asm _emit 0xB8
        __asm _emit 0xE1
        __asm _emit 0x83
        __asm _emit 0x0F
        __asm _emit 0x3E
        // 0x587732B2: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587732B4: mov eax, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x10
        // 0x587732B7: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587732BA: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587732BC: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587732BF: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587732C1: sub edi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF9
        // 0x587732C3: push edi
        __asm _emit 0x57
        // 0x587732C4: push eax
        __asm _emit 0x50
        // 0x587732C5: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587732C7: mov dword ptr [ebp - 4], 2
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587732CE: call 0x58772cb0
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587732D3: add dword ptr [ebx + 0x10], esi
        __asm _emit 0x01
        __asm _emit 0x73
        __asm _emit 0x10
        // 0x587732D6: mov ebx, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5B
        __asm _emit 0x10
        // 0x587732D9: mov eax, dword ptr [ebp + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587732DF: lea edx, [ebp]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x587732E2: push edx
        __asm _emit 0x52
        // 0x587732E3: sub ebx, esi
        __asm _emit 0x2B
        __asm _emit 0xDE
        // 0x587732E5: push ebx
        __asm _emit 0x53
        // 0x587732E6: push eax
        __asm _emit 0x50
        // 0x587732E7: call 0x587728a0
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587732EC: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587732EF: jmp 0x58773338
        __asm _emit 0xEB
        __asm _emit 0x47
        // 0x587732F1: mov esi, dword ptr [ebp + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0xB5
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587732F7: mov eax, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x587732FA: imul esi, esi, 0x108
        __asm _emit 0x69
        __asm _emit 0xF6
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773300: push eax
        __asm _emit 0x50
        // 0x58773301: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58773303: push eax
        __asm _emit 0x50
        // 0x58773304: sub edi, esi
        __asm _emit 0x2B
        __asm _emit 0xFE
        // 0x58773306: push edi
        __asm _emit 0x57
        // 0x58773307: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58773309: call 0x58772e50
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877330E: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xEC
        // 0x58773311: mov edx, dword ptr [ebp + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773317: push ecx
        __asm _emit 0x51
        // 0x58773318: push edi
        __asm _emit 0x57
        // 0x58773319: push edx
        __asm _emit 0x52
        // 0x5877331A: mov dword ptr [ebx + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x10
        // 0x5877331D: call 0x58772b10
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58773322: lea eax, [ebp]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58773325: push eax
        __asm _emit 0x50
        // 0x58773326: mov eax, dword ptr [ebp + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877332C: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xF0
        // 0x5877332E: push esi
        __asm _emit 0x56
        // 0x5877332F: push eax
        __asm _emit 0x50
        // 0x58773330: call 0x587728a0
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58773335: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58773338: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x5877333B: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773342: pop ecx
        __asm _emit 0x59
        // 0x58773343: pop edi
        __asm _emit 0x5F
        // 0x58773344: pop esi
        __asm _emit 0x5E
        // 0x58773345: pop ebx
        __asm _emit 0x5B
        // 0x58773346: mov ecx, dword ptr [ebp + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877334C: xor ecx, ebp
        __asm _emit 0x33
        __asm _emit 0xCD
        // 0x5877334E: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0x98
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58773353: add ebp, 0x10c
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773359: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5877335B: pop ebp
        __asm _emit 0x5D
        // 0x5877335C: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
