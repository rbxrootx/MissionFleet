// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58805260 .. +0x323 bytes.
// Source symbol alias: FUN_58805260.
extern "C" __declspec(naked) void FUN_58805260() {
    __asm {
        // 0x58805260: sub esp, 0x68
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x68
        // 0x58805263: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58805268: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5880526A: mov dword ptr [esp + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x5880526E: push ebx
        __asm _emit 0x53
        // 0x5880526F: push ebp
        __asm _emit 0x55
        // 0x58805270: mov bp, word ptr [esp + 0x74]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x74
        // 0x58805275: push esi
        __asm _emit 0x56
        // 0x58805276: push edi
        __asm _emit 0x57
        // 0x58805277: movzx ebx, bp
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xDD
        // 0x5880527A: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5880527C: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58805282: push ebx
        __asm _emit 0x53
        // 0x58805283: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58805287: call 0x5878a160
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0x4E
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5880528C: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5880528E: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58805290: je 0x5880556e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805296: mov eax, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880529C: mov cl, byte ptr [eax + 4]
        __asm _emit 0x8A
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5880529F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x588052A2: cmp cl, 8
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x08
        // 0x588052A5: jne 0x588052b8
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x588052A7: mov eax, dword ptr [edi + 0x2f0]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xF0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588052AD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588052AF: jbe 0x588052b8
        __asm _emit 0x76
        __asm _emit 0x07
        // 0x588052B1: dec eax
        __asm _emit 0x48
        // 0x588052B2: mov dword ptr [edi + 0x2f0], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0xF0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588052B8: mov edx, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588052BE: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588052C2: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x588052C6: cmp ax, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x07
        // 0x588052CA: je 0x588052d2
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588052CC: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x588052D0: jne 0x588052e3
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x588052D2: mov eax, dword ptr [edi + 0x2f4]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588052D8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588052DA: jbe 0x588052e3
        __asm _emit 0x76
        __asm _emit 0x07
        // 0x588052DC: dec eax
        __asm _emit 0x48
        // 0x588052DD: mov dword ptr [edi + 0x2f4], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588052E3: test byte ptr [edi + 0x1bc], 1
        __asm _emit 0xF6
        __asm _emit 0x87
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588052EA: je 0x588052fe
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588052EC: mov ecx, dword ptr [0x58a24828]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588052F2: lea eax, [esi + 0x356]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x56
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588052F8: push eax
        __asm _emit 0x50
        // 0x588052F9: call 0x587af330
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0xA0
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x588052FE: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58805304: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58805307: cmp bp, word ptr [edx + 0x350]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xAA
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880530E: je 0x58805345
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x58805310: mov eax, dword ptr [0x58a245a8]
        __asm _emit 0xA1
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58805315: movzx eax, word ptr [eax + 0x204]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880531C: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x58805320: je 0x58805345
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x58805322: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x58805326: je 0x58805345
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x58805328: mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880532F: mov edx, dword ptr [esi + 0x12e8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805335: mov eax, dword ptr [edx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x6C
        // 0x58805338: push ecx
        __asm _emit 0x51
        // 0x58805339: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880533F: push eax
        __asm _emit 0x50
        // 0x58805340: call 0x58893e50
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0xEB
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58805345: movzx edi, byte ptr [esi + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xBE
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880534C: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58805350: cmp word ptr [ecx + 0x110], 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        // 0x58805358: mov ecx, dword ptr [edi*4 + 0x58a0b1c4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xBD
        __asm _emit 0xC4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5880535F: jne 0x58805371
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x58805361: mov edx, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805367: movzx eax, byte ptr [edx + 0x35c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x82
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880536E: push eax
        __asm _emit 0x50
        // 0x5880536F: jmp 0x58805373
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58805371: push 9
        __asm _emit 0x6A
        __asm _emit 0x09
        // 0x58805373: push ebx
        __asm _emit 0x53
        // 0x58805374: call 0x58789b40
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58805379: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880537B: push edi
        __asm _emit 0x57
        // 0x5880537C: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58805380: mov ecx, dword ptr [edi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805386: call 0x588a6410
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5880538B: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58805391: call 0x58789fb0
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0x4C
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58805396: mov ecx, dword ptr [edi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880539C: push eax
        __asm _emit 0x50
        // 0x5880539D: call 0x588a5380
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0xFF
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588053A2: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588053A8: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588053AB: cmp bp, word ptr [edx + 0x350]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xAA
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588053B2: jne 0x588054c3
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588053B8: mov esi, 0x58a0b1c4
        __asm _emit 0xBE
        __asm _emit 0xC4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x588053BD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x588053C0: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588053C2: call 0x58789890
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0x44
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x588053C7: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588053CA: cmp esi, 0x58a0b1e4
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0xE4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x588053D0: jl 0x588053c0
        __asm _emit 0x7C
        __asm _emit 0xEE
        // 0x588053D2: mov eax, dword ptr [edi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588053D8: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588053DE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588053E0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588053E2: push eax
        __asm _emit 0x50
        // 0x588053E3: call 0x587b9060
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0x3C
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x588053E8: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588053EE: mov ecx, dword ptr [ecx + 0x4c8]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588053F4: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588053F6: cmp dword ptr [ecx + 0x88], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588053FC: jle 0x58805557
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805402: push ebx
        __asm _emit 0x53
        // 0x58805403: call 0x589080e0
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0x2C
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58805408: mov ecx, 0x58a0b450
        __asm _emit 0xB9
        __asm _emit 0x50
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5880540D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58805410: mov dl, byte ptr [ecx]
        __asm _emit 0x8A
        __asm _emit 0x11
        // 0x58805412: cmp dl, byte ptr [eax]
        __asm _emit 0x3A
        __asm _emit 0x10
        // 0x58805414: jne 0x58805430
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x58805416: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x58805418: je 0x5880542c
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5880541A: mov dl, byte ptr [ecx + 1]
        __asm _emit 0x8A
        __asm _emit 0x51
        __asm _emit 0x01
        // 0x5880541D: cmp dl, byte ptr [eax + 1]
        __asm _emit 0x3A
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x58805420: jne 0x58805430
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x58805422: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x02
        // 0x58805425: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x58805428: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x5880542A: jne 0x58805410
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x5880542C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5880542E: jmp 0x58805435
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x58805430: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x58805432: sbb eax, -1
        __asm _emit 0x83
        __asm _emit 0xD8
        __asm _emit 0xFF
        // 0x58805435: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58805437: je 0x588054a5
        __asm _emit 0x74
        __asm _emit 0x6C
        // 0x58805439: mov edx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880543F: mov ecx, dword ptr [edx + 0x4c8]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805445: push ebx
        __asm _emit 0x53
        // 0x58805446: call 0x589080e0
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0x2C
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5880544B: mov ecx, dword ptr [0x58a245b0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58805451: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58805453: push esi
        __asm _emit 0x56
        // 0x58805454: call 0x587522f0
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0xCE
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58805459: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880545B: je 0x588054a5
        __asm _emit 0x74
        __asm _emit 0x48
        // 0x5880545D: mov ecx, dword ptr [0x58a245b0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58805463: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58805467: push eax
        __asm _emit 0x50
        // 0x58805468: push esi
        __asm _emit 0x56
        // 0x58805469: call 0x587522f0
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0xCE
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5880546E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58805470: call 0x5875a440
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0x4F
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x58805475: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880547B: mov edi, dword ptr [ecx + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805481: push esi
        __asm _emit 0x56
        // 0x58805482: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58805484: call 0x58842fb0
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0xDB
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58805489: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880548B: jne 0x588054a5
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x5880548D: push esi
        __asm _emit 0x56
        // 0x5880548E: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58805490: call 0x58842f60
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0xDA
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58805495: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58805497: jne 0x588054a5
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x58805499: mov ecx, dword ptr [0x58a245b0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880549F: push esi
        __asm _emit 0x56
        // 0x588054A0: call 0x58752550
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0xD0
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x588054A5: mov edx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588054AB: mov ecx, dword ptr [edx + 0x4c8]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588054B1: inc ebx
        __asm _emit 0x43
        // 0x588054B2: cmp ebx, dword ptr [ecx + 0x88]
        __asm _emit 0x3B
        __asm _emit 0x99
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588054B8: jl 0x58805402
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x44
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588054BE: jmp 0x58805553
        __asm _emit 0xE9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588054C3: mov eax, dword ptr [esi + 0x12e8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588054C9: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x588054CC: mov ecx, dword ptr [0x58a245b0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588054D2: push eax
        __asm _emit 0x50
        // 0x588054D3: call 0x587522f0
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0xCE
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x588054D8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588054DA: je 0x58805547
        __asm _emit 0x74
        __asm _emit 0x6B
        // 0x588054DC: mov ecx, dword ptr [esi + 0x12e8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588054E2: mov eax, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x6C
        // 0x588054E5: mov ecx, dword ptr [0x58a245b0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588054EB: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588054EF: push edx
        __asm _emit 0x52
        // 0x588054F0: push eax
        __asm _emit 0x50
        // 0x588054F1: call 0x587522f0
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0xCD
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x588054F6: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588054F8: call 0x5875a440
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x4F
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x588054FD: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58805502: mov ecx, dword ptr [esi + 0x12e8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805508: mov edi, dword ptr [eax + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880550E: mov eax, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x6C
        // 0x58805511: push eax
        __asm _emit 0x50
        // 0x58805512: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58805514: call 0x58842fb0
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0xDA
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58805519: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880551B: jne 0x58805547
        __asm _emit 0x75
        __asm _emit 0x2A
        // 0x5880551D: mov edx, dword ptr [esi + 0x12e8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805523: mov eax, dword ptr [edx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x6C
        // 0x58805526: push eax
        __asm _emit 0x50
        // 0x58805527: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58805529: call 0x58842f60
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0xDA
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x5880552E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58805530: jne 0x58805547
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x58805532: mov eax, dword ptr [esi + 0x12e8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805538: mov ecx, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x6C
        // 0x5880553B: push ecx
        __asm _emit 0x51
        // 0x5880553C: mov ecx, dword ptr [0x58a245b0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58805542: call 0x58752550
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0xD0
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58805547: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880554D: push ebx
        __asm _emit 0x53
        // 0x5880554E: call 0x5878a1f0
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x4C
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58805553: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58805557: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880555D: call 0x58789fb0
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0x4A
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58805562: mov ecx, dword ptr [edi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805568: push eax
        __asm _emit 0x50
        // 0x58805569: call 0x588a5380
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0xFE
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x5880556E: mov ecx, dword ptr [esp + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x74
        // 0x58805572: pop edi
        __asm _emit 0x5F
        // 0x58805573: pop esi
        __asm _emit 0x5E
        // 0x58805574: pop ebp
        __asm _emit 0x5D
        // 0x58805575: pop ebx
        __asm _emit 0x5B
        // 0x58805576: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58805578: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0x76
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x5880557D: add esp, 0x68
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x68
        // 0x58805580: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
