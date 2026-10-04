// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58831AE0 .. +0xA3 bytes.
// Source symbol alias: FUN_58831ae0.
extern "C" __declspec(naked) void FUN_58831ae0() {
    __asm {
        // 0x58831AE0: push ebx
        __asm _emit 0x53
        // 0x58831AE1: push ebp
        __asm _emit 0x55
        // 0x58831AE2: mov ebp, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58831AE6: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58831AE8: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58831AEA: je 0x58831b7e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831AF0: mov ecx, dword ptr [ebx + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831AF6: push esi
        __asm _emit 0x56
        // 0x58831AF7: push edi
        __asm _emit 0x57
        // 0x58831AF8: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58831AFA: cmp dword ptr [ecx + 0x88], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831B00: jle 0x58831b4c
        __asm _emit 0x7E
        __asm _emit 0x4A
        // 0x58831B02: add ebp, 0x2d
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x2D
        // 0x58831B05: push edi
        __asm _emit 0x57
        // 0x58831B06: mov esi, ebp
        __asm _emit 0x8B
        __asm _emit 0xF5
        // 0x58831B08: call 0x589080e0
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0x65
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58831B0D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58831B10: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x58831B12: cmp cl, byte ptr [esi]
        __asm _emit 0x3A
        __asm _emit 0x0E
        // 0x58831B14: jne 0x58831b30
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x58831B16: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58831B18: je 0x58831b2c
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58831B1A: mov cl, byte ptr [eax + 1]
        __asm _emit 0x8A
        __asm _emit 0x48
        __asm _emit 0x01
        // 0x58831B1D: cmp cl, byte ptr [esi + 1]
        __asm _emit 0x3A
        __asm _emit 0x4E
        __asm _emit 0x01
        // 0x58831B20: jne 0x58831b30
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x58831B22: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x58831B25: add esi, 2
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x02
        // 0x58831B28: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58831B2A: jne 0x58831b10
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x58831B2C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58831B2E: jmp 0x58831b35
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x58831B30: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x58831B32: sbb eax, -1
        __asm _emit 0x83
        __asm _emit 0xD8
        __asm _emit 0xFF
        // 0x58831B35: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58831B37: je 0x58831b7c
        __asm _emit 0x74
        __asm _emit 0x43
        // 0x58831B39: mov ecx, dword ptr [ebx + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831B3F: inc edi
        __asm _emit 0x47
        // 0x58831B40: cmp edi, dword ptr [ecx + 0x88]
        __asm _emit 0x3B
        __asm _emit 0xB9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831B46: jl 0x58831b05
        __asm _emit 0x7C
        __asm _emit 0xBD
        // 0x58831B48: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58831B4C: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58831B4F: push 0x83add7
        __asm _emit 0x68
        __asm _emit 0xD7
        __asm _emit 0xAD
        __asm _emit 0x83
        __asm _emit 0x00
        // 0x58831B54: push eax
        __asm _emit 0x50
        // 0x58831B55: lea ecx, [ebp + 0x2d]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x2D
        // 0x58831B58: push ecx
        __asm _emit 0x51
        // 0x58831B59: mov ecx, dword ptr [ebx + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831B5F: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0x6D
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58831B64: mov edx, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x04
        // 0x58831B67: mov ecx, dword ptr [ebx + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831B6D: push 0x83add7
        __asm _emit 0x68
        __asm _emit 0xD7
        __asm _emit 0xAD
        __asm _emit 0x83
        __asm _emit 0x00
        // 0x58831B72: push edx
        __asm _emit 0x52
        // 0x58831B73: add ebp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x0C
        // 0x58831B76: push ebp
        __asm _emit 0x55
        // 0x58831B77: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0x6D
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58831B7C: pop edi
        __asm _emit 0x5F
        // 0x58831B7D: pop esi
        __asm _emit 0x5E
        // 0x58831B7E: pop ebp
        __asm _emit 0x5D
        // 0x58831B7F: pop ebx
        __asm _emit 0x5B
        // 0x58831B80: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
