// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 2034 bytes in 1 exact ranges.
// Source symbol alias: FUN_58974010.

// Ghidra body range 0x58974010..0x58974802; 2034 mapped bytes.
extern "C" __declspec(naked) void FUN_58974010_segment_00() {
    __asm {
        // 0x58974010: sub esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x20
        // 0x58974013: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58974015: push ebx
        __asm _emit 0x53
        // 0x58974016: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5897401A: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5897401E: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58974022: push ebp
        __asm _emit 0x55
        // 0x58974023: push esi
        __asm _emit 0x56
        // 0x58974024: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x58974027: push edi
        __asm _emit 0x57
        // 0x58974028: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5897402A: jle 0x5897405d
        __asm _emit 0x7E
        __asm _emit 0x31
        // 0x5897402C: mov edi, 0x589ce8d4
        __asm _emit 0xBF
        __asm _emit 0xD4
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58974031: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFF
        // 0x58974034: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58974036: lea edx, [ebx + 4]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x04
        // 0x58974039: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xF2
        __asm _emit 0xAE
        // 0x5897403B: not ecx
        __asm _emit 0xF7
        __asm _emit 0xD1
        // 0x5897403D: sub edi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF9
        // 0x5897403F: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58974041: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x58974043: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58974045: shr ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x02
        // 0x58974048: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5897404A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5897404C: and ecx, 3
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x03
        // 0x5897404F: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58974051: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA4
        // 0x58974053: pop edi
        __asm _emit 0x5F
        // 0x58974054: pop esi
        __asm _emit 0x5E
        // 0x58974055: pop ebp
        __asm _emit 0x5D
        // 0x58974056: pop ebx
        __asm _emit 0x5B
        // 0x58974057: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x5897405A: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5897405D: mov esi, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58974061: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58974063: push esi
        __asm _emit 0x56
        // 0x58974064: call 0x58973f70
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58974069: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5897406D: lea ecx, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x40
        // 0x58974070: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58974074: lea ecx, [esi + ecx*4 + 2]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x8E
        __asm _emit 0x02
        // 0x58974078: mov esi, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5897407C: mov dword ptr [esp + 0x2c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58974080: lea ebp, [esi + edx]
        __asm _emit 0x8D
        __asm _emit 0x2C
        __asm _emit 0x16
        // 0x58974083: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x58974085: mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58974089: jbe 0x589740bc
        __asm _emit 0x76
        __asm _emit 0x31
        // 0x5897408B: mov edi, 0x589ce8b8
        __asm _emit 0xBF
        __asm _emit 0xB8
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58974090: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFF
        // 0x58974093: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58974095: lea edx, [ebx + 4]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x04
        // 0x58974098: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xF2
        __asm _emit 0xAE
        // 0x5897409A: not ecx
        __asm _emit 0xF7
        __asm _emit 0xD1
        // 0x5897409C: sub edi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF9
        // 0x5897409E: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x589740A0: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x589740A2: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x589740A4: shr ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x02
        // 0x589740A7: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x589740A9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x589740AB: and ecx, 3
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x03
        // 0x589740AE: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x589740B0: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA4
        // 0x589740B2: pop edi
        __asm _emit 0x5F
        // 0x589740B3: pop esi
        __asm _emit 0x5E
        // 0x589740B4: pop ebp
        __asm _emit 0x5D
        // 0x589740B5: pop ebx
        __asm _emit 0x5B
        // 0x589740B6: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x589740B9: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x589740BC: mov edi, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x589740C0: mov dword ptr [esp + 0x10], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589740C8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x589740CA: jle 0x5897476c
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589740D0: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x589740D4: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x589740D8: lea ecx, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x40
        // 0x589740DB: lea ebp, [edx + ecx*4 + 2]
        __asm _emit 0x8D
        __asm _emit 0x6C
        __asm _emit 0x8A
        __asm _emit 0x02
        // 0x589740DF: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x589740E1: push ebp
        __asm _emit 0x55
        // 0x589740E2: call 0x58973f70
        __asm _emit 0xE8
        __asm _emit 0x89
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589740E7: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x589740EB: lea eax, [ebp + 2]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x02
        // 0x589740EE: push eax
        __asm _emit 0x50
        // 0x589740EF: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x589740F1: call 0x58973f70
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589740F6: lea ecx, [ebp + 4]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x04
        // 0x589740F9: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x589740FB: push ecx
        __asm _emit 0x51
        // 0x589740FC: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x589740FE: call 0x58974000
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58974103: lea edx, [esi - 1]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0xFF
        // 0x58974106: cmp edx, 0xc
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0C
        // 0x58974109: jge 0x5897470a
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xFB
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897410F: mov ecx, dword ptr [esi*4 + 0x589a31d8]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xB5
        __asm _emit 0xD8
        __asm _emit 0x31
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58974116: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x58974119: cmp ecx, 4
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x04
        // 0x5897411C: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58974120: jle 0x58974149
        __asm _emit 0x7E
        __asm _emit 0x27
        // 0x58974122: add ebp, 8
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x08
        // 0x58974125: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58974127: push ebp
        __asm _emit 0x55
        // 0x58974128: call 0x58974000
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897412D: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58974131: lea edx, [eax + ecx]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x08
        // 0x58974134: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58974138: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x5897413A: ja 0x5897473b
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xFB
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974140: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58974144: lea ebp, [eax + ecx]
        __asm _emit 0x8D
        __asm _emit 0x2C
        __asm _emit 0x08
        // 0x58974147: jmp 0x5897414c
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x58974149: add ebp, 8
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x08
        // 0x5897414C: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58974150: mov ecx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58974154: lea eax, [edx + ebp]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x2A
        // 0x58974157: cmp dword ptr [ecx], eax
        __asm _emit 0x39
        __asm _emit 0x01
        // 0x58974159: jae 0x5897415d
        __asm _emit 0x73
        __asm _emit 0x02
        // 0x5897415B: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        // 0x5897415D: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58974161: cmp eax, 0x9201
        __asm _emit 0x3D
        __asm _emit 0x01
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974166: jg 0x58974478
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0x0C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897416C: je 0x58974425
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974172: cmp eax, 0x202
        __asm _emit 0x3D
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974177: jg 0x58974338
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897417D: je 0x58974321
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974183: add eax, 0xfffffef1
        __asm _emit 0x05
        __asm _emit 0xF1
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58974188: cmp eax, 0xf2
        __asm _emit 0x3D
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897418D: ja 0x589741ae
        __asm _emit 0x77
        __asm _emit 0x1F
        // 0x5897418F: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58974191: mov dl, byte ptr [eax + 0x58974824]
        __asm _emit 0x8A
        __asm _emit 0x90
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58974197: jmp dword ptr [edx*4 + 0x58974804]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0x48
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5897419E: push 0x1f
        __asm _emit 0x6A
        __asm _emit 0x1F
        // 0x589741A0: lea eax, [edi + 5]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x05
        // 0x589741A3: push ebp
        __asm _emit 0x55
        // 0x589741A4: push eax
        __asm _emit 0x50
        // 0x589741A5: call dword ptr [0x5898c35c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x5C
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x589741AB: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x589741AE: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x589741B2: cmp eax, 0x8769
        __asm _emit 0x3D
        __asm _emit 0x69
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589741B7: je 0x589741c0
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x589741B9: cmp eax, 0xa005
        __asm _emit 0x3D
        __asm _emit 0x05
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589741BE: jne 0x589741ff
        __asm _emit 0x75
        __asm _emit 0x3F
        // 0x589741C0: push ebp
        __asm _emit 0x55
        // 0x589741C1: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x589741C3: call 0x58974000
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589741C8: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x589741CB: jbe 0x589741ff
        __asm _emit 0x76
        __asm _emit 0x32
        // 0x589741CD: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x589741D1: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x589741D3: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x589741D5: jb 0x589747d1
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0xF6
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589741DB: cmp eax, dword ptr [esp + 0x1c]
        __asm _emit 0x3B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x589741DF: ja 0x589747d1
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xEC
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589741E5: mov edx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x589741E9: inc edx
        __asm _emit 0x42
        // 0x589741EA: push edx
        __asm _emit 0x52
        // 0x589741EB: mov edx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x589741EF: push edx
        __asm _emit 0x52
        // 0x589741F0: mov edx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x589741F4: push edi
        __asm _emit 0x57
        // 0x589741F5: push edx
        __asm _emit 0x52
        // 0x589741F6: push ecx
        __asm _emit 0x51
        // 0x589741F7: push eax
        __asm _emit 0x50
        // 0x589741F8: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x589741FA: call 0x58974010
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589741FF: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58974203: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58974207: inc eax
        __asm _emit 0x40
        // 0x58974208: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5897420A: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5897420E: jl 0x589740d0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xBC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58974214: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58974218: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5897421C: mov esi, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58974220: jmp 0x5897476c
        __asm _emit 0xE9
        __asm _emit 0x47
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974225: push 0x27
        __asm _emit 0x6A
        __asm _emit 0x27
        // 0x58974227: lea ecx, [edi + 0x25]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x25
        // 0x5897422A: push ebp
        __asm _emit 0x55
        // 0x5897422B: push ecx
        __asm _emit 0x51
        // 0x5897422C: jmp 0x589741a5
        __asm _emit 0xE9
        __asm _emit 0x74
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58974231: push esi
        __asm _emit 0x56
        // 0x58974232: push ebp
        __asm _emit 0x55
        // 0x58974233: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58974235: call 0x58974970
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897423A: call 0x5897d5d0
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897423F: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x58974242: mov dword ptr [edi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x6C
        // 0x58974245: jl 0x58974250
        __asm _emit 0x7C
        __asm _emit 0x09
        // 0x58974247: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x5897424A: jle 0x589741ae
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x5E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58974250: mov edi, 0x589ce89c
        __asm _emit 0xBF
        __asm _emit 0x9C
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58974255: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFF
        // 0x58974258: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5897425A: lea edx, [ebx + 4]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x04
        // 0x5897425D: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xF2
        __asm _emit 0xAE
        // 0x5897425F: not ecx
        __asm _emit 0xF7
        __asm _emit 0xD1
        // 0x58974261: sub edi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF9
        // 0x58974263: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58974265: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x58974267: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58974269: shr ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x02
        // 0x5897426C: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5897426E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58974270: and ecx, 3
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x03
        // 0x58974273: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA4
        // 0x58974275: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58974279: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5897427B: mov dword ptr [ecx + 0x6c], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x6C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974282: jmp 0x589741ae
        __asm _emit 0xE9
        __asm _emit 0x27
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58974287: push esi
        __asm _emit 0x56
        // 0x58974288: push ebp
        __asm _emit 0x55
        // 0x58974289: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5897428B: call 0x58974970
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974290: call 0x5897d5d0
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974295: dec eax
        __asm _emit 0x48
        // 0x58974296: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x58974299: ja 0x589741ae
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x0F
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897429F: jmp dword ptr [eax*4 + 0x58974918]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0x49
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x589742A6: mov dword ptr [edi + 0xbc], 0x3f800000
        __asm _emit 0xC7
        __asm _emit 0x87
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x3F
        // 0x589742B0: jmp 0x589741ae
        __asm _emit 0xE9
        __asm _emit 0xF9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589742B5: mov dword ptr [edi + 0xbc], 0x3ec99326
        __asm _emit 0xC7
        __asm _emit 0x87
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x26
        __asm _emit 0x93
        __asm _emit 0xC9
        __asm _emit 0x3E
        // 0x589742BF: jmp 0x589741ae
        __asm _emit 0xE9
        __asm _emit 0xEA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589742C4: mov dword ptr [edi + 0xbc], 0x3d214285
        __asm _emit 0xC7
        __asm _emit 0x87
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x85
        __asm _emit 0x42
        __asm _emit 0x21
        __asm _emit 0x3D
        // 0x589742CE: jmp 0x589741ae
        __asm _emit 0xE9
        __asm _emit 0xDB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589742D3: mov dword ptr [edi + 0xbc], 0x3825214d
        __asm _emit 0xC7
        __asm _emit 0x87
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x4D
        __asm _emit 0x21
        __asm _emit 0x25
        __asm _emit 0x38
        // 0x589742DD: jmp 0x589741ae
        __asm _emit 0xE9
        __asm _emit 0xCC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589742E2: push esi
        __asm _emit 0x56
        // 0x589742E3: push ebp
        __asm _emit 0x55
        // 0x589742E4: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x589742E6: call 0x58974970
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589742EB: fstp dword ptr [edi + 0xb4]
        __asm _emit 0xD9
        __asm _emit 0x9F
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589742F1: jmp 0x589741ae
        __asm _emit 0xE9
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589742F6: push esi
        __asm _emit 0x56
        // 0x589742F7: push ebp
        __asm _emit 0x55
        // 0x589742F8: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x589742FA: call 0x58974970
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589742FF: fstp dword ptr [edi + 0xb8]
        __asm _emit 0xD9
        __asm _emit 0x9F
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974305: jmp 0x589741ae
        __asm _emit 0xE9
        __asm _emit 0xA4
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897430A: push esi
        __asm _emit 0x56
        // 0x5897430B: push ebp
        __asm _emit 0x55
        // 0x5897430C: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5897430E: call 0x58974970
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974313: call 0x5897d5d0
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974318: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5897431C: jmp 0x589741ae
        __asm _emit 0xE9
        __asm _emit 0x8D
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58974321: push esi
        __asm _emit 0x56
        // 0x58974322: push ebp
        __asm _emit 0x55
        // 0x58974323: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58974325: call 0x58974970
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897432A: call 0x5897d5d0
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897432F: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58974333: jmp 0x589741ff
        __asm _emit 0xE9
        __asm _emit 0xC7
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58974338: cmp eax, 0x8827
        __asm _emit 0x3D
        __asm _emit 0x27
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897433D: jg 0x589743ce
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0x8B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974343: je 0x5897439d
        __asm _emit 0x74
        __asm _emit 0x58
        // 0x58974345: sub eax, 0x829a
        __asm _emit 0x2D
        __asm _emit 0x9A
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897434A: je 0x58974389
        __asm _emit 0x74
        __asm _emit 0x3D
        // 0x5897434C: sub eax, 3
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x03
        // 0x5897434F: je 0x58974375
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x58974351: sub eax, 0x585
        __asm _emit 0x2D
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974356: jne 0x589741ae
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x52
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897435C: push esi
        __asm _emit 0x56
        // 0x5897435D: push ebp
        __asm _emit 0x55
        // 0x5897435E: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58974360: call 0x58974970
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974365: call 0x5897d5d0
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897436A: mov dword ptr [edi + 0x9c], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974370: jmp 0x589741ff
        __asm _emit 0xE9
        __asm _emit 0x8A
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58974375: push esi
        __asm _emit 0x56
        // 0x58974376: push ebp
        __asm _emit 0x55
        // 0x58974377: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58974379: call 0x58974970
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897437E: fstp dword ptr [edi + 0x84]
        __asm _emit 0xD9
        __asm _emit 0x9F
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974384: jmp 0x589741ff
        __asm _emit 0xE9
        __asm _emit 0x76
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58974389: push esi
        __asm _emit 0x56
        // 0x5897438A: push ebp
        __asm _emit 0x55
        // 0x5897438B: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5897438D: call 0x58974970
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974392: fstp dword ptr [edi + 0x80]
        __asm _emit 0xD9
        __asm _emit 0x9F
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974398: jmp 0x589741ff
        __asm _emit 0xE9
        __asm _emit 0x62
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897439D: push esi
        __asm _emit 0x56
        // 0x5897439E: push ebp
        __asm _emit 0x55
        // 0x5897439F: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x589743A1: call 0x58974970
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589743A6: call 0x5897d5d0
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589743AB: cmp eax, 0x32
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x32
        // 0x589743AE: mov dword ptr [edi + 0xa0], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589743B4: jge 0x589741ff
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589743BA: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x589743BD: lea edx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x80
        // 0x589743C0: shl edx, 3
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x589743C3: mov dword ptr [edi + 0xa0], edx
        __asm _emit 0x89
        __asm _emit 0x97
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589743C9: jmp 0x589741ff
        __asm _emit 0xE9
        __asm _emit 0x31
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589743CE: sub eax, 0x9000
        __asm _emit 0x2D
        __asm _emit 0x00
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589743D3: je 0x58974413
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x589743D5: sub eax, 3
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x03
        // 0x589743D8: je 0x589743fe
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x589743DA: sub eax, 0xff
        __asm _emit 0x2D
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589743DF: jne 0x589741ae
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589743E5: push esi
        __asm _emit 0x56
        // 0x589743E6: push ebp
        __asm _emit 0x55
        // 0x589743E7: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x589743E9: call 0x58974970
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589743EE: call 0x5897d5d0
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589743F3: mov dword ptr [edi + 0xa4], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589743F9: jmp 0x589741ff
        __asm _emit 0xE9
        __asm _emit 0x01
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589743FE: push 0x13
        __asm _emit 0x6A
        __asm _emit 0x13
        // 0x58974400: lea eax, [edi + 0x4d]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x4D
        // 0x58974403: push ebp
        __asm _emit 0x55
        // 0x58974404: push eax
        __asm _emit 0x50
        // 0x58974405: call dword ptr [0x5898c35c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x5C
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5897440B: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5897440E: jmp 0x589741ff
        __asm _emit 0xE9
        __asm _emit 0xEC
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58974413: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x58974415: push ebp
        __asm _emit 0x55
        // 0x58974416: push edi
        __asm _emit 0x57
        // 0x58974417: call dword ptr [0x5898c35c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x5C
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5897441D: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58974420: jmp 0x589741ff
        __asm _emit 0xE9
        __asm _emit 0xDA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58974425: fld dword ptr [edi + 0x80]
        __asm _emit 0xD9
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897442B: fcomp dword ptr [0x589a3054]
        __asm _emit 0xD8
        __asm _emit 0x1D
        __asm _emit 0x54
        __asm _emit 0x30
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58974431: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x58974433: test ah, 0x40
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x40
        // 0x58974436: je 0x589741ff
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC3
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897443C: push esi
        __asm _emit 0x56
        // 0x5897443D: push ebp
        __asm _emit 0x55
        // 0x5897443E: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58974440: call 0x58974970
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974445: fldln2
        __asm _emit 0xD9
        __asm _emit 0xED
        // 0x58974447: fld qword ptr [0x589a3070]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0x70
        __asm _emit 0x30
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5897444D: fyl2x
        __asm _emit 0xD9
        __asm _emit 0xF1
        // 0x5897444F: fmulp st(1)
        __asm _emit 0xDE
        __asm _emit 0xC9
        // 0x58974451: fldl2e
        __asm _emit 0xD9
        __asm _emit 0xEA
        // 0x58974453: fmulp st(1)
        __asm _emit 0xDE
        __asm _emit 0xC9
        // 0x58974455: fld st(0)
        __asm _emit 0xD9
        __asm _emit 0xC0
        // 0x58974457: frndint
        __asm _emit 0xD9
        __asm _emit 0xFC
        // 0x58974459: fxch st(1)
        __asm _emit 0xD9
        __asm _emit 0xC9
        // 0x5897445B: fsub st(1)
        __asm _emit 0xD8
        __asm _emit 0xE1
        // 0x5897445D: f2xm1
        __asm _emit 0xD9
        __asm _emit 0xF0
        // 0x5897445F: fld1
        __asm _emit 0xD9
        __asm _emit 0xE8
        // 0x58974461: faddp st(1)
        __asm _emit 0xDE
        __asm _emit 0xC1
        // 0x58974463: fscale
        __asm _emit 0xD9
        __asm _emit 0xFD
        // 0x58974465: fstp st(1)
        __asm _emit 0xDD
        __asm _emit 0xD9
        // 0x58974467: fdivr qword ptr [0x589a3060]
        __asm _emit 0xDC
        __asm _emit 0x3D
        __asm _emit 0x60
        __asm _emit 0x30
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5897446D: fstp dword ptr [edi + 0x80]
        __asm _emit 0xD9
        __asm _emit 0x9F
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974473: jmp 0x589741ff
        __asm _emit 0xE9
        __asm _emit 0x87
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58974478: cmp eax, 0x9286
        __asm _emit 0x3D
        __asm _emit 0x86
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897447D: jg 0x58974631
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0xAE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974483: je 0x5897459a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974489: add eax, 0xffff6dfe
        __asm _emit 0x05
        __asm _emit 0xFE
        __asm _emit 0x6D
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897448E: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x58974491: ja 0x589741ae
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x17
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58974497: jmp dword ptr [eax*4 + 0x5897492c]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x2C
        __asm _emit 0x49
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5897449E: fld dword ptr [edi + 0x84]
        __asm _emit 0xD9
        __asm _emit 0x87
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589744A4: fcomp dword ptr [0x589a3054]
        __asm _emit 0xD8
        __asm _emit 0x1D
        __asm _emit 0x54
        __asm _emit 0x30
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x589744AA: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x589744AC: test ah, 0x40
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x40
        // 0x589744AF: je 0x589741ae
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF9
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589744B5: push esi
        __asm _emit 0x56
        // 0x589744B6: push ebp
        __asm _emit 0x55
        // 0x589744B7: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x589744B9: call 0x58974970
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589744BE: fldln2
        __asm _emit 0xD9
        __asm _emit 0xED
        // 0x589744C0: fld qword ptr [0x589a3070]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0x70
        __asm _emit 0x30
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x589744C6: fyl2x
        __asm _emit 0xD9
        __asm _emit 0xF1
        // 0x589744C8: fmulp st(1)
        __asm _emit 0xDE
        __asm _emit 0xC9
        // 0x589744CA: fmul qword ptr [0x5898cf60]
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0x60
        __asm _emit 0xCF
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x589744D0: fldl2e
        __asm _emit 0xD9
        __asm _emit 0xEA
        // 0x589744D2: fmulp st(1)
        __asm _emit 0xDE
        __asm _emit 0xC9
        // 0x589744D4: fld st(0)
        __asm _emit 0xD9
        __asm _emit 0xC0
        // 0x589744D6: frndint
        __asm _emit 0xD9
        __asm _emit 0xFC
        // 0x589744D8: fxch st(1)
        __asm _emit 0xD9
        __asm _emit 0xC9
        // 0x589744DA: fsub st(1)
        __asm _emit 0xD8
        __asm _emit 0xE1
        // 0x589744DC: f2xm1
        __asm _emit 0xD9
        __asm _emit 0xF0
        // 0x589744DE: fld1
        __asm _emit 0xD9
        __asm _emit 0xE8
        // 0x589744E0: faddp st(1)
        __asm _emit 0xDE
        __asm _emit 0xC1
        // 0x589744E2: fscale
        __asm _emit 0xD9
        __asm _emit 0xFD
        // 0x589744E4: fstp st(1)
        __asm _emit 0xDD
        __asm _emit 0xD9
        // 0x589744E6: fstp dword ptr [edi + 0x84]
        __asm _emit 0xD9
        __asm _emit 0x9F
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589744EC: jmp 0x589741ae
        __asm _emit 0xE9
        __asm _emit 0xBD
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589744F1: push esi
        __asm _emit 0x56
        // 0x589744F2: push ebp
        __asm _emit 0x55
        // 0x589744F3: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x589744F5: call 0x58974970
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589744FA: fstp dword ptr [edi + 0xc0]
        __asm _emit 0xD9
        __asm _emit 0x9F
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974500: jmp 0x589741ae
        __asm _emit 0xE9
        __asm _emit 0xA9
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58974505: push esi
        __asm _emit 0x56
        // 0x58974506: push ebp
        __asm _emit 0x55
        // 0x58974507: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58974509: call 0x58974970
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897450E: fstp dword ptr [edi + 0x7c]
        __asm _emit 0xD9
        __asm _emit 0x5F
        __asm _emit 0x7C
        // 0x58974511: jmp 0x589741ae
        __asm _emit 0xE9
        __asm _emit 0x98
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58974516: push esi
        __asm _emit 0x56
        // 0x58974517: push ebp
        __asm _emit 0x55
        // 0x58974518: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5897451A: call 0x58974970
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897451F: fstp dword ptr [edi + 0x88]
        __asm _emit 0xD9
        __asm _emit 0x9F
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974525: jmp 0x589741ae
        __asm _emit 0xE9
        __asm _emit 0x84
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897452A: push esi
        __asm _emit 0x56
        // 0x5897452B: push ebp
        __asm _emit 0x55
        // 0x5897452C: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5897452E: call 0x58974970
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974533: call 0x5897d5d0
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974538: test al, 7
        __asm _emit 0xA8
        __asm _emit 0x07
        // 0x5897453A: je 0x58974548
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5897453C: mov dword ptr [edi + 0x78], 1
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974543: jmp 0x589741ae
        __asm _emit 0xE9
        __asm _emit 0x66
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58974548: mov dword ptr [edi + 0x78], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897454F: jmp 0x589741ae
        __asm _emit 0xE9
        __asm _emit 0x5A
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58974554: push esi
        __asm _emit 0x56
        // 0x58974555: push ebp
        __asm _emit 0x55
        // 0x58974556: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58974558: call 0x58974970
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897455D: fstp dword ptr [edi + 0x90]
        __asm _emit 0xD9
        __asm _emit 0x9F
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974563: jmp 0x589741ae
        __asm _emit 0xE9
        __asm _emit 0x46
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58974568: push esi
        __asm _emit 0x56
        // 0x58974569: push ebp
        __asm _emit 0x55
        // 0x5897456A: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5897456C: call 0x58974970
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974571: call 0x5897d5d0
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974576: mov dword ptr [edi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897457C: jmp 0x589741ae
        __asm _emit 0xE9
        __asm _emit 0x2D
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58974581: push esi
        __asm _emit 0x56
        // 0x58974582: push ebp
        __asm _emit 0x55
        // 0x58974583: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58974585: call 0x58974970
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897458A: call 0x5897d5d0
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897458F: mov dword ptr [edi + 0x98], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974595: jmp 0x589741ae
        __asm _emit 0xE9
        __asm _emit 0x14
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897459A: mov cl, byte ptr [edx + ebp - 1]
        __asm _emit 0x8A
        __asm _emit 0x4C
        __asm _emit 0x2A
        __asm _emit 0xFF
        // 0x5897459E: lea eax, [edx - 1]
        __asm _emit 0x8D
        __asm _emit 0x42
        __asm _emit 0xFF
        // 0x589745A1: cmp cl, 0x20
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x20
        // 0x589745A4: jne 0x589745b8
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x589745A6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x589745A8: mov byte ptr [eax + ebp], 0
        __asm _emit 0xC6
        __asm _emit 0x04
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x589745AC: je 0x589745b8
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x589745AE: mov cl, byte ptr [eax + ebp - 1]
        __asm _emit 0x8A
        __asm _emit 0x4C
        __asm _emit 0x28
        __asm _emit 0xFF
        // 0x589745B2: dec eax
        __asm _emit 0x48
        // 0x589745B3: cmp cl, 0x20
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x20
        // 0x589745B6: je 0x589745a6
        __asm _emit 0x74
        __asm _emit 0xEE
        // 0x589745B8: mov ecx, 5
        __asm _emit 0xB9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589745BD: mov edi, 0x589ce894
        __asm _emit 0xBF
        __asm _emit 0x94
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x589745C2: mov esi, ebp
        __asm _emit 0x8B
        __asm _emit 0xF5
        // 0x589745C4: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x589745C6: repe cmpsb byte ptr [esi], byte ptr es:[edi]
        __asm _emit 0xF3
        __asm _emit 0xA6
        // 0x589745C8: jne 0x5897460e
        __asm _emit 0x75
        __asm _emit 0x44
        // 0x589745CA: mov eax, 5
        __asm _emit 0xB8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589745CF: mov cl, byte ptr [eax + ebp]
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x28
        // 0x589745D2: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x589745D4: je 0x589745db
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x589745D6: cmp cl, 0x20
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x20
        // 0x589745D9: jne 0x589745ea
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x589745DB: inc eax
        __asm _emit 0x40
        // 0x589745DC: cmp eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x589745DF: jl 0x589745cf
        __asm _emit 0x7C
        __asm _emit 0xEE
        // 0x589745E1: mov edi, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x589745E5: jmp 0x589741ff
        __asm _emit 0xE9
        __asm _emit 0x15
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589745EA: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x589745EC: push 0xc7
        __asm _emit 0x68
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589745F1: push eax
        __asm _emit 0x50
        // 0x589745F2: mov eax, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x589745F6: add eax, 0xc4
        __asm _emit 0x05
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589745FB: push eax
        __asm _emit 0x50
        // 0x589745FC: call dword ptr [0x5898c35c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x5C
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58974602: mov edi, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x58974606: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58974609: jmp 0x589741ff
        __asm _emit 0xE9
        __asm _emit 0xF1
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897460E: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58974612: push 0xc7
        __asm _emit 0x68
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974617: add ecx, 0xc4
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897461D: push ebp
        __asm _emit 0x55
        // 0x5897461E: push ecx
        __asm _emit 0x51
        // 0x5897461F: call dword ptr [0x5898c35c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x5C
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58974625: mov edi, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x58974629: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5897462C: jmp 0x589741ff
        __asm _emit 0xE9
        __asm _emit 0xCE
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58974631: cmp eax, 0xa20f
        __asm _emit 0x3D
        __asm _emit 0x0F
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974636: jg 0x589746a4
        __asm _emit 0x7F
        __asm _emit 0x6C
        // 0x58974638: je 0x58974690
        __asm _emit 0x74
        __asm _emit 0x56
        // 0x5897463A: cmp eax, 0xa002
        __asm _emit 0x3D
        __asm _emit 0x02
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897463F: jl 0x589741ae
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x69
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58974645: cmp eax, 0xa003
        __asm _emit 0x3D
        __asm _emit 0x03
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897464A: jle 0x5897466b
        __asm _emit 0x7E
        __asm _emit 0x1F
        // 0x5897464C: cmp eax, 0xa20e
        __asm _emit 0x3D
        __asm _emit 0x0E
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974651: jne 0x589741ae
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x57
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58974657: push esi
        __asm _emit 0x56
        // 0x58974658: push ebp
        __asm _emit 0x55
        // 0x58974659: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5897465B: call 0x58974970
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974660: fstp dword ptr [edi + 0xa8]
        __asm _emit 0xD9
        __asm _emit 0x9F
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974666: jmp 0x589741ff
        __asm _emit 0xE9
        __asm _emit 0x94
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897466B: push esi
        __asm _emit 0x56
        // 0x5897466C: push ebp
        __asm _emit 0x55
        // 0x5897466D: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5897466F: call 0x58974970
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974674: call 0x5897d5d0
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974679: cmp dword ptr [ebx + 0x104], eax
        __asm _emit 0x39
        __asm _emit 0x83
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897467F: jge 0x589741ae
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x29
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58974685: mov dword ptr [ebx + 0x104], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897468B: jmp 0x589741ae
        __asm _emit 0xE9
        __asm _emit 0x1E
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58974690: push esi
        __asm _emit 0x56
        // 0x58974691: push ebp
        __asm _emit 0x55
        // 0x58974692: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58974694: call 0x58974970
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974699: fstp dword ptr [edi + 0xac]
        __asm _emit 0xD9
        __asm _emit 0x9F
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897469F: jmp 0x589741ff
        __asm _emit 0xE9
        __asm _emit 0x5B
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589746A4: cmp eax, 0xa210
        __asm _emit 0x3D
        __asm _emit 0x10
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589746A9: jne 0x589741ae
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFF
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589746AF: push esi
        __asm _emit 0x56
        // 0x589746B0: push ebp
        __asm _emit 0x55
        // 0x589746B1: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x589746B3: call 0x58974970
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589746B8: call 0x5897d5d0
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589746BD: dec eax
        __asm _emit 0x48
        // 0x589746BE: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x589746C1: ja 0x589741ff
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x38
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589746C7: jmp dword ptr [eax*4 + 0x58974950]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x49
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x589746CE: mov dword ptr [edi + 0xb0], 0x3f800000
        __asm _emit 0xC7
        __asm _emit 0x87
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x3F
        // 0x589746D8: jmp 0x589741ff
        __asm _emit 0xE9
        __asm _emit 0x22
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589746DD: mov dword ptr [edi + 0xb0], 0x3ec99326
        __asm _emit 0xC7
        __asm _emit 0x87
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x26
        __asm _emit 0x93
        __asm _emit 0xC9
        __asm _emit 0x3E
        // 0x589746E7: jmp 0x589741ff
        __asm _emit 0xE9
        __asm _emit 0x13
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589746EC: mov dword ptr [edi + 0xb0], 0x3d214285
        __asm _emit 0xC7
        __asm _emit 0x87
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x85
        __asm _emit 0x42
        __asm _emit 0x21
        __asm _emit 0x3D
        // 0x589746F6: jmp 0x589741ff
        __asm _emit 0xE9
        __asm _emit 0x04
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589746FB: mov dword ptr [edi + 0xb0], 0x3825214d
        __asm _emit 0xC7
        __asm _emit 0x87
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x4D
        __asm _emit 0x21
        __asm _emit 0x25
        __asm _emit 0x38
        // 0x58974705: jmp 0x589741ff
        __asm _emit 0xE9
        __asm _emit 0xF5
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897470A: mov edi, 0x589ce874
        __asm _emit 0xBF
        __asm _emit 0x74
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5897470F: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFF
        // 0x58974712: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58974714: lea edx, [ebx + 4]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x04
        // 0x58974717: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xF2
        __asm _emit 0xAE
        // 0x58974719: not ecx
        __asm _emit 0xF7
        __asm _emit 0xD1
        // 0x5897471B: sub edi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF9
        // 0x5897471D: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5897471F: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x58974721: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58974723: shr ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x02
        // 0x58974726: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58974728: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5897472A: and ecx, 3
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x03
        // 0x5897472D: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x5897472F: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA4
        // 0x58974731: pop edi
        __asm _emit 0x5F
        // 0x58974732: pop esi
        __asm _emit 0x5E
        // 0x58974733: pop ebp
        __asm _emit 0x5D
        // 0x58974734: pop ebx
        __asm _emit 0x5B
        // 0x58974735: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x58974738: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5897473B: mov edi, 0x589ce84c
        __asm _emit 0xBF
        __asm _emit 0x4C
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58974740: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFF
        // 0x58974743: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58974745: lea edx, [ebx + 4]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x04
        // 0x58974748: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xF2
        __asm _emit 0xAE
        // 0x5897474A: not ecx
        __asm _emit 0xF7
        __asm _emit 0xD1
        // 0x5897474C: sub edi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF9
        // 0x5897474E: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58974750: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x58974752: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58974754: shr ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x02
        // 0x58974757: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58974759: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5897475B: and ecx, 3
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x03
        // 0x5897475E: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58974760: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA4
        // 0x58974762: pop edi
        __asm _emit 0x5F
        // 0x58974763: pop esi
        __asm _emit 0x5E
        // 0x58974764: pop ebp
        __asm _emit 0x5D
        // 0x58974765: pop ebx
        __asm _emit 0x5B
        // 0x58974766: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x58974769: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5897476C: push ecx
        __asm _emit 0x51
        // 0x5897476D: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5897476F: call 0x58973f70
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58974774: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58974776: je 0x5897479c
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x58974778: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xC6
        // 0x5897477A: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x5897477C: jb 0x589747d1
        __asm _emit 0x72
        __asm _emit 0x53
        // 0x5897477E: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58974780: ja 0x589747d1
        __asm _emit 0x77
        __asm _emit 0x4F
        // 0x58974782: mov ecx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58974786: mov edx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5897478A: inc ecx
        __asm _emit 0x41
        // 0x5897478B: push ecx
        __asm _emit 0x51
        // 0x5897478C: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58974790: push edx
        __asm _emit 0x52
        // 0x58974791: push edi
        __asm _emit 0x57
        // 0x58974792: push ecx
        __asm _emit 0x51
        // 0x58974793: push esi
        __asm _emit 0x56
        // 0x58974794: push eax
        __asm _emit 0x50
        // 0x58974795: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58974797: call 0x58974010
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897479C: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x589747A0: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x589747A2: je 0x589747c5
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x589747A4: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x589747A8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x589747AA: je 0x589747c5
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x589747AC: mov ebx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x589747B0: lea edx, [ecx + eax]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x589747B3: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x589747B5: ja 0x589747c5
        __asm _emit 0x77
        __asm _emit 0x0E
        // 0x589747B7: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xC6
        // 0x589747B9: mov dword ptr [edi + 0x4b0], ecx
        __asm _emit 0x89
        __asm _emit 0x8F
        __asm _emit 0xB0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589747BF: mov dword ptr [edi + 0x4ac], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0xAC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589747C5: pop edi
        __asm _emit 0x5F
        // 0x589747C6: pop esi
        __asm _emit 0x5E
        // 0x589747C7: pop ebp
        __asm _emit 0x5D
        // 0x589747C8: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x589747CA: pop ebx
        __asm _emit 0x5B
        // 0x589747CB: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x589747CE: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x589747D1: mov edi, 0x589ce830
        __asm _emit 0xBF
        __asm _emit 0x30
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x589747D6: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFF
        // 0x589747D9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x589747DB: lea edx, [ebx + 4]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x04
        // 0x589747DE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xF2
        __asm _emit 0xAE
        // 0x589747E0: not ecx
        __asm _emit 0xF7
        __asm _emit 0xD1
        // 0x589747E2: sub edi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF9
        // 0x589747E4: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x589747E6: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x589747E8: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x589747EA: shr ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x02
        // 0x589747ED: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x589747EF: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x589747F1: and ecx, 3
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x03
        // 0x589747F4: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x589747F6: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA4
        // 0x589747F8: pop edi
        __asm _emit 0x5F
        // 0x589747F9: pop esi
        __asm _emit 0x5E
        // 0x589747FA: pop ebp
        __asm _emit 0x5D
        // 0x589747FB: pop ebx
        __asm _emit 0x5B
        // 0x589747FC: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x589747FF: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
