// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A6FB0 .. +0x153 bytes.
// Source symbol alias: FUN_587a6fb0.
extern "C" __declspec(naked) void FUN_587a6fb0() {
    __asm {
        // 0x587A6FB0: sub esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x1C
        // 0x587A6FB3: push ebx
        __asm _emit 0x53
        // 0x587A6FB4: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587A6FB6: push edi
        __asm _emit 0x57
        // 0x587A6FB7: mov edi, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A6FBD: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x587A6FC0: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587A6FC2: cmp dword ptr [eax + 0x141c], edx
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A6FC8: mov dword ptr [esp + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587A6FCC: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A6FD0: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587A6FD4: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A6FD8: mov dword ptr [esp + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587A6FDC: mov dword ptr [esp + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587A6FE0: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A6FE4: jle 0x587a70d4
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xEA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A6FEA: push ebp
        __asm _emit 0x55
        // 0x587A6FEB: push esi
        __asm _emit 0x56
        // 0x587A6FEC: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587A6FEE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x587A6FF0: mov ecx, dword ptr [eax + esi*4 + 0xe8c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xB0
        __asm _emit 0x8C
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A6FF7: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x587A6FF9: je 0x587a70c2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A6FFF: movzx cx, byte ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x09
        // 0x587A7003: movzx ecx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC9
        // 0x587A7006: cmp cx, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x587A7009: je 0x587a70c2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A700F: cmp cx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x05
        // 0x587A7013: je 0x587a701f
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587A7015: cmp cx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x06
        // 0x587A7019: jne 0x587a70c2
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A701F: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A7025: mov eax, dword ptr [edx + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587A702B: mov eax, dword ptr [eax + esi*4 + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0xB0
        __asm _emit 0x08
        // 0x587A702F: cmp dword ptr [eax + 0xf8], 0x40000000
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587A7039: jne 0x587a705a
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x587A703B: mov ecx, dword ptr [eax + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7041: sub ecx, dword ptr [eax + 0x98]
        __asm _emit 0x2B
        __asm _emit 0x88
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7047: push ecx
        __asm _emit 0x51
        // 0x587A7048: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A704E: push esi
        __asm _emit 0x56
        // 0x587A704F: call 0x58853a00
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0xC9
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x587A7054: mov edi, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A705A: mov edx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x04
        // 0x587A705D: movzx ebp, byte ptr [esi + edx + 0x1fc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xAC
        __asm _emit 0x16
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7065: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A7069: lea eax, [esi + edx]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x16
        // 0x587A706C: movzx eax, byte ptr [eax + 0x21c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x80
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7073: mov edx, dword ptr [ecx + esi*4 + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0xB1
        __asm _emit 0x08
        // 0x587A7077: mov ecx, dword ptr [edx + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A707D: lea eax, [eax + ebp*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x68
        // 0x587A7080: cmp dword ptr [esp + eax*4 + 0x1c], ecx
        __asm _emit 0x39
        __asm _emit 0x4C
        __asm _emit 0x84
        __asm _emit 0x1C
        // 0x587A7084: jge 0x587a70a1
        __asm _emit 0x7D
        __asm _emit 0x1B
        // 0x587A7086: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x587A7089: movzx ebp, byte ptr [eax + esi + 0x1fc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xAC
        __asm _emit 0x30
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7091: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xC6
        // 0x587A7093: movzx eax, byte ptr [eax + 0x21c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x80
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A709A: lea eax, [eax + ebp*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x68
        // 0x587A709D: mov dword ptr [esp + eax*4 + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x84
        __asm _emit 0x1C
        // 0x587A70A1: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x587A70A4: cmp byte ptr [esi + eax + 0x1fc], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x06
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A70AC: jne 0x587a70c0
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x587A70AE: movzx ecx, byte ptr [esi + eax + 0x21c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8C
        __asm _emit 0x06
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A70B6: mov edx, dword ptr [edx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A70BC: mov dword ptr [esp + ecx*4 + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x8C
        __asm _emit 0x14
        // 0x587A70C0: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587A70C2: inc ebx
        __asm _emit 0x43
        // 0x587A70C3: movzx esi, bx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xF3
        // 0x587A70C6: cmp esi, dword ptr [eax + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0xB0
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A70CC: jl 0x587a6ff0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x1E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A70D2: pop esi
        __asm _emit 0x5E
        // 0x587A70D3: pop ebp
        __asm _emit 0x5D
        // 0x587A70D4: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A70D8: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587A70DC: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587A70E0: push eax
        __asm _emit 0x50
        // 0x587A70E1: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587A70E5: push ecx
        __asm _emit 0x51
        // 0x587A70E6: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587A70EA: push edx
        __asm _emit 0x52
        // 0x587A70EB: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587A70EF: push eax
        __asm _emit 0x50
        // 0x587A70F0: push ecx
        __asm _emit 0x51
        // 0x587A70F1: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A70F7: push edx
        __asm _emit 0x52
        // 0x587A70F8: call 0x58853a30
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0xC9
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x587A70FD: pop edi
        __asm _emit 0x5F
        // 0x587A70FE: pop ebx
        __asm _emit 0x5B
        // 0x587A70FF: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x587A7102: ret
        __asm _emit 0xC3
    }
}
