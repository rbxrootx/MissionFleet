// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 92 bytes in 1 exact ranges.
// Source symbol alias: FUN_588bb370.

// Ghidra body range 0x588BB370..0x588BB3CC; 92 mapped bytes.
extern "C" __declspec(naked) void FUN_588bb370_segment_00() {
    __asm {
        // 0x588BB370: push ebp
        __asm _emit 0x55
        // 0x588BB371: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x588BB373: mov cl, byte ptr [esp + 8]
        __asm _emit 0x8A
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588BB377: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BB379: cmp cl, byte ptr [ebp + 0x13a5]
        __asm _emit 0x3A
        __asm _emit 0x8D
        __asm _emit 0xA5
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB37F: jae 0x588bb3b1
        __asm _emit 0x73
        __asm _emit 0x30
        // 0x588BB381: movzx edx, byte ptr [ebp + 0xa0]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x95
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB388: push ebx
        __asm _emit 0x53
        // 0x588BB389: push esi
        __asm _emit 0x56
        // 0x588BB38A: push edi
        __asm _emit 0x57
        // 0x588BB38B: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588BB38D: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588BB38F: jle 0x588bb3ac
        __asm _emit 0x7E
        __asm _emit 0x1B
        // 0x588BB391: lea esi, [ebp + 0xfa4]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0xA4
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB397: cmp dword ptr [esi], 0
        __asm _emit 0x83
        __asm _emit 0x3E
        __asm _emit 0x00
        // 0x588BB39A: je 0x588bb3a4
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588BB39C: movzx ebx, cl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD9
        // 0x588BB39F: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588BB3A1: je 0x588bb3b5
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588BB3A3: inc edi
        __asm _emit 0x47
        // 0x588BB3A4: inc eax
        __asm _emit 0x40
        // 0x588BB3A5: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588BB3A8: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588BB3AA: jl 0x588bb397
        __asm _emit 0x7C
        __asm _emit 0xEB
        // 0x588BB3AC: pop edi
        __asm _emit 0x5F
        // 0x588BB3AD: pop esi
        __asm _emit 0x5E
        // 0x588BB3AE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BB3B0: pop ebx
        __asm _emit 0x5B
        // 0x588BB3B1: pop ebp
        __asm _emit 0x5D
        // 0x588BB3B2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BB3B5: mov eax, dword ptr [ebp + eax*4 + 0xda4]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0xA4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB3BC: mov ecx, dword ptr [eax + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB3C2: mov eax, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x6C
        // 0x588BB3C5: pop edi
        __asm _emit 0x5F
        // 0x588BB3C6: pop esi
        __asm _emit 0x5E
        // 0x588BB3C7: pop ebx
        __asm _emit 0x5B
        // 0x588BB3C8: pop ebp
        __asm _emit 0x5D
        // 0x588BB3C9: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
