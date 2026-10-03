// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587C20E0 .. +0xB8D bytes.
extern "C" __declspec(naked) void FUN_587c20e0() {
    __asm {
        // 0x587C20E0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587C20E2: push 0x5898a328
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0xA3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587C20E7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C20ED: push eax
        __asm _emit 0x50
        // 0x587C20EE: push ecx
        __asm _emit 0x51
        // 0x587C20EF: push ebx
        __asm _emit 0x53
        // 0x587C20F0: push esi
        __asm _emit 0x56
        // 0x587C20F1: push edi
        __asm _emit 0x57
        // 0x587C20F2: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587C20F7: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587C20F9: push eax
        __asm _emit 0x50
        // 0x587C20FA: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587C20FE: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C2104: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x587C2106: mov dword ptr [esp + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587C210A: mov dword ptr [ebx], 0x5899ac14
        __asm _emit 0xC7
        __asm _emit 0x03
        __asm _emit 0x14
        __asm _emit 0xAC
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587C2110: mov ecx, dword ptr [0x58a24594]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2116: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587C2118: mov dword ptr [esp + 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587C211C: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C211E: je 0x587c212e
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2120: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587C2122: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587C2124: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2126: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587C2128: mov dword ptr [0x58a24594], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x94
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C212E: mov ecx, dword ptr [0x58a24810]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x10
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2134: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2136: je 0x587c2146
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2138: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587C213A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587C213C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C213E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587C2140: mov dword ptr [0x58a24810], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x10
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2146: mov ecx, dword ptr [0x58a24528]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x28
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C214C: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C214E: je 0x587c215e
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2150: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587C2152: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587C2154: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2156: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587C2158: mov dword ptr [0x58a24528], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x28
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C215E: mov ecx, dword ptr [0x58a2452c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x2C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2164: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2166: je 0x587c2176
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2168: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587C216A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587C216C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C216E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587C2170: mov dword ptr [0x58a2452c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x2C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2176: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C217C: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C217E: je 0x587c218e
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2180: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587C2182: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587C2184: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2186: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587C2188: mov dword ptr [0x58a24530], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C218E: mov ecx, dword ptr [0x58a24538]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x38
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2194: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2196: je 0x587c21a6
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2198: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587C219A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587C219C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C219E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587C21A0: mov dword ptr [0x58a24538], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x38
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C21A6: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C21AC: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C21AE: je 0x587c21be
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C21B0: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587C21B2: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587C21B4: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C21B6: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587C21B8: mov dword ptr [0x58a24534], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C21BE: mov ecx, dword ptr [0x58a2453c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x3C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C21C4: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C21C6: je 0x587c21d6
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C21C8: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587C21CA: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587C21CC: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C21CE: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587C21D0: mov dword ptr [0x58a2453c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x3C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C21D6: mov ecx, dword ptr [0x58a24540]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x40
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C21DC: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C21DE: je 0x587c21ee
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C21E0: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587C21E2: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587C21E4: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C21E6: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587C21E8: mov dword ptr [0x58a24540], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x40
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C21EE: mov ecx, dword ptr [0x58a24544]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x44
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C21F4: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C21F6: je 0x587c2206
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C21F8: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587C21FA: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587C21FC: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C21FE: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587C2200: mov dword ptr [0x58a24544], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x44
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2206: mov ecx, dword ptr [0x58a24548]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x48
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C220C: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C220E: je 0x587c221e
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2210: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587C2212: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587C2214: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2216: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587C2218: mov dword ptr [0x58a24548], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x48
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C221E: mov ecx, dword ptr [0x58a2454c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x4C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2224: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2226: je 0x587c2236
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2228: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587C222A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587C222C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C222E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587C2230: mov dword ptr [0x58a2454c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x4C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2236: mov ecx, dword ptr [0x58a24558]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x58
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C223C: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C223E: je 0x587c224e
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2240: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587C2242: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587C2244: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2246: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587C2248: mov dword ptr [0x58a24558], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x58
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C224E: mov ecx, dword ptr [0x58a24578]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x78
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2254: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2256: je 0x587c2266
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2258: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587C225A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587C225C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C225E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587C2260: mov dword ptr [0x58a24578], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x78
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2266: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C226C: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C226E: je 0x587c227f
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x587C2270: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587C2272: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587C2275: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2277: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587C2279: mov dword ptr [0x58a24588], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C227F: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2285: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2287: je 0x587c2298
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x587C2289: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587C228B: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587C228E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2290: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587C2292: mov dword ptr [0x58a2458c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x8C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2298: mov eax, dword ptr [0x58a24a40]
        __asm _emit 0xA1
        __asm _emit 0x40
        __asm _emit 0x4A
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C229D: mov edi, dword ptr [0x5898c088]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0x88
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587C22A3: push eax
        __asm _emit 0x50
        // 0x587C22A4: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587C22A6: mov ecx, dword ptr [0x58a24a44]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x44
        __asm _emit 0x4A
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C22AC: push ecx
        __asm _emit 0x51
        // 0x587C22AD: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587C22AF: mov edx, dword ptr [0x58a24a48]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x4A
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C22B5: push edx
        __asm _emit 0x52
        // 0x587C22B6: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587C22B8: mov eax, dword ptr [0x58a24a4c]
        __asm _emit 0xA1
        __asm _emit 0x4C
        __asm _emit 0x4A
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C22BD: push eax
        __asm _emit 0x50
        // 0x587C22BE: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587C22C0: mov ecx, dword ptr [0x58a24594]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C22C6: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C22C8: je 0x587c22d8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C22CA: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C22CC: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C22CE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C22D0: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C22D2: mov dword ptr [0x58a24594], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x94
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C22D8: mov ecx, dword ptr [0x58a24800]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C22DE: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C22E0: je 0x587c22f0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C22E2: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C22E4: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C22E6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C22E8: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C22EA: mov dword ptr [0x58a24800], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C22F0: mov ecx, dword ptr [0x58a24804]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x04
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C22F6: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C22F8: je 0x587c2308
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C22FA: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C22FC: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C22FE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2300: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2302: mov dword ptr [0x58a24804], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x04
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2308: mov ecx, dword ptr [0x58a24808]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x08
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C230E: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2310: je 0x587c2320
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2312: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2314: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2316: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2318: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C231A: mov dword ptr [0x58a24808], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2320: mov ecx, dword ptr [0x58a247fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2326: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2328: je 0x587c2338
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C232A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C232C: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C232E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2330: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2332: mov dword ptr [0x58a247fc], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xFC
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2338: mov ecx, dword ptr [0x58a2480c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x0C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C233E: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2340: je 0x587c2350
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2342: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2344: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2346: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2348: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C234A: mov dword ptr [0x58a2480c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x0C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2350: mov ecx, dword ptr [0x58a0b1bc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xBC
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587C2356: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2358: je 0x587c2368
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C235A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C235C: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C235E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2360: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2362: mov dword ptr [0x58a0b1bc], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xBC
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587C2368: mov ecx, dword ptr [0x58a0b1c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587C236E: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2370: je 0x587c2380
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2372: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2374: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2376: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2378: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C237A: mov dword ptr [0x58a0b1c0], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xC0
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587C2380: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2386: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2388: je 0x587c2398
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C238A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C238C: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C238E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2390: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2392: mov dword ptr [0x58a245a0], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2398: mov ecx, dword ptr [0x58a245a8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C239E: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C23A0: je 0x587c23b0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C23A2: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C23A4: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C23A6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C23A8: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C23AA: mov dword ptr [0x58a245a8], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C23B0: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C23B6: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C23B8: je 0x587c23c8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C23BA: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C23BC: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C23BE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C23C0: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C23C2: mov dword ptr [0x58a2459c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C23C8: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C23CE: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C23D0: je 0x587c23e0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C23D2: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C23D4: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C23D6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C23D8: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C23DA: mov dword ptr [0x58a24598], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C23E0: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C23E6: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C23E8: je 0x587c23f8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C23EA: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C23EC: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C23EE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C23F0: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C23F2: mov dword ptr [0x58a245ac], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C23F8: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C23FE: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2400: je 0x587c2410
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2402: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2404: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2406: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2408: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C240A: mov dword ptr [0x58a245b4], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2410: mov ecx, dword ptr [0x58a0adbc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xBC
        __asm _emit 0xAD
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587C2416: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2418: je 0x587c2428
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C241A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C241C: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C241E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2420: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2422: mov dword ptr [0x58a0adbc], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xBC
        __asm _emit 0xAD
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587C2428: mov ecx, dword ptr [0x58a248cc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xCC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C242E: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2430: je 0x587c2440
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2432: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2434: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2436: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2438: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C243A: mov dword ptr [0x58a248cc], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xCC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2440: mov ecx, dword ptr [0x58a245a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2446: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2448: je 0x587c2458
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C244A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C244C: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C244E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2450: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2452: mov dword ptr [0x58a245a4], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xA4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2458: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C245E: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2460: je 0x587c2470
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2462: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2464: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2466: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2468: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C246A: mov dword ptr [0x58a245c4], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2470: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2476: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2478: je 0x587c2488
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C247A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C247C: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C247E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2480: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2482: mov dword ptr [0x58a245c0], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2488: mov ecx, dword ptr [0x58a245bc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xBC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C248E: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2490: je 0x587c24a0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2492: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2494: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2496: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2498: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C249A: mov dword ptr [0x58a245bc], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xBC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C24A0: mov ecx, dword ptr [0x58a245d0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xD0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C24A6: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C24A8: je 0x587c24b8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C24AA: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C24AC: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C24AE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C24B0: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C24B2: mov dword ptr [0x58a245d0], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xD0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C24B8: mov ecx, dword ptr [0x58a245e0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C24BE: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C24C0: je 0x587c24d0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C24C2: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C24C4: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C24C6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C24C8: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C24CA: mov dword ptr [0x58a245e0], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xE0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C24D0: mov ecx, dword ptr [0x58a245e4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C24D6: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C24D8: je 0x587c24e8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C24DA: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C24DC: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C24DE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C24E0: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C24E2: mov dword ptr [0x58a245e4], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xE4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C24E8: mov ecx, dword ptr [0x58a245ec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C24EE: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C24F0: je 0x587c2500
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C24F2: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C24F4: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C24F6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C24F8: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C24FA: mov dword ptr [0x58a245ec], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xEC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2500: mov ecx, dword ptr [0x58a245e8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2506: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2508: je 0x587c2518
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C250A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C250C: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C250E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2510: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2512: mov dword ptr [0x58a245e8], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2518: mov ecx, dword ptr [0x58a245f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C251E: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2520: je 0x587c2530
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2522: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2524: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2526: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2528: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C252A: mov dword ptr [0x58a245f8], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xF8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2530: mov ecx, dword ptr [0x58a245f0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2536: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2538: je 0x587c2548
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C253A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C253C: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C253E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2540: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2542: mov dword ptr [0x58a245f0], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xF0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2548: mov ecx, dword ptr [0x58a24814]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C254E: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2550: je 0x587c2560
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2552: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2554: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2556: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2558: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C255A: mov dword ptr [0x58a24814], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2560: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2566: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2568: je 0x587c2578
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C256A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C256C: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C256E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2570: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2572: mov dword ptr [0x58a2481c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2578: mov ecx, dword ptr [0x58a24828]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C257E: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2580: je 0x587c2590
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2582: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2584: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2586: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2588: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C258A: mov dword ptr [0x58a24828], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2590: mov ecx, dword ptr [0x58a24624]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x24
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2596: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2598: je 0x587c25a8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C259A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C259C: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C259E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C25A0: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C25A2: mov dword ptr [0x58a24624], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x24
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C25A8: mov ecx, dword ptr [0x58a24628]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x28
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C25AE: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C25B0: je 0x587c25c0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C25B2: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C25B4: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C25B6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C25B8: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C25BA: mov dword ptr [0x58a24628], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x28
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C25C0: mov ecx, dword ptr [0x58a2462c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x2C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C25C6: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C25C8: je 0x587c25d8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C25CA: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C25CC: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C25CE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C25D0: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C25D2: mov dword ptr [0x58a2462c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x2C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C25D8: mov ecx, dword ptr [0x58a24610]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C25DE: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C25E0: je 0x587c25f0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C25E2: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C25E4: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C25E6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C25E8: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C25EA: mov dword ptr [0x58a24610], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C25F0: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C25F6: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C25F8: je 0x587c2608
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C25FA: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C25FC: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C25FE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2600: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2602: mov dword ptr [0x58a246a4], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2608: mov ecx, dword ptr [0x58a246a8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C260E: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2610: je 0x587c2620
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2612: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2614: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2616: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2618: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C261A: mov dword ptr [0x58a246a8], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xA8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2620: mov ecx, dword ptr [0x58a24608]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x08
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2626: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2628: je 0x587c2638
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C262A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C262C: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C262E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2630: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2632: mov dword ptr [0x58a24608], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2638: mov ecx, dword ptr [0x58a2460c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x0C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C263E: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2640: je 0x587c2650
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2642: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2644: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2646: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2648: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C264A: mov dword ptr [0x58a2460c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x0C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2650: mov ecx, dword ptr [0x58a24614]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x14
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2656: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2658: je 0x587c2668
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C265A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C265C: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C265E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2660: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2662: mov dword ptr [0x58a24614], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2668: mov ecx, dword ptr [0x58a24694]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C266E: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2670: je 0x587c2680
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2672: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2674: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2676: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2678: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C267A: mov dword ptr [0x58a24694], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x94
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2680: mov ecx, dword ptr [0x58a24698]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2686: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2688: je 0x587c2698
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C268A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C268C: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C268E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2690: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2692: mov dword ptr [0x58a24698], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2698: mov ecx, dword ptr [0x58a2469c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C269E: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C26A0: je 0x587c26b0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C26A2: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C26A4: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C26A6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C26A8: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C26AA: mov dword ptr [0x58a2469c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x9C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C26B0: mov ecx, dword ptr [0x58a24690]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C26B6: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C26B8: je 0x587c26c8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C26BA: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C26BC: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C26BE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C26C0: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C26C2: mov dword ptr [0x58a24690], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C26C8: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C26CE: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C26D0: je 0x587c26e0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C26D2: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C26D4: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C26D6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C26D8: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C26DA: mov dword ptr [0x58a246a0], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xA0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C26E0: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C26E6: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C26E8: je 0x587c26f8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C26EA: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C26EC: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C26EE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C26F0: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C26F2: mov dword ptr [0x58a246b8], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C26F8: mov ecx, dword ptr [0x58a246bc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xBC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C26FE: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2700: je 0x587c2710
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2702: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2704: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2706: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2708: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C270A: mov dword ptr [0x58a246bc], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xBC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2710: mov ecx, dword ptr [0x58a2464c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x4C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2716: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2718: je 0x587c2728
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C271A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C271C: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C271E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2720: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2722: mov dword ptr [0x58a2464c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x4C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2728: mov ecx, dword ptr [0x58a24650]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x50
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C272E: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2730: je 0x587c2740
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2732: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2734: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2736: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2738: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C273A: mov dword ptr [0x58a24650], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x50
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2740: mov ecx, dword ptr [0x58a24654]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x54
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2746: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2748: je 0x587c2758
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C274A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C274C: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C274E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2750: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2752: mov dword ptr [0x58a24654], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x54
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2758: mov ecx, dword ptr [0x58a24658]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x58
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C275E: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2760: je 0x587c2770
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2762: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2764: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2766: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2768: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C276A: mov dword ptr [0x58a24658], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x58
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2770: mov ecx, dword ptr [0x58a24674]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x74
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2776: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2778: je 0x587c2788
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C277A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C277C: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C277E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2780: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2782: mov dword ptr [0x58a24674], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x74
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2788: mov ecx, dword ptr [0x58a24678]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x78
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C278E: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2790: je 0x587c27a0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2792: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2794: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2796: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2798: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C279A: mov dword ptr [0x58a24678], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x78
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C27A0: mov ecx, dword ptr [0x58a2467c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x7C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C27A6: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C27A8: je 0x587c27b8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C27AA: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C27AC: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C27AE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C27B0: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C27B2: mov dword ptr [0x58a2467c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x7C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C27B8: mov ecx, dword ptr [0x58a24680]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C27BE: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C27C0: je 0x587c27d0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C27C2: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C27C4: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C27C6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C27C8: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C27CA: mov dword ptr [0x58a24680], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x80
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C27D0: mov ecx, dword ptr [0x58a24684]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C27D6: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C27D8: je 0x587c27e8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C27DA: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C27DC: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C27DE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C27E0: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C27E2: mov dword ptr [0x58a24684], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x84
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C27E8: mov ecx, dword ptr [0x58a2466c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x6C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C27EE: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C27F0: je 0x587c2800
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C27F2: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C27F4: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C27F6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C27F8: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C27FA: mov dword ptr [0x58a2466c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x6C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2800: mov ecx, dword ptr [0x58a24670]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x70
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2806: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2808: je 0x587c2818
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C280A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C280C: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C280E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2810: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2812: mov dword ptr [0x58a24670], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x70
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2818: mov ecx, dword ptr [0x58a24668]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x68
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C281E: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2820: je 0x587c2830
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2822: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2824: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2826: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2828: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C282A: mov dword ptr [0x58a24668], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x68
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2830: mov ecx, dword ptr [0x58a246f0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2836: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2838: je 0x587c2848
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C283A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C283C: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C283E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2840: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2842: mov dword ptr [0x58a246f0], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xF0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2848: mov ecx, dword ptr [0x58a246f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C284E: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2850: je 0x587c2860
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2852: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2854: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2856: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2858: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C285A: mov dword ptr [0x58a246f4], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xF4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2860: mov ecx, dword ptr [0x58a246fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2866: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2868: je 0x587c2878
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C286A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C286C: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C286E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2870: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2872: mov dword ptr [0x58a246fc], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xFC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2878: mov ecx, dword ptr [0x58a246d8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C287E: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2880: je 0x587c2890
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2882: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2884: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2886: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2888: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C288A: mov dword ptr [0x58a246d8], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2890: mov ecx, dword ptr [0x58a246dc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xDC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2896: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2898: je 0x587c28a8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C289A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C289C: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C289E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C28A0: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C28A2: mov dword ptr [0x58a246dc], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xDC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C28A8: mov ecx, dword ptr [0x58a246e0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C28AE: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C28B0: je 0x587c28c0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C28B2: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C28B4: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C28B6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C28B8: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C28BA: mov dword ptr [0x58a246e0], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xE0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C28C0: mov ecx, dword ptr [0x58a246e4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C28C6: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C28C8: je 0x587c28d8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C28CA: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C28CC: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C28CE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C28D0: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C28D2: mov dword ptr [0x58a246e4], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xE4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C28D8: mov ecx, dword ptr [0x58a246cc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xCC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C28DE: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C28E0: je 0x587c28f0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C28E2: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C28E4: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C28E6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C28E8: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C28EA: mov dword ptr [0x58a246cc], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xCC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C28F0: mov ecx, dword ptr [0x58a246d0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xD0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C28F6: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C28F8: je 0x587c2908
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C28FA: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C28FC: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C28FE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2900: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2902: mov dword ptr [0x58a246d0], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xD0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2908: mov ecx, dword ptr [0x58a246e8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C290E: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2910: je 0x587c2920
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2912: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2914: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2916: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2918: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C291A: mov dword ptr [0x58a246e8], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2920: mov ecx, dword ptr [0x58a24784]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2926: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2928: je 0x587c2938
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C292A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C292C: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C292E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2930: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2932: mov dword ptr [0x58a24784], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2938: mov ecx, dword ptr [0x58a24788]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C293E: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2940: je 0x587c2950
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2942: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2944: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2946: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2948: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C294A: mov dword ptr [0x58a24788], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x88
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2950: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2956: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2958: je 0x587c2968
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C295A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C295C: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C295E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2960: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2962: mov dword ptr [0x58a2478c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2968: mov ecx, dword ptr [0x58a24790]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x90
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C296E: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2970: je 0x587c2980
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2972: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2974: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2976: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2978: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C297A: mov dword ptr [0x58a24790], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2980: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2986: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2988: je 0x587c2998
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C298A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C298C: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C298E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2990: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2992: mov dword ptr [0x58a24794], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2998: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C299E: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C29A0: je 0x587c29b0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C29A2: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C29A4: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C29A6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C29A8: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C29AA: mov dword ptr [0x58a24798], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C29B0: mov ecx, dword ptr [0x58a2479c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C29B6: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C29B8: je 0x587c29c8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C29BA: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C29BC: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C29BE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C29C0: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C29C2: mov dword ptr [0x58a2479c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x9C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C29C8: mov ecx, dword ptr [0x58a247a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C29CE: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C29D0: je 0x587c29e0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C29D2: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C29D4: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C29D6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C29D8: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C29DA: mov dword ptr [0x58a247a0], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xA0
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C29E0: mov ecx, dword ptr [0x58a2470c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x0C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C29E6: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C29E8: je 0x587c29f8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C29EA: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C29EC: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C29EE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C29F0: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C29F2: mov dword ptr [0x58a2470c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x0C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C29F8: mov ecx, dword ptr [0x58a24710]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x10
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C29FE: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2A00: je 0x587c2a10
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2A02: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2A04: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2A06: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2A08: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2A0A: mov dword ptr [0x58a24710], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x10
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2A10: mov ecx, dword ptr [0x58a24724]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x24
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2A16: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2A18: je 0x587c2a28
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2A1A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2A1C: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2A1E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2A20: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2A22: mov dword ptr [0x58a24724], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x24
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2A28: mov ecx, dword ptr [0x58a24728]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x28
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2A2E: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2A30: je 0x587c2a40
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2A32: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2A34: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2A36: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2A38: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2A3A: mov dword ptr [0x58a24728], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x28
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2A40: mov ecx, dword ptr [0x58a2472c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x2C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2A46: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2A48: je 0x587c2a58
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2A4A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2A4C: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2A4E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2A50: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2A52: mov dword ptr [0x58a2472c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x2C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2A58: mov ecx, dword ptr [0x58a24730]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2A5E: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2A60: je 0x587c2a70
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2A62: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2A64: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2A66: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2A68: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2A6A: mov dword ptr [0x58a24730], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2A70: mov ecx, dword ptr [0x58a24734]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2A76: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2A78: je 0x587c2a88
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2A7A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2A7C: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2A7E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2A80: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2A82: mov dword ptr [0x58a24734], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2A88: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2A8E: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2A90: je 0x587c2aa0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2A92: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2A94: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2A96: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2A98: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2A9A: mov dword ptr [0x58a247f8], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2AA0: mov ecx, dword ptr [0x58a24744]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x44
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2AA6: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2AA8: je 0x587c2ab8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2AAA: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2AAC: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2AAE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2AB0: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2AB2: mov dword ptr [0x58a24744], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x44
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2AB8: mov ecx, dword ptr [0x58a24748]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x48
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2ABE: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2AC0: je 0x587c2ad0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2AC2: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2AC4: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2AC6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2AC8: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2ACA: mov dword ptr [0x58a24748], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x48
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2AD0: mov ecx, dword ptr [0x58a24760]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x60
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2AD6: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2AD8: je 0x587c2ae8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2ADA: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2ADC: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2ADE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2AE0: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2AE2: mov dword ptr [0x58a24760], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x60
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2AE8: mov ecx, dword ptr [0x58a24638]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x38
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2AEE: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2AF0: je 0x587c2b02
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x587C2AF2: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2AF4: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2AF6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2AF8: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2AFA: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587C2AFC: mov dword ptr [0x58a24638], ecx
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x38
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2B02: mov eax, dword ptr [0x58a24620]
        __asm _emit 0xA1
        __asm _emit 0x20
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2B07: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x587C2B09: je 0x587c2b22
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x587C2B0B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587C2B0D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587C2B0F: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2B11: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2B13: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2B15: mov ecx, dword ptr [0x58a24638]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x38
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2B1B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587C2B1D: mov dword ptr [0x58a24620], eax
        __asm _emit 0xA3
        __asm _emit 0x20
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2B22: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2B24: je 0x587c2b39
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x587C2B26: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2B28: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2B2A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2B2C: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2B2E: mov eax, dword ptr [0x58a24620]
        __asm _emit 0xA1
        __asm _emit 0x20
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2B33: mov dword ptr [0x58a24638], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x38
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2B39: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x587C2B3B: je 0x587c2b4d
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x587C2B3D: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587C2B3F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587C2B41: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2B43: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2B45: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2B47: mov dword ptr [0x58a24620], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x20
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2B4D: mov ecx, dword ptr [0x58a24600]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2B53: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2B55: je 0x587c2b65
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2B57: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2B59: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2B5B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2B5D: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2B5F: mov dword ptr [0x58a24600], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2B65: mov ecx, dword ptr [0x58a246b0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2B6B: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2B6D: je 0x587c2b7d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2B6F: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2B71: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2B73: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2B75: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2B77: mov dword ptr [0x58a246b0], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xB0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2B7D: mov ecx, dword ptr [0x58a24644]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x44
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2B83: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2B85: je 0x587c2b95
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2B87: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2B89: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2B8B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2B8D: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2B8F: mov dword ptr [0x58a24644], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x44
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2B95: mov ecx, dword ptr [0x58a2465c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x5C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2B9B: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2B9D: je 0x587c2bad
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2B9F: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2BA1: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2BA3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2BA5: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2BA7: mov dword ptr [0x58a2465c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x5C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2BAD: mov ecx, dword ptr [0x58a24ae0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0x4A
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2BB3: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2BB5: je 0x587c2bc5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2BB7: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2BB9: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2BBB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2BBD: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2BBF: mov dword ptr [0x58a24ae0], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xE0
        __asm _emit 0x4A
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2BC5: mov ecx, dword ptr [0x58a24720]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x20
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2BCB: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2BCD: je 0x587c2bdd
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2BCF: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2BD1: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2BD3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2BD5: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2BD7: mov dword ptr [0x58a24720], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x20
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2BDD: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2BE3: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2BE5: je 0x587c2bf5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2BE7: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2BE9: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2BEB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2BED: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2BEF: mov dword ptr [0x58a247f8], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2BF5: mov edi, 0x58a0b1c4
        __asm _emit 0xBF
        __asm _emit 0xC4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587C2BFA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C2C00: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587C2C02: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2C04: je 0x587c2c10
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587C2C06: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2C08: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2C0A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2C0C: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2C0E: mov dword ptr [edi], esi
        __asm _emit 0x89
        __asm _emit 0x37
        // 0x587C2C10: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587C2C13: cmp edi, 0x58a0b1e4
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0xE4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587C2C19: jl 0x587c2c00
        __asm _emit 0x7C
        __asm _emit 0xE5
        // 0x587C2C1B: mov ecx, dword ptr [0x58a24524]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2C21: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2C23: je 0x587c2c33
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2C25: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2C27: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2C29: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2C2B: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2C2D: mov dword ptr [0x58a24524], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2C33: mov ecx, dword ptr [0x58a247f0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2C39: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587C2C3B: je 0x587c2c4b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C2C3D: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C2C3F: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C2C41: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C2C43: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C2C45: mov dword ptr [0x58a247f0], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xF0
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C2C4B: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587C2C4D: mov dword ptr [esp + 0x1c], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587C2C55: call 0x58902c10
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0xFF
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587C2C5A: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587C2C5E: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C2C65: pop ecx
        __asm _emit 0x59
        // 0x587C2C66: pop edi
        __asm _emit 0x5F
        // 0x587C2C67: pop esi
        __asm _emit 0x5E
        // 0x587C2C68: pop ebx
        __asm _emit 0x5B
        // 0x587C2C69: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587C2C6C: ret
        __asm _emit 0xC3
    }
}
