// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 526 bytes in 1 exact ranges.
// Source symbol alias: FUN_587752d0.

// Ghidra body range 0x587752D0..0x587754DE; 526 mapped bytes.
extern "C" __declspec(naked) void FUN_587752d0_segment_00() {
    __asm {
        // 0x587752D0: push ebp
        __asm _emit 0x55
        // 0x587752D1: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x587752D3: and esp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xF8
        // 0x587752D6: sub esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x14
        // 0x587752D9: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x587752DC: movzx edx, byte ptr [eax + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x90
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587752E3: push ebx
        __asm _emit 0x53
        // 0x587752E4: push esi
        __asm _emit 0x56
        // 0x587752E5: push edi
        __asm _emit 0x57
        // 0x587752E6: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587752EA: cmp dword ptr [ebp + 8], edx
        __asm _emit 0x39
        __asm _emit 0x55
        __asm _emit 0x08
        // 0x587752ED: jne 0x587752fd
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x587752EF: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587752F4: pop edi
        __asm _emit 0x5F
        // 0x587752F5: pop esi
        __asm _emit 0x5E
        // 0x587752F6: pop ebx
        __asm _emit 0x5B
        // 0x587752F7: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x587752F9: pop ebp
        __asm _emit 0x5D
        // 0x587752FA: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587752FD: mov esi, dword ptr [ecx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x54
        // 0x58775300: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x58775303: mov dword ptr [esp + 0x10], 3
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877530B: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x5877530E: jbe 0x58775315
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58775310: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0x79
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775315: mov ebx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x1E
        // 0x58775317: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5877531B: mov dword ptr [esp + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5877531F: nop
        __asm _emit 0x90
        // 0x58775320: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58775324: mov esi, dword ptr [eax + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x54
        // 0x58775327: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x5877532A: cmp dword ptr [esi + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x5877532D: jbe 0x58775334
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5877532F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0x79
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775334: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x58775336: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58775338: je 0x5877533e
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5877533A: cmp ebx, esi
        __asm _emit 0x3B
        __asm _emit 0xDE
        // 0x5877533C: je 0x58775343
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5877533E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x79
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775343: cmp dword ptr [esp + 0x1c], edi
        __asm _emit 0x39
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58775347: je 0x587754d1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877534D: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5877534F: jne 0x587753ff
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775355: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x79
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877535A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877535C: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58775360: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58775363: jb 0x5877536a
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58775365: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x79
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877536A: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5877536E: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58775370: mov edi, 0xffff
        __asm _emit 0xBF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775375: cmp dword ptr [eax], edi
        __asm _emit 0x39
        __asm _emit 0x38
        // 0x58775377: jne 0x587754a6
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877537D: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5877537F: jne 0x58775406
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775385: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877538A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877538C: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58775390: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58775393: jb 0x5877539a
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58775395: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0x78
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877539A: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5877539E: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587753A0: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x587753A3: cmp dword ptr [eax + 4], ecx
        __asm _emit 0x39
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587753A6: jne 0x587754a6
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587753AC: mov esi, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x587753AF: cmp dword ptr [esi + 0x6070], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587753B6: je 0x58775459
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587753BC: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587753BE: jne 0x5877540a
        __asm _emit 0x75
        __asm _emit 0x4A
        // 0x587753C0: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0x78
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587753C5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587753C7: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587753CB: cmp edx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587753CE: jb 0x587753d5
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587753D0: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x78
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587753D5: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587753D9: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587753DB: mov dx, word ptr [ecx + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x18
        // 0x587753DF: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587753E3: cmp dx, word ptr [esi + 0x350]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x96
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587753EA: jne 0x5877540e
        __asm _emit 0x75
        __asm _emit 0x22
        // 0x587753EC: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587753F1: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587753F3: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x587753F6: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587753FA: jmp 0x587754a6
        __asm _emit 0xE9
        __asm _emit 0xA7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587753FF: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58775401: jmp 0x5877535c
        __asm _emit 0xE9
        __asm _emit 0x56
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58775406: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58775408: jmp 0x5877538c
        __asm _emit 0xEB
        __asm _emit 0x82
        // 0x5877540A: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x5877540C: jmp 0x587753c7
        __asm _emit 0xEB
        __asm _emit 0xB9
        // 0x5877540E: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58775413: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58775415: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58775419: cmp dword ptr [edx + 0x10], edi
        __asm _emit 0x39
        __asm _emit 0x7A
        __asm _emit 0x10
        // 0x5877541C: je 0x58775481
        __asm _emit 0x74
        __asm _emit 0x63
        // 0x5877541E: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58775423: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58775425: mov ecx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58775428: cmp ecx, dword ptr [esi + 0x1334]
        __asm _emit 0x3B
        __asm _emit 0x8E
        __asm _emit 0x34
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877542E: jne 0x587754a6
        __asm _emit 0x75
        __asm _emit 0x76
        // 0x58775430: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58775434: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58775439: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5877543B: mov eax, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x14
        // 0x5877543E: cmp eax, dword ptr [esi + 0x1338]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775444: jne 0x587754a6
        __asm _emit 0x75
        __asm _emit 0x60
        // 0x58775446: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5877544A: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5877544F: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58775451: cmp dword ptr [ecx + 0x14], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58775455: je 0x587754a6
        __asm _emit 0x74
        __asm _emit 0x4F
        // 0x58775457: jmp 0x58775494
        __asm _emit 0xEB
        __asm _emit 0x3B
        // 0x58775459: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5877545B: jne 0x587754c9
        __asm _emit 0x75
        __asm _emit 0x6C
        // 0x5877545D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x78
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775462: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58775464: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58775468: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x5877546B: jb 0x58775472
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5877546D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x78
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775472: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58775476: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58775478: cmp dword ptr [eax + 0x10], edi
        __asm _emit 0x39
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x5877547B: jne 0x587754a6
        __asm _emit 0x75
        __asm _emit 0x29
        // 0x5877547D: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58775481: movzx esi, byte ptr [esi + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xB6
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775488: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0xFB
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5877548D: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5877548F: cmp dword ptr [ecx + 0x14], esi
        __asm _emit 0x39
        __asm _emit 0x71
        __asm _emit 0x14
        // 0x58775492: jne 0x587754a6
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x58775494: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58775498: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0xFB
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5877549D: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5877549F: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x587754A2: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587754A6: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587754A8: jne 0x587754cd
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x587754AA: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0x77
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587754AF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587754B1: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587754B5: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x587754B8: jb 0x587754bf
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587754BA: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0x77
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587754BF: add dword ptr [esp + 0x1c], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x04
        // 0x587754C4: jmp 0x58775320
        __asm _emit 0xE9
        __asm _emit 0x57
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587754C9: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587754CB: jmp 0x58775464
        __asm _emit 0xEB
        __asm _emit 0x97
        // 0x587754CD: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587754CF: jmp 0x587754b1
        __asm _emit 0xEB
        __asm _emit 0xE0
        // 0x587754D1: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587754D5: pop edi
        __asm _emit 0x5F
        // 0x587754D6: pop esi
        __asm _emit 0x5E
        // 0x587754D7: pop ebx
        __asm _emit 0x5B
        // 0x587754D8: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x587754DA: pop ebp
        __asm _emit 0x5D
        // 0x587754DB: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
