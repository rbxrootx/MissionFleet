// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 563 bytes in 1 exact ranges.
// Source symbol alias: FUN_587455b0.

// Ghidra body range 0x587455B0..0x587457E3; 563 mapped bytes.
extern "C" __declspec(naked) void FUN_587455b0_segment_00() {
    __asm {
        // 0x587455B0: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587455B3: push ebx
        __asm _emit 0x53
        // 0x587455B4: push esi
        __asm _emit 0x56
        // 0x587455B5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587455B7: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x587455B9: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587455BB: cmp dword ptr [ecx + 0x60c4], 1
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xC4
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587455C2: jne 0x5874561e
        __asm _emit 0x75
        __asm _emit 0x5A
        // 0x587455C4: cmp byte ptr [esi + 0xb8], bl
        __asm _emit 0x38
        __asm _emit 0x9E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587455CA: je 0x587455e4
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x587455CC: mov dword ptr [esi + 0xac], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587455D2: mov dword ptr [esi + 0xb0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587455D8: mov dword ptr [esi + 0xb4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587455DE: mov byte ptr [esi + 0xb8], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587455E4: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587455E7: cmp dword ptr [esi + 0xac], eax
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587455ED: jne 0x587455fa
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x587455EF: mov edx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587455F5: cmp edx, dword ptr [ecx + 8]
        __asm _emit 0x3B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587455F8: je 0x58745635
        __asm _emit 0x74
        __asm _emit 0x3B
        // 0x587455FA: mov dword ptr [esi + 0xac], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745600: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x58745603: mov dword ptr [esi + 0xb0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745609: mov dword ptr [esi + 0xb4], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745613: pop esi
        __asm _emit 0x5E
        // 0x58745614: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745619: pop ebx
        __asm _emit 0x5B
        // 0x5874561A: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5874561D: ret
        __asm _emit 0xC3
        // 0x5874561E: cmp dword ptr [esi + 0xb4], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745624: je 0x58745635
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x58745626: cmp byte ptr [esi + 0xb8], bl
        __asm _emit 0x38
        __asm _emit 0x9E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874562C: jne 0x58745635
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5874562E: mov byte ptr [esi + 0xb8], 1
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58745635: mov eax, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874563B: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5874563E: jne 0x5874569a
        __asm _emit 0x75
        __asm _emit 0x5A
        // 0x58745640: mov edx, dword ptr [ecx + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745646: mov eax, dword ptr [edx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x58745649: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5874564E: je 0x5874567e
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x58745650: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58745652: jle 0x58745668
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58745654: push ebx
        __asm _emit 0x53
        // 0x58745655: push ebx
        __asm _emit 0x53
        // 0x58745656: push 9
        __asm _emit 0x6A
        __asm _emit 0x09
        // 0x58745658: call 0x588e4260
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0xEC
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5874565D: pop esi
        __asm _emit 0x5E
        // 0x5874565E: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745663: pop ebx
        __asm _emit 0x5B
        // 0x58745664: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58745667: ret
        __asm _emit 0xC3
        // 0x58745668: jge 0x5874568f
        __asm _emit 0x7D
        __asm _emit 0x25
        // 0x5874566A: push ebx
        __asm _emit 0x53
        // 0x5874566B: push ebx
        __asm _emit 0x53
        // 0x5874566C: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x5874566E: call 0x588e4260
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0xEB
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58745673: pop esi
        __asm _emit 0x5E
        // 0x58745674: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745679: pop ebx
        __asm _emit 0x5B
        // 0x5874567A: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5874567D: ret
        __asm _emit 0xC3
        // 0x5874567E: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58745680: call 0x587afe60
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0xA7
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58745685: mov dword ptr [esi + 0xb4], 2
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874568F: pop esi
        __asm _emit 0x5E
        // 0x58745690: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745695: pop ebx
        __asm _emit 0x5B
        // 0x58745696: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58745699: ret
        __asm _emit 0xC3
        // 0x5874569A: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5874569D: jne 0x587456fc
        __asm _emit 0x75
        __asm _emit 0x5D
        // 0x5874569F: mov edx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587456A5: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x587456A8: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x587456AB: push edx
        __asm _emit 0x52
        // 0x587456AC: mov edx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587456B2: push edx
        __asm _emit 0x52
        // 0x587456B3: push eax
        __asm _emit 0x50
        // 0x587456B4: push ecx
        __asm _emit 0x51
        // 0x587456B5: call 0x587473e0
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0x1D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587456BA: fcomp qword ptr [0x5898cf28]
        __asm _emit 0xDC
        __asm _emit 0x1D
        __asm _emit 0x28
        __asm _emit 0xCF
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587456C0: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x587456C2: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587456C5: push ebx
        __asm _emit 0x53
        // 0x587456C6: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x587456C8: push ebx
        __asm _emit 0x53
        // 0x587456C9: test ah, 1
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x01
        // 0x587456CC: jne 0x587456ea
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x587456CE: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x587456D0: call 0x588e4260
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0xEB
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587456D5: mov dword ptr [esi + 0xb4], 3
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587456DF: pop esi
        __asm _emit 0x5E
        // 0x587456E0: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587456E5: pop ebx
        __asm _emit 0x5B
        // 0x587456E6: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587456E9: ret
        __asm _emit 0xC3
        // 0x587456EA: push 9
        __asm _emit 0x6A
        __asm _emit 0x09
        // 0x587456EC: call 0x588e4260
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0xEB
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587456F1: pop esi
        __asm _emit 0x5E
        // 0x587456F2: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587456F7: pop ebx
        __asm _emit 0x5B
        // 0x587456F8: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587456FB: ret
        __asm _emit 0xC3
        // 0x587456FC: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587456FF: jne 0x58745788
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745705: mov edx, dword ptr [ecx + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874570B: mov edx, dword ptr [edx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x50
        // 0x5874570E: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x58745714: jne 0x58745788
        __asm _emit 0x75
        __asm _emit 0x72
        // 0x58745716: mov ecx, dword ptr [ecx + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874571C: call 0x587afe60
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0xA7
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58745721: fld qword ptr [0x5898cf20]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0x20
        __asm _emit 0xCF
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58745727: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58745729: lea ecx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5874572D: push ecx
        __asm _emit 0x51
        // 0x5874572E: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745734: lea edx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58745738: push edx
        __asm _emit 0x52
        // 0x58745739: mov edx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874573F: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x58745742: fstp qword ptr [esp + 8]
        __asm _emit 0xDD
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58745746: fld qword ptr [0x5898cf18]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0xCF
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5874574C: fstp qword ptr [esp]
        __asm _emit 0xDD
        __asm _emit 0x1C
        __asm _emit 0x24
        // 0x5874574F: push ecx
        __asm _emit 0x51
        // 0x58745750: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58745753: push edx
        __asm _emit 0x52
        // 0x58745754: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58745757: push ecx
        __asm _emit 0x51
        // 0x58745758: push edx
        __asm _emit 0x52
        // 0x58745759: call 0x58747440
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874575E: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58745762: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58745766: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58745768: push eax
        __asm _emit 0x50
        // 0x58745769: push ecx
        __asm _emit 0x51
        // 0x5874576A: push edx
        __asm _emit 0x52
        // 0x5874576B: call 0x58747410
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745770: add esp, 0x34
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x34
        // 0x58745773: mov dword ptr [esi + 0xb4], 4
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874577D: pop esi
        __asm _emit 0x5E
        // 0x5874577E: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745783: pop ebx
        __asm _emit 0x5B
        // 0x58745784: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58745787: ret
        __asm _emit 0xC3
        // 0x58745788: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x5874578B: jne 0x587457db
        __asm _emit 0x75
        __asm _emit 0x4E
        // 0x5874578D: mov edx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745793: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x58745796: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x58745799: push edx
        __asm _emit 0x52
        // 0x5874579A: mov edx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587457A0: push edx
        __asm _emit 0x52
        // 0x587457A1: push eax
        __asm _emit 0x50
        // 0x587457A2: push ecx
        __asm _emit 0x51
        // 0x587457A3: call 0x587473e0
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587457A8: fcomp qword ptr [0x5898cf10]
        __asm _emit 0xDC
        __asm _emit 0x1D
        __asm _emit 0x10
        __asm _emit 0xCF
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587457AE: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587457B1: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x587457B3: test ah, 1
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x01
        // 0x587457B6: jne 0x587457d0
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x587457B8: mov dword ptr [esi + 0xb4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587457BE: mov byte ptr [esi + 0xb8], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587457C4: mov dword ptr [esi + 0xac], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587457CA: mov dword ptr [esi + 0xb0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587457D0: pop esi
        __asm _emit 0x5E
        // 0x587457D1: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587457D6: pop ebx
        __asm _emit 0x5B
        // 0x587457D7: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587457DA: ret
        __asm _emit 0xC3
        // 0x587457DB: pop esi
        __asm _emit 0x5E
        // 0x587457DC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587457DE: pop ebx
        __asm _emit 0x5B
        // 0x587457DF: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587457E2: ret
        __asm _emit 0xC3
    }
}
