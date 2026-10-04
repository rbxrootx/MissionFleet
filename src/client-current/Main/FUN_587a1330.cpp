// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A1330 .. +0xA5 bytes.
// Source symbol alias: FUN_587a1330.
extern "C" __declspec(naked) void FUN_587a1330() {
    __asm {
        // 0x587A1330: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587A1334: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x587A1337: push ebx
        __asm _emit 0x53
        // 0x587A1338: push edi
        __asm _emit 0x57
        // 0x587A1339: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587A133B: mov ecx, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x587A133E: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587A1341: cmp byte ptr [eax + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A1345: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x587A1347: jne 0x587a1364
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x587A1349: mov ecx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x0A
        // 0x587A134B: jmp 0x587a1350
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x587A134D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587A1350: cmp dword ptr [eax + 0xc], ecx
        __asm _emit 0x39
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x587A1353: jge 0x587a135a
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x587A1355: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x587A1358: jmp 0x587a135e
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587A135A: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587A135C: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587A135E: cmp byte ptr [eax + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A1362: je 0x587a1350
        __asm _emit 0x74
        __asm _emit 0xEC
        // 0x587A1364: mov eax, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x587A1367: push esi
        __asm _emit 0x56
        // 0x587A1368: mov esi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x37
        // 0x587A136A: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A136E: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587A1370: je 0x587a1376
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587A1372: cmp esi, esi
        __asm _emit 0x3B
        __asm _emit 0xF6
        // 0x587A1374: je 0x587a137f
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587A1376: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0xB8
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A137B: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587A137F: cmp ebx, dword ptr [esp + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A1383: je 0x587a138c
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587A1385: mov ecx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x0A
        // 0x587A1387: cmp ecx, dword ptr [ebx + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x4B
        __asm _emit 0x0C
        // 0x587A138A: jge 0x587a13b2
        __asm _emit 0x7D
        __asm _emit 0x26
        // 0x587A138C: mov edx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x12
        // 0x587A138E: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587A1392: push eax
        __asm _emit 0x50
        // 0x587A1393: push ebx
        __asm _emit 0x53
        // 0x587A1394: push esi
        __asm _emit 0x56
        // 0x587A1395: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587A1399: push ecx
        __asm _emit 0x51
        // 0x587A139A: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587A139C: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A13A0: mov dword ptr [esp + 0x20], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A13A8: call 0x587a1160
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A13AD: mov esi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x30
        // 0x587A13AF: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x587A13B2: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587A13B4: jne 0x587a13d1
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x587A13B6: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0xB8
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A13BB: cmp ebx, dword ptr [esi + 0x18]
        __asm _emit 0x3B
        __asm _emit 0x5E
        __asm _emit 0x18
        // 0x587A13BE: pop esi
        __asm _emit 0x5E
        // 0x587A13BF: jne 0x587a13c6
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587A13C1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0xB8
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A13C6: pop edi
        __asm _emit 0x5F
        // 0x587A13C7: lea eax, [ebx + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x43
        __asm _emit 0x10
        // 0x587A13CA: pop ebx
        __asm _emit 0x5B
        // 0x587A13CB: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587A13CE: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A13D1: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587A13D3: jmp 0x587a13bb
        __asm _emit 0xEB
        __asm _emit 0xE6
    }
}
