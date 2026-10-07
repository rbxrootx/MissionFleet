// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 106 bytes in 1 exact ranges.
// Source symbol alias: FUN_588bcda0.

// Ghidra body range 0x588BCDA0..0x588BCE0A; 106 mapped bytes.
extern "C" __declspec(naked) void FUN_588bcda0_segment_00() {
    __asm {
        // 0x588BCDA0: push ebp
        __asm _emit 0x55
        // 0x588BCDA1: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x588BCDA3: mov cl, byte ptr [esp + 8]
        __asm _emit 0x8A
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588BCDA7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BCDA9: cmp cl, byte ptr [ebp + 0xad]
        __asm _emit 0x3A
        __asm _emit 0x8D
        __asm _emit 0xAD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BCDAF: jae 0x588bcde1
        __asm _emit 0x73
        __asm _emit 0x30
        // 0x588BCDB1: movzx edx, byte ptr [ebp + 0xac]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x95
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BCDB8: push ebx
        __asm _emit 0x53
        // 0x588BCDB9: push esi
        __asm _emit 0x56
        // 0x588BCDBA: push edi
        __asm _emit 0x57
        // 0x588BCDBB: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588BCDBD: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588BCDBF: jle 0x588bcddc
        __asm _emit 0x7E
        __asm _emit 0x1B
        // 0x588BCDC1: lea esi, [ebp + 0xb0]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BCDC7: cmp dword ptr [esi], 0
        __asm _emit 0x83
        __asm _emit 0x3E
        __asm _emit 0x00
        // 0x588BCDCA: je 0x588bcdd4
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588BCDCC: movzx ebx, cl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD9
        // 0x588BCDCF: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588BCDD1: je 0x588bcde5
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588BCDD3: inc edi
        __asm _emit 0x47
        // 0x588BCDD4: inc eax
        __asm _emit 0x40
        // 0x588BCDD5: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588BCDD8: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588BCDDA: jl 0x588bcdc7
        __asm _emit 0x7C
        __asm _emit 0xEB
        // 0x588BCDDC: pop edi
        __asm _emit 0x5F
        // 0x588BCDDD: pop esi
        __asm _emit 0x5E
        // 0x588BCDDE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BCDE0: pop ebx
        __asm _emit 0x5B
        // 0x588BCDE1: pop ebp
        __asm _emit 0x5D
        // 0x588BCDE2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BCDE5: mov ecx, dword ptr [ebp + 0x3d4]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xD4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BCDEB: push eax
        __asm _emit 0x50
        // 0x588BCDEC: call 0x58908140
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0xB3
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BCDF1: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x588BCDF4: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BCDFA: push eax
        __asm _emit 0x50
        // 0x588BCDFB: call 0x58778b20
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0xBD
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588BCE00: mov eax, dword ptr [eax + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x60
        // 0x588BCE03: pop edi
        __asm _emit 0x5F
        // 0x588BCE04: pop esi
        __asm _emit 0x5E
        // 0x588BCE05: pop ebx
        __asm _emit 0x5B
        // 0x588BCE06: pop ebp
        __asm _emit 0x5D
        // 0x588BCE07: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
