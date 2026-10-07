// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 369 bytes in 1 exact ranges.
// Source symbol alias: FUN_588d2300.

// Ghidra body range 0x588D2300..0x588D2471; 369 mapped bytes.
extern "C" __declspec(naked) void FUN_588d2300_segment_00() {
    __asm {
        // 0x588D2300: push ebx
        __asm _emit 0x53
        // 0x588D2301: push esi
        __asm _emit 0x56
        // 0x588D2302: push edi
        __asm _emit 0x57
        // 0x588D2303: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588D2305: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588D2308: push 0xc4
        __asm _emit 0x68
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D230D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588D230F: push eax
        __asm _emit 0x50
        // 0x588D2310: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0xA9
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D2315: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x588D2318: push 0x50
        __asm _emit 0x6A
        __asm _emit 0x50
        // 0x588D231A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588D231C: push ecx
        __asm _emit 0x51
        // 0x588D231D: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0xA9
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D2322: mov edx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x588D2325: mov dword ptr [edx + 0x24], 1
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D232C: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x588D232F: mov dword ptr [eax + 0x10], 1
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2336: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x588D2339: mov dword ptr [ecx + 0xc], 1
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2340: mov edx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x588D2343: mov dword ptr [edx + 0x28], 0
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D234A: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x588D234D: mov eax, 2
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2352: mov dword ptr [ecx + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x30
        // 0x588D2355: mov edx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x588D2358: mov dword ptr [edx + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x34
        // 0x588D235B: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x588D235E: mov dword ptr [eax + 0x38], 0x80
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x38
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2365: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x588D2368: mov dword ptr [ecx + 0x3c], 0x14
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x3C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D236F: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x588D2372: mov edx, 0x7d
        __asm _emit 0xBA
        __asm _emit 0x7D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2377: mov dword ptr [eax + 0x40], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x40
        // 0x588D237A: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x588D237D: mov ecx, 0x64
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2382: mov dword ptr [eax + 0x44], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x44
        // 0x588D2385: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x588D2388: mov dword ptr [eax + 0x48], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x48
        // 0x588D238B: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x588D238E: mov dword ptr [eax + 0x4c], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x4C
        // 0x588D2391: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588D2394: mov edi, 0xd
        __asm _emit 0xBF
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2399: mov word ptr [eax + 0x84], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xB8
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D23A0: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588D23A3: mov word ptr [eax + 0x36], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x36
        // 0x588D23A7: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588D23AA: movzx ebx, byte ptr [eax + 0x32]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x58
        __asm _emit 0x32
        // 0x588D23AE: and bl, 0xf2
        __asm _emit 0x80
        __asm _emit 0xE3
        __asm _emit 0xF2
        // 0x588D23B1: or bl, 2
        __asm _emit 0x80
        __asm _emit 0xCB
        __asm _emit 0x02
        // 0x588D23B4: mov byte ptr [eax + 0x32], bl
        __asm _emit 0x88
        __asm _emit 0x58
        __asm _emit 0x32
        // 0x588D23B7: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588D23BA: movzx ebx, byte ptr [eax + 0x31]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x58
        __asm _emit 0x31
        // 0x588D23BE: and bl, 0xc0
        __asm _emit 0x80
        __asm _emit 0xE3
        __asm _emit 0xC0
        // 0x588D23C1: or bl, 0x40
        __asm _emit 0x80
        __asm _emit 0xCB
        __asm _emit 0x40
        // 0x588D23C4: mov byte ptr [eax + 0x31], bl
        __asm _emit 0x88
        __asm _emit 0x58
        __asm _emit 0x31
        // 0x588D23C7: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588D23CA: mov byte ptr [eax + 0x47], dl
        __asm _emit 0x88
        __asm _emit 0x50
        __asm _emit 0x47
        // 0x588D23CD: mov edx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x50
        // 0x588D23D0: mov byte ptr [edx + 0x46], cl
        __asm _emit 0x88
        __asm _emit 0x4A
        __asm _emit 0x46
        // 0x588D23D3: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588D23D6: and dword ptr [eax + 0x3c], 0xfffffffd
        __asm _emit 0x83
        __asm _emit 0x60
        __asm _emit 0x3C
        __asm _emit 0xFD
        // 0x588D23DA: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588D23DD: and dword ptr [eax + 0x3c], 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0x60
        __asm _emit 0x3C
        __asm _emit 0xFE
        // 0x588D23E1: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588D23E4: or dword ptr [eax + 0x3c], 4
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x3C
        __asm _emit 0x04
        // 0x588D23E8: push 0x5899a4c8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0xA4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588D23ED: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588D23F3: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x588D23F6: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x588D23F9: mov edi, 0x30
        __asm _emit 0xBF
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D23FE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588D2400: lea edx, [edi + 0x7fffffce]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xCE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x588D2406: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588D2408: je 0x588d241b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588D240A: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x588D240C: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x588D240E: je 0x588d241b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588D2410: mov byte ptr [ecx], dl
        __asm _emit 0x88
        __asm _emit 0x11
        // 0x588D2412: inc ecx
        __asm _emit 0x41
        // 0x588D2413: inc eax
        __asm _emit 0x40
        // 0x588D2414: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x588D2417: jne 0x588d2400
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x588D2419: jmp 0x588d241f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x588D241B: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588D241D: jne 0x588d2420
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x588D241F: dec ecx
        __asm _emit 0x49
        // 0x588D2420: mov byte ptr [ecx], 0
        __asm _emit 0xC6
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588D2423: mov eax, dword ptr [0x58a24754]
        __asm _emit 0xA1
        __asm _emit 0x54
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D2428: cmp dword ptr [eax + 0x164], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D242F: jle 0x588d2444
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588D2431: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2438: je 0x588d2444
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588D243A: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2440: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x588D2442: jmp 0x588d2446
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D2444: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D2446: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x588D2449: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588D244C: lea eax, [ecx + edx + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x2C
        // 0x588D2450: mov ecx, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x5C
        // 0x588D2453: mov dword ptr [ecx + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x6C
        // 0x588D2456: mov esi, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x5C
        // 0x588D2459: mov edx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D245F: mov eax, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2465: pop edi
        __asm _emit 0x5F
        // 0x588D2466: mov dword ptr [esi + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x50
        // 0x588D2469: mov dword ptr [esi + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x588D246C: pop esi
        __asm _emit 0x5E
        // 0x588D246D: pop ebx
        __asm _emit 0x5B
        // 0x588D246E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
