// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 108 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b6d10.

// Ghidra body range 0x587B6D10..0x587B6D7C; 108 mapped bytes.
extern "C" __declspec(naked) void FUN_587b6d10_segment_00() {
    __asm {
        // 0x587B6D10: mov al, byte ptr [ecx + 0x61]
        __asm _emit 0x8A
        __asm _emit 0x41
        __asm _emit 0x61
        // 0x587B6D13: push ebx
        __asm _emit 0x53
        // 0x587B6D14: push esi
        __asm _emit 0x56
        // 0x587B6D15: push edi
        __asm _emit 0x57
        // 0x587B6D16: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x587B6D18: jne 0x587b6d49
        __asm _emit 0x75
        __asm _emit 0x2F
        // 0x587B6D1A: mov edx, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6D20: mov esi, dword ptr [ecx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x50
        // 0x587B6D23: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B6D27: mov eax, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x64
        // 0x587B6D2A: lea ebx, [esi + edx]
        __asm _emit 0x8D
        __asm _emit 0x1C
        __asm _emit 0x16
        // 0x587B6D2D: add ebx, edi
        __asm _emit 0x03
        __asm _emit 0xDF
        // 0x587B6D2F: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x587B6D31: jl 0x587b6d3e
        __asm _emit 0x7C
        __asm _emit 0x0B
        // 0x587B6D33: pop edi
        __asm _emit 0x5F
        // 0x587B6D34: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587B6D36: pop esi
        __asm _emit 0x5E
        // 0x587B6D37: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587B6D3A: pop ebx
        __asm _emit 0x5B
        // 0x587B6D3B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587B6D3E: add esi, edi
        __asm _emit 0x03
        __asm _emit 0xF7
        // 0x587B6D40: pop edi
        __asm _emit 0x5F
        // 0x587B6D41: mov dword ptr [ecx + 0x50], esi
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0x50
        // 0x587B6D44: pop esi
        __asm _emit 0x5E
        // 0x587B6D45: pop ebx
        __asm _emit 0x5B
        // 0x587B6D46: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587B6D49: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x587B6D4B: jne 0x587b6d76
        __asm _emit 0x75
        __asm _emit 0x29
        // 0x587B6D4D: mov edx, dword ptr [ecx + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6D53: mov esi, dword ptr [ecx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x54
        // 0x587B6D56: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B6D5A: mov eax, dword ptr [ecx + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x68
        // 0x587B6D5D: lea ebx, [esi + edx]
        __asm _emit 0x8D
        __asm _emit 0x1C
        __asm _emit 0x16
        // 0x587B6D60: add ebx, edi
        __asm _emit 0x03
        __asm _emit 0xDF
        // 0x587B6D62: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x587B6D64: jl 0x587b6d71
        __asm _emit 0x7C
        __asm _emit 0x0B
        // 0x587B6D66: pop edi
        __asm _emit 0x5F
        // 0x587B6D67: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587B6D69: pop esi
        __asm _emit 0x5E
        // 0x587B6D6A: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x587B6D6D: pop ebx
        __asm _emit 0x5B
        // 0x587B6D6E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587B6D71: add esi, edi
        __asm _emit 0x03
        __asm _emit 0xF7
        // 0x587B6D73: mov dword ptr [ecx + 0x54], esi
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0x54
        // 0x587B6D76: pop edi
        __asm _emit 0x5F
        // 0x587B6D77: pop esi
        __asm _emit 0x5E
        // 0x587B6D78: pop ebx
        __asm _emit 0x5B
        // 0x587B6D79: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
