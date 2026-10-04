// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A5840 .. +0x137 bytes.
// Source symbol alias: FUN_587a5840.
extern "C" __declspec(naked) void FUN_587a5840() {
    __asm {
        // 0x587A5840: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x587A5843: push ebx
        __asm _emit 0x53
        // 0x587A5844: push ebp
        __asm _emit 0x55
        // 0x587A5845: push esi
        __asm _emit 0x56
        // 0x587A5846: push edi
        __asm _emit 0x57
        // 0x587A5847: mov edi, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587A584B: mov byte ptr [edi], 0
        __asm _emit 0xC6
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x587A584E: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A5853: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587A5856: mov edx, dword ptr [eax + 0x141c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A585C: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587A585E: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587A5860: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A5864: mov dword ptr [esp + 0x10], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A586C: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587A586E: jle 0x587a594c
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5874: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x08
        // 0x587A5877: lea ebp, [eax + 0x21c]
        __asm _emit 0x8D
        __asm _emit 0xA8
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A587D: mov dword ptr [esp + 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587A5881: cmp dword ptr [ecx], 0
        __asm _emit 0x83
        __asm _emit 0x39
        __asm _emit 0x00
        // 0x587A5884: je 0x587a58e3
        __asm _emit 0x74
        __asm _emit 0x5D
        // 0x587A5886: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A588C: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587A588F: mov ecx, dword ptr [eax + 0x44c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5895: and ecx, dword ptr [eax + 0x344]
        __asm _emit 0x23
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A589B: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587A589D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A589F: shl eax, cl
        __asm _emit 0xD3
        __asm _emit 0xE0
        // 0x587A58A1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A58A3: jns 0x587a58e3
        __asm _emit 0x79
        __asm _emit 0x3E
        // 0x587A58A5: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A58AA: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587A58AD: movzx ecx, byte ptr [eax + esi + 0x1fc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8C
        __asm _emit 0x30
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A58B5: cmp ecx, dword ptr [eax + 0x340]
        __asm _emit 0x3B
        __asm _emit 0x88
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A58BB: jne 0x587a58e3
        __asm _emit 0x75
        __asm _emit 0x26
        // 0x587A58BD: mov al, byte ptr [esp + 0x24]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587A58C1: test al, 0x10
        __asm _emit 0xA8
        __asm _emit 0x10
        // 0x587A58C3: je 0x587a58d2
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587A58C5: cmp byte ptr [ebp], 0
        __asm _emit 0x80
        __asm _emit 0x7D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A58C9: jne 0x587a58d2
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587A58CB: cmp ebx, dword ptr [esp + 0x20]
        __asm _emit 0x3B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587A58CF: je 0x587a58f6
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x587A58D1: inc ebx
        __asm _emit 0x43
        // 0x587A58D2: test al, 0x20
        __asm _emit 0xA8
        __asm _emit 0x20
        // 0x587A58D4: je 0x587a58e3
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587A58D6: cmp byte ptr [ebp], 1
        __asm _emit 0x80
        __asm _emit 0x7D
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587A58DA: jne 0x587a58e3
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587A58DC: cmp ebx, dword ptr [esp + 0x20]
        __asm _emit 0x3B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587A58E0: je 0x587a5925
        __asm _emit 0x74
        __asm _emit 0x43
        // 0x587A58E2: inc ebx
        __asm _emit 0x43
        // 0x587A58E3: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587A58E7: inc esi
        __asm _emit 0x46
        // 0x587A58E8: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x587A58EB: inc ebp
        __asm _emit 0x45
        // 0x587A58EC: cmp esi, edx
        __asm _emit 0x3B
        __asm _emit 0xF2
        // 0x587A58EE: mov dword ptr [esp + 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587A58F2: jl 0x587a5881
        __asm _emit 0x7C
        __asm _emit 0x8D
        // 0x587A58F4: jmp 0x587a594c
        __asm _emit 0xEB
        __asm _emit 0x56
        // 0x587A58F6: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A58FA: mov edx, dword ptr [eax + esi*4 + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0xB0
        __asm _emit 0x08
        // 0x587A58FE: cmp dword ptr [edx + 0xf4], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5905: jne 0x587a5916
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x587A5907: pop edi
        __asm _emit 0x5F
        // 0x587A5908: pop esi
        __asm _emit 0x5E
        // 0x587A5909: pop ebp
        __asm _emit 0x5D
        // 0x587A590A: mov eax, 0xfffffffe
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A590F: pop ebx
        __asm _emit 0x5B
        // 0x587A5910: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587A5913: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587A5916: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587A5918: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587A591A: mov eax, dword ptr [eax + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x40
        // 0x587A591D: lea edx, [edi + 1]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x01
        // 0x587A5920: push edx
        __asm _emit 0x52
        // 0x587A5921: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587A5923: jmp 0x587a5941
        __asm _emit 0xEB
        __asm _emit 0x1C
        // 0x587A5925: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A5929: mov ecx, dword ptr [eax + esi*4 + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0xB0
        __asm _emit 0x08
        // 0x587A592D: cmp dword ptr [ecx + 0xf4], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5934: je 0x587a5907
        __asm _emit 0x74
        __asm _emit 0xD1
        // 0x587A5936: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587A5938: mov edx, dword ptr [edx + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x40
        // 0x587A593B: lea eax, [edi + 1]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x01
        // 0x587A593E: push eax
        __asm _emit 0x50
        // 0x587A593F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587A5941: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A5943: je 0x587a594c
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587A5945: inc eax
        __asm _emit 0x40
        // 0x587A5946: inc byte ptr [edi]
        __asm _emit 0xFE
        __asm _emit 0x07
        // 0x587A5948: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A594C: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A5951: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587A5954: cmp esi, dword ptr [ecx + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0xB1
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A595A: jne 0x587a5969
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x587A595C: pop edi
        __asm _emit 0x5F
        // 0x587A595D: pop esi
        __asm _emit 0x5E
        // 0x587A595E: pop ebp
        __asm _emit 0x5D
        // 0x587A595F: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x587A5962: pop ebx
        __asm _emit 0x5B
        // 0x587A5963: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587A5966: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587A5969: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A596D: pop edi
        __asm _emit 0x5F
        // 0x587A596E: pop esi
        __asm _emit 0x5E
        // 0x587A596F: pop ebp
        __asm _emit 0x5D
        // 0x587A5970: pop ebx
        __asm _emit 0x5B
        // 0x587A5971: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587A5974: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
