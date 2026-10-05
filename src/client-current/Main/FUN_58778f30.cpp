// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58778F30 .. +0x82 bytes.
// Source symbol alias: FUN_58778f30.
extern "C" __declspec(naked) void FUN_58778f30() {
    __asm {
        // 0x58778F30: push ebx
        __asm _emit 0x53
        // 0x58778F31: mov ebx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58778F35: push esi
        __asm _emit 0x56
        // 0x58778F36: push edi
        __asm _emit 0x57
        // 0x58778F37: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58778F39: test bl, bl
        __asm _emit 0x84
        __asm _emit 0xDB
        // 0x58778F3B: je 0x58778f5d
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x58778F3D: cmp bl, 0xd
        __asm _emit 0x80
        __asm _emit 0xFB
        __asm _emit 0x0D
        // 0x58778F40: je 0x58778f5d
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x58778F42: push 0x322
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778F47: push 0x58996840
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58778F4C: push 0x589967b0
        __asm _emit 0x68
        __asm _emit 0xB0
        __asm _emit 0x67
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58778F51: call 0x5897cece
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0x3F
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58778F56: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58778F5A: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58778F5D: mov edi, dword ptr [esi + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778F63: mov esi, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778F69: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58778F6B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58778F6D: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58778F6F: jle 0x58778fac
        __asm _emit 0x7E
        __asm _emit 0x3B
        // 0x58778F71: push ebp
        __asm _emit 0x55
        // 0x58778F72: mov bp, word ptr [esp + 0x16]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x16
        // 0x58778F77: lea edx, [esi + 2]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x02
        // 0x58778F7A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778F80: cmp bl, byte ptr [edx - 2]
        __asm _emit 0x3A
        __asm _emit 0x5A
        __asm _emit 0xFE
        // 0x58778F83: jne 0x58778f8f
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x58778F85: cmp bh, byte ptr [edx - 1]
        __asm _emit 0x3A
        __asm _emit 0x7A
        __asm _emit 0xFF
        // 0x58778F88: jne 0x58778f8f
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58778F8A: cmp bp, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x2A
        // 0x58778F8D: je 0x58778fa1
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58778F8F: inc ecx
        __asm _emit 0x41
        // 0x58778F90: add edx, 0xd4
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778F96: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58778F98: jl 0x58778f80
        __asm _emit 0x7C
        __asm _emit 0xE6
        // 0x58778F9A: pop ebp
        __asm _emit 0x5D
        // 0x58778F9B: pop edi
        __asm _emit 0x5F
        // 0x58778F9C: pop esi
        __asm _emit 0x5E
        // 0x58778F9D: pop ebx
        __asm _emit 0x5B
        // 0x58778F9E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58778FA1: imul ecx, ecx, 0xd4
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778FA7: add ecx, esi
        __asm _emit 0x03
        __asm _emit 0xCE
        // 0x58778FA9: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58778FAB: pop ebp
        __asm _emit 0x5D
        // 0x58778FAC: pop edi
        __asm _emit 0x5F
        // 0x58778FAD: pop esi
        __asm _emit 0x5E
        // 0x58778FAE: pop ebx
        __asm _emit 0x5B
        // 0x58778FAF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
