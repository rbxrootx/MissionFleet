// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587F21E0 .. +0x686 bytes.
// Source symbol alias: FUN_587f21e0.
// Called twice by 0x587FAEC0 and once by 0x587FD890; takes three stack args.
// Clears input-object bit 0, compares its +0x350 word with receiver state, then
// updates counters/flags across global status words. Domain meanings are unknown.
// See docs/current-main-state-update-587f21e0.md.
extern "C" __declspec(naked) void FUN_587f21e0() {
    __asm {
        // 0x587F21E0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587F21E4: sub esp, 0x24
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x24
        // 0x587F21E7: push ebx
        __asm _emit 0x53
        // 0x587F21E8: push ebp
        __asm _emit 0x55
        // 0x587F21E9: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587F21EB: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F21F0: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587F21F4: movzx edx, word ptr [eax + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x90
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F21FB: push esi
        __asm _emit 0x56
        // 0x587F21FC: push edi
        __asm _emit 0x57
        // 0x587F21FD: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587F21FF: cmp dword ptr [ebp + 0x104c8], edx
        __asm _emit 0x39
        __asm _emit 0x95
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F2205: jne 0x587f2236
        __asm _emit 0x75
        __asm _emit 0x2F
        // 0x587F2207: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F220C: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587F220F: movzx edx, word ptr [ecx + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x91
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2216: push edi
        __asm _emit 0x57
        // 0x587F2217: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587F2219: mov dword ptr [ebp + 0x104c8], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F221F: mov dword ptr [ebp + 0x10554], edi
        __asm _emit 0x89
        __asm _emit 0xBD
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F2225: mov dword ptr [ebp + 0x10558], edi
        __asm _emit 0x89
        __asm _emit 0xBD
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F222B: mov dword ptr [ebp + 0x10568], edi
        __asm _emit 0x89
        __asm _emit 0xBD
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F2231: call 0x587eac40
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0x8A
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F2236: mov eax, dword ptr [0x58a0b1c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F223B: movzx ecx, word ptr [eax + 0x64]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x48
        __asm _emit 0x64
        // 0x587F223F: mov esi, dword ptr [ebp + 0x1046c]
        __asm _emit 0x8B
        __asm _emit 0xB5
        __asm _emit 0x6C
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F2245: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x587F2247: and edx, 1
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x01
        // 0x587F224A: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587F224E: je 0x587f225a
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587F2250: test cl, 2
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x02
        // 0x587F2253: je 0x587f225a
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587F2255: dec esi
        __asm _emit 0x4E
        // 0x587F2256: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587F225A: mov eax, dword ptr [0x58a0b1c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F225F: movzx eax, word ptr [eax + 0x64]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x64
        // 0x587F2263: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x587F2265: je 0x587f2270
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587F2267: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x587F2269: je 0x587f2270
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587F226B: dec esi
        __asm _emit 0x4E
        // 0x587F226C: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587F2270: mov eax, dword ptr [0x58a0b1cc]
        __asm _emit 0xA1
        __asm _emit 0xCC
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F2275: movzx eax, word ptr [eax + 0x64]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x64
        // 0x587F2279: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x587F227B: je 0x587f2286
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587F227D: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x587F227F: je 0x587f2286
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587F2281: dec esi
        __asm _emit 0x4E
        // 0x587F2282: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587F2286: mov eax, dword ptr [0x58a0b1d0]
        __asm _emit 0xA1
        __asm _emit 0xD0
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F228B: movzx eax, word ptr [eax + 0x64]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x64
        // 0x587F228F: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x587F2291: je 0x587f229c
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587F2293: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x587F2295: je 0x587f229c
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587F2297: dec esi
        __asm _emit 0x4E
        // 0x587F2298: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587F229C: mov eax, dword ptr [0x58a0b1d4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F22A1: movzx eax, word ptr [eax + 0x64]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x64
        // 0x587F22A5: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x587F22A7: je 0x587f22b2
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587F22A9: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x587F22AB: je 0x587f22b2
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587F22AD: dec esi
        __asm _emit 0x4E
        // 0x587F22AE: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587F22B2: mov eax, dword ptr [0x58a0b1d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F22B7: movzx eax, word ptr [eax + 0x64]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x64
        // 0x587F22BB: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x587F22BD: je 0x587f22c8
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587F22BF: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x587F22C1: je 0x587f22c8
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587F22C3: dec esi
        __asm _emit 0x4E
        // 0x587F22C4: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587F22C8: mov eax, dword ptr [0x58a0b1dc]
        __asm _emit 0xA1
        __asm _emit 0xDC
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F22CD: movzx eax, word ptr [eax + 0x64]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x64
        // 0x587F22D1: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x587F22D3: je 0x587f22de
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587F22D5: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x587F22D7: je 0x587f22de
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587F22D9: dec esi
        __asm _emit 0x4E
        // 0x587F22DA: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587F22DE: mov eax, dword ptr [0x58a0b1e0]
        __asm _emit 0xA1
        __asm _emit 0xE0
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F22E3: movzx eax, word ptr [eax + 0x64]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x64
        // 0x587F22E7: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x587F22E9: je 0x587f22f4
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587F22EB: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x587F22ED: je 0x587f22f4
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587F22EF: dec esi
        __asm _emit 0x4E
        // 0x587F22F0: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587F22F4: cmp word ptr [ebp + 0x105f0], 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x08
        // 0x587F22FC: jne 0x587f2357
        __asm _emit 0x75
        __asm _emit 0x59
        // 0x587F22FE: cmp dword ptr [ebp + 0x218dc], edi
        __asm _emit 0x39
        __asm _emit 0xBD
        __asm _emit 0xDC
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F2304: jne 0x587f2357
        __asm _emit 0x75
        __asm _emit 0x51
        // 0x587F2306: cmp esi, 1
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x01
        // 0x587F2309: jne 0x587f2357
        __asm _emit 0x75
        __asm _emit 0x4C
        // 0x587F230B: cmp dx, di
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x587F230E: je 0x587f232f
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x587F2310: test cl, 2
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x02
        // 0x587F2313: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F2319: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587F231C: movzx eax, word ptr [edx + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x82
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2323: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F2329: jne 0x587f2345
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x587F232B: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587F232D: jmp 0x587f2347
        __asm _emit 0xEB
        __asm _emit 0x18
        // 0x587F232F: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F2335: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587F2338: movzx eax, word ptr [edx + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x82
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F233F: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F2345: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x587F2347: push eax
        __asm _emit 0x50
        // 0x587F2348: call 0x587baf70
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0x8C
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587F234D: mov dword ptr [ebp + 0x218dc], 1
        __asm _emit 0xC7
        __asm _emit 0x85
        __asm _emit 0xDC
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2357: movzx eax, word ptr [ebp + 0x105f0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F235E: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587F2360: or ebx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCB
        __asm _emit 0xFF
        // 0x587F2363: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x587F2367: je 0x587f2393
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x587F2369: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x587F236D: je 0x587f2393
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x587F236F: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x587F2373: je 0x587f2393
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x587F2375: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x587F2379: je 0x587f2393
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x587F237B: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0B
        // 0x587F237F: je 0x587f2393
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587F2381: cmp ax, 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0C
        // 0x587F2385: je 0x587f2393
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587F2387: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0D
        // 0x587F238B: je 0x587f2393
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587F238D: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0E
        // 0x587F2391: jne 0x587f2399
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x587F2393: cmp ax, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x587F2397: jne 0x587f2405
        __asm _emit 0x75
        __asm _emit 0x6C
        // 0x587F2399: mov eax, 2
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F239E: lea esi, [ebp + 0x109f8]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0xF8
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F23A4: mov edx, dword ptr [esi - 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0xFC
        // 0x587F23A7: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587F23AD: je 0x587f23b8
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587F23AF: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x587F23B1: jge 0x587f23b8
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x587F23B3: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587F23B5: lea ebx, [eax - 2]
        __asm _emit 0x8D
        __asm _emit 0x58
        __asm _emit 0xFE
        // 0x587F23B8: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587F23BA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587F23C0: je 0x587f23cb
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587F23C2: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x587F23C4: jge 0x587f23cb
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x587F23C6: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587F23C8: lea ebx, [eax - 1]
        __asm _emit 0x8D
        __asm _emit 0x58
        __asm _emit 0xFF
        // 0x587F23CB: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x587F23CE: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587F23D4: je 0x587f23de
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587F23D6: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x587F23D8: jge 0x587f23de
        __asm _emit 0x7D
        __asm _emit 0x04
        // 0x587F23DA: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587F23DC: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587F23DE: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x587F23E1: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587F23E7: je 0x587f23f2
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587F23E9: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x587F23EB: jge 0x587f23f2
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x587F23ED: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587F23EF: lea ebx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x58
        __asm _emit 0x01
        // 0x587F23F2: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x587F23F5: lea edx, [eax - 2]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0xFE
        // 0x587F23F8: add esi, 0x10
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x10
        // 0x587F23FB: cmp edx, 8
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x587F23FE: jl 0x587f23a4
        __asm _emit 0x7C
        __asm _emit 0xA4
        // 0x587F2400: jmp 0x587f250d
        __asm _emit 0xE9
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2405: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F240B: mov esi, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x0C
        // 0x587F240E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587F2410: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587F2414: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587F2418: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587F241C: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587F2420: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587F2424: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587F2428: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587F242C: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587F2430: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x587F2432: je 0x587f2455
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x587F2434: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587F2436: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0x42
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x587F243B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587F243D: je 0x587f244e
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x587F243F: movzx edx, byte ptr [esi + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x96
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2446: mov dword ptr [esp + edx*4 + 0x14], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x94
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F244E: mov esi, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x78
        // 0x587F2451: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587F2453: jne 0x587f2434
        __asm _emit 0x75
        __asm _emit 0xDF
        // 0x587F2455: mov eax, dword ptr [ebp + 0x10a6c]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x6C
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F245B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587F245D: jbe 0x587f2469
        __asm _emit 0x76
        __asm _emit 0x0A
        // 0x587F245F: cmp dword ptr [esp + 0x14], edi
        __asm _emit 0x39
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587F2463: je 0x587f2469
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587F2465: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587F2467: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587F2469: mov eax, dword ptr [ebp + 0x10a70]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F246F: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587F2471: jbe 0x587f2481
        __asm _emit 0x76
        __asm _emit 0x0E
        // 0x587F2473: cmp dword ptr [esp + 0x18], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F2478: je 0x587f2481
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587F247A: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587F247C: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2481: mov eax, dword ptr [ebp + 0x10a74]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F2487: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587F2489: jbe 0x587f2499
        __asm _emit 0x76
        __asm _emit 0x0E
        // 0x587F248B: cmp dword ptr [esp + 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587F2490: je 0x587f2499
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587F2492: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587F2494: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2499: mov eax, dword ptr [ebp + 0x10a78]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F249F: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587F24A1: jbe 0x587f24b1
        __asm _emit 0x76
        __asm _emit 0x0E
        // 0x587F24A3: cmp dword ptr [esp + 0x20], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587F24A8: je 0x587f24b1
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587F24AA: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587F24AC: mov ebx, 3
        __asm _emit 0xBB
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F24B1: mov eax, dword ptr [ebp + 0x10a7c]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x7C
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F24B7: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587F24B9: jbe 0x587f24c9
        __asm _emit 0x76
        __asm _emit 0x0E
        // 0x587F24BB: cmp dword ptr [esp + 0x24], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587F24C0: je 0x587f24c9
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587F24C2: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587F24C4: mov ebx, 4
        __asm _emit 0xBB
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F24C9: mov eax, dword ptr [ebp + 0x10a80]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F24CF: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587F24D1: jbe 0x587f24e1
        __asm _emit 0x76
        __asm _emit 0x0E
        // 0x587F24D3: cmp dword ptr [esp + 0x28], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x587F24D8: je 0x587f24e1
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587F24DA: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587F24DC: mov ebx, 5
        __asm _emit 0xBB
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F24E1: mov eax, dword ptr [ebp + 0x10a84]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F24E7: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587F24E9: jbe 0x587f24f9
        __asm _emit 0x76
        __asm _emit 0x0E
        // 0x587F24EB: cmp dword ptr [esp + 0x2c], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x00
        // 0x587F24F0: je 0x587f24f9
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587F24F2: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587F24F4: mov ebx, 6
        __asm _emit 0xBB
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F24F9: cmp dword ptr [ebp + 0x10a88], edi
        __asm _emit 0x39
        __asm _emit 0xBD
        __asm _emit 0x88
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F24FF: jbe 0x587f250d
        __asm _emit 0x76
        __asm _emit 0x0C
        // 0x587F2501: cmp dword ptr [esp + 0x30], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x587F2506: je 0x587f250d
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587F2508: mov ebx, 7
        __asm _emit 0xBB
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F250D: mov edi, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587F2511: movzx eax, byte ptr [edi + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x87
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2518: mov ecx, dword ptr [eax*4 + 0x58a0b1c4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x85
        __asm _emit 0xC4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F251F: mov edx, dword ptr [ecx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x60
        // 0x587F2522: mov ecx, dword ptr [ebp + 0x10bfc]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xFC
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F2528: push edx
        __asm _emit 0x52
        // 0x587F2529: push eax
        __asm _emit 0x50
        // 0x587F252A: call 0x588ad590
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0xB0
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x587F252F: cmp byte ptr [ebp + 0x20d64], 0
        __asm _emit 0x80
        __asm _emit 0xBD
        __asm _emit 0x64
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2536: je 0x587f25b3
        __asm _emit 0x74
        __asm _emit 0x7B
        // 0x587F2538: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F253D: cmp edi, dword ptr [eax + 4]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x587F2540: jne 0x587f2576
        __asm _emit 0x75
        __asm _emit 0x34
        // 0x587F2542: mov ecx, dword ptr [ebp + 0x10474]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F2548: and ecx, 0xfffff00
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x0F
        // 0x587F254E: or ecx, 0x20000020
        __asm _emit 0x81
        __asm _emit 0xC9
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        // 0x587F2554: mov dword ptr [ebp + 0x10474], ecx
        __asm _emit 0x89
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F255A: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F2560: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587F2562: call 0x58854300
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x1D
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x587F2567: mov eax, dword ptr [ebp + 0x10bc0]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xC0
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F256D: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2572: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587F2576: mov esi, dword ptr [ebp + 0x20de0]
        __asm _emit 0x8B
        __asm _emit 0xB5
        __asm _emit 0xE0
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F257C: movzx eax, word ptr [edi + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x87
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2583: sub esi, dword ptr [ebp + 0x20dd8]
        __asm _emit 0x2B
        __asm _emit 0xB5
        __asm _emit 0xD8
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F2589: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F258F: add esi, dword ptr [ebp + 0x20ddc]
        __asm _emit 0x03
        __asm _emit 0xB5
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F2595: push eax
        __asm _emit 0x50
        // 0x587F2596: call 0x5878a160
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0x7B
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587F259B: cmp dword ptr [eax + 0x1288], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x88
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F25A2: jne 0x587f2833
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8B
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F25A8: mov dword ptr [eax + 0x1288], esi
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0x88
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F25AE: jmp 0x587f2833
        __asm _emit 0xE9
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F25B3: movzx eax, word ptr [ebp + 0x105a2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F25BA: cmp ax, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x07
        // 0x587F25BE: jne 0x587f26b3
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xEF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F25C4: cmp dword ptr [esp + 0x3c], 1
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x587F25C9: je 0x587f285c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F25CF: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F25D5: cmp edi, dword ptr [ecx + 4]
        __asm _emit 0x3B
        __asm _emit 0x79
        __asm _emit 0x04
        // 0x587F25D8: jne 0x587f262a
        __asm _emit 0x75
        __asm _emit 0x50
        // 0x587F25DA: mov ecx, dword ptr [ebp + 0x21f04]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x1F
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F25E0: mov byte ptr [ebp + 0x10474], 0x20
        __asm _emit 0xC6
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x20
        // 0x587F25E7: mov edx, dword ptr [ebp + 0x10474]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F25ED: and edx, 0xfffffff
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x0F
        // 0x587F25F3: or edx, 0x20000000
        __asm _emit 0x81
        __asm _emit 0xCA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        // 0x587F25F9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F25FB: mov dword ptr [ebp + 0x10474], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F2601: call 0x587cd230
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0xAC
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x587F2606: mov ecx, dword ptr [ebp + 0x21f04]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x1F
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F260C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F260E: call 0x587cd4c0
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0xAE
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x587F2613: mov ecx, dword ptr [ebp + 0x21f04]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x1F
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F2619: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F261B: call 0x587cd650
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0xB0
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x587F2620: pop edi
        __asm _emit 0x5F
        // 0x587F2621: pop esi
        __asm _emit 0x5E
        // 0x587F2622: pop ebp
        __asm _emit 0x5D
        // 0x587F2623: pop ebx
        __asm _emit 0x5B
        // 0x587F2624: add esp, 0x24
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x24
        // 0x587F2627: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587F262A: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587F262C: lea ebx, [edi + 1]
        __asm _emit 0x8D
        __asm _emit 0x5F
        __asm _emit 0x01
        // 0x587F262F: nop
        __asm _emit 0x90
        // 0x587F2630: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F2635: mov esi, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x0C
        // 0x587F2638: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587F263A: je 0x587f266c
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x587F263C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587F2640: movzx ecx, byte ptr [esi + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2647: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587F2649: jne 0x587f2665
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x587F264B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587F264D: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x587F2652: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587F2657: je 0x587f26a2
        __asm _emit 0x74
        __asm _emit 0x49
        // 0x587F2659: cmp dword ptr [esi + 0x664c], 0x2710
        __asm _emit 0x81
        __asm _emit 0xBE
        __asm _emit 0x4C
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2663: jne 0x587f26a2
        __asm _emit 0x75
        __asm _emit 0x3D
        // 0x587F2665: mov esi, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x78
        // 0x587F2668: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587F266A: jne 0x587f2640
        __asm _emit 0x75
        __asm _emit 0xD4
        // 0x587F266C: mov ecx, dword ptr [ebp + 0x21f04]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x1F
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F2672: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F2674: call 0x587cd230
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0xAB
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x587F2679: mov ecx, dword ptr [ebp + 0x21f04]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x1F
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F267F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F2681: call 0x587cd4c0
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0xAE
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x587F2686: mov ecx, dword ptr [ebp + 0x21f04]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x1F
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F268C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F268E: call 0x587cd650
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0xAF
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x587F2693: mov edx, dword ptr [ebp + 0x21f04]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0x1F
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F2699: mov dword ptr [edx + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x18
        // 0x587F269C: mov dword ptr [ebp + 0x384], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F26A2: add edi, ebx
        __asm _emit 0x03
        __asm _emit 0xFB
        // 0x587F26A4: cmp edi, 2
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x587F26A7: jne 0x587f2630
        __asm _emit 0x75
        __asm _emit 0x87
        // 0x587F26A9: pop edi
        __asm _emit 0x5F
        // 0x587F26AA: pop esi
        __asm _emit 0x5E
        // 0x587F26AB: pop ebp
        __asm _emit 0x5D
        // 0x587F26AC: pop ebx
        __asm _emit 0x5B
        // 0x587F26AD: add esp, 0x24
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x24
        // 0x587F26B0: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587F26B3: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587F26B7: jne 0x587f275e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F26BD: mov eax, dword ptr [ebp + 0x21c48]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F26C3: mov ecx, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x587F26C6: cmp dword ptr [ecx + 0x134], 3
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x587F26CD: je 0x587f275e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F26D3: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F26D9: cmp edi, dword ptr [edx + 4]
        __asm _emit 0x3B
        __asm _emit 0x7A
        __asm _emit 0x04
        // 0x587F26DC: jne 0x587f275e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x7C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F26E2: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587F26E4: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x3F
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x587F26E9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587F26EB: jne 0x587f275e
        __asm _emit 0x75
        __asm _emit 0x71
        // 0x587F26ED: cmp dword ptr [ebp + 0x10478], eax
        __asm _emit 0x39
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F26F3: jne 0x587f275e
        __asm _emit 0x75
        __asm _emit 0x69
        // 0x587F26F5: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F26FA: mov esi, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x0C
        // 0x587F26FD: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587F26FF: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587F2701: je 0x587f275e
        __asm _emit 0x74
        __asm _emit 0x5B
        // 0x587F2703: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F2709: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587F270C: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x587F270E: je 0x587f272d
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x587F2710: mov dl, byte ptr [esi + 0x354]
        __asm _emit 0x8A
        __asm _emit 0x96
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2716: cmp dl, byte ptr [eax + 0x354]
        __asm _emit 0x3A
        __asm _emit 0x90
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F271C: jne 0x587f272d
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x587F271E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587F2720: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x3F
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x587F2725: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587F272A: jne 0x587f272d
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x587F272C: inc edi
        __asm _emit 0x47
        // 0x587F272D: mov esi, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x78
        // 0x587F2730: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587F2732: jne 0x587f2703
        __asm _emit 0x75
        __asm _emit 0xCF
        // 0x587F2734: test di, di
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587F2737: je 0x587f275e
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x587F2739: or dword ptr [ebp + 0x10474], 0x200
        __asm _emit 0x81
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2743: push esi
        __asm _emit 0x56
        // 0x587F2744: push esi
        __asm _emit 0x56
        // 0x587F2745: push esi
        __asm _emit 0x56
        // 0x587F2746: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587F2748: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0x93
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587F274D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587F274F: call 0x5876a570
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x7E
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587F2754: pop edi
        __asm _emit 0x5F
        // 0x587F2755: pop esi
        __asm _emit 0x5E
        // 0x587F2756: pop ebp
        __asm _emit 0x5D
        // 0x587F2757: pop ebx
        __asm _emit 0x5B
        // 0x587F2758: add esp, 0x24
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x24
        // 0x587F275B: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587F275E: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F2763: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587F2766: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587F2768: je 0x587f277e
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x587F276A: movzx ecx, byte ptr [eax + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2771: cmp ebx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD9
        // 0x587F2773: jne 0x587f277e
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x587F2775: mov byte ptr [ebp + 0x10474], 0x10
        __asm _emit 0xC6
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x10
        // 0x587F277C: jmp 0x587f2785
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x587F277E: mov byte ptr [ebp + 0x10474], 0x20
        __asm _emit 0xC6
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x20
        // 0x587F2785: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F278B: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587F278F: cmp eax, dword ptr [edx + 4]
        __asm _emit 0x3B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587F2792: jne 0x587f2803
        __asm _emit 0x75
        __asm _emit 0x6F
        // 0x587F2794: cmp dword ptr [esp + 0x10], 1
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        // 0x587F2799: jne 0x587f27b5
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x587F279B: mov ecx, dword ptr [ebp + 0x10474]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F27A1: and ecx, 0xfffffff
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x0F
        // 0x587F27A7: or ecx, 0x20000000
        __asm _emit 0x81
        __asm _emit 0xC9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        // 0x587F27AD: mov dword ptr [ebp + 0x10474], ecx
        __asm _emit 0x89
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F27B3: jmp 0x587f27e5
        __asm _emit 0xEB
        __asm _emit 0x30
        // 0x587F27B5: test dword ptr [ebp + 0x10474], 0x10000000
        __asm _emit 0xF7
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        // 0x587F27BF: je 0x587f27e5
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x587F27C1: cmp dword ptr [ebp + 0x218e0], 0
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0xE0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F27C8: jne 0x587f27e5
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x587F27CA: cmp dword ptr [esp + 0x40], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x00
        // 0x587F27CF: je 0x587f27e5
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x587F27D1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F27D3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F27D5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F27D7: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587F27D9: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x93
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587F27DE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587F27E0: call 0x5876a570
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587F27E5: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F27EB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587F27ED: call 0x58854300
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x1B
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x587F27F2: mov eax, dword ptr [ebp + 0x10bc0]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xC0
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F27F8: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F27FD: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587F2801: jmp 0x587f2833
        __asm _emit 0xEB
        __asm _emit 0x30
        // 0x587F2803: movzx eax, word ptr [ebp + 0x105a2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F280A: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587F280E: je 0x587f285c
        __asm _emit 0x74
        __asm _emit 0x4C
        // 0x587F2810: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x587F2814: je 0x587f285c
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x587F2816: cmp dword ptr [esp + 0x10], 1
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        // 0x587F281B: jne 0x587f2833
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x587F281D: mov eax, dword ptr [ebp + 0x10474]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F2823: and eax, 0xfffffff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x0F
        // 0x587F2828: or eax, 0x20000000
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        // 0x587F282D: mov dword ptr [ebp + 0x10474], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F2833: cmp dword ptr [ebp + 0x218c8], 0
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0xC8
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F283A: jne 0x587f2845
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x587F283C: cmp dword ptr [ebp + 0x218c4], 0
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0xC4
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2843: je 0x587f285c
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x587F2845: mov ecx, dword ptr [ebp + 0x218d4]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xD4
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F284B: dec ecx
        __asm _emit 0x49
        // 0x587F284C: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x587F284E: sbb cl, cl
        __asm _emit 0x1A
        __asm _emit 0xC9
        // 0x587F2850: and cl, 0x10
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x10
        // 0x587F2853: add cl, 0x10
        __asm _emit 0x80
        __asm _emit 0xC1
        __asm _emit 0x10
        // 0x587F2856: mov byte ptr [ebp + 0x10474], cl
        __asm _emit 0x88
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F285C: pop edi
        __asm _emit 0x5F
        // 0x587F285D: pop esi
        __asm _emit 0x5E
        // 0x587F285E: pop ebp
        __asm _emit 0x5D
        // 0x587F285F: pop ebx
        __asm _emit 0x5B
        // 0x587F2860: add esp, 0x24
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x24
        // 0x587F2863: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
