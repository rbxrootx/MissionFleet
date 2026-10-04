// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587DA650 .. +0xBD bytes.
// Source symbol alias: FUN_587da650.
extern "C" __declspec(naked) void FUN_587da650() {
    __asm {
        // 0x587DA650: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587DA654: push ebx
        __asm _emit 0x53
        // 0x587DA655: mov ebx, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x99
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA65B: mov edx, dword ptr [ebx + eax*4 + 0xb40]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x83
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA662: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587DA664: je 0x587da704
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA66A: cmp byte ptr [edx], 5
        __asm _emit 0x80
        __asm _emit 0x3A
        __asm _emit 0x05
        // 0x587DA66D: jne 0x587da704
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA673: push esi
        __asm _emit 0x56
        // 0x587DA674: mov esi, ebx
        __asm _emit 0x8B
        __asm _emit 0xF3
        // 0x587DA676: mov edx, dword ptr [esi + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA67C: push edi
        __asm _emit 0x57
        // 0x587DA67D: movzx edi, word ptr [edx + eax*2 + 0xda]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xBC
        __asm _emit 0x42
        __asm _emit 0xDA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA685: mov edx, dword ptr [esi + eax*4 + 0xb40]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA68C: movzx edx, word ptr [edx + 0x1e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x52
        __asm _emit 0x1E
        // 0x587DA690: sub edi, edx
        __asm _emit 0x2B
        __asm _emit 0xFA
        // 0x587DA692: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587DA694: cmp dword ptr [esi + eax*8 + 0xbc0], edx
        __asm _emit 0x39
        __asm _emit 0x94
        __asm _emit 0xC6
        __asm _emit 0xC0
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA69B: je 0x587da6b9
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x587DA69D: movzx edx, word ptr [esi + eax*4 + 0xac0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x94
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA6A5: mov esi, dword ptr [esi + eax*8 + 0xbc0]
        __asm _emit 0x8B
        __asm _emit 0xB4
        __asm _emit 0xC6
        __asm _emit 0xC0
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA6AC: movzx esi, word ptr [esi + 0x1e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x76
        __asm _emit 0x1E
        // 0x587DA6B0: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA6B6: imul edx, esi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD6
        // 0x587DA6B9: cmp dword ptr [ebx + eax*8 + 0xbc4], 0
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0xC3
        __asm _emit 0xC4
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA6C1: je 0x587da6e3
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x587DA6C3: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587DA6C5: movzx esi, word ptr [ecx + eax*4 + 0xac2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xB4
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA6CD: mov eax, dword ptr [ecx + eax*8 + 0xbc4]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xC1
        __asm _emit 0xC4
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA6D4: movzx ecx, word ptr [eax + 0x1e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x48
        __asm _emit 0x1E
        // 0x587DA6D8: xor esi, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF6
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA6DE: imul esi, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xF1
        // 0x587DA6E1: add edx, esi
        __asm _emit 0x03
        __asm _emit 0xD6
        // 0x587DA6E3: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x587DA6E8: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587DA6EA: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x587DA6ED: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587DA6EF: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587DA6F2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587DA6F4: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x587DA6F6: pop edi
        __asm _emit 0x5F
        // 0x587DA6F7: mov eax, 0
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA6FC: pop esi
        __asm _emit 0x5E
        // 0x587DA6FD: setns al
        __asm _emit 0x0F
        __asm _emit 0x99
        __asm _emit 0xC0
        // 0x587DA700: pop ebx
        __asm _emit 0x5B
        // 0x587DA701: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587DA704: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA709: pop ebx
        __asm _emit 0x5B
        // 0x587DA70A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
