// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587774A0 .. +0x1AE bytes.
// Source symbol alias: FUN_587774a0.
extern "C" __declspec(naked) void FUN_587774a0() {
    __asm {
        // 0x587774A0: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x587774A3: push ebx
        __asm _emit 0x53
        // 0x587774A4: push ebp
        __asm _emit 0x55
        // 0x587774A5: push esi
        __asm _emit 0x56
        // 0x587774A6: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587774A8: mov ebp, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x64
        // 0x587774AB: cmp ebp, dword ptr [esi + 0x68]
        __asm _emit 0x3B
        __asm _emit 0x6E
        __asm _emit 0x68
        // 0x587774AE: push edi
        __asm _emit 0x57
        // 0x587774AF: lea edi, [esi + 0x58]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x58
        // 0x587774B2: jbe 0x587774b9
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587774B4: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0x57
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587774B9: mov ebx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x1F
        // 0x587774BB: mov dword ptr [esp + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587774BF: nop
        __asm _emit 0x90
        // 0x587774C0: mov ebp, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6F
        __asm _emit 0x10
        // 0x587774C3: cmp dword ptr [edi + 0xc], ebp
        __asm _emit 0x39
        __asm _emit 0x6F
        __asm _emit 0x0C
        // 0x587774C6: jbe 0x587774cd
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587774C8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0x57
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587774CD: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587774CF: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587774D1: je 0x587774d7
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587774D3: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x587774D5: je 0x587774dc
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587774D7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0x57
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587774DC: cmp dword ptr [esp + 0x14], ebp
        __asm _emit 0x39
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587774E0: je 0x58777535
        __asm _emit 0x74
        __asm _emit 0x53
        // 0x587774E2: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587774E4: jne 0x5877752d
        __asm _emit 0x75
        __asm _emit 0x47
        // 0x587774E6: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0x57
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587774EB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587774ED: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587774F1: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x587774F4: jb 0x587774fb
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587774F6: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0x57
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587774FB: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587774FF: mov ecx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x0A
        // 0x58777501: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58777503: je 0x5877750d
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58777505: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58777507: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58777509: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5877750B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5877750D: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5877750F: jne 0x58777531
        __asm _emit 0x75
        __asm _emit 0x20
        // 0x58777511: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0x57
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777516: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58777518: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5877751C: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x5877751F: jb 0x58777526
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58777521: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0x57
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777526: add dword ptr [esp + 0x14], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x04
        // 0x5877752B: jmp 0x587774c0
        __asm _emit 0xEB
        __asm _emit 0x93
        // 0x5877752D: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x5877752F: jmp 0x587774ed
        __asm _emit 0xEB
        __asm _emit 0xBC
        // 0x58777531: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58777533: jmp 0x58777518
        __asm _emit 0xEB
        __asm _emit 0xE3
        // 0x58777535: mov eax, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x58777538: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5877753C: cmp dword ptr [edi + 0xc], eax
        __asm _emit 0x39
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x5877753F: jbe 0x58777546
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58777541: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0x57
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777546: mov ebx, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5F
        __asm _emit 0x0C
        // 0x58777549: mov ebp, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x2F
        // 0x5877754B: cmp ebx, dword ptr [edi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5F
        __asm _emit 0x10
        // 0x5877754E: jbe 0x58777555
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58777550: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0x57
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777555: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58777559: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5877755B: push edx
        __asm _emit 0x52
        // 0x5877755C: push ebp
        __asm _emit 0x55
        // 0x5877755D: push ebx
        __asm _emit 0x53
        // 0x5877755E: push eax
        __asm _emit 0x50
        // 0x5877755F: lea eax, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58777563: push eax
        __asm _emit 0x50
        // 0x58777564: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58777566: call 0x587aedb0
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x78
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x5877756B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877756D: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5877756F: mov dword ptr [esi + 0x98], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777575: mov dword ptr [esi + 0x9c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877757B: mov dword ptr [esi + 0xa0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777581: mov dword ptr [esi + 0xa4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777587: mov dword ptr [esi + 0xa8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877758D: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777593: call 0x587a8e70
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0x18
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58777598: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877759E: call 0x587aaed0
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0x39
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x587775A3: mov edi, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x587775A6: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587775A8: je 0x58777646
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587775AE: mov dword ptr [esp + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587775B2: mov ebx, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5F
        __asm _emit 0x0C
        // 0x587775B5: cmp ebx, dword ptr [edi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5F
        __asm _emit 0x10
        // 0x587775B8: jbe 0x587775bf
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587775BA: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0x56
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587775BF: mov edi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x3F
        // 0x587775C1: mov dword ptr [esp + 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587775C5: mov ebx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x54
        // 0x587775C8: mov ebp, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6B
        __asm _emit 0x10
        // 0x587775CB: cmp dword ptr [ebx + 0xc], ebp
        __asm _emit 0x39
        __asm _emit 0x6B
        __asm _emit 0x0C
        // 0x587775CE: jbe 0x587775d5
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587775D0: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x56
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587775D5: mov ebx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x1B
        // 0x587775D7: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587775D9: je 0x587775df
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587775DB: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587775DD: je 0x587775e4
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587775DF: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0x56
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587775E4: cmp dword ptr [esp + 0x1c], ebp
        __asm _emit 0x39
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587775E8: je 0x58777646
        __asm _emit 0x74
        __asm _emit 0x5C
        // 0x587775EA: movzx ecx, byte ptr [esi + 0xb4]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587775F1: cmp dword ptr [esp + 0x10], ecx
        __asm _emit 0x39
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587775F5: je 0x5877761f
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587775F7: inc dword ptr [esp + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587775FB: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587775FD: jne 0x5877761b
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x587775FF: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0x56
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777604: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58777606: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5877760A: cmp edx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5877760D: jb 0x58777614
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5877760F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0x56
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777614: add dword ptr [esp + 0x1c], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x04
        // 0x58777619: jmp 0x587775c5
        __asm _emit 0xEB
        __asm _emit 0xAA
        // 0x5877761B: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5877761D: jmp 0x58777606
        __asm _emit 0xEB
        __asm _emit 0xE7
        // 0x5877761F: mov ebx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x54
        // 0x58777622: mov ebp, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6B
        __asm _emit 0x10
        // 0x58777625: cmp dword ptr [ebx + 0xc], ebp
        __asm _emit 0x39
        __asm _emit 0x6B
        __asm _emit 0x0C
        // 0x58777628: jbe 0x5877762f
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5877762A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x56
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877762F: mov ebx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x1B
        // 0x58777631: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58777635: push ebp
        __asm _emit 0x55
        // 0x58777636: push ebx
        __asm _emit 0x53
        // 0x58777637: push eax
        __asm _emit 0x50
        // 0x58777638: push edi
        __asm _emit 0x57
        // 0x58777639: lea ecx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5877763D: push ecx
        __asm _emit 0x51
        // 0x5877763E: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x58777641: call 0x587aedb0
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0x77
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58777646: pop edi
        __asm _emit 0x5F
        // 0x58777647: pop esi
        __asm _emit 0x5E
        // 0x58777648: pop ebp
        __asm _emit 0x5D
        // 0x58777649: pop ebx
        __asm _emit 0x5B
        // 0x5877764A: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5877764D: ret
        __asm _emit 0xC3
    }
}
