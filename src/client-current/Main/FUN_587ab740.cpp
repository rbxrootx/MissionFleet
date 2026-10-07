// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587AB740 .. +0x290 bytes.
// Source symbol alias: FUN_587ab740.
extern "C" __declspec(naked) void FUN_587ab740() {
    __asm {
        // 0x587AB740: sub esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x14
        // 0x587AB743: push ebx
        __asm _emit 0x53
        // 0x587AB744: push ebp
        __asm _emit 0x55
        // 0x587AB745: push esi
        __asm _emit 0x56
        // 0x587AB746: push edi
        __asm _emit 0x57
        // 0x587AB747: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587AB749: mov esi, dword ptr [edi + 0x170]
        __asm _emit 0x8B
        __asm _emit 0xB7
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB74F: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587AB753: cmp esi, dword ptr [edi + 0x174]
        __asm _emit 0x3B
        __asm _emit 0xB7
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB759: jbe 0x587ab760
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AB75B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x15
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB760: mov ebp, dword ptr [edi + 0x164]
        __asm _emit 0x8B
        __asm _emit 0xAF
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB766: mov ebx, esi
        __asm _emit 0x8B
        __asm _emit 0xDE
        // 0x587AB768: mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587AB76C: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587AB770: mov esi, dword ptr [edi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0xB7
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB776: cmp dword ptr [edi + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB7
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB77C: jbe 0x587ab783
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AB77E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0x14
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB783: mov eax, dword ptr [edi + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB789: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587AB78B: je 0x587ab791
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587AB78D: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x587AB78F: je 0x587ab796
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587AB791: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0x14
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB796: cmp ebx, esi
        __asm _emit 0x3B
        __asm _emit 0xDE
        // 0x587AB798: je 0x587ab9c6
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB79E: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587AB7A0: jne 0x587ab932
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB7A6: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0x14
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB7AB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AB7AD: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587AB7B0: jb 0x587ab7b7
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AB7B2: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x14
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB7B7: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587AB7B9: mov esi, dword ptr [eax + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB7BF: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x587AB7C2: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587AB7C5: jbe 0x587ab7cc
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AB7C7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0x14
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB7CC: mov ebx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x1E
        // 0x587AB7CE: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AB7D2: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AB7D6: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587AB7D8: jne 0x587ab93a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB7DE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x14
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB7E3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AB7E5: mov esi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587AB7E9: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x587AB7EC: jb 0x587ab7f3
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AB7EE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0x14
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB7F3: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x587AB7F5: mov esi, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB7FB: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587AB7FE: cmp dword ptr [esi + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x587AB801: jbe 0x587ab808
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AB803: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0x14
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB808: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587AB80A: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587AB80C: je 0x587ab812
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587AB80E: cmp ebx, esi
        __asm _emit 0x3B
        __asm _emit 0xDE
        // 0x587AB810: je 0x587ab817
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587AB812: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0x14
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB817: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AB81B: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x587AB81D: je 0x587ab996
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB823: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587AB825: jne 0x587ab942
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB82B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0x14
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB830: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AB832: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x587AB835: jb 0x587ab83c
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AB837: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x14
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB83C: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587AB83E: mov esi, dword ptr [edx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB2
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB844: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x587AB847: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587AB84A: jbe 0x587ab851
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AB84C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0x14
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB851: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587AB853: mov ebp, edi
        __asm _emit 0x8B
        __asm _emit 0xEF
        // 0x587AB855: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587AB857: jne 0x587ab949
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB85D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x14
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB862: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AB864: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AB868: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x587AB86B: jb 0x587ab872
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AB86D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB872: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587AB874: mov edi, dword ptr [eax + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB87A: mov ebx, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5F
        __asm _emit 0x10
        // 0x587AB87D: cmp dword ptr [edi + 0xc], ebx
        __asm _emit 0x39
        __asm _emit 0x5F
        __asm _emit 0x0C
        // 0x587AB880: jbe 0x587ab887
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AB882: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0x13
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB887: mov edi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x3F
        // 0x587AB889: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587AB88B: je 0x587ab891
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587AB88D: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x587AB88F: je 0x587ab896
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587AB891: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0x13
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB896: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x587AB898: je 0x587ab963
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB89E: mov ebx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587AB8A2: mov ecx, dword ptr [ebx + 0x12e8]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB8A8: mov edi, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x6C
        // 0x587AB8AB: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587AB8AD: jne 0x587ab950
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB8B3: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0x13
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB8B8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AB8BA: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x587AB8BD: jb 0x587ab8c4
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AB8BF: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0x13
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB8C4: mov edx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x587AB8C7: push edi
        __asm _emit 0x57
        // 0x587AB8C8: add edx, 0xe
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x0E
        // 0x587AB8CB: push edx
        __asm _emit 0x52
        // 0x587AB8CC: call dword ptr [0x5898c1a4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587AB8D2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AB8D4: jne 0x587ab911
        __asm _emit 0x75
        __asm _emit 0x3B
        // 0x587AB8D6: mov edi, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x7B
        __asm _emit 0x04
        // 0x587AB8D9: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587AB8DB: jne 0x587ab957
        __asm _emit 0x75
        __asm _emit 0x7A
        // 0x587AB8DD: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x13
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB8E2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AB8E4: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x587AB8E7: jb 0x587ab8ee
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AB8E9: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB8EE: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587AB8F1: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        // 0x587AB8F3: mov edi, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x7B
        __asm _emit 0x08
        // 0x587AB8F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587AB8F8: jne 0x587ab95b
        __asm _emit 0x75
        __asm _emit 0x61
        // 0x587AB8FA: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x13
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB8FF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AB901: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x587AB904: jb 0x587ab90b
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AB906: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x13
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB90B: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x587AB90E: mov dword ptr [ecx + 4], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x04
        // 0x587AB911: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587AB913: jne 0x587ab95f
        __asm _emit 0x75
        __asm _emit 0x4A
        // 0x587AB915: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0x13
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB91A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AB91C: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x587AB91F: jb 0x587ab926
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AB921: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0x13
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB926: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AB92A: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x587AB92D: jmp 0x587ab855
        __asm _emit 0xE9
        __asm _emit 0x23
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AB932: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587AB935: jmp 0x587ab7ad
        __asm _emit 0xE9
        __asm _emit 0x73
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AB93A: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587AB93D: jmp 0x587ab7e5
        __asm _emit 0xE9
        __asm _emit 0xA3
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AB942: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587AB944: jmp 0x587ab832
        __asm _emit 0xE9
        __asm _emit 0xE9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AB949: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587AB94B: jmp 0x587ab864
        __asm _emit 0xE9
        __asm _emit 0x14
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AB950: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587AB952: jmp 0x587ab8ba
        __asm _emit 0xE9
        __asm _emit 0x63
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AB957: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587AB959: jmp 0x587ab8e4
        __asm _emit 0xEB
        __asm _emit 0x89
        // 0x587AB95B: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587AB95D: jmp 0x587ab901
        __asm _emit 0xEB
        __asm _emit 0xA2
        // 0x587AB95F: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587AB961: jmp 0x587ab91c
        __asm _emit 0xEB
        __asm _emit 0xB9
        // 0x587AB963: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AB967: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AB969: jne 0x587ab992
        __asm _emit 0x75
        __asm _emit 0x27
        // 0x587AB96B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x13
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB970: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AB972: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AB976: cmp edx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587AB979: jb 0x587ab980
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AB97B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x12
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB980: add dword ptr [esp + 0x18], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x04
        // 0x587AB985: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587AB989: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AB98D: jmp 0x587ab7d6
        __asm _emit 0xE9
        __asm _emit 0x44
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AB992: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587AB994: jmp 0x587ab972
        __asm _emit 0xEB
        __asm _emit 0xDC
        // 0x587AB996: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587AB998: jne 0x587ab9c1
        __asm _emit 0x75
        __asm _emit 0x27
        // 0x587AB99A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0x12
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB99F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AB9A1: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587AB9A5: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x587AB9A8: jb 0x587ab9af
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AB9AA: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0x12
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB9AF: add dword ptr [esp + 0x20], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x587AB9B4: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587AB9B8: mov ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587AB9BC: jmp 0x587ab770
        __asm _emit 0xE9
        __asm _emit 0xAF
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AB9C1: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587AB9C4: jmp 0x587ab9a1
        __asm _emit 0xEB
        __asm _emit 0xDB
        // 0x587AB9C6: pop edi
        __asm _emit 0x5F
        // 0x587AB9C7: pop esi
        __asm _emit 0x5E
        // 0x587AB9C8: pop ebp
        __asm _emit 0x5D
        // 0x587AB9C9: pop ebx
        __asm _emit 0x5B
        // 0x587AB9CA: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587AB9CD: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
