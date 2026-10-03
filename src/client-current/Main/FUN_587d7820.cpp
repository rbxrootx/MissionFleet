// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587D7820 .. +0x2A5 bytes.
extern "C" __declspec(naked) void FUN_587d7820() {
    __asm {
        // 0x587D7820: push ecx
        __asm _emit 0x51
        // 0x587D7821: mov eax, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7827: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D7829: je 0x587d7835
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587D782B: mov eax, dword ptr [eax + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x4C
        // 0x587D782E: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587D7833: jne 0x587d7839
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x587D7835: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D7837: jmp 0x587d783d
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587D7839: mov al, byte ptr [esp + 8]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587D783D: mov edx, dword ptr [ecx + 0x584]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7843: push ebx
        __asm _emit 0x53
        // 0x587D7844: push ebp
        __asm _emit 0x55
        // 0x587D7845: push esi
        __asm _emit 0x56
        // 0x587D7846: mov si, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x587D784A: and al, 0xf
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x587D784C: push edi
        __asm _emit 0x57
        // 0x587D784D: movzx ax, al
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC0
        // 0x587D7851: mov edi, 0xfff0
        __asm _emit 0xBF
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7856: and si, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xF7
        // 0x587D7859: or si, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xF0
        // 0x587D785C: mov word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x587D7860: mov edx, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7866: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587D7868: je 0x587d7880
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x587D786A: mov edx, dword ptr [edx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7870: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587D7872: je 0x587d7880
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587D7874: movzx edi, word ptr [edx + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x7A
        __asm _emit 0x0C
        // 0x587D7878: shr edi, 0xa
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x0A
        // 0x587D787B: and edi, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE7
        __asm _emit 0x1F
        // 0x587D787E: jmp 0x587d7882
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D7880: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587D7882: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587D7884: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D7888: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587D788A: jle 0x587d78dc
        __asm _emit 0x7E
        __asm _emit 0x50
        // 0x587D788C: lea edx, [ecx + 0xc0]
        __asm _emit 0x8D
        __asm _emit 0x91
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7892: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D7896: jmp 0x587d78a0
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x587D7898: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D789F: nop
        __asm _emit 0x90
        // 0x587D78A0: mov esi, dword ptr [edx + 0x444]
        __asm _emit 0x8B
        __asm _emit 0xB2
        __asm _emit 0x44
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D78A6: movzx ebx, word ptr [esi + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x5E
        __asm _emit 0x24
        // 0x587D78AA: mov ebp, 0xfff0
        __asm _emit 0xBD
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D78AF: and bx, bp
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xDD
        // 0x587D78B2: or bx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD8
        // 0x587D78B5: mov word ptr [esi + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x24
        // 0x587D78B9: mov esi, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x32
        // 0x587D78BB: movzx ebx, word ptr [esi + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x5E
        __asm _emit 0x24
        // 0x587D78BF: and bx, bp
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xDD
        // 0x587D78C2: or bx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD8
        // 0x587D78C5: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x587D78C8: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x587D78CB: mov word ptr [esi + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x24
        // 0x587D78CF: jne 0x587d78a0
        __asm _emit 0x75
        __asm _emit 0xCF
        // 0x587D78D1: cmp dword ptr [esp + 0x18], 0x1c
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x1C
        // 0x587D78D6: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D78DA: jge 0x587d790d
        __asm _emit 0x7D
        __asm _emit 0x31
        // 0x587D78DC: mov edi, 0x1c
        __asm _emit 0xBF
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D78E1: sub edi, ebx
        __asm _emit 0x2B
        __asm _emit 0xFB
        // 0x587D78E3: lea edx, [ecx + ebx*4 + 0xc0]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x99
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D78EA: add ebx, edi
        __asm _emit 0x03
        __asm _emit 0xDF
        // 0x587D78EC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587D78F0: mov esi, dword ptr [edx + 0x444]
        __asm _emit 0x8B
        __asm _emit 0xB2
        __asm _emit 0x44
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D78F6: mov ebp, 0xfff0
        __asm _emit 0xBD
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D78FB: and word ptr [esi + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x6E
        __asm _emit 0x24
        // 0x587D78FF: mov esi, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x32
        // 0x587D7901: and word ptr [esi + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x6E
        __asm _emit 0x24
        // 0x587D7905: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x587D7908: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x587D790B: jne 0x587d78f0
        __asm _emit 0x75
        __asm _emit 0xE3
        // 0x587D790D: mov edx, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7913: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587D7915: je 0x587d7a89
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x6E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D791B: mov edx, dword ptr [edx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7921: test byte ptr [edx + 0x270], 8
        __asm _emit 0xF6
        __asm _emit 0x82
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        // 0x587D7928: mov edx, dword ptr [ecx + 0x574]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D792E: je 0x587d7959
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x587D7930: movzx esi, word ptr [edx + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x587D7934: mov edi, 0xfff0
        __asm _emit 0xBF
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7939: and si, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xF7
        // 0x587D793C: or si, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xF0
        // 0x587D793F: mov word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x587D7943: mov edx, dword ptr [ecx + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7949: movzx esi, word ptr [edx + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x587D794D: and si, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xF7
        // 0x587D7950: or si, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xF0
        // 0x587D7953: mov word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x587D7957: jmp 0x587d796c
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x587D7959: mov esi, 0xfff0
        __asm _emit 0xBE
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D795E: and word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x587D7962: mov edx, dword ptr [ecx + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7968: and word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x587D796C: mov edx, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7972: mov edx, dword ptr [edx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7978: test byte ptr [edx + 0x270], 4
        __asm _emit 0xF6
        __asm _emit 0x82
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x587D797F: mov edx, dword ptr [ecx + 0x578]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x78
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7985: je 0x587d79b0
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x587D7987: movzx esi, word ptr [edx + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x587D798B: mov edi, 0xfff0
        __asm _emit 0xBF
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7990: and si, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xF7
        // 0x587D7993: or si, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xF0
        // 0x587D7996: mov word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x587D799A: mov edx, dword ptr [ecx + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D79A0: movzx esi, word ptr [edx + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x587D79A4: and si, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xF7
        // 0x587D79A7: or si, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xF0
        // 0x587D79AA: mov word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x587D79AE: jmp 0x587d79c3
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x587D79B0: mov esi, 0xfff0
        __asm _emit 0xBE
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D79B5: and word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x587D79B9: mov edx, dword ptr [ecx + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D79BF: and word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x587D79C3: mov edx, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D79C9: mov edx, dword ptr [edx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D79CF: test byte ptr [edx + 0x270], 2
        __asm _emit 0xF6
        __asm _emit 0x82
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x587D79D6: mov edx, dword ptr [ecx + 0x57c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x7C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D79DC: je 0x587d7a07
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x587D79DE: movzx esi, word ptr [edx + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x587D79E2: mov edi, 0xfff0
        __asm _emit 0xBF
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D79E7: and si, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xF7
        // 0x587D79EA: or si, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xF0
        // 0x587D79ED: mov word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x587D79F1: mov edx, dword ptr [ecx + 0x138]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D79F7: movzx esi, word ptr [edx + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x587D79FB: and si, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xF7
        // 0x587D79FE: or si, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xF0
        // 0x587D7A01: mov word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x587D7A05: jmp 0x587d7a1a
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x587D7A07: mov esi, 0xfff0
        __asm _emit 0xBE
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7A0C: and word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x587D7A10: mov edx, dword ptr [ecx + 0x138]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7A16: and word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x587D7A1A: mov edx, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7A20: mov edx, dword ptr [edx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7A26: test byte ptr [edx + 0x270], 1
        __asm _emit 0xF6
        __asm _emit 0x82
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587D7A2D: je 0x587d7a66
        __asm _emit 0x74
        __asm _emit 0x37
        // 0x587D7A2F: mov edx, dword ptr [ecx + 0x580]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x80
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7A35: mov si, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x587D7A39: mov edi, 0xfff0
        __asm _emit 0xBF
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7A3E: and si, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xF7
        // 0x587D7A41: or si, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xF0
        // 0x587D7A44: mov word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x587D7A48: mov ecx, dword ptr [ecx + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7A4E: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x587D7A52: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x587D7A54: pop edi
        __asm _emit 0x5F
        // 0x587D7A55: and dx, si
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD6
        // 0x587D7A58: pop esi
        __asm _emit 0x5E
        // 0x587D7A59: or dx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD0
        // 0x587D7A5C: pop ebp
        __asm _emit 0x5D
        // 0x587D7A5D: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x587D7A61: pop ebx
        __asm _emit 0x5B
        // 0x587D7A62: pop ecx
        __asm _emit 0x59
        // 0x587D7A63: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587D7A66: mov eax, dword ptr [ecx + 0x580]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7A6C: pop edi
        __asm _emit 0x5F
        // 0x587D7A6D: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7A72: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587D7A76: mov ecx, dword ptr [ecx + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7A7C: pop esi
        __asm _emit 0x5E
        // 0x587D7A7D: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587D7A7F: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x587D7A83: pop ebp
        __asm _emit 0x5D
        // 0x587D7A84: pop ebx
        __asm _emit 0x5B
        // 0x587D7A85: pop ecx
        __asm _emit 0x59
        // 0x587D7A86: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587D7A89: cmp ebx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x20
        // 0x587D7A8C: jge 0x587d7abd
        __asm _emit 0x7D
        __asm _emit 0x2F
        // 0x587D7A8E: mov edx, 0x20
        __asm _emit 0xBA
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7A93: lea eax, [ecx + ebx*4 + 0xc0]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7A9A: sub edx, ebx
        __asm _emit 0x2B
        __asm _emit 0xD3
        // 0x587D7A9C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587D7AA0: mov ecx, dword ptr [eax + 0x444]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7AA6: mov esi, 0xfff0
        __asm _emit 0xBE
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7AAB: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        // 0x587D7AAF: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587D7AB1: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        // 0x587D7AB5: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x587D7AB8: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x587D7ABB: jne 0x587d7aa0
        __asm _emit 0x75
        __asm _emit 0xE3
        // 0x587D7ABD: pop edi
        __asm _emit 0x5F
        // 0x587D7ABE: pop esi
        __asm _emit 0x5E
        // 0x587D7ABF: pop ebp
        __asm _emit 0x5D
        // 0x587D7AC0: pop ebx
        __asm _emit 0x5B
        // 0x587D7AC1: pop ecx
        __asm _emit 0x59
        // 0x587D7AC2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
