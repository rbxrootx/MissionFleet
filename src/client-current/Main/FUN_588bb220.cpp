// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 83 bytes in 1 exact ranges.
// Source symbol alias: FUN_588bb220.

// Ghidra body range 0x588BB220..0x588BB273; 83 mapped bytes.
extern "C" __declspec(naked) void FUN_588bb220_segment_00() {
    __asm {
        // 0x588BB220: push ebp
        __asm _emit 0x55
        // 0x588BB221: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x588BB223: mov cl, byte ptr [esp + 8]
        __asm _emit 0x8A
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588BB227: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BB229: cmp cl, byte ptr [ebp + 0x13a5]
        __asm _emit 0x3A
        __asm _emit 0x8D
        __asm _emit 0xA5
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB22F: jae 0x588bb261
        __asm _emit 0x73
        __asm _emit 0x30
        // 0x588BB231: movzx edx, byte ptr [ebp + 0xa0]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x95
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB238: push ebx
        __asm _emit 0x53
        // 0x588BB239: push esi
        __asm _emit 0x56
        // 0x588BB23A: push edi
        __asm _emit 0x57
        // 0x588BB23B: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588BB23D: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588BB23F: jle 0x588bb25c
        __asm _emit 0x7E
        __asm _emit 0x1B
        // 0x588BB241: lea esi, [ebp + 0xfa4]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0xA4
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB247: cmp dword ptr [esi], 0
        __asm _emit 0x83
        __asm _emit 0x3E
        __asm _emit 0x00
        // 0x588BB24A: je 0x588bb254
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588BB24C: movzx ebx, cl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD9
        // 0x588BB24F: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588BB251: je 0x588bb265
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588BB253: inc edi
        __asm _emit 0x47
        // 0x588BB254: inc eax
        __asm _emit 0x40
        // 0x588BB255: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588BB258: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588BB25A: jl 0x588bb247
        __asm _emit 0x7C
        __asm _emit 0xEB
        // 0x588BB25C: pop edi
        __asm _emit 0x5F
        // 0x588BB25D: pop esi
        __asm _emit 0x5E
        // 0x588BB25E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BB260: pop ebx
        __asm _emit 0x5B
        // 0x588BB261: pop ebp
        __asm _emit 0x5D
        // 0x588BB262: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BB265: mov eax, dword ptr [ebp + eax*4 + 0xda4]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0xA4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB26C: pop edi
        __asm _emit 0x5F
        // 0x588BB26D: pop esi
        __asm _emit 0x5E
        // 0x588BB26E: pop ebx
        __asm _emit 0x5B
        // 0x588BB26F: pop ebp
        __asm _emit 0x5D
        // 0x588BB270: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
