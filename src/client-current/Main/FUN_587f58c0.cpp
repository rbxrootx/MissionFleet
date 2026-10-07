// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 295 bytes in 2 exact ranges.
// Source symbol alias: FUN_587f58c0.

// Ghidra body range 0x587F58C0..0x587F591A; 90 mapped bytes.
extern "C" __declspec(naked) void FUN_587f58c0_segment_00() {
    __asm {
        // 0x587F58C0: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587F58C3: push ebx
        __asm _emit 0x53
        // 0x587F58C4: push ebp
        __asm _emit 0x55
        // 0x587F58C5: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587F58C7: push esi
        __asm _emit 0x56
        // 0x587F58C8: lea eax, [ebp + 0x21e80]
        __asm _emit 0x8D
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x1E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F58CE: push edi
        __asm _emit 0x57
        // 0x587F58CF: mov dword ptr [esp + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587F58D3: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587F58D5: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587F58D9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F58E0: cmp dword ptr [ebp + 0x21ef0], -1
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0xF0
        __asm _emit 0x1E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x587F58E7: je 0x587f59d6
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F58ED: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F58F3: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587F58F6: mov edx, dword ptr [eax + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F58FC: mov cx, word ptr [edx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x0C
        // 0x587F5900: mov edi, 0x7c00
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x7C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5905: and cx, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCF
        // 0x587F5908: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587F590A: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587F590C: cmp di, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x587F590F: jae 0x587f59d6
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5915: lea edi, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x587F5918: jmp 0x587f5920
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x587F5920..0x587F59ED; 205 mapped bytes.
extern "C" __declspec(naked) void FUN_587f58c0_segment_01() {
    __asm {
        // 0x587F5920: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587F5922: mov ebp, 0x80000000
        __asm _emit 0xBD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x587F5927: shr ebp, cl
        __asm _emit 0xD3
        __asm _emit 0xED
        // 0x587F5929: mov ecx, 0x1f
        __asm _emit 0xB9
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F592E: sub ecx, esi
        __asm _emit 0x2B
        __asm _emit 0xCE
        // 0x587F5930: and ebp, dword ptr [edx + 0x268]
        __asm _emit 0x23
        __asm _emit 0xAA
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5936: shr ebp, cl
        __asm _emit 0xD3
        __asm _emit 0xED
        // 0x587F5938: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x587F593A: jne 0x587f59ad
        __asm _emit 0x75
        __asm _emit 0x71
        // 0x587F593C: cmp dword ptr [eax + 0x340], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5942: jne 0x587f59ad
        __asm _emit 0x75
        __asm _emit 0x69
        // 0x587F5944: cmp dword ptr [edi + eax + 0xe84], 0
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x07
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F594C: je 0x587f59ad
        __asm _emit 0x74
        __asm _emit 0x5F
        // 0x587F594E: cmp word ptr [edi + eax + 0xe04], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x07
        __asm _emit 0x04
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5957: jbe 0x587f59ad
        __asm _emit 0x76
        __asm _emit 0x54
        // 0x587F5959: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587F595D: movzx eax, word ptr [edx]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x02
        // 0x587F5960: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x587F5964: je 0x587f598b
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x587F5966: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587F596A: je 0x587f598b
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x587F596C: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587F5970: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587F5974: jne 0x587f59b1
        __asm _emit 0x75
        __asm _emit 0x3B
        // 0x587F5976: mov eax, dword ptr [ebp + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F597C: mov ecx, dword ptr [eax + edi]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x38
        // 0x587F597F: push ebx
        __asm _emit 0x53
        // 0x587F5980: push esi
        __asm _emit 0x56
        // 0x587F5981: push ecx
        __asm _emit 0x51
        // 0x587F5982: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587F5984: call 0x587ec050
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F5989: jmp 0x587f59b1
        __asm _emit 0xEB
        __asm _emit 0x26
        // 0x587F598B: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587F598F: cmp dword ptr [ebp + 0x21c70], -1
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0x70
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x587F5996: je 0x587f59b1
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x587F5998: mov edx, dword ptr [ebp + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F599E: mov eax, dword ptr [edx + edi]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x3A
        // 0x587F59A1: push ebx
        __asm _emit 0x53
        // 0x587F59A2: push esi
        __asm _emit 0x56
        // 0x587F59A3: push eax
        __asm _emit 0x50
        // 0x587F59A4: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587F59A6: call 0x587e7160
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0x17
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F59AB: jmp 0x587f59b1
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587F59AD: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587F59B1: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F59B7: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587F59BA: mov edx, dword ptr [eax + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F59C0: movzx ecx, word ptr [edx + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4A
        __asm _emit 0x0C
        // 0x587F59C4: shr ecx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x0A
        // 0x587F59C7: inc esi
        __asm _emit 0x46
        // 0x587F59C8: and ecx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x587F59CB: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587F59CE: cmp esi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF1
        // 0x587F59D0: jl 0x587f5920
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x4A
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F59D6: add dword ptr [esp + 0x14], 0x38
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x38
        // 0x587F59DB: inc ebx
        __asm _emit 0x43
        // 0x587F59DC: cmp ebx, 2
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x02
        // 0x587F59DF: jl 0x587f58e0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xFB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F59E5: pop edi
        __asm _emit 0x5F
        // 0x587F59E6: pop esi
        __asm _emit 0x5E
        // 0x587F59E7: pop ebp
        __asm _emit 0x5D
        // 0x587F59E8: pop ebx
        __asm _emit 0x5B
        // 0x587F59E9: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587F59EC: ret
        __asm _emit 0xC3
    }
}
