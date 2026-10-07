// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1360 bytes in 4 exact ranges.
// Source symbol alias: FUN_588504c0.

// Ghidra body range 0x588504C0..0x5885056D; 173 mapped bytes.
extern "C" __declspec(naked) void FUN_588504c0_segment_00() {
    __asm {
        // 0x588504C0: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x588504C3: mov ax, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588504C8: push ebx
        __asm _emit 0x53
        // 0x588504C9: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x588504CB: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588504CD: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x588504D1: push ebp
        __asm _emit 0x55
        // 0x588504D2: mov dword ptr [esp + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588504D6: mov dword ptr [esp + 0xc], 6
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588504DE: jge 0x588504e6
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x588504E0: mov dword ptr [esp + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588504E4: jmp 0x58850534
        __asm _emit 0xEB
        __asm _emit 0x4E
        // 0x588504E6: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x588504EA: jge 0x588504f6
        __asm _emit 0x7D
        __asm _emit 0x0A
        // 0x588504EC: mov dword ptr [esp + 0xc], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588504F4: jmp 0x58850534
        __asm _emit 0xEB
        __asm _emit 0x3E
        // 0x588504F6: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x588504FA: jge 0x58850506
        __asm _emit 0x7D
        __asm _emit 0x0A
        // 0x588504FC: mov dword ptr [esp + 0xc], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850504: jmp 0x58850534
        __asm _emit 0xEB
        __asm _emit 0x2E
        // 0x58850506: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x5885050A: jge 0x58850516
        __asm _emit 0x7D
        __asm _emit 0x0A
        // 0x5885050C: mov dword ptr [esp + 0xc], 3
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850514: jmp 0x58850534
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x58850516: cmp ax, 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0C
        // 0x5885051A: jge 0x58850526
        __asm _emit 0x7D
        __asm _emit 0x0A
        // 0x5885051C: mov dword ptr [esp + 0xc], 4
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850524: jmp 0x58850534
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x58850526: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0E
        // 0x5885052A: jge 0x58850534
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x5885052C: mov dword ptr [esp + 0xc], 5
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850534: push esi
        __asm _emit 0x56
        // 0x58850535: push edi
        __asm _emit 0x57
        // 0x58850536: cmp ax, word ptr [ebx + 0x274]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x83
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885053D: je 0x58850706
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850543: lea eax, [ebx + 0x118]
        __asm _emit 0x8D
        __asm _emit 0x83
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850549: mov ecx, 0xf
        __asm _emit 0xB9
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885054E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58850550: mov esi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x30
        // 0x58850552: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58850555: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x58850558: mov dword ptr [esi + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x50
        // 0x5885055B: jne 0x58850550
        __asm _emit 0x75
        __asm _emit 0xF3
        // 0x5885055D: movsx ebp, word ptr [esp + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58850562: cmp ebp, edx
        __asm _emit 0x3B
        __asm _emit 0xEA
        // 0x58850564: jle 0x588505c6
        __asm _emit 0x7E
        __asm _emit 0x60
        // 0x58850566: lea edx, [ebx + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x64
        // 0x58850569: mov edi, ebp
        __asm _emit 0x8B
        __asm _emit 0xFD
        // 0x5885056B: jmp 0x58850570
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x58850570..0x588505EA; 122 mapped bytes.
extern "C" __declspec(naked) void FUN_588504c0_segment_01() {
    __asm {
        // 0x58850570: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58850572: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58850576: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x58850579: jne 0x5885058b
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x5885057B: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x5885057D: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850582: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58850586: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58850588: mov dword ptr [eax + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x5885058B: lea eax, [edx + 4]
        __asm _emit 0x8D
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5885058E: mov esi, 2
        __asm _emit 0xBE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850593: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58850595: mov cx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x24
        // 0x58850599: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x5885059C: je 0x588505b6
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x5885059E: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x588505A0: mov ebx, 0xfffe
        __asm _emit 0xBB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588505A5: and word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x59
        __asm _emit 0x24
        // 0x588505A9: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x588505AB: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588505AF: mov dword ptr [ecx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588505B6: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x588505B9: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x588505BC: jne 0x58850593
        __asm _emit 0x75
        __asm _emit 0xD5
        // 0x588505BE: add edx, 0xc
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x0C
        // 0x588505C1: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x588505C4: jne 0x58850570
        __asm _emit 0x75
        __asm _emit 0xAA
        // 0x588505C6: cmp ebp, 0xf
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x0F
        // 0x588505C9: jge 0x5885063a
        __asm _emit 0x7D
        __asm _emit 0x6F
        // 0x588505CB: lea edx, [ebp + ebp*2 + 0x1b]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x6D
        __asm _emit 0x1B
        // 0x588505CF: mov edi, 0xf
        __asm _emit 0xBF
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588505D4: lea edx, [ebx + edx*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x93
        // 0x588505D7: sub edi, ebp
        __asm _emit 0x2B
        __asm _emit 0xFD
        // 0x588505D9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588505E0: lea eax, [edx - 8]
        __asm _emit 0x8D
        __asm _emit 0x42
        __asm _emit 0xF8
        // 0x588505E3: mov esi, 2
        __asm _emit 0xBE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588505E8: jmp 0x588505f0
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x588505F0..0x58850738; 328 mapped bytes.
extern "C" __declspec(naked) void FUN_588504c0_segment_02() {
    __asm {
        // 0x588505F0: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x588505F2: mov cx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x24
        // 0x588505F6: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x588505F9: je 0x5885060f
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x588505FB: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x588505FD: mov ebp, 0xfffe
        __asm _emit 0xBD
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850602: and word ptr [ecx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x69
        __asm _emit 0x24
        // 0x58850606: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58850608: mov dword ptr [ecx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885060F: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58850612: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x58850615: jne 0x588505f0
        __asm _emit 0x75
        __asm _emit 0xD9
        // 0x58850617: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58850619: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5885061D: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x58850620: jne 0x58850632
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x58850622: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58850624: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x58850629: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x5885062B: mov dword ptr [eax + 0x50], 1
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850632: add edx, 0xc
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x0C
        // 0x58850635: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x58850638: jne 0x588505e0
        __asm _emit 0x75
        __asm _emit 0xA6
        // 0x5885063A: movsx eax, word ptr [esp + 0x20]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5885063F: lea ecx, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x40
        // 0x58850642: mov edx, dword ptr [ebx + ecx*4 + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x8B
        __asm _emit 0x64
        // 0x58850646: mov dx, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x24
        // 0x5885064A: lea ecx, [ebx + ecx*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x8B
        // 0x5885064D: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x58850650: je 0x58850668
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x58850652: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x64
        // 0x58850655: mov esi, 0xfffe
        __asm _emit 0xBE
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885065A: and word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x5885065E: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x64
        // 0x58850661: mov dword ptr [edx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850668: mov edx, dword ptr [ecx + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x68
        // 0x5885066B: mov dx, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x24
        // 0x5885066F: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x58850672: jne 0x58850686
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x58850674: mov edx, dword ptr [ecx + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x68
        // 0x58850677: mov esi, 1
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885067C: or word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x58850680: mov ecx, dword ptr [ecx + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x68
        // 0x58850683: mov dword ptr [ecx + 0x50], esi
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0x50
        // 0x58850686: lea edx, [eax + eax*2 + 0x1b]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x40
        __asm _emit 0x1B
        // 0x5885068A: lea ecx, [ebx + edx*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x93
        // 0x5885068D: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5885068F: mov dx, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x24
        // 0x58850693: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x58850696: je 0x588506ac
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x58850698: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5885069A: mov esi, 0xfffe
        __asm _emit 0xBE
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885069F: and word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x588506A3: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x588506A5: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588506A7: mov dword ptr [ecx + 0x50], esi
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0x50
        // 0x588506AA: jmp 0x588506ae
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588506AC: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588506AE: mov edx, dword ptr [ebx + eax*4 + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x83
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588506B5: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588506BA: mov dword ptr [edx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x50
        // 0x588506BD: mov ecx, dword ptr [ebx + eax*4 + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x83
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588506C4: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588506C9: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0x26
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588506CE: lea eax, [ebx + 0x158]
        __asm _emit 0x8D
        __asm _emit 0x83
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588506D4: lea ecx, [edi + 5]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x05
        // 0x588506D7: mov edx, dword ptr [eax - 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0xFC
        // 0x588506DA: mov dword ptr [edx + 0x50], esi
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x50
        // 0x588506DD: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588506DF: add eax, 8
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x08
        // 0x588506E2: sub ecx, edi
        __asm _emit 0x2B
        __asm _emit 0xCF
        // 0x588506E4: mov dword ptr [edx + 0x50], esi
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x50
        // 0x588506E7: jne 0x588506d7
        __asm _emit 0x75
        __asm _emit 0xEE
        // 0x588506E9: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588506ED: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x588506F0: jge 0x58850706
        __asm _emit 0x7D
        __asm _emit 0x14
        // 0x588506F2: mov ecx, dword ptr [ebx + eax*8 + 0x154]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xC3
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588506F9: mov dword ptr [ecx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x50
        // 0x588506FC: mov edx, dword ptr [ebx + eax*8 + 0x158]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xC3
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850703: mov dword ptr [edx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x50
        // 0x58850706: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5885070A: movsx ebx, word ptr [esp + 0x20]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5885070F: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58850711: add esi, 0x19c
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850717: lea ebp, [edi + 1]
        __asm _emit 0x8D
        __asm _emit 0x6F
        __asm _emit 0x01
        // 0x5885071A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850720: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58850722: je 0x58850759
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x58850724: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58850726: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5885072A: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x5885072D: je 0x5885078a
        __asm _emit 0x74
        __asm _emit 0x5B
        // 0x5885072F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58850731: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850736: jmp 0x58850740
        __asm _emit 0xEB
        __asm _emit 0x08
    }
}

// Ghidra body range 0x58850740..0x58850A21; 737 mapped bytes.
extern "C" __declspec(naked) void FUN_588504c0_segment_03() {
    __asm {
        // 0x58850740: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58850742: mov ebp, 0xfffe
        __asm _emit 0xBD
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850747: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x5885074B: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850750: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x58850753: sub edx, ebp
        __asm _emit 0x2B
        __asm _emit 0xD5
        // 0x58850755: jne 0x58850740
        __asm _emit 0x75
        __asm _emit 0xE9
        // 0x58850757: jmp 0x5885078a
        __asm _emit 0xEB
        __asm _emit 0x31
        // 0x58850759: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5885075B: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x5885075F: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x58850761: jne 0x5885078a
        __asm _emit 0x75
        __asm _emit 0x27
        // 0x58850763: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58850765: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885076A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850770: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58850772: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x58850776: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x58850779: sub edx, ebp
        __asm _emit 0x2B
        __asm _emit 0xD5
        // 0x5885077B: jne 0x58850770
        __asm _emit 0x75
        __asm _emit 0xF3
        // 0x5885077D: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58850780: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58850785: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0x25
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5885078A: add edi, ebp
        __asm _emit 0x03
        __asm _emit 0xFD
        // 0x5885078C: add esi, 8
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x08
        // 0x5885078F: cmp edi, 0xf
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x0F
        // 0x58850792: jl 0x58850720
        __asm _emit 0x7C
        __asm _emit 0x8C
        // 0x58850794: cmp ebx, 0xf
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x0F
        // 0x58850797: ja 0x588508d7
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x3A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885079D: jmp dword ptr [ebx*4 + 0x58850a24]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x9D
        __asm _emit 0x24
        __asm _emit 0x0A
        __asm _emit 0x85
        __asm _emit 0x58
        // 0x588507A4: mov edi, 0x100
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588507A9: lea esi, [edi - 0x72]
        __asm _emit 0x8D
        __asm _emit 0x77
        __asm _emit 0x8E
        // 0x588507AC: jmp 0x588508df
        __asm _emit 0xE9
        __asm _emit 0x2E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588507B1: mov edi, 0xa
        __asm _emit 0xBF
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588507B6: mov esi, 0x172
        __asm _emit 0xBE
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588507BB: jmp 0x588508df
        __asm _emit 0xE9
        __asm _emit 0x1F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588507C0: mov edi, 0x44
        __asm _emit 0xBF
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588507C5: lea esi, [edi + 0x74]
        __asm _emit 0x8D
        __asm _emit 0x77
        __asm _emit 0x74
        // 0x588507C8: jmp 0x588508df
        __asm _emit 0xE9
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588507CD: mov edi, 0x100
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588507D2: mov esi, 0x2e
        __asm _emit 0xBE
        __asm _emit 0x2E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588507D7: jmp 0x588508df
        __asm _emit 0xE9
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588507DC: mov edi, 0x100
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588507E1: mov esi, 0x70
        __asm _emit 0xBE
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588507E6: jmp 0x588508df
        __asm _emit 0xE9
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588507EB: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588507F1: mov eax, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588507F7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588507F9: je 0x58850817
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x588507FB: mov edx, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850801: cmp word ptr [edx + 0x35e], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xAA
        __asm _emit 0x5E
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850808: jne 0x58850817
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x5885080A: mov ecx, dword ptr [ecx + 0xdb0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850810: push 7
        __asm _emit 0x6A
        __asm _emit 0x07
        // 0x58850812: call 0x5879dcf0
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0xD4
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58850817: mov edi, 0xa
        __asm _emit 0xBF
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885081C: mov esi, 0x17c
        __asm _emit 0xBE
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850821: jmp 0x588508df
        __asm _emit 0xE9
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850826: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885082C: mov eax, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850832: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58850834: je 0x58850852
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x58850836: mov eax, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885083C: cmp word ptr [eax + 0x35e], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x5E
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850843: jne 0x58850852
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x58850845: mov ecx, dword ptr [ecx + 0xdb0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885084B: push 9
        __asm _emit 0x6A
        __asm _emit 0x09
        // 0x5885084D: call 0x5879dcf0
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0xD4
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58850852: mov edi, 0x100
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850857: lea esi, [edi - 0x72]
        __asm _emit 0x8D
        __asm _emit 0x77
        __asm _emit 0x8E
        // 0x5885085A: jmp 0x588508df
        __asm _emit 0xE9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885085F: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58850865: mov eax, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885086B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885086D: je 0x5885088b
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x5885086F: mov edx, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850875: cmp word ptr [edx + 0x35e], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xAA
        __asm _emit 0x5E
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885087C: jne 0x5885088b
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x5885087E: mov ecx, dword ptr [ecx + 0xdb0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850884: push 0xb
        __asm _emit 0x6A
        __asm _emit 0x0B
        // 0x58850886: call 0x5879dcf0
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0xD4
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5885088B: mov edi, 0x100
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850890: lea esi, [edi - 0x7c]
        __asm _emit 0x8D
        __asm _emit 0x77
        __asm _emit 0x84
        // 0x58850893: jmp 0x588508df
        __asm _emit 0xEB
        __asm _emit 0x4A
        // 0x58850895: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885089B: mov eax, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588508A1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588508A3: je 0x588508c1
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x588508A5: mov eax, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588508AB: cmp word ptr [eax + 0x35e], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x5E
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588508B2: jne 0x588508c1
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x588508B4: mov ecx, dword ptr [ecx + 0xdb0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588508BA: push 0xd
        __asm _emit 0x6A
        __asm _emit 0x0D
        // 0x588508BC: call 0x5879dcf0
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0xD4
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x588508C1: mov edi, 0x100
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588508C6: lea esi, [edi + 0x72]
        __asm _emit 0x8D
        __asm _emit 0x77
        __asm _emit 0x72
        // 0x588508C9: jmp 0x588508df
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x588508CB: mov edi, 0x7e
        __asm _emit 0xBF
        __asm _emit 0x7E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588508D0: mov esi, 0x111
        __asm _emit 0xBE
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588508D5: jmp 0x588508df
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x588508D7: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588508DB: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588508DF: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588508E3: cmp edi, dword ptr [eax + 4]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x588508E6: jne 0x588508f1
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x588508E8: cmp esi, dword ptr [eax + 8]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x08
        // 0x588508EB: je 0x5885096d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x7C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588508F1: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588508F6: mov ebp, 0x32
        __asm _emit 0xBD
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588508FB: cmp dword ptr [eax + 0x170], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850901: jle 0x5885091a
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58850903: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885090A: je 0x5885091a
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5885090C: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850912: mov ecx, dword ptr [ecx + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850918: jmp 0x5885091c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5885091A: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5885091C: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58850922: push edx
        __asm _emit 0x52
        // 0x58850923: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58850928: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885092D: cmp dword ptr [eax + 0x170], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850933: jle 0x5885094c
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58850935: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885093C: je 0x5885094c
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5885093E: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850944: mov ecx, dword ptr [eax + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885094A: jmp 0x5885094e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5885094C: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5885094E: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58850950: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58850953: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58850955: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58850957: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5885095B: mov ecx, dword ptr [ecx + 0x184]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850961: push esi
        __asm _emit 0x56
        // 0x58850962: push edi
        __asm _emit 0x57
        // 0x58850963: call 0x587b63b0
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0x5A
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x58850968: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885096D: cmp ebx, 3
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x03
        // 0x58850970: pop edi
        __asm _emit 0x5F
        // 0x58850971: pop esi
        __asm _emit 0x5E
        // 0x58850972: jl 0x588509db
        __asm _emit 0x7C
        __asm _emit 0x67
        // 0x58850974: cmp ebx, 5
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x05
        // 0x58850977: jle 0x58850996
        __asm _emit 0x7E
        __asm _emit 0x1D
        // 0x58850979: cmp ebx, 0xe
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x0E
        // 0x5885097C: jne 0x588509db
        __asm _emit 0x75
        __asm _emit 0x5D
        // 0x5885097E: mov dx, word ptr [esp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58850983: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58850987: pop ebp
        __asm _emit 0x5D
        // 0x58850988: mov word ptr [eax + 0x274], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885098F: pop ebx
        __asm _emit 0x5B
        // 0x58850990: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58850993: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58850996: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885099C: mov eax, dword ptr [ecx + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588509A2: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588509A6: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x588509AA: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x588509AD: cmp dl, 2
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588509B0: je 0x588509c3
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588509B2: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588509B7: mov ecx, dword ptr [eax + 0xdb8]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xB8
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588509BD: push ebp
        __asm _emit 0x55
        // 0x588509BE: call 0x588b2700
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0x1D
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x588509C3: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588509C7: mov cx, word ptr [esp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588509CC: pop ebp
        __asm _emit 0x5D
        // 0x588509CD: mov word ptr [edx + 0x274], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8A
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588509D4: pop ebx
        __asm _emit 0x5B
        // 0x588509D5: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588509D8: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588509DB: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588509E0: mov eax, dword ptr [eax + 0xdbc]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588509E6: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588509EA: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x08
        // 0x588509EE: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x588509F1: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x588509F4: je 0x5885097e
        __asm _emit 0x74
        __asm _emit 0x88
        // 0x588509F6: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588509FC: mov ecx, dword ptr [edx + 0xdb8]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xB8
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850A02: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58850A04: call 0x588b2700
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x1C
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58850A09: mov ax, word ptr [esp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58850A0E: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58850A12: pop ebp
        __asm _emit 0x5D
        // 0x58850A13: mov word ptr [ecx + 0x274], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850A1A: pop ebx
        __asm _emit 0x5B
        // 0x58850A1B: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58850A1E: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
