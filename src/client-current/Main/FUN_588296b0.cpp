// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1154 bytes in 1 exact ranges.
// Source symbol alias: FUN_588296b0.

// Ghidra body range 0x588296B0..0x58829B32; 1154 mapped bytes.
extern "C" __declspec(naked) void FUN_588296b0_segment_00() {
    __asm {
        // 0x588296B0: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x588296B3: push esi
        __asm _emit 0x56
        // 0x588296B4: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588296B6: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588296BA: mov ecx, 0x1f00
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588296BF: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x588296C2: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588296C7: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588296CA: je 0x588296e1
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588296CC: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588296D0: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x588296D3: mov edx, 0x400
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588296D8: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588296DB: jne 0x58829b2d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x4C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588296E1: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x588296E4: push ebx
        __asm _emit 0x53
        // 0x588296E5: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x62
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x588296EA: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x588296ED: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0x62
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x588296F2: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588296F8: call 0x5890a8e0
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0x11
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x588296FD: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829703: call 0x5890a8e0
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0x11
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58829708: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882970E: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0x62
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58829713: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829719: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x62
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5882971E: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829724: call 0x5890a8e0
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0x11
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58829729: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882972F: call 0x5890a8e0
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0x11
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58829734: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882973A: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x62
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5882973F: mov eax, dword ptr [0x58a0b4a0]
        __asm _emit 0xA1
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58829744: mov ecx, dword ptr [0x58a0b4a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5882974A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882974C: jne 0x58829806
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829752: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58829754: jne 0x58829806
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882975A: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x5882975D: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829762: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58829766: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x58829769: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x61
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5882976E: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x58829771: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0x61
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58829776: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882977C: call 0x5890a8e0
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x11
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58829781: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829787: call 0x5890a8e0
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0x11
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5882978C: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829792: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x61
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58829797: mov eax, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882979D: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x588297A1: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588297A7: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x588297AB: mov eax, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588297B1: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588297B6: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588297BA: mov edx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588297C0: mov dword ptr [edx + 0x50], 1
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588297C7: mov eax, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588297CD: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588297D1: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588297D7: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0x61
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x588297DC: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588297E2: call 0x5890a8e0
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x588297E7: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588297ED: call 0x5890a8e0
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x588297F2: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588297F8: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x61
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x588297FD: mov byte ptr [esi + 0x60], 1
        __asm _emit 0xC6
        __asm _emit 0x46
        __asm _emit 0x60
        __asm _emit 0x01
        // 0x58829801: jmp 0x58829af5
        __asm _emit 0xE9
        __asm _emit 0xEF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829806: mov dx, word ptr [0x58a0b4a8]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5882980D: cmp dx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x03
        // 0x58829811: jne 0x58829a23
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829817: lea edx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5882981B: mov dword ptr [esp + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5882981F: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58829825: push edx
        __asm _emit 0x52
        // 0x58829826: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5882982A: call 0x58754080
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0xA8
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5882982F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58829831: je 0x5882984e
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x58829833: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58829839: lea eax, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5882983D: push eax
        __asm _emit 0x50
        // 0x5882983E: call 0x58753e60
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0xA6
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58829843: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x58829846: push eax
        __asm _emit 0x50
        // 0x58829847: call 0x58770a80
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x72
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5882984C: jmp 0x5882985e
        __asm _emit 0xEB
        __asm _emit 0x10
        // 0x5882984E: lea ecx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58829852: push ecx
        __asm _emit 0x51
        // 0x58829853: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58829859: call 0x587b9270
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0xFA
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5882985E: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58829864: push edi
        __asm _emit 0x57
        // 0x58829865: lea edx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58829869: push edx
        __asm _emit 0x52
        // 0x5882986A: call 0x58753ea0
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0xA6
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5882986F: mov edi, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x7C
        // 0x58829872: push eax
        __asm _emit 0x50
        // 0x58829873: mov eax, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829879: push eax
        __asm _emit 0x50
        // 0x5882987A: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58829880: mov eax, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829886: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x58829889: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829890: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x58829892: inc eax
        __asm _emit 0x40
        // 0x58829893: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58829895: jne 0x58829890
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x58829897: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58829899: lea ecx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5882989D: mov dword ptr [edi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588298A3: mov dword ptr [edi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588298A9: push ecx
        __asm _emit 0x51
        // 0x588298AA: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588298B0: call 0x587540a0
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0xA7
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x588298B5: pop edi
        __asm _emit 0x5F
        // 0x588298B6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588298B8: je 0x588298d8
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x588298BA: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588298C0: lea edx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588298C4: push edx
        __asm _emit 0x52
        // 0x588298C5: call 0x58753ec0
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0xA5
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x588298CA: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588298D0: push eax
        __asm _emit 0x50
        // 0x588298D1: call 0x58770a80
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0x71
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x588298D6: jmp 0x588298e8
        __asm _emit 0xEB
        __asm _emit 0x10
        // 0x588298D8: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588298DE: lea eax, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588298E2: push eax
        __asm _emit 0x50
        // 0x588298E3: call 0x587b92e0
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0xF9
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x588298E8: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588298EE: call 0x5890a8e0
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0x0F
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x588298F3: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588298F9: call 0x5890a8e0
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0x0F
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x588298FE: mov eax, dword ptr [0x58a0b4a0]
        __asm _emit 0xA1
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58829903: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58829905: je 0x588299ed
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882990B: lea ecx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5882990F: push ecx
        __asm _emit 0x51
        // 0x58829910: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58829916: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5882991A: mov dword ptr [esp + 0x10], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829922: call 0x58754080
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0xA7
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58829927: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58829929: je 0x58829949
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x5882992B: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58829931: lea edx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58829935: push edx
        __asm _emit 0x52
        // 0x58829936: call 0x58753e60
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0xA5
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5882993B: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829941: push eax
        __asm _emit 0x50
        // 0x58829942: call 0x58770a80
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0x71
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58829947: jmp 0x58829959
        __asm _emit 0xEB
        __asm _emit 0x10
        // 0x58829949: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882994F: lea eax, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58829953: push eax
        __asm _emit 0x50
        // 0x58829954: call 0x587b9270
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0xF9
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58829959: lea ecx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5882995D: push ecx
        __asm _emit 0x51
        // 0x5882995E: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58829964: call 0x587540a0
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0xA7
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58829969: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882996B: je 0x5882998b
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x5882996D: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58829973: lea edx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58829977: push edx
        __asm _emit 0x52
        // 0x58829978: call 0x58753ec0
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0xA5
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5882997D: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829983: push eax
        __asm _emit 0x50
        // 0x58829984: call 0x58770a80
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x70
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58829989: jmp 0x5882999b
        __asm _emit 0xEB
        __asm _emit 0x10
        // 0x5882998B: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58829991: lea eax, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58829995: push eax
        __asm _emit 0x50
        // 0x58829996: call 0x587b92e0
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0xF9
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5882999B: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588299A1: call 0x5890a8e0
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0x0F
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x588299A6: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588299AC: call 0x5890a8e0
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x0F
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x588299B1: mov eax, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588299B7: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588299BC: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x588299C0: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588299C6: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x588299CA: mov eax, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588299D0: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588299D5: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588299D9: mov eax, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588299DF: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588299E1: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588299E5: mov byte ptr [esi + 0x60], bl
        __asm _emit 0x88
        __asm _emit 0x5E
        __asm _emit 0x60
        // 0x588299E8: jmp 0x58829af5
        __asm _emit 0xE9
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588299ED: mov eax, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588299F3: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588299F8: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x588299FC: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829A02: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58829A06: mov eax, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829A0C: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58829A10: mov eax, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829A16: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58829A1A: mov byte ptr [esi + 0x60], 0
        __asm _emit 0xC6
        __asm _emit 0x46
        __asm _emit 0x60
        __asm _emit 0x00
        // 0x58829A1E: jmp 0x58829af5
        __asm _emit 0xE9
        __asm _emit 0xD2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829A23: cmp dx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58829A27: jne 0x58829b2c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829A2D: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58829A33: push 0x58a0b4a0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58829A38: call 0x58754080
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0xA6
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58829A3D: push 0x58a0b4a0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58829A42: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58829A44: je 0x58829a5f
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x58829A46: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58829A4C: call 0x58753e60
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0xA4
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58829A51: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829A57: push eax
        __asm _emit 0x50
        // 0x58829A58: call 0x58770a80
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0x70
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58829A5D: jmp 0x58829a6a
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x58829A5F: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58829A65: call 0x587b9270
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0xF8
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58829A6A: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58829A70: push 0x58a0b4a0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58829A75: call 0x587540a0
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0xA6
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58829A7A: push 0x58a0b4a0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58829A7F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58829A81: je 0x58829a9c
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x58829A83: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58829A89: call 0x58753ec0
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0xA4
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58829A8E: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829A94: push eax
        __asm _emit 0x50
        // 0x58829A95: call 0x58770a80
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0x6F
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58829A9A: jmp 0x58829aa7
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x58829A9C: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58829AA2: call 0x587b92e0
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0xF8
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58829AA7: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829AAD: call 0x5890a8e0
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0x0E
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58829AB2: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829AB8: call 0x5890a8e0
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0x0E
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58829ABD: mov eax, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829AC3: mov byte ptr [esi + 0x60], 4
        __asm _emit 0xC6
        __asm _emit 0x46
        __asm _emit 0x60
        __asm _emit 0x04
        // 0x58829AC7: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829ACC: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58829AD0: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829AD6: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58829AD8: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58829ADC: mov eax, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829AE2: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829AE7: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58829AEB: mov eax, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829AF1: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58829AF5: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58829AF9: mov ecx, 0xe1ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829AFE: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x58829B01: mov edx, 0x100
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829B06: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x58829B09: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58829B0D: or word ptr [esi + 0x24], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x05
        // 0x58829B12: mov eax, dword ptr [0x58a24584]
        __asm _emit 0xA1
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58829B17: mov ecx, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x30
        // 0x58829B1A: mov eax, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x30
        // 0x58829B1D: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58829B1F: mov eax, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x30
        // 0x58829B22: mov edx, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x18
        // 0x58829B25: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829B27: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x58829B29: push eax
        __asm _emit 0x50
        // 0x58829B2A: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58829B2C: pop ebx
        __asm _emit 0x5B
        // 0x58829B2D: pop esi
        __asm _emit 0x5E
        // 0x58829B2E: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58829B31: ret
        __asm _emit 0xC3
    }
}
