// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58887510 .. +0x197 bytes.
extern "C" __declspec(naked) void FUN_58887510() {
    __asm {
        // 0x58887510: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58887513: push ebx
        __asm _emit 0x53
        // 0x58887514: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58887516: movzx eax, word ptr [ebx + 0xe0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888751D: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x58887521: je 0x5888752d
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58887523: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58887527: jne 0x588876a0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888752D: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58887533: push ebp
        __asm _emit 0x55
        // 0x58887534: movzx ebp, word ptr [esp + 0x18]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58887539: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x5888753B: imul eax, eax, 0xe84
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887541: movzx eax, word ptr [eax + 0x589baab0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0xB0
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x58887548: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5888754C: cmp dword ptr [0x58a24580], ecx
        __asm _emit 0x39
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58887552: jne 0x58887560
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x58887554: movzx ecx, word ptr [ecx + 0x60]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x49
        __asm _emit 0x60
        // 0x58887558: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5888755A: je 0x58887696
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887560: push esi
        __asm _emit 0x56
        // 0x58887561: push edi
        __asm _emit 0x57
        // 0x58887562: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58887566: push ecx
        __asm _emit 0x51
        // 0x58887567: push 0xf003f
        __asm _emit 0x68
        __asm _emit 0x3F
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5888756C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5888756E: push 0x58997258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x72
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58887573: push 0x80000002
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x58887578: call dword ptr [0x5898c008]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888757E: mov edi, dword ptr [0x5898c010]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0x10
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58887584: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58887586: je 0x588875ae
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x58887588: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5888758C: push edx
        __asm _emit 0x52
        // 0x5888758D: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58887591: push eax
        __asm _emit 0x50
        // 0x58887592: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58887594: push 0xf003f
        __asm _emit 0x68
        __asm _emit 0x3F
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58887599: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5888759B: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588875A0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588875A2: push 0x58997258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x72
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588875A7: push 0x80000002
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x588875AC: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x588875AE: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588875B2: mov esi, dword ptr [0x5898c00c]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x0C
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588875B8: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x588875BA: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588875BE: push ecx
        __asm _emit 0x51
        // 0x588875BF: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x588875C1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588875C3: push 0x58997218
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x72
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588875C8: push edx
        __asm _emit 0x52
        // 0x588875C9: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x588875CB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588875CD: je 0x5888760c
        __asm _emit 0x74
        __asm _emit 0x3D
        // 0x588875CF: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588875D3: push eax
        __asm _emit 0x50
        // 0x588875D4: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588875D8: push ecx
        __asm _emit 0x51
        // 0x588875D9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588875DB: push 0xf003f
        __asm _emit 0x68
        __asm _emit 0x3F
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588875E0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588875E2: push 0x58997218
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x72
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588875E7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588875E9: push 0x58997258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x72
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588875EE: push 0x80000002
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x588875F3: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x588875F5: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588875F9: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x588875FB: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588875FF: push edx
        __asm _emit 0x52
        // 0x58887600: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x58887602: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58887604: push 0x58997218
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x72
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58887609: push eax
        __asm _emit 0x50
        // 0x5888760A: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x5888760C: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58887610: push ecx
        __asm _emit 0x51
        // 0x58887611: call dword ptr [0x5898c000]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58887617: cmp word ptr [ebx + 0xe0], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x5888761F: pop edi
        __asm _emit 0x5F
        // 0x58887620: pop esi
        __asm _emit 0x5E
        // 0x58887621: jne 0x5888766e
        __asm _emit 0x75
        __asm _emit 0x4B
        // 0x58887623: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58887628: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888762A: je 0x5888763e
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5888762C: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58887630: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x58887633: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887638: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD1
        // 0x5888763B: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x5888763E: mov eax, dword ptr [0x58a245bc]
        __asm _emit 0xA1
        __asm _emit 0xBC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58887643: movzx edx, word ptr [eax + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58887647: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x5888764A: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888764F: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD1
        // 0x58887652: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x58887655: movzx edx, word ptr [esp + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5888765A: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888765F: mov word ptr [eax + 0x60], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x60
        // 0x58887663: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58887669: call 0x587bab60
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x34
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5888766E: cmp word ptr [esp + 0x18], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x58887674: je 0x58887687
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x58887676: mov edx, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x08
        // 0x58887679: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x5888767B: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x5888767E: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x58887680: lea eax, [ecx + edx - 1]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0xFF
        // 0x58887684: push eax
        __asm _emit 0x50
        // 0x58887685: jmp 0x5888768e
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x58887687: mov ecx, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x08
        // 0x5888768A: add ecx, 0x54
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x54
        // 0x5888768D: push ecx
        __asm _emit 0x51
        // 0x5888768E: mov ecx, dword ptr [ebx + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x74
        // 0x58887691: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0xBC
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58887696: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x58887698: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x5888769B: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5888769D: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5888769F: pop ebp
        __asm _emit 0x5D
        // 0x588876A0: pop ebx
        __asm _emit 0x5B
        // 0x588876A1: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588876A4: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
