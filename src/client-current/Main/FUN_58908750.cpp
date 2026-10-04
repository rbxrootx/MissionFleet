// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58908750 .. +0x9C bytes.
// Source symbol alias: FUN_58908750.
extern "C" __declspec(naked) void FUN_58908750() {
    __asm {
        // 0x58908750: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x58908753: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58908757: push ebx
        __asm _emit 0x53
        // 0x58908758: push esi
        __asm _emit 0x56
        // 0x58908759: mov esi, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x14
        // 0x5890875C: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xF0
        // 0x5890875E: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x58908760: push edi
        __asm _emit 0x57
        // 0x58908761: jl 0x589087e3
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x7C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58908767: mov esi, dword ptr [ecx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x1C
        // 0x5890876A: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xF0
        // 0x5890876C: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x5890876E: jge 0x589087e3
        __asm _emit 0x7D
        __asm _emit 0x73
        // 0x58908770: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58908773: mov eax, dword ptr [ecx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x18
        // 0x58908776: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5890877A: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5890877C: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x5890877E: jl 0x589087e3
        __asm _emit 0x7C
        __asm _emit 0x63
        // 0x58908780: mov eax, dword ptr [ecx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x20
        // 0x58908783: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58908785: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x58908787: jge 0x589087e3
        __asm _emit 0x7D
        __asm _emit 0x5A
        // 0x58908789: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x5890878B: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5890878D: cdq
        __asm _emit 0x99
        // 0x5890878E: idiv dword ptr [ecx + 0x5c]
        __asm _emit 0xF7
        __asm _emit 0x79
        __asm _emit 0x5C
        // 0x58908791: mov esi, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58908797: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58908799: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5890879B: jle 0x589087b5
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x5890879D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x589087A0: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x589087A2: je 0x589087e3
        __asm _emit 0x74
        __asm _emit 0x3F
        // 0x589087A4: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x589087A6: sub eax, dword ptr [ecx + 8]
        __asm _emit 0x2B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x589087A9: mov esi, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x14
        // 0x589087AC: cdq
        __asm _emit 0x99
        // 0x589087AD: idiv dword ptr [ecx + 0x5c]
        __asm _emit 0xF7
        __asm _emit 0x79
        __asm _emit 0x5C
        // 0x589087B0: inc edi
        __asm _emit 0x47
        // 0x589087B1: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x589087B3: jl 0x589087a0
        __asm _emit 0x7C
        __asm _emit 0xEB
        // 0x589087B5: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x589087B7: je 0x589087e3
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x589087B9: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x589087BB: cmp esi, dword ptr [ecx + 0x84]
        __asm _emit 0x3B
        __asm _emit 0xB1
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589087C1: je 0x589087d6
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x589087C3: mov eax, dword ptr [edx + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x3C
        // 0x589087C6: mov dword ptr [ecx + 0x84], esi
        __asm _emit 0x89
        __asm _emit 0xB1
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589087CC: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x589087CE: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x589087D0: pop edi
        __asm _emit 0x5F
        // 0x589087D1: pop esi
        __asm _emit 0x5E
        // 0x589087D2: pop ebx
        __asm _emit 0x5B
        // 0x589087D3: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x589087D6: mov eax, dword ptr [edx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x38
        // 0x589087D9: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x589087DB: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x589087DD: pop edi
        __asm _emit 0x5F
        // 0x589087DE: pop esi
        __asm _emit 0x5E
        // 0x589087DF: pop ebx
        __asm _emit 0x5B
        // 0x589087E0: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x589087E3: pop edi
        __asm _emit 0x5F
        // 0x589087E4: pop esi
        __asm _emit 0x5E
        // 0x589087E5: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x589087E8: pop ebx
        __asm _emit 0x5B
        // 0x589087E9: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
