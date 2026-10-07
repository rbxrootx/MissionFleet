// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588A1110 .. +0xC3 bytes.
// Source symbol alias: FUN_588a1110.
extern "C" __declspec(naked) void FUN_588a1110() {
    __asm {
        // 0x588A1110: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A1115: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x588A1118: push esi
        __asm _emit 0x56
        // 0x588A1119: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588A111B: mov ecx, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A1121: sub eax, dword ptr [ecx + 4]
        __asm _emit 0x2B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x588A1124: mov edx, 1
        __asm _emit 0xBA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A1129: push edi
        __asm _emit 0x57
        // 0x588A112A: cmp dword ptr [esp + 0xc], edx
        __asm _emit 0x39
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588A112E: je 0x588a1135
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588A1130: cmp eax, 0xd
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0D
        // 0x588A1133: jge 0x588a1143
        __asm _emit 0x7D
        __asm _emit 0x0E
        // 0x588A1135: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588A1137: mov dword ptr [esi + 0xfc], 0x19
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A1141: jmp 0x588a11a6
        __asm _emit 0xEB
        __asm _emit 0x63
        // 0x588A1143: cmp eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x20
        // 0x588A1146: jge 0x588a1159
        __asm _emit 0x7D
        __asm _emit 0x11
        // 0x588A1148: mov edi, 0x13
        __asm _emit 0xBF
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A114D: mov dword ptr [esi + 0xfc], 0x10
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A1157: jmp 0x588a11a6
        __asm _emit 0xEB
        __asm _emit 0x4D
        // 0x588A1159: cmp eax, 0x33
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x33
        // 0x588A115C: jge 0x588a116f
        __asm _emit 0x7D
        __asm _emit 0x11
        // 0x588A115E: mov edi, 0x26
        __asm _emit 0xBF
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A1163: mov dword ptr [esi + 0xfc], 9
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A116D: jmp 0x588a11a6
        __asm _emit 0xEB
        __asm _emit 0x37
        // 0x588A116F: cmp eax, 0x46
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x46
        // 0x588A1172: jge 0x588a1185
        __asm _emit 0x7D
        __asm _emit 0x11
        // 0x588A1174: mov edi, 0x39
        __asm _emit 0xBF
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A1179: mov dword ptr [esi + 0xfc], 4
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A1183: jmp 0x588a11a6
        __asm _emit 0xEB
        __asm _emit 0x21
        // 0x588A1185: cmp eax, 0x59
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x59
        // 0x588A1188: jge 0x588a1197
        __asm _emit 0x7D
        __asm _emit 0x0D
        // 0x588A118A: mov edi, 0x4c
        __asm _emit 0xBF
        __asm _emit 0x4C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A118F: mov dword ptr [esi + 0xfc], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A1195: jmp 0x588a11a6
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x588A1197: mov edi, 0x5f
        __asm _emit 0xBF
        __asm _emit 0x5F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A119C: mov dword ptr [esi + 0xfc], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A11A6: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x588A11A9: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xCF
        // 0x588A11AB: push ecx
        __asm _emit 0x51
        // 0x588A11AC: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A11B2: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0x21
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x588A11B7: mov edx, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A11BD: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588A11C0: mov ecx, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A11C6: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x588A11C8: push eax
        __asm _emit 0x50
        // 0x588A11C9: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x21
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x588A11CE: pop edi
        __asm _emit 0x5F
        // 0x588A11CF: pop esi
        __asm _emit 0x5E
        // 0x588A11D0: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
