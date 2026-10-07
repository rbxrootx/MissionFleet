// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 603 bytes in 1 exact ranges.
// Source symbol alias: FUN_5882a420.

// Ghidra body range 0x5882A420..0x5882A67B; 603 mapped bytes.
extern "C" __declspec(naked) void FUN_5882a420_segment_00() {
    __asm {
        // 0x5882A420: sub esp, 0x840
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A426: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5882A42B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5882A42D: mov dword ptr [esp + 0x83c], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A434: push ebx
        __asm _emit 0x53
        // 0x5882A435: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5882A437: mov al, byte ptr [ebx + 0x60]
        __asm _emit 0x8A
        __asm _emit 0x43
        __asm _emit 0x60
        // 0x5882A43A: push esi
        __asm _emit 0x56
        // 0x5882A43B: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x5882A43D: jne 0x5882a523
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A443: mov eax, dword ptr [ebx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x78
        // 0x5882A446: mov eax, dword ptr [eax + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A44C: push eax
        __asm _emit 0x50
        // 0x5882A44D: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882A453: cmp eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x5882A456: jle 0x5882a486
        __asm _emit 0x7E
        __asm _emit 0x2E
        // 0x5882A458: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A45A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A45C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A45E: push 0x498
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A463: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0x16
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5882A468: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882A46A: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0xA8
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5882A46F: pop esi
        __asm _emit 0x5E
        // 0x5882A470: pop ebx
        __asm _emit 0x5B
        // 0x5882A471: mov ecx, dword ptr [esp + 0x83c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A478: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5882A47A: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0x27
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5882A47F: add esp, 0x840
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A485: ret
        __asm _emit 0xC3
        // 0x5882A486: mov ecx, dword ptr [ebx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x78
        // 0x5882A489: mov edx, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A48F: mov esi, dword ptr [0x5898c198]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882A495: push edi
        __asm _emit 0x57
        // 0x5882A496: push edx
        __asm _emit 0x52
        // 0x5882A497: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5882A49B: push eax
        __asm _emit 0x50
        // 0x5882A49C: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x5882A49E: mov ecx, dword ptr [ebx + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x7C
        // 0x5882A4A1: mov edx, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A4A7: push edx
        __asm _emit 0x52
        // 0x5882A4A8: lea eax, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5882A4AC: push eax
        __asm _emit 0x50
        // 0x5882A4AD: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x5882A4AF: mov ecx, dword ptr [ebx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A4B5: mov edx, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A4BB: push edx
        __asm _emit 0x52
        // 0x5882A4BC: lea eax, [esp + 0x31]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x31
        // 0x5882A4C0: push eax
        __asm _emit 0x50
        // 0x5882A4C1: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x5882A4C3: mov ecx, dword ptr [ebx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A4C9: mov edx, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A4CF: push edx
        __asm _emit 0x52
        // 0x5882A4D0: lea eax, [esp + 0x49]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x49
        // 0x5882A4D4: push eax
        __asm _emit 0x50
        // 0x5882A4D5: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x5882A4D7: mov ecx, dword ptr [ebx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A4DD: mov esi, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A4E3: mov edi, dword ptr [ebx + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0xBB
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A4E9: mov ecx, 0x200
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A4EE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A4F0: lea edx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5882A4F4: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5882A4F6: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882A4FC: push edx
        __asm _emit 0x52
        // 0x5882A4FD: call 0x587b9340
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0xEE
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5882A502: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x5882A504: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5882A507: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5882A509: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5882A50B: pop edi
        __asm _emit 0x5F
        // 0x5882A50C: pop esi
        __asm _emit 0x5E
        // 0x5882A50D: pop ebx
        __asm _emit 0x5B
        // 0x5882A50E: mov ecx, dword ptr [esp + 0x83c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A515: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5882A517: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0x26
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5882A51C: add esp, 0x840
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A522: ret
        __asm _emit 0xC3
        // 0x5882A523: cmp al, 3
        __asm _emit 0x3C
        __asm _emit 0x03
        // 0x5882A525: jne 0x5882a64a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x1F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A52B: push 0x839
        __asm _emit 0x68
        __asm _emit 0x39
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A530: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5882A534: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A536: push eax
        __asm _emit 0x50
        // 0x5882A537: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x27
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5882A53C: mov ecx, dword ptr [ebx + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A542: mov eax, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A548: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5882A54B: push eax
        __asm _emit 0x50
        // 0x5882A54C: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882A552: cmp eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x5882A555: jg 0x5882a458
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0xFD
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882A55B: mov edx, dword ptr [ebx + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A561: mov eax, dword ptr [edx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A567: mov esi, dword ptr [0x5898c198]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882A56D: push eax
        __asm _emit 0x50
        // 0x5882A56E: lea ecx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5882A572: push ecx
        __asm _emit 0x51
        // 0x5882A573: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x5882A575: mov edx, dword ptr [ebx + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A57B: mov eax, dword ptr [edx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A581: push eax
        __asm _emit 0x50
        // 0x5882A582: lea ecx, [esp + 0x2d]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2D
        // 0x5882A586: push ecx
        __asm _emit 0x51
        // 0x5882A587: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x5882A589: mov edx, dword ptr [ebx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A58F: mov eax, dword ptr [edx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A595: push eax
        __asm _emit 0x50
        // 0x5882A596: lea ecx, [esp + 0x45]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x45
        // 0x5882A59A: push ecx
        __asm _emit 0x51
        // 0x5882A59B: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x5882A59D: cmp word ptr [0x58a0b4a8], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x03
        // 0x5882A5A5: jne 0x5882a613
        __asm _emit 0x75
        __asm _emit 0x6C
        // 0x5882A5A7: cmp dword ptr [0x58a0b4a0], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5882A5AE: jne 0x5882a613
        __asm _emit 0x75
        __asm _emit 0x63
        // 0x5882A5B0: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882A5B6: mov eax, dword ptr [edx + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A5BC: movsx ecx, word ptr [eax + 0xf0]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x88
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A5C3: inc ecx
        __asm _emit 0x41
        // 0x5882A5C4: cmp ecx, 0xa
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x0A
        // 0x5882A5C7: jl 0x5882a613
        __asm _emit 0x7C
        __asm _emit 0x4A
        // 0x5882A5C9: mov edx, dword ptr [0x58a0b468]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5882A5CF: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5882A5D5: cmp edx, 0xf4240
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0x40
        __asm _emit 0x42
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5882A5DB: jb 0x5882a613
        __asm _emit 0x72
        __asm _emit 0x36
        // 0x5882A5DD: mov eax, dword ptr [0x58a0b4a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5882A5E2: push eax
        __asm _emit 0x50
        // 0x5882A5E3: lea ecx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5882A5E7: push ecx
        __asm _emit 0x51
        // 0x5882A5E8: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882A5EE: call 0x587b9340
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0xED
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5882A5F3: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x5882A5F5: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x5882A5F8: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5882A5FA: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5882A5FC: pop esi
        __asm _emit 0x5E
        // 0x5882A5FD: pop ebx
        __asm _emit 0x5B
        // 0x5882A5FE: mov ecx, dword ptr [esp + 0x83c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A605: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5882A607: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0x25
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5882A60C: add esp, 0x840
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A612: ret
        __asm _emit 0xC3
        // 0x5882A613: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A615: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A617: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A619: push 0x22b
        __asm _emit 0x68
        __asm _emit 0x2B
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A61E: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x14
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5882A623: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882A625: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0xA7
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5882A62A: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x5882A62C: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x5882A62F: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5882A631: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5882A633: pop esi
        __asm _emit 0x5E
        // 0x5882A634: pop ebx
        __asm _emit 0x5B
        // 0x5882A635: mov ecx, dword ptr [esp + 0x83c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A63C: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5882A63E: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0x25
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5882A643: add esp, 0x840
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A649: ret
        __asm _emit 0xC3
        // 0x5882A64A: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x5882A64C: je 0x5882a652
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5882A64E: cmp al, 4
        __asm _emit 0x3C
        __asm _emit 0x04
        // 0x5882A650: jne 0x5882a664
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x5882A652: mov ecx, dword ptr [ebx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x30
        // 0x5882A655: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5882A657: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x5882A65A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A65C: push 0xf231
        __asm _emit 0x68
        __asm _emit 0x31
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A661: push ebx
        __asm _emit 0x53
        // 0x5882A662: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5882A664: mov ecx, dword ptr [esp + 0x844]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A66B: pop esi
        __asm _emit 0x5E
        // 0x5882A66C: pop ebx
        __asm _emit 0x5B
        // 0x5882A66D: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5882A66F: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5882A674: add esp, 0x840
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A67A: ret
        __asm _emit 0xC3
    }
}
