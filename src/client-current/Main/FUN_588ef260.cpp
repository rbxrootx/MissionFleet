// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588EF260 .. +0x382 bytes.
extern "C" __declspec(naked) void FUN_588ef260() {
    __asm {
        // 0x588EF260: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588EF262: push 0x58987f48
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x7F
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588EF267: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF26D: push eax
        __asm _emit 0x50
        // 0x588EF26E: push ecx
        __asm _emit 0x51
        // 0x588EF26F: push ebx
        __asm _emit 0x53
        // 0x588EF270: push ebp
        __asm _emit 0x55
        // 0x588EF271: push esi
        __asm _emit 0x56
        // 0x588EF272: push edi
        __asm _emit 0x57
        // 0x588EF273: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588EF278: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588EF27A: push eax
        __asm _emit 0x50
        // 0x588EF27B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588EF27F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF285: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588EF287: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588EF28B: mov dword ptr [esi], 0x589a1758
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x58
        __asm _emit 0x17
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588EF291: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588EF294: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588EF296: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588EF29A: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588EF29C: je 0x588ef2a9
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588EF29E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EF2A0: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EF2A2: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EF2A4: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EF2A6: mov dword ptr [esi + 0x6c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x6C
        // 0x588EF2A9: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588EF2AC: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588EF2AE: je 0x588ef2bb
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588EF2B0: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EF2B2: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EF2B4: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EF2B6: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EF2B8: mov dword ptr [esi + 0x70], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x70
        // 0x588EF2BB: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x588EF2BE: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588EF2C0: je 0x588ef2cd
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588EF2C2: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EF2C4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EF2C6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EF2C8: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EF2CA: mov dword ptr [esi + 0x78], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x78
        // 0x588EF2CD: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x588EF2D0: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588EF2D2: je 0x588ef2df
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588EF2D4: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EF2D6: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EF2D8: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EF2DA: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EF2DC: mov dword ptr [esi + 0x7c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x7C
        // 0x588EF2DF: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF2E5: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588EF2E7: je 0x588ef2f7
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EF2E9: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EF2EB: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EF2ED: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EF2EF: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EF2F1: mov dword ptr [esi + 0x88], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF2F7: mov ecx, dword ptr [esi + 0x12c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF2FD: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588EF2FF: je 0x588ef30f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EF301: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EF303: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EF305: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EF307: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EF309: mov dword ptr [esi + 0x12c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF30F: mov ecx, dword ptr [esi + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF315: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588EF317: je 0x588ef327
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EF319: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EF31B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EF31D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EF31F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EF321: mov dword ptr [esi + 0x2c0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF327: mov ecx, dword ptr [esi + 0x2c4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF32D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588EF32F: je 0x588ef33f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EF331: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EF333: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EF335: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EF337: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EF339: mov dword ptr [esi + 0x2c4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF33F: mov ecx, dword ptr [esi + 0x2c8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF345: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588EF347: je 0x588ef357
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EF349: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EF34B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EF34D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EF34F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EF351: mov dword ptr [esi + 0x2c8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF357: mov ecx, dword ptr [esi + 0x2cc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF35D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588EF35F: je 0x588ef36f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EF361: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EF363: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EF365: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EF367: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EF369: mov dword ptr [esi + 0x2cc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF36F: mov ecx, dword ptr [esi + 0x2d0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF375: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588EF377: je 0x588ef387
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EF379: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EF37B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EF37D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EF37F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EF381: mov dword ptr [esi + 0x2d0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF387: mov ecx, dword ptr [esi + 0x2d4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF38D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588EF38F: je 0x588ef39f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EF391: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EF393: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EF395: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EF397: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EF399: mov dword ptr [esi + 0x2d4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF39F: mov ecx, dword ptr [esi + 0x2b4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF3A5: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588EF3A7: je 0x588ef3b7
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EF3A9: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EF3AB: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EF3AD: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EF3AF: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EF3B1: mov dword ptr [esi + 0x2b4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF3B7: mov ecx, dword ptr [esi + 0x2b8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF3BD: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588EF3BF: je 0x588ef3cf
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EF3C1: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EF3C3: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EF3C5: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EF3C7: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EF3C9: mov dword ptr [esi + 0x2b8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF3CF: mov ecx, dword ptr [esi + 0x2bc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF3D5: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588EF3D7: je 0x588ef3e7
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EF3D9: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EF3DB: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EF3DD: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EF3DF: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EF3E1: mov dword ptr [esi + 0x2bc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF3E7: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF3ED: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588EF3EF: je 0x588ef3ff
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EF3F1: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EF3F3: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EF3F5: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EF3F7: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EF3F9: mov dword ptr [esi + 0x90], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF3FF: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF405: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588EF407: je 0x588ef417
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EF409: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EF40B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EF40D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EF40F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EF411: mov dword ptr [esi + 0x94], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF417: lea edi, [esi + 0x1b4]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xB4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF41D: mov ebp, 0x20
        __asm _emit 0xBD
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF422: mov ecx, dword ptr [edi - 0x80]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x80
        // 0x588EF425: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588EF427: je 0x588ef434
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588EF429: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EF42B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EF42D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EF42F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EF431: mov dword ptr [edi - 0x80], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x80
        // 0x588EF434: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588EF436: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588EF438: je 0x588ef444
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588EF43A: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EF43C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EF43E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EF440: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EF442: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x588EF444: mov ecx, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF44A: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588EF44C: je 0x588ef45c
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EF44E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EF450: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EF452: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EF454: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EF456: mov dword ptr [edi + 0x80], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF45C: mov ecx, dword ptr [edi - 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xE4
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588EF462: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588EF464: je 0x588ef474
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EF466: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EF468: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EF46A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EF46C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EF46E: mov dword ptr [edi - 0x11c], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0xE4
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588EF474: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588EF477: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x588EF47A: jne 0x588ef422
        __asm _emit 0x75
        __asm _emit 0xA6
        // 0x588EF47C: lea edi, [esi + 0x11c]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF482: mov ebp, 4
        __asm _emit 0xBD
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF487: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588EF489: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588EF48B: je 0x588ef497
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588EF48D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EF48F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EF491: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EF493: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EF495: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x588EF497: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588EF49A: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x588EF49D: jne 0x588ef487
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x588EF49F: mov ecx, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF4A5: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588EF4A7: je 0x588ef4b7
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EF4A9: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EF4AB: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EF4AD: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EF4AF: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EF4B1: mov dword ptr [esi + 0x118], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF4B7: mov ecx, dword ptr [esi + 0x2d8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF4BD: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588EF4BF: je 0x588ef4cf
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EF4C1: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EF4C3: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EF4C5: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EF4C7: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EF4C9: mov dword ptr [esi + 0x2d8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF4CF: mov ecx, dword ptr [esi + 0x4a8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF4D5: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588EF4D7: je 0x588ef4e7
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EF4D9: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EF4DB: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EF4DD: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EF4DF: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EF4E1: mov dword ptr [esi + 0x4a8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF4E7: mov ecx, dword ptr [esi + 0x4ac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF4ED: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588EF4EF: je 0x588ef4ff
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EF4F1: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EF4F3: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EF4F5: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EF4F7: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EF4F9: mov dword ptr [esi + 0x4ac], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xAC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF4FF: mov ecx, dword ptr [esi + 0x4b0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF505: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588EF507: je 0x588ef517
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EF509: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EF50B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EF50D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EF50F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EF511: mov dword ptr [esi + 0x4b0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF517: mov ecx, dword ptr [esi + 0x4bc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF51D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588EF51F: je 0x588ef52f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EF521: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EF523: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EF525: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EF527: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EF529: mov dword ptr [esi + 0x4bc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xBC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF52F: mov ecx, dword ptr [esi + 0x4c0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF535: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588EF537: je 0x588ef547
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EF539: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EF53B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EF53D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EF53F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EF541: mov dword ptr [esi + 0x4c0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF547: mov ecx, dword ptr [esi + 0x4c4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF54D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588EF54F: je 0x588ef55f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EF551: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EF553: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EF555: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EF557: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EF559: mov dword ptr [esi + 0x4c4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF55F: mov ecx, dword ptr [esi + 0x4b4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF565: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588EF567: je 0x588ef577
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EF569: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EF56B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EF56D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EF56F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EF571: mov dword ptr [esi + 0x4b4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF577: mov ecx, dword ptr [esi + 0x4b8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF57D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588EF57F: je 0x588ef58f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EF581: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EF583: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EF585: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EF587: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EF589: mov dword ptr [esi + 0x4b8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF58F: mov ecx, dword ptr [esi + 0x4c8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF595: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588EF597: je 0x588ef5a7
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EF599: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EF59B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EF59D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EF59F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EF5A1: mov dword ptr [esi + 0x4c8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF5A7: mov ecx, dword ptr [esi + 0x4cc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF5AD: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588EF5AF: je 0x588ef5bf
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EF5B1: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EF5B3: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EF5B5: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EF5B7: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EF5B9: mov dword ptr [esi + 0x4cc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xCC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF5BF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588EF5C1: mov dword ptr [esp + 0x20], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588EF5C9: call 0x58902c10
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588EF5CE: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588EF5D2: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF5D9: pop ecx
        __asm _emit 0x59
        // 0x588EF5DA: pop edi
        __asm _emit 0x5F
        // 0x588EF5DB: pop esi
        __asm _emit 0x5E
        // 0x588EF5DC: pop ebp
        __asm _emit 0x5D
        // 0x588EF5DD: pop ebx
        __asm _emit 0x5B
        // 0x588EF5DE: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588EF5E1: ret
        __asm _emit 0xC3
    }
}
