// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 647 bytes in 1 exact ranges.
// Source symbol alias: FUN_587756f0.

// Ghidra body range 0x587756F0..0x58775977; 647 mapped bytes.
extern "C" __declspec(naked) void FUN_587756f0_segment_00() {
    __asm {
        // 0x587756F0: push ebp
        __asm _emit 0x55
        // 0x587756F1: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x587756F3: and esp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xF8
        // 0x587756F6: sub esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x14
        // 0x587756F9: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x08
        // 0x587756FC: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x587756FF: push ebx
        __asm _emit 0x53
        // 0x58775700: push esi
        __asm _emit 0x56
        // 0x58775701: push edi
        __asm _emit 0x57
        // 0x58775702: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58775706: cmp edx, dword ptr [eax + 0x1334]
        __asm _emit 0x3B
        __asm _emit 0x90
        __asm _emit 0x34
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877570C: jne 0x58775727
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x5877570E: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x58775711: cmp edx, dword ptr [eax + 0x1338]
        __asm _emit 0x3B
        __asm _emit 0x90
        __asm _emit 0x38
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775717: jne 0x58775727
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x58775719: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877571E: pop edi
        __asm _emit 0x5F
        // 0x5877571F: pop esi
        __asm _emit 0x5E
        // 0x58775720: pop ebx
        __asm _emit 0x5B
        // 0x58775721: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58775723: pop ebp
        __asm _emit 0x5D
        // 0x58775724: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58775727: mov esi, dword ptr [ecx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x54
        // 0x5877572A: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x5877572D: mov dword ptr [esp + 0x10], 3
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775735: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x58775738: jbe 0x5877573f
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5877573A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0x75
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877573F: mov ebx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x1E
        // 0x58775741: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58775745: mov dword ptr [esp + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58775749: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775750: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58775754: mov esi, dword ptr [eax + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x54
        // 0x58775757: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x5877575A: cmp dword ptr [esi + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x5877575D: jbe 0x58775764
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5877575F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x75
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775764: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x58775766: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58775768: je 0x5877576e
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5877576A: cmp ebx, esi
        __asm _emit 0x3B
        __asm _emit 0xDE
        // 0x5877576C: je 0x58775773
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5877576E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0x74
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775773: cmp dword ptr [esp + 0x1c], edi
        __asm _emit 0x39
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58775777: je 0x5877596a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xED
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877577D: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5877577F: jne 0x587758ab
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775785: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877578A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877578C: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58775790: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58775793: jb 0x5877579a
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58775795: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0x74
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877579A: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5877579E: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587757A0: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x587757A3: cmp dword ptr [eax], ecx
        __asm _emit 0x39
        __asm _emit 0x08
        // 0x587757A5: jne 0x5877593f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587757AB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587757AD: jne 0x587758b2
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587757B3: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0x74
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587757B8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587757BA: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587757BE: cmp edx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587757C1: jb 0x587757c8
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587757C3: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0x74
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587757C8: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587757CC: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587757CE: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x587757D1: cmp dword ptr [ecx + 4], edx
        __asm _emit 0x39
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587757D4: jne 0x5877593f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587757DA: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587757DC: jne 0x587758b9
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587757E2: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587757E7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587757E9: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587757ED: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x587757F0: jb 0x587757f7
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587757F2: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x74
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587757F7: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587757FB: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587757FD: cmp word ptr [eax + 8], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58775802: jne 0x5877593f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775808: mov esi, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x5877580B: cmp dword ptr [esi + 0x6070], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775812: je 0x587758ee
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775818: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5877581A: jne 0x587758c0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775820: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0x74
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775825: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58775827: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5877582B: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x5877582E: jb 0x58775835
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58775830: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0x74
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775835: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58775839: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x5877583B: mov cx, word ptr [eax + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x18
        // 0x5877583F: cmp cx, word ptr [esi + 0x350]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x8E
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775846: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5877584A: je 0x58775931
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775850: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58775855: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58775857: cmp dword ptr [ecx + 0x10], 0xffff
        __asm _emit 0x81
        __asm _emit 0x79
        __asm _emit 0x10
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877585E: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58775862: je 0x587758c7
        __asm _emit 0x74
        __asm _emit 0x63
        // 0x58775864: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58775869: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5877586B: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x5877586E: cmp eax, dword ptr [esi + 0x1334]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775874: jne 0x5877593f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877587A: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5877587E: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0xF7
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58775883: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58775885: mov edx, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x14
        // 0x58775888: cmp edx, dword ptr [esi + 0x1338]
        __asm _emit 0x3B
        __asm _emit 0x96
        __asm _emit 0x38
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877588E: jne 0x5877593f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775894: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58775898: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0xF7
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5877589D: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x5877589F: cmp dword ptr [eax + 0x14], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587758A3: je 0x5877593f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587758A9: jmp 0x587758da
        __asm _emit 0xEB
        __asm _emit 0x2F
        // 0x587758AB: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587758AD: jmp 0x5877578c
        __asm _emit 0xE9
        __asm _emit 0xDA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587758B2: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587758B4: jmp 0x587757ba
        __asm _emit 0xE9
        __asm _emit 0x01
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587758B9: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587758BB: jmp 0x587757e9
        __asm _emit 0xE9
        __asm _emit 0x29
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587758C0: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587758C2: jmp 0x58775827
        __asm _emit 0xE9
        __asm _emit 0x60
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587758C7: movzx esi, byte ptr [esi + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xB6
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587758CE: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0xF7
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587758D3: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587758D5: cmp dword ptr [eax + 0x14], esi
        __asm _emit 0x39
        __asm _emit 0x70
        __asm _emit 0x14
        // 0x587758D8: jne 0x5877593f
        __asm _emit 0x75
        __asm _emit 0x65
        // 0x587758DA: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587758DE: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0xF7
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587758E3: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587758E5: mov edx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587758E8: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587758EC: jmp 0x5877593f
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587758EE: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587758F0: jne 0x58775962
        __asm _emit 0x75
        __asm _emit 0x70
        // 0x587758F2: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x73
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587758F7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587758F9: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587758FD: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58775900: jb 0x58775907
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58775902: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0x73
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775907: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5877590B: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x5877590D: cmp dword ptr [eax + 0x10], 0xffff
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x10
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775914: jne 0x5877593f
        __asm _emit 0x75
        __asm _emit 0x29
        // 0x58775916: movzx esi, byte ptr [esi + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xB6
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877591D: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58775921: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0xF7
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58775926: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58775928: cmp dword ptr [ecx + 0x14], esi
        __asm _emit 0x39
        __asm _emit 0x71
        __asm _emit 0x14
        // 0x5877592B: jne 0x5877593f
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x5877592D: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58775931: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0xF7
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58775936: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58775938: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x5877593B: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5877593F: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58775941: jne 0x58775966
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x58775943: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x73
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775948: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877594A: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5877594E: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58775951: jb 0x58775958
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58775953: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0x73
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775958: add dword ptr [esp + 0x1c], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x04
        // 0x5877595D: jmp 0x58775750
        __asm _emit 0xE9
        __asm _emit 0xEE
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58775962: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58775964: jmp 0x587758f9
        __asm _emit 0xEB
        __asm _emit 0x93
        // 0x58775966: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58775968: jmp 0x5877594a
        __asm _emit 0xEB
        __asm _emit 0xE0
        // 0x5877596A: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5877596E: pop edi
        __asm _emit 0x5F
        // 0x5877596F: pop esi
        __asm _emit 0x5E
        // 0x58775970: pop ebx
        __asm _emit 0x5B
        // 0x58775971: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58775973: pop ebp
        __asm _emit 0x5D
        // 0x58775974: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
