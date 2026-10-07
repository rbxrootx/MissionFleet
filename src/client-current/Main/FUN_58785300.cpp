// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1422 bytes in 2 exact ranges.
// Source symbol alias: FUN_58785300.

// Ghidra body range 0x58785300..0x587855FD; 765 mapped bytes.
extern "C" __declspec(naked) void FUN_58785300_segment_00() {
    __asm {
        // 0x58785300: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58785302: push 0x5897f9a4
        __asm _emit 0x68
        __asm _emit 0xA4
        __asm _emit 0xF9
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58785307: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878530D: push eax
        __asm _emit 0x50
        // 0x5878530E: push ecx
        __asm _emit 0x51
        // 0x5878530F: push ebx
        __asm _emit 0x53
        // 0x58785310: push ebp
        __asm _emit 0x55
        // 0x58785311: push esi
        __asm _emit 0x56
        // 0x58785312: push edi
        __asm _emit 0x57
        // 0x58785313: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58785318: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5878531A: push eax
        __asm _emit 0x50
        // 0x5878531B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5878531F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58785325: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58785327: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5878532B: mov edi, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5878532F: mov ebp, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58785333: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58785337: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58785339: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5878533B: push ebx
        __asm _emit 0x53
        // 0x5878533C: push ebx
        __asm _emit 0x53
        // 0x5878533D: push edi
        __asm _emit 0x57
        // 0x5878533E: push ebp
        __asm _emit 0x55
        // 0x5878533F: push eax
        __asm _emit 0x50
        // 0x58785340: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0xDE
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58785345: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58785349: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5878534D: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58785351: mov dword ptr [esi], 0x58996aac
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xAC
        __asm _emit 0x6A
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58785357: mov dword ptr [esi + 0x64], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5878535A: mov dword ptr [esi + 0x74], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x74
        // 0x5878535D: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58785363: push eax
        __asm _emit 0x50
        // 0x58785364: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58785368: call 0x58778d00
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0x39
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5878536D: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58785371: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x58785374: push ecx
        __asm _emit 0x51
        // 0x58785375: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5878537B: call 0x58778dc0
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x3A
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58785380: push 0x243ec
        __asm _emit 0x68
        __asm _emit 0xEC
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58785385: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x58785388: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0x78
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x5878538D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58785390: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58785394: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x58785399: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5878539B: je 0x587853eb
        __asm _emit 0x74
        __asm _emit 0x4E
        // 0x5878539D: mov edx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x68
        // 0x587853A0: movzx edx, word ptr [edx + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x587853A4: mov ecx, dword ptr [0x58a2464c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x4C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587853AA: cmp dword ptr [ecx + 0x160], edx
        __asm _emit 0x39
        __asm _emit 0x91
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587853B0: jle 0x587853d8
        __asm _emit 0x7E
        __asm _emit 0x26
        // 0x587853B2: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x587853B4: jl 0x587853d8
        __asm _emit 0x7C
        __asm _emit 0x22
        // 0x587853B6: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587853BC: je 0x587853d8
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x587853BE: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587853C0: push edi
        __asm _emit 0x57
        // 0x587853C1: shl edx, 6
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x06
        // 0x587853C4: add edx, dword ptr [ecx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587853CA: push ebp
        __asm _emit 0x55
        // 0x587853CB: push edx
        __asm _emit 0x52
        // 0x587853CC: push esi
        __asm _emit 0x56
        // 0x587853CD: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587853CF: call 0x587b3090
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0xDC
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587853D4: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587853D6: jmp 0x587853ed
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x587853D8: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587853DA: push edi
        __asm _emit 0x57
        // 0x587853DB: push ebp
        __asm _emit 0x55
        // 0x587853DC: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587853DE: push edx
        __asm _emit 0x52
        // 0x587853DF: push esi
        __asm _emit 0x56
        // 0x587853E0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587853E2: call 0x587b3090
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0xDC
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587853E7: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587853E9: jmp 0x587853ed
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587853EB: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587853ED: mov dword ptr [esi + 0x70], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x70
        // 0x587853F0: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x587853F3: mov eax, 0x5208
        __asm _emit 0xB8
        __asm _emit 0x08
        __asm _emit 0x52
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587853F8: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587853FC: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x58785400: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58785402: je 0x5878540a
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58785404: push edi
        __asm _emit 0x57
        // 0x58785405: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0xDB
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x5878540A: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x5878540D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5878540F: je 0x58785417
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58785411: push edi
        __asm _emit 0x57
        // 0x58785412: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0xDA
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58785417: mov ecx, dword ptr [0x58a2464c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x4C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5878541D: push ecx
        __asm _emit 0x51
        // 0x5878541E: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x58785421: call 0x587b0bb0
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0xB7
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58785426: mov edx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x68
        // 0x58785429: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x5878542C: push 0xffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58785431: push ebx
        __asm _emit 0x53
        // 0x58785432: push edx
        __asm _emit 0x52
        // 0x58785433: call 0x587b2a40
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0xD6
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58785438: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x5878543B: mov dword ptr [eax + 0x3e0], 1
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0xE0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58785445: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x58785448: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5878544A: mov edx, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x30
        // 0x5878544D: push 0x96
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58785452: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58785454: mov edi, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x70
        // 0x58785457: mov ecx, dword ptr [edi + 0x154]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878545D: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x58785463: mov eax, 0x55555556
        __asm _emit 0xB8
        __asm _emit 0x56
        __asm _emit 0x55
        __asm _emit 0x55
        __asm _emit 0x55
        // 0x58785468: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5878546A: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5878546C: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5878546F: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58785471: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x58785476: mov dword ptr [edi + 0x154], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878547C: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x5878547F: mov ecx, 0x40000000
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58785484: mov dword ptr [eax + 0x114], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878548A: mov dword ptr [eax + 0x110], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58785490: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x58785493: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x58785496: push ebx
        __asm _emit 0x53
        // 0x58785497: push eax
        __asm _emit 0x50
        // 0x58785498: call 0x587b1f90
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0xCA
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5878549D: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587854A1: push ebx
        __asm _emit 0x53
        // 0x587854A2: push ecx
        __asm _emit 0x51
        // 0x587854A3: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x587854A6: call 0x587b21f0
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0xCD
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587854AB: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x587854AE: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587854B0: mov eax, dword ptr [edx + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x34
        // 0x587854B3: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587854B5: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x587854B8: push ebx
        __asm _emit 0x53
        // 0x587854B9: call 0x587b1310
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0xBE
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587854BE: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x587854C1: mov dword ptr [eax + 0x120], ebx
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587854C7: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x587854CA: movzx eax, word ptr [ecx + 0x9c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x81
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587854D1: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x587854D4: and eax, 0x7f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x7F
        // 0x587854D7: cmp eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x64
        // 0x587854DA: jb 0x587854e1
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587854DC: mov eax, 0x64
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587854E1: push 0x168
        __asm _emit 0x68
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587854E6: mov dword ptr [ecx + 0xcc], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587854EC: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x587854EF: push ebx
        __asm _emit 0x53
        // 0x587854F0: call 0x587b0830
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0xB3
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587854F5: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x587854F8: push ebx
        __asm _emit 0x53
        // 0x587854F9: push 0x168
        __asm _emit 0x68
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587854FE: push ebx
        __asm _emit 0x53
        // 0x587854FF: call 0x587b0860
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0xB3
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58785504: mov edx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x68
        // 0x58785507: movzx eax, word ptr [edx + 0x9a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x82
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878550E: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x58785511: shr eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x58785514: and eax, 0x7f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x7F
        // 0x58785517: push eax
        __asm _emit 0x50
        // 0x58785518: call 0x587b08c0
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0xB3
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5878551D: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x58785520: push ebx
        __asm _emit 0x53
        // 0x58785521: mov dword ptr [ecx + 0xa8], ebx
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58785527: call 0x587b0630
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0xB1
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5878552C: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x5878552F: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x58785531: call 0x587b0910
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0xB3
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58785536: push 0x1c24
        __asm _emit 0x68
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878553B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x77
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58785540: push 0x1c24
        __asm _emit 0x68
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58785545: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58785547: push ebx
        __asm _emit 0x53
        // 0x58785548: push edi
        __asm _emit 0x57
        // 0x58785549: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0x76
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x5878554E: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x58785551: mov dword ptr [eax + 0x170], edi
        __asm _emit 0x89
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58785557: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x5878555A: mov dword ptr [esi + 0xac], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58785560: mov dword ptr [esi + 0xb4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58785566: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58785568: mov word ptr [esi + 0xb8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878556F: mov dx, word ptr [eax + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58785576: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x04
        // 0x5878557A: and dx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x7F
        // 0x5878557E: imul dx, dx, 0xa
        __asm _emit 0x66
        __asm _emit 0x6B
        __asm _emit 0xD2
        __asm _emit 0x0A
        // 0x58785582: mov word ptr [esi + 0x7c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x7C
        // 0x58785586: mov eax, dword ptr [eax + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x28
        // 0x58785589: imul eax, eax, 0x96
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878558F: mov dword ptr [esi + 0x88], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58785595: add eax, 0x7d0
        __asm _emit 0x05
        __asm _emit 0xD0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878559A: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x5878559D: mov dword ptr [esi + 0x8c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587855A3: mov dword ptr [esi + 0x90], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587855A9: mov dword ptr [esi + 0x94], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587855AF: mov dword ptr [esi + 0x98], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587855B5: mov dword ptr [esi + 0x9c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587855BB: mov dword ptr [esi + 0xa0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587855C1: mov dword ptr [esi + 0xa4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587855C7: mov dword ptr [esi + 0xa8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587855CD: movzx eax, word ptr [esi + 0x7c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x587855D1: mov edx, 4
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587855D6: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x587855D8: seto cl
        __asm _emit 0x0F
        __asm _emit 0x90
        __asm _emit 0xC1
        // 0x587855DB: mov dword ptr [esi + 0xb0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587855E1: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x587855E3: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x587855E5: push ecx
        __asm _emit 0x51
        // 0x587855E6: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0xBF
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x587855EB: mov dword ptr [esi + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x587855EE: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587855F0: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587855F3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587855F5: cmp cx, word ptr [esi + 0x7c]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x587855F9: jae 0x5878560f
        __asm _emit 0x73
        __asm _emit 0x14
        // 0x587855FB: jmp 0x58785600
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x58785600..0x58785891; 657 mapped bytes.
extern "C" __declspec(naked) void FUN_58785300_segment_01() {
    __asm {
        // 0x58785600: mov edx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x78
        // 0x58785603: mov dword ptr [edx + eax*4], ebx
        __asm _emit 0x89
        __asm _emit 0x1C
        __asm _emit 0x82
        // 0x58785606: movzx ecx, word ptr [esi + 0x7c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x5878560A: inc eax
        __asm _emit 0x40
        // 0x5878560B: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5878560D: jl 0x58785600
        __asm _emit 0x7C
        __asm _emit 0xF1
        // 0x5878560F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58785611: call 0x58785200
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58785616: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58785618: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0x76
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x5878561D: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5878561F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58785622: mov dword ptr [esp + 0x2c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58785626: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x5878562B: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x5878562D: je 0x587856d8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58785633: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58785639: mov edx, dword ptr [ecx + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878563F: cmp edx, 0x389
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0x89
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58785645: jle 0x5878565d
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58785647: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878564D: je 0x5878565d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5878564F: mov eax, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58785655: mov eax, dword ptr [eax + 0xe24]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x24
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878565B: jmp 0x5878565f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5878565D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5878565F: cmp edx, 0x38a
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0x8A
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58785665: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x58785668: jle 0x58785680
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5878566A: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58785670: je 0x58785680
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58785672: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58785678: mov ebp, dword ptr [ecx + 0xe28]
        __asm _emit 0x8B
        __asm _emit 0xA9
        __asm _emit 0x28
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878567E: jmp 0x58785682
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58785680: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58785682: mov edx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58785686: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5878568A: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5878568C: push ebx
        __asm _emit 0x53
        // 0x5878568D: push ebx
        __asm _emit 0x53
        // 0x5878568E: add edx, 0xa
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x0A
        // 0x58785691: push edx
        __asm _emit 0x52
        // 0x58785692: cdq
        __asm _emit 0x99
        // 0x58785693: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58785695: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x58785697: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58785699: push ecx
        __asm _emit 0x51
        // 0x5878569A: push esi
        __asm _emit 0x56
        // 0x5878569B: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5878569D: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0xDA
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587856A2: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587856A8: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x587856AB: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x587856AD: je 0x587856da
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x587856AF: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x587856B2: mov dword ptr [edi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x0C
        // 0x587856B5: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x587856B8: mov dword ptr [edi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x587856BB: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x587856BE: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x587856C1: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x587856C4: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587856C7: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x587856CA: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587856CD: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x587856D0: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587856D3: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x587856D6: jmp 0x587856da
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587856D8: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587856DA: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x587856DD: mov edi, 0x38b
        __asm _emit 0xBF
        __asm _emit 0x8B
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587856E2: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587856E6: mov dword ptr [esp + 0x2c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587856EA: mov ebp, 0xe2c
        __asm _emit 0xBD
        __asm _emit 0x2C
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587856EF: mov dword ptr [esp + 0x28], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587856F7: push 0x74
        __asm _emit 0x6A
        __asm _emit 0x74
        // 0x587856F9: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x75
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x587856FE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58785701: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58785705: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x5878570A: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5878570C: je 0x5878575f
        __asm _emit 0x74
        __asm _emit 0x51
        // 0x5878570E: mov edx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x58785711: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58785717: cmp dword ptr [ecx + 0x164], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878571D: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58785720: mov edx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x58785723: jle 0x5878573c
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58785725: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58785727: jl 0x5878573c
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x58785729: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878572F: je 0x5878573c
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58785731: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58785737: mov edi, dword ptr [ecx + ebp]
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x29
        // 0x5878573A: jmp 0x5878573e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5878573C: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5878573E: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58785742: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58785744: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x58785747: push eax
        __asm _emit 0x50
        // 0x58785748: add edx, 3
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x03
        // 0x5878574B: push edx
        __asm _emit 0x52
        // 0x5878574C: mov edx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x50
        // 0x5878574F: push edi
        __asm _emit 0x57
        // 0x58785750: push esi
        __asm _emit 0x56
        // 0x58785751: push ebx
        __asm _emit 0x53
        // 0x58785752: push edx
        __asm _emit 0x52
        // 0x58785753: push ebx
        __asm _emit 0x53
        // 0x58785754: call 0x5877e800
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x90
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58785759: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5878575D: jmp 0x58785761
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5878575F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58785761: mov dword ptr [esi + ebp - 0xdd0], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x2E
        __asm _emit 0x30
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58785768: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x5878576B: push ecx
        __asm _emit 0x51
        // 0x5878576C: push ecx
        __asm _emit 0x51
        // 0x5878576D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5878576F: mov byte ptr [esp + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58785773: call 0x5877e7a0
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x90
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58785778: inc edi
        __asm _emit 0x47
        // 0x58785779: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x5878577C: sub dword ptr [esp + 0x28], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        // 0x58785781: mov dword ptr [esp + 0x2c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58785785: jne 0x587856f7
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x6C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5878578B: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5878578D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0x74
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58785792: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58785794: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58785797: mov dword ptr [esp + 0x2c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5878579B: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x587857A0: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587857A2: je 0x5878584f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587857A8: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587857AE: mov edx, dword ptr [ecx + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587857B4: cmp edx, 0x389
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0x89
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587857BA: jle 0x587857d2
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x587857BC: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587857C2: je 0x587857d2
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587857C4: mov eax, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587857CA: mov eax, dword ptr [eax + 0xe24]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x24
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587857D0: jmp 0x587857d4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587857D2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587857D4: cmp edx, 0x389
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0x89
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587857DA: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587857DD: jle 0x587857f5
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x587857DF: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587857E5: je 0x587857f5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587857E7: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587857ED: mov ebp, dword ptr [ecx + 0xe24]
        __asm _emit 0x8B
        __asm _emit 0xA9
        __asm _emit 0x24
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587857F3: jmp 0x587857f7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587857F5: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587857F7: mov edx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x587857FB: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587857FD: push ebx
        __asm _emit 0x53
        // 0x587857FE: push ebx
        __asm _emit 0x53
        // 0x587857FF: add edx, 0xa
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x0A
        // 0x58785802: push edx
        __asm _emit 0x52
        // 0x58785803: cdq
        __asm _emit 0x99
        // 0x58785804: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58785806: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58785808: mov eax, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x5878580C: sar ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xF9
        // 0x5878580E: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58785810: push eax
        __asm _emit 0x50
        // 0x58785811: push esi
        __asm _emit 0x56
        // 0x58785812: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58785814: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0xD9
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58785819: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5878581F: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x58785822: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x58785824: je 0x58785851
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x58785826: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x58785829: mov dword ptr [edi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x0C
        // 0x5878582C: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x5878582F: mov dword ptr [edi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x58785832: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x58785835: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x58785838: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x5878583B: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5878583E: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x58785841: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58785844: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x58785847: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5878584A: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x5878584D: jmp 0x58785851
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5878584F: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58785851: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x58785854: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58785859: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5878585D: mov dword ptr [esi + 0x58], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x58
        // 0x58785860: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0xD4
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58785865: mov eax, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x58785868: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5878586D: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x58785870: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58785875: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58785879: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5878587B: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5878587F: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58785886: pop ecx
        __asm _emit 0x59
        // 0x58785887: pop edi
        __asm _emit 0x5F
        // 0x58785888: pop esi
        __asm _emit 0x5E
        // 0x58785889: pop ebp
        __asm _emit 0x5D
        // 0x5878588A: pop ebx
        __asm _emit 0x5B
        // 0x5878588B: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5878588E: ret 0x20
        __asm _emit 0xC2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
