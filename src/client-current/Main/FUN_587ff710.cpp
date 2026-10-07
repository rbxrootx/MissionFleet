// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 343 bytes in 1 exact ranges.
// Source symbol alias: FUN_587ff710.

// Ghidra body range 0x587FF710..0x587FF867; 343 mapped bytes.
extern "C" __declspec(naked) void FUN_587ff710_segment_00() {
    __asm {
        // 0x587FF710: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x587FF713: push ebx
        __asm _emit 0x53
        // 0x587FF714: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587FF718: push ebp
        __asm _emit 0x55
        // 0x587FF719: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587FF71B: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x587FF71E: push esi
        __asm _emit 0x56
        // 0x587FF71F: mov esi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x587FF722: cmp byte ptr [esi + 0x2d], 0
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x2D
        __asm _emit 0x00
        // 0x587FF726: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x587FF728: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x587FF72A: push edi
        __asm _emit 0x57
        // 0x587FF72B: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587FF72F: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587FF733: mov byte ptr [esp + 0x14], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587FF737: jne 0x587ff7b1
        __asm _emit 0x75
        __asm _emit 0x78
        // 0x587FF739: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FF740: cmp dword ptr [esi + 0x24], 0x10
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587FF744: mov ebp, dword ptr [esi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x20
        // 0x587FF747: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587FF74B: jb 0x587ff752
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587FF74D: mov edx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x10
        // 0x587FF750: jmp 0x587ff755
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x587FF752: lea edx, [esi + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x10
        // 0x587FF755: mov edi, dword ptr [ebx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7B
        __asm _emit 0x14
        // 0x587FF758: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587FF75A: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587FF75C: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x587FF75E: jb 0x587ff762
        __asm _emit 0x72
        __asm _emit 0x02
        // 0x587FF760: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587FF762: cmp dword ptr [ebx + 0x18], 0x10
        __asm _emit 0x83
        __asm _emit 0x7B
        __asm _emit 0x18
        __asm _emit 0x10
        // 0x587FF766: jb 0x587ff76d
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587FF768: mov eax, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x587FF76B: jmp 0x587ff770
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x587FF76D: lea eax, [ebx + 4]
        __asm _emit 0x8D
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x587FF770: push ecx
        __asm _emit 0x51
        // 0x587FF771: push edx
        __asm _emit 0x52
        // 0x587FF772: push eax
        __asm _emit 0x50
        // 0x587FF773: call 0x58748020
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0x88
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587FF778: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587FF77B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587FF77D: jne 0x587ff791
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x587FF77F: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x587FF781: jae 0x587ff788
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x587FF783: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x587FF786: jmp 0x587ff78f
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x587FF788: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587FF78A: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x587FF78C: setne al
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC0
        // 0x587FF78F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587FF791: setl al
        __asm _emit 0x0F
        __asm _emit 0x9C
        __asm _emit 0xC0
        // 0x587FF794: mov byte ptr [esp + 0x14], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587FF798: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x587FF79A: je 0x587ff7a0
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587FF79C: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587FF79E: jmp 0x587ff7a3
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x587FF7A0: mov esi, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x08
        // 0x587FF7A3: cmp byte ptr [esi + 0x2d], 0
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x2D
        __asm _emit 0x00
        // 0x587FF7A7: je 0x587ff740
        __asm _emit 0x74
        __asm _emit 0x97
        // 0x587FF7A9: mov ebp, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587FF7AD: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587FF7B1: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x587FF7B4: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x587FF7B6: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587FF7B8: mov dword ptr [esp + 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587FF7BC: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587FF7C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x587FF7C2: je 0x587ff819
        __asm _emit 0x74
        __asm _emit 0x55
        // 0x587FF7C4: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x587FF7C7: mov esi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x30
        // 0x587FF7C9: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587FF7CB: je 0x587ff7d1
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587FF7CD: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x587FF7CF: je 0x587ff7da
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587FF7D1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0xD4
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587FF7D6: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587FF7DA: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587FF7DE: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x587FF7E0: jne 0x587ff80c
        __asm _emit 0x75
        __asm _emit 0x2A
        // 0x587FF7E2: push ebx
        __asm _emit 0x53
        // 0x587FF7E3: push edx
        __asm _emit 0x52
        // 0x587FF7E4: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587FF7E6: push ecx
        __asm _emit 0x51
        // 0x587FF7E7: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587FF7E9: call 0x587ff510
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587FF7EE: pop edi
        __asm _emit 0x5F
        // 0x587FF7EF: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587FF7F1: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587FF7F3: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587FF7F7: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x587FF7FA: pop esi
        __asm _emit 0x5E
        // 0x587FF7FB: pop ebp
        __asm _emit 0x5D
        // 0x587FF7FC: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x587FF7FE: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587FF801: mov byte ptr [eax + 8], 1
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x587FF805: pop ebx
        __asm _emit 0x5B
        // 0x587FF806: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587FF809: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587FF80C: call 0x587ef1f0
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0xF9
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587FF811: mov esi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587FF815: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587FF819: cmp dword ptr [ebx + 0x18], 0x10
        __asm _emit 0x83
        __asm _emit 0x7B
        __asm _emit 0x18
        __asm _emit 0x10
        // 0x587FF81D: mov edx, dword ptr [ebx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x14
        // 0x587FF820: lea ecx, [esi + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x587FF823: jb 0x587ff82a
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587FF825: mov eax, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x587FF828: jmp 0x587ff82d
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x587FF82A: lea eax, [ebx + 4]
        __asm _emit 0x8D
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x587FF82D: push edx
        __asm _emit 0x52
        // 0x587FF82E: mov edx, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x14
        // 0x587FF831: push eax
        __asm _emit 0x50
        // 0x587FF832: push edx
        __asm _emit 0x52
        // 0x587FF833: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587FF835: call 0x58748110
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x88
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587FF83A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587FF83C: jge 0x587ff850
        __asm _emit 0x7D
        __asm _emit 0x12
        // 0x587FF83E: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587FF842: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587FF846: push ebx
        __asm _emit 0x53
        // 0x587FF847: push eax
        __asm _emit 0x50
        // 0x587FF848: push ecx
        __asm _emit 0x51
        // 0x587FF849: lea edx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587FF84D: push edx
        __asm _emit 0x52
        // 0x587FF84E: jmp 0x587ff7e7
        __asm _emit 0xEB
        __asm _emit 0x97
        // 0x587FF850: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587FF854: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        // 0x587FF856: pop edi
        __asm _emit 0x5F
        // 0x587FF857: mov dword ptr [eax + 4], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x587FF85A: pop esi
        __asm _emit 0x5E
        // 0x587FF85B: pop ebp
        __asm _emit 0x5D
        // 0x587FF85C: mov byte ptr [eax + 8], 0
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587FF860: pop ebx
        __asm _emit 0x5B
        // 0x587FF861: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587FF864: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
