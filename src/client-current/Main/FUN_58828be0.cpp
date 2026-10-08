// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 206 bytes in 1 exact ranges.
// Source symbol alias: FUN_58828be0.

// Ghidra body range 0x58828BE0..0x58828CAE; 206 mapped bytes.
extern "C" __declspec(naked) void FUN_58828be0_segment_00() {
    __asm {
        // 0x58828BE0: push esi
        __asm _emit 0x56
        // 0x58828BE1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58828BE3: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828BE9: push edi
        __asm _emit 0x57
        // 0x58828BEA: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0xF5
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58828BEF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58828BF1: jl 0x58828c8e
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828BF7: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828BFD: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0xF5
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58828C02: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828C08: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58828C0A: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0xF5
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58828C0F: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x58828C11: jl 0x58828c8e
        __asm _emit 0x7C
        __asm _emit 0x7B
        // 0x58828C13: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828C19: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0xF5
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58828C1E: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828C24: lea edi, [eax + 8]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x58828C27: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0xF5
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58828C2C: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58828C2E: jge 0x58828c8e
        __asm _emit 0x7D
        __asm _emit 0x5E
        // 0x58828C30: mov eax, dword ptr [esi + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828C36: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58828C3A: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x58828C3D: jne 0x58828c4a
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x58828C3F: mov eax, dword ptr [esi + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828C45: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x58828C4A: mov edx, dword ptr [esi + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828C50: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828C56: push ebx
        __asm _emit 0x53
        // 0x58828C57: mov ebx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x08
        // 0x58828C5A: push ebp
        __asm _emit 0x55
        // 0x58828C5B: mov ebp, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x58828C5E: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0xF5
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58828C63: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828C69: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58828C6B: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0xF5
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58828C70: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x58828C72: lea eax, [edi + edi*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x7F
        // 0x58828C75: lea ecx, [ebx + eax*8 + 0x91]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0xC3
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828C7C: push ecx
        __asm _emit 0x51
        // 0x58828C7D: mov ecx, dword ptr [esi + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828C83: push ebp
        __asm _emit 0x55
        // 0x58828C84: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0xA6
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58828C89: pop ebp
        __asm _emit 0x5D
        // 0x58828C8A: pop ebx
        __asm _emit 0x5B
        // 0x58828C8B: pop edi
        __asm _emit 0x5F
        // 0x58828C8C: pop esi
        __asm _emit 0x5E
        // 0x58828C8D: ret
        __asm _emit 0xC3
        // 0x58828C8E: mov edx, dword ptr [esi + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828C94: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x58828C98: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x58828C9A: je 0x58828cab
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x58828C9C: mov esi, dword ptr [esi + 0x124]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828CA2: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828CA7: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58828CAB: pop edi
        __asm _emit 0x5F
        // 0x58828CAC: pop esi
        __asm _emit 0x5E
        // 0x58828CAD: ret
        __asm _emit 0xC3
    }
}
