// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58797100 .. +0x35A bytes.
extern "C" __declspec(naked) void FUN_58797100() {
    __asm {
        // 0x58797100: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58797102: push 0x58987f48
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x7F
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58797107: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879710D: push eax
        __asm _emit 0x50
        // 0x5879710E: push ecx
        __asm _emit 0x51
        // 0x5879710F: push ebx
        __asm _emit 0x53
        // 0x58797110: push ebp
        __asm _emit 0x55
        // 0x58797111: push esi
        __asm _emit 0x56
        // 0x58797112: push edi
        __asm _emit 0x57
        // 0x58797113: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58797118: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5879711A: push eax
        __asm _emit 0x50
        // 0x5879711B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5879711F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797125: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58797127: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5879712B: mov dword ptr [esi], 0x58998080
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58797131: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797137: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58797139: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5879713D: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5879713F: je 0x5879714f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58797141: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58797143: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58797145: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58797147: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58797149: mov dword ptr [esi + 0xa4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879714F: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797155: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58797157: je 0x58797167
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58797159: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5879715B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5879715D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5879715F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58797161: mov dword ptr [esi + 0xa8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797167: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5879716A: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5879716C: je 0x58797179
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5879716E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58797170: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58797172: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58797174: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58797176: mov dword ptr [esi + 0x64], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x64
        // 0x58797179: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x5879717C: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5879717E: je 0x5879718b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58797180: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58797182: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58797184: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58797186: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58797188: mov dword ptr [esi + 0x78], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x78
        // 0x5879718B: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x5879718E: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58797190: je 0x5879719d
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58797192: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58797194: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58797196: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58797198: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5879719A: mov dword ptr [esi + 0x74], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x74
        // 0x5879719D: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x587971A0: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587971A2: je 0x587971af
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587971A4: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587971A6: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587971A8: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587971AA: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587971AC: mov dword ptr [esi + 0x6c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x6C
        // 0x587971AF: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x587971B2: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587971B4: je 0x587971c1
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587971B6: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587971B8: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587971BA: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587971BC: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587971BE: mov dword ptr [esi + 0x70], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x70
        // 0x587971C1: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587971C7: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587971C9: je 0x587971d9
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587971CB: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587971CD: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587971CF: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587971D1: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587971D3: mov dword ptr [esi + 0x80], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587971D9: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587971DF: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587971E1: je 0x587971f1
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587971E3: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587971E5: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587971E7: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587971E9: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587971EB: mov dword ptr [esi + 0x84], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587971F1: mov ecx, dword ptr [esi + 0x1c4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587971F7: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587971F9: je 0x58797209
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587971FB: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587971FD: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587971FF: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58797201: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58797203: mov dword ptr [esi + 0x1c4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797209: mov ecx, dword ptr [esi + 0x1c8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879720F: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58797211: je 0x58797221
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58797213: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58797215: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58797217: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58797219: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5879721B: mov dword ptr [esi + 0x1c8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797221: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797227: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58797229: je 0x58797239
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5879722B: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5879722D: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5879722F: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58797231: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58797233: mov dword ptr [esi + 0x90], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797239: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879723F: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58797241: je 0x58797251
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58797243: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58797245: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58797247: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58797249: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5879724B: mov dword ptr [esi + 0x88], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797251: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797257: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58797259: je 0x58797269
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5879725B: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5879725D: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5879725F: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58797261: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58797263: mov dword ptr [esi + 0x8c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797269: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879726F: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58797271: je 0x58797281
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58797273: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58797275: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58797277: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58797279: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5879727B: mov dword ptr [esi + 0x94], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797281: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797287: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58797289: je 0x58797299
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5879728B: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5879728D: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5879728F: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58797291: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58797293: mov dword ptr [esi + 0x98], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797299: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x5879729C: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5879729E: je 0x587972ab
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587972A0: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587972A2: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587972A4: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587972A6: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587972A8: mov dword ptr [esi + 0x7c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x7C
        // 0x587972AB: mov ecx, dword ptr [esi + 0x1b8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587972B1: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587972B3: je 0x587972c3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587972B5: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587972B7: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587972B9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587972BB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587972BD: mov dword ptr [esi + 0x1b8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587972C3: mov ecx, dword ptr [esi + 0x1bc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587972C9: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587972CB: je 0x587972db
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587972CD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587972CF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587972D1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587972D3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587972D5: mov dword ptr [esi + 0x1bc], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587972DB: mov ecx, dword ptr [esi + 0x1c0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587972E1: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587972E3: je 0x587972f3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587972E5: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587972E7: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587972E9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587972EB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587972ED: mov dword ptr [esi + 0x1c0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587972F3: mov ecx, dword ptr [esi + 0x1cc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587972F9: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587972FB: je 0x5879730b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587972FD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587972FF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58797301: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58797303: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58797305: mov dword ptr [esi + 0x1cc], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xCC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879730B: mov ecx, dword ptr [esi + 0x19c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797311: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58797313: je 0x58797323
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58797315: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58797317: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58797319: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5879731B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5879731D: mov dword ptr [esi + 0x19c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797323: mov ecx, dword ptr [esi + 0x1a8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797329: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5879732B: je 0x5879733b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5879732D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5879732F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58797331: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58797333: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58797335: mov dword ptr [esi + 0x1a8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879733B: mov ecx, dword ptr [esi + 0x1a0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797341: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58797343: je 0x58797353
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58797345: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58797347: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58797349: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5879734B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5879734D: mov dword ptr [esi + 0x1a0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797353: mov ecx, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797359: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5879735B: je 0x5879736b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5879735D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5879735F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58797361: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58797363: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58797365: mov dword ptr [esi + 0xd4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879736B: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797371: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58797373: je 0x58797383
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58797375: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58797377: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58797379: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5879737B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5879737D: mov dword ptr [esi + 0xb0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797383: mov ecx, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797389: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5879738B: je 0x5879739b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5879738D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5879738F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58797391: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58797393: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58797395: mov dword ptr [esi + 0xd8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879739B: mov ecx, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587973A1: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587973A3: je 0x587973b3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587973A5: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587973A7: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587973A9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587973AB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587973AD: mov dword ptr [esi + 0xd0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587973B3: lea ebx, [esi + 0xdc]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587973B9: mov ebp, 0x30
        __asm _emit 0xBD
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587973BE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x587973C0: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x587973C2: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587973C4: je 0x587973d0
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587973C6: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587973C8: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587973CA: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587973CC: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587973CE: mov dword ptr [ebx], edi
        __asm _emit 0x89
        __asm _emit 0x3B
        // 0x587973D0: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x587973D3: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x587973D6: jne 0x587973c0
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x587973D8: lea ebx, [esi + 0x1ac]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587973DE: mov ebp, 3
        __asm _emit 0xBD
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587973E3: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x587973E5: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587973E7: je 0x587973f3
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587973E9: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587973EB: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587973ED: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587973EF: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587973F1: mov dword ptr [ebx], edi
        __asm _emit 0x89
        __asm _emit 0x3B
        // 0x587973F3: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x587973F6: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x587973F9: jne 0x587973e3
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x587973FB: lea ebx, [esi + 0xb4]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797401: mov ebp, 7
        __asm _emit 0xBD
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797406: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x58797408: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5879740A: je 0x58797416
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5879740C: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5879740E: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58797410: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58797412: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58797414: mov dword ptr [ebx], edi
        __asm _emit 0x89
        __asm _emit 0x3B
        // 0x58797416: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x58797419: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x5879741C: jne 0x58797406
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x5879741E: mov eax, dword ptr [esi + 0x2d4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797424: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58797426: je 0x58797437
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x58797428: push eax
        __asm _emit 0x50
        // 0x58797429: call 0x5897ce26
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0x59
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x5879742E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58797431: mov dword ptr [esi + 0x2d4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xD4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797437: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58797439: mov dword ptr [esp + 0x20], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58797441: call 0x58902c10
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0xB7
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58797446: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5879744A: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797451: pop ecx
        __asm _emit 0x59
        // 0x58797452: pop edi
        __asm _emit 0x5F
        // 0x58797453: pop esi
        __asm _emit 0x5E
        // 0x58797454: pop ebp
        __asm _emit 0x5D
        // 0x58797455: pop ebx
        __asm _emit 0x5B
        // 0x58797456: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58797459: ret
        __asm _emit 0xC3
    }
}
