// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588A11E0 .. +0xC3 bytes.
// Source symbol alias: FUN_588a11e0.
extern "C" __declspec(naked) void FUN_588a11e0() {
    __asm {
        // 0x588A11E0: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A11E5: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x588A11E8: push esi
        __asm _emit 0x56
        // 0x588A11E9: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588A11EB: mov ecx, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A11F1: sub eax, dword ptr [ecx + 4]
        __asm _emit 0x2B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x588A11F4: mov edx, 1
        __asm _emit 0xBA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A11F9: push edi
        __asm _emit 0x57
        // 0x588A11FA: cmp dword ptr [esp + 0xc], edx
        __asm _emit 0x39
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588A11FE: je 0x588a1205
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588A1200: cmp eax, 0xd
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0D
        // 0x588A1203: jge 0x588a1213
        __asm _emit 0x7D
        __asm _emit 0x0E
        // 0x588A1205: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588A1207: mov dword ptr [esi + 0x100], 0x19
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A1211: jmp 0x588a1276
        __asm _emit 0xEB
        __asm _emit 0x63
        // 0x588A1213: cmp eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x20
        // 0x588A1216: jge 0x588a1229
        __asm _emit 0x7D
        __asm _emit 0x11
        // 0x588A1218: mov edi, 0x13
        __asm _emit 0xBF
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A121D: mov dword ptr [esi + 0x100], 0x10
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A1227: jmp 0x588a1276
        __asm _emit 0xEB
        __asm _emit 0x4D
        // 0x588A1229: cmp eax, 0x33
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x33
        // 0x588A122C: jge 0x588a123f
        __asm _emit 0x7D
        __asm _emit 0x11
        // 0x588A122E: mov edi, 0x26
        __asm _emit 0xBF
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A1233: mov dword ptr [esi + 0x100], 9
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A123D: jmp 0x588a1276
        __asm _emit 0xEB
        __asm _emit 0x37
        // 0x588A123F: cmp eax, 0x46
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x46
        // 0x588A1242: jge 0x588a1255
        __asm _emit 0x7D
        __asm _emit 0x11
        // 0x588A1244: mov edi, 0x39
        __asm _emit 0xBF
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A1249: mov dword ptr [esi + 0x100], 4
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A1253: jmp 0x588a1276
        __asm _emit 0xEB
        __asm _emit 0x21
        // 0x588A1255: cmp eax, 0x59
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x59
        // 0x588A1258: jge 0x588a1267
        __asm _emit 0x7D
        __asm _emit 0x0D
        // 0x588A125A: mov edi, 0x4c
        __asm _emit 0xBF
        __asm _emit 0x4C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A125F: mov dword ptr [esi + 0x100], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A1265: jmp 0x588a1276
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x588A1267: mov edi, 0x5f
        __asm _emit 0xBF
        __asm _emit 0x5F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A126C: mov dword ptr [esi + 0x100], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A1276: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x588A1279: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xCF
        // 0x588A127B: push ecx
        __asm _emit 0x51
        // 0x588A127C: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A1282: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x588A1287: mov edx, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A128D: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588A1290: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A1296: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x588A1298: push eax
        __asm _emit 0x50
        // 0x588A1299: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x588A129E: pop edi
        __asm _emit 0x5F
        // 0x588A129F: pop esi
        __asm _emit 0x5E
        // 0x588A12A0: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
