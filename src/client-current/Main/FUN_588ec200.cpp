// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588EC200 .. +0x3A7 bytes.
extern "C" __declspec(naked) void FUN_588ec200() {
    __asm {
        // 0x588EC200: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588EC202: push 0x58987f48
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x7F
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588EC207: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC20D: push eax
        __asm _emit 0x50
        // 0x588EC20E: push ecx
        __asm _emit 0x51
        // 0x588EC20F: push ebx
        __asm _emit 0x53
        // 0x588EC210: push ebp
        __asm _emit 0x55
        // 0x588EC211: push esi
        __asm _emit 0x56
        // 0x588EC212: push edi
        __asm _emit 0x57
        // 0x588EC213: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588EC218: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588EC21A: push eax
        __asm _emit 0x50
        // 0x588EC21B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588EC21F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC225: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588EC227: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588EC22B: mov dword ptr [esi], 0x589a1548
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x48
        __asm _emit 0x15
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588EC231: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x588EC234: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588EC236: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588EC23A: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588EC23C: je 0x588ec249
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588EC23E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EC240: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC242: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC244: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EC246: mov dword ptr [esi + 0x68], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x68
        // 0x588EC249: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588EC24C: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588EC24E: je 0x588ec25b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588EC250: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EC252: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC254: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC256: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EC258: mov dword ptr [esi + 0x6c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x6C
        // 0x588EC25B: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588EC25E: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588EC260: je 0x588ec26d
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588EC262: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EC264: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC266: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC268: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EC26A: mov dword ptr [esi + 0x60], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x60
        // 0x588EC26D: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x588EC270: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588EC272: je 0x588ec27f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588EC274: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EC276: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC278: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC27A: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EC27C: mov dword ptr [esi + 0x64], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x64
        // 0x588EC27F: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC285: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588EC287: je 0x588ec297
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EC289: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EC28B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC28D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC28F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EC291: mov dword ptr [esi + 0x80], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC297: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC29D: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588EC29F: je 0x588ec2af
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EC2A1: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EC2A3: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC2A5: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC2A7: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EC2A9: mov dword ptr [esi + 0x84], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC2AF: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC2B5: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588EC2B7: je 0x588ec2c7
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EC2B9: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EC2BB: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC2BD: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC2BF: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EC2C1: mov dword ptr [esi + 0x88], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC2C7: mov ecx, dword ptr [esi + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC2CD: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588EC2CF: je 0x588ec2df
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EC2D1: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EC2D3: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC2D5: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC2D7: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EC2D9: mov dword ptr [esi + 0x10c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC2DF: mov ecx, dword ptr [esi + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC2E5: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588EC2E7: je 0x588ec2f7
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EC2E9: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EC2EB: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC2ED: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC2EF: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EC2F1: mov dword ptr [esi + 0x114], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC2F7: mov ecx, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC2FD: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588EC2FF: je 0x588ec30f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EC301: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EC303: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC305: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC307: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EC309: mov dword ptr [esi + 0x118], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC30F: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC315: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588EC317: je 0x588ec327
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EC319: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EC31B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC31D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC31F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EC321: mov dword ptr [esi + 0x11c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC327: mov ecx, dword ptr [esi + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC32D: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588EC32F: je 0x588ec33f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EC331: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EC333: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC335: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC337: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EC339: mov dword ptr [esi + 0x110], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC33F: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC345: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588EC347: je 0x588ec357
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EC349: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EC34B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC34D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC34F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EC351: mov dword ptr [esi + 0xb0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC357: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC35D: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588EC35F: je 0x588ec36f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EC361: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EC363: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC365: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC367: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EC369: mov dword ptr [esi + 0xb4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC36F: mov ecx, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC375: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588EC377: je 0x588ec387
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EC379: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EC37B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC37D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC37F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EC381: mov dword ptr [esi + 0xd0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC387: mov ecx, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC38D: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588EC38F: je 0x588ec39f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EC391: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EC393: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC395: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC397: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EC399: mov dword ptr [esi + 0xd4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC39F: lea ebx, [esi + 0xe8]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC3A5: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC3AA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC3B0: mov ecx, dword ptr [ebx - 8]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0xF8
        // 0x588EC3B3: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588EC3B5: je 0x588ec3c2
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588EC3B7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EC3B9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC3BB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC3BD: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EC3BF: mov dword ptr [ebx - 8], edi
        __asm _emit 0x89
        __asm _emit 0x7B
        __asm _emit 0xF8
        // 0x588EC3C2: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x588EC3C4: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588EC3C6: je 0x588ec3d2
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588EC3C8: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EC3CA: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC3CC: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC3CE: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EC3D0: mov dword ptr [ebx], edi
        __asm _emit 0x89
        __asm _emit 0x3B
        // 0x588EC3D2: mov ecx, dword ptr [ebx - 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0xE0
        // 0x588EC3D5: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588EC3D7: je 0x588ec3e4
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588EC3D9: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EC3DB: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC3DD: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC3DF: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EC3E1: mov dword ptr [ebx - 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7B
        __asm _emit 0xE0
        // 0x588EC3E4: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x588EC3E7: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x588EC3EA: jne 0x588ec3b0
        __asm _emit 0x75
        __asm _emit 0xC4
        // 0x588EC3EC: mov ecx, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC3F2: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588EC3F4: je 0x588ec404
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EC3F6: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EC3F8: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC3FA: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC3FC: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EC3FE: mov dword ptr [esi + 0xd8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC404: mov ecx, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC40A: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588EC40C: je 0x588ec41c
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EC40E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EC410: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC412: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC414: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EC416: mov dword ptr [esi + 0xdc], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC41C: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC422: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588EC424: je 0x588ec434
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EC426: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EC428: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC42A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC42C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EC42E: mov dword ptr [esi + 0xbc], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC434: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC43A: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588EC43C: je 0x588ec44c
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EC43E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EC440: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC442: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC444: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EC446: mov dword ptr [esi + 0xc0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC44C: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC452: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588EC454: je 0x588ec464
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EC456: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EC458: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC45A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC45C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EC45E: mov dword ptr [esi + 0xf0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC464: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC46A: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588EC46C: je 0x588ec47c
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EC46E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EC470: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC472: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC474: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EC476: mov dword ptr [esi + 0xf8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC47C: mov ecx, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC482: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588EC484: je 0x588ec494
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EC486: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EC488: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC48A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC48C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EC48E: mov dword ptr [esi + 0xfc], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC494: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC49A: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588EC49C: je 0x588ec4ac
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EC49E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EC4A0: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC4A2: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC4A4: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EC4A6: mov dword ptr [esi + 0xf4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC4AC: mov ecx, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC4B2: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588EC4B4: je 0x588ec4c4
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EC4B6: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EC4B8: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC4BA: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC4BC: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EC4BE: mov dword ptr [esi + 0x100], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC4C4: mov ecx, dword ptr [esi + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC4CA: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588EC4CC: je 0x588ec4dc
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EC4CE: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EC4D0: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC4D2: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC4D4: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EC4D6: mov dword ptr [esi + 0x104], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC4DC: mov ecx, dword ptr [esi + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC4E2: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588EC4E4: je 0x588ec4f4
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EC4E6: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EC4E8: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC4EA: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC4EC: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EC4EE: mov dword ptr [esi + 0x108], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC4F4: mov ecx, dword ptr [esi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC4FA: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588EC4FC: je 0x588ec50c
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EC4FE: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EC500: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC502: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC504: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EC506: mov dword ptr [esi + 0x120], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC50C: mov ecx, dword ptr [esi + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC512: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588EC514: je 0x588ec524
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EC516: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EC518: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC51A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC51C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EC51E: mov dword ptr [esi + 0x124], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC524: mov ecx, dword ptr [esi + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC52A: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588EC52C: je 0x588ec53c
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EC52E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EC530: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC532: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC534: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EC536: mov dword ptr [esi + 0x128], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC53C: mov ecx, dword ptr [esi + 0x12c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC542: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588EC544: je 0x588ec554
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EC546: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EC548: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC54A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC54C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EC54E: mov dword ptr [esi + 0x12c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC554: mov ecx, dword ptr [esi + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC55A: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588EC55C: je 0x588ec56c
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EC55E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EC560: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC562: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC564: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EC566: mov dword ptr [esi + 0x130], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC56C: mov ecx, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC572: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588EC574: je 0x588ec584
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EC576: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EC578: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC57A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC57C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EC57E: mov dword ptr [esi + 0x134], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC584: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588EC586: mov dword ptr [esp + 0x20], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588EC58E: call 0x58902c10
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588EC593: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588EC597: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC59E: pop ecx
        __asm _emit 0x59
        // 0x588EC59F: pop edi
        __asm _emit 0x5F
        // 0x588EC5A0: pop esi
        __asm _emit 0x5E
        // 0x588EC5A1: pop ebp
        __asm _emit 0x5D
        // 0x588EC5A2: pop ebx
        __asm _emit 0x5B
        // 0x588EC5A3: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588EC5A6: ret
        __asm _emit 0xC3
    }
}
