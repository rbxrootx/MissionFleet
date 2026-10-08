// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 817 bytes in 2 exact ranges.
// Source symbol alias: FUN_58853230.

// Ghidra body range 0x58853230..0x5885346D; 573 mapped bytes.
extern "C" __declspec(naked) void FUN_58853230_segment_00() {
    __asm {
        // 0x58853230: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58853232: push 0x589852c8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x52
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58853237: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885323D: push eax
        __asm _emit 0x50
        // 0x5885323E: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58853241: push ebx
        __asm _emit 0x53
        // 0x58853242: push ebp
        __asm _emit 0x55
        // 0x58853243: push esi
        __asm _emit 0x56
        // 0x58853244: push edi
        __asm _emit 0x57
        // 0x58853245: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5885324A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5885324C: push eax
        __asm _emit 0x50
        // 0x5885324D: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58853251: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853257: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58853259: mov dword ptr [esp + 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5885325D: mov dword ptr [esi], 0x5899e918
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x18
        __asm _emit 0xE9
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58853263: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x58853266: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58853268: mov dword ptr [esp + 0x28], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5885326C: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5885326E: je 0x5885327b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58853270: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58853272: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58853274: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58853276: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58853278: mov dword ptr [esi + 0x68], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x68
        // 0x5885327B: mov ecx, dword ptr [esi + 0x2e8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853281: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58853283: je 0x58853293
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58853285: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58853287: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58853289: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5885328B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5885328D: mov dword ptr [esi + 0x2e8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853293: mov ecx, dword ptr [esi + 0x2b8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853299: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5885329B: je 0x588532ab
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5885329D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5885329F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588532A1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588532A3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588532A5: mov dword ptr [esi + 0x2b8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588532AB: mov ecx, dword ptr [esi + 0x2b0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588532B1: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588532B3: je 0x588532c3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588532B5: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588532B7: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588532B9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588532BB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588532BD: mov dword ptr [esi + 0x2b0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588532C3: mov ecx, dword ptr [esi + 0x2b4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588532C9: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588532CB: je 0x588532db
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588532CD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588532CF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588532D1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588532D3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588532D5: mov dword ptr [esi + 0x2b4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588532DB: mov ecx, dword ptr [esi + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588532E1: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588532E3: je 0x588532f3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588532E5: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588532E7: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588532E9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588532EB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588532ED: mov dword ptr [esi + 0x2c0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588532F3: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588532F6: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588532F8: je 0x58853305
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588532FA: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588532FC: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588532FE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58853300: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58853302: mov dword ptr [esi + 0x74], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x74
        // 0x58853305: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x58853308: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5885330A: je 0x58853317
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5885330C: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5885330E: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58853310: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58853312: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58853314: mov dword ptr [esi + 0x78], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x78
        // 0x58853317: mov ecx, dword ptr [esi + 0x2bc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885331D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5885331F: je 0x5885332f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58853321: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58853323: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58853325: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58853327: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58853329: mov dword ptr [esi + 0x2bc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885332F: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853335: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58853337: je 0x58853347
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58853339: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5885333B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5885333D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5885333F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58853341: mov dword ptr [esi + 0x9c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853347: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885334D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5885334F: je 0x5885335f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58853351: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58853353: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58853355: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58853357: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58853359: mov dword ptr [esi + 0xc4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885335F: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58853362: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58853364: je 0x58853371
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58853366: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58853368: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5885336A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5885336C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5885336E: mov dword ptr [esi + 0x6c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x6C
        // 0x58853371: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x58853374: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58853376: je 0x58853383
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58853378: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5885337A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5885337C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5885337E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58853380: mov dword ptr [esi + 0x70], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x70
        // 0x58853383: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853389: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5885338B: je 0x5885339b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5885338D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5885338F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58853391: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58853393: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58853395: mov dword ptr [esi + 0xa4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885339B: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588533A1: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588533A3: je 0x588533b3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588533A5: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588533A7: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588533A9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588533AB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588533AD: mov dword ptr [esi + 0xa8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588533B3: mov ecx, dword ptr [esi + 0x2f8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588533B9: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588533BB: je 0x588533cb
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588533BD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588533BF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588533C1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588533C3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588533C5: mov dword ptr [esi + 0x2f8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588533CB: mov ecx, dword ptr [esi + 0x2f4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588533D1: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588533D3: je 0x588533e3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588533D5: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588533D7: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588533D9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588533DB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588533DD: mov dword ptr [esi + 0x2f4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588533E3: lea ebp, [esi + 0xb4]
        __asm _emit 0x8D
        __asm _emit 0xAE
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588533E9: lea edi, [esi + 0x198]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588533EF: mov dword ptr [esp + 0x18], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588533F7: mov dword ptr [esp + 0x14], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588533FF: nop
        __asm _emit 0x90
        // 0x58853400: mov ecx, dword ptr [edi - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xF0
        // 0x58853403: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58853405: je 0x58853412
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58853407: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58853409: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5885340B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5885340D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5885340F: mov dword ptr [edi - 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0xF0
        // 0x58853412: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58853414: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58853416: je 0x58853422
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58853418: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5885341A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5885341C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5885341E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58853420: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x58853422: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58853425: sub dword ptr [esp + 0x14], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x5885342A: jne 0x58853400
        __asm _emit 0x75
        __asm _emit 0xD4
        // 0x5885342C: mov ecx, dword ptr [ebp + 0x1f4]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853432: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58853434: je 0x58853444
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58853436: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58853438: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5885343A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5885343C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5885343E: mov dword ptr [ebp + 0x1f4], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853444: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x58853447: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58853449: je 0x58853456
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5885344B: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5885344D: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5885344F: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58853451: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58853453: mov dword ptr [ebp], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0x00
        // 0x58853456: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x58853459: sub dword ptr [esp + 0x18], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        // 0x5885345E: jne 0x588533f7
        __asm _emit 0x75
        __asm _emit 0x97
        // 0x58853460: lea edi, [esi + 0x108]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853466: mov ebp, 0x20
        __asm _emit 0xBD
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885346B: jmp 0x58853470
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x58853470..0x58853564; 244 mapped bytes.
extern "C" __declspec(naked) void FUN_58853230_segment_01() {
    __asm {
        // 0x58853470: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58853472: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58853474: je 0x58853480
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58853476: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58853478: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5885347A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5885347C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5885347E: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x58853480: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58853483: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58853486: jne 0x58853470
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x58853488: lea edi, [esi + 0x80]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885348E: lea ebp, [esi + 0xc8]
        __asm _emit 0x8D
        __asm _emit 0xAE
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853494: mov dword ptr [esp + 0x18], 4
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885349C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588534A0: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x588534A3: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588534A5: je 0x588534b2
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588534A7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588534A9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588534AB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588534AD: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588534AF: mov dword ptr [ebp], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0x00
        // 0x588534B2: mov ecx, dword ptr [edi - 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xFC
        // 0x588534B5: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588534B7: je 0x588534c4
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588534B9: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588534BB: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588534BD: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588534BF: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588534C1: mov dword ptr [edi - 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0xFC
        // 0x588534C4: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588534C6: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588534C8: je 0x588534d4
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588534CA: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588534CC: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588534CE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588534D0: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588534D2: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x588534D4: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x588534D7: add edi, 8
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x08
        // 0x588534DA: sub dword ptr [esp + 0x18], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        // 0x588534DF: jne 0x588534a0
        __asm _emit 0x75
        __asm _emit 0xBF
        // 0x588534E1: mov ecx, dword ptr [esi + 0x304]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588534E7: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588534E9: je 0x588534f9
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588534EB: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588534ED: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588534EF: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588534F1: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588534F3: mov dword ptr [esi + 0x304], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588534F9: mov ecx, dword ptr [esi + 0x308]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588534FF: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58853501: je 0x58853511
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58853503: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58853505: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58853507: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58853509: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5885350B: mov dword ptr [esi + 0x308], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853511: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853517: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58853519: je 0x58853529
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5885351B: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5885351D: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5885351F: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58853521: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58853523: mov dword ptr [esi + 0xa0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853529: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885352F: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58853531: je 0x58853541
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58853533: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58853535: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58853537: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58853539: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5885353B: mov dword ptr [esi + 0xb0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853541: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58853543: mov dword ptr [esp + 0x28], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885354B: call 0x58902c10
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0xF6
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58853550: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58853554: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885355B: pop ecx
        __asm _emit 0x59
        // 0x5885355C: pop edi
        __asm _emit 0x5F
        // 0x5885355D: pop esi
        __asm _emit 0x5E
        // 0x5885355E: pop ebp
        __asm _emit 0x5D
        // 0x5885355F: pop ebx
        __asm _emit 0x5B
        // 0x58853560: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58853563: ret
        __asm _emit 0xC3
    }
}
