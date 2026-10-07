// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 83 bytes in 2 exact ranges.
// Source symbol alias: FUN_589729a0.

// Ghidra body range 0x589729A0..0x589729EB; 75 mapped bytes.
extern "C" __declspec(naked) void FUN_589729a0_segment_00() {
    __asm {
        // 0x589729A0: push esi
        __asm _emit 0x56
        // 0x589729A1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x589729A3: mov eax, dword ptr [esi + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x38
        // 0x589729A6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x589729A8: jne 0x58972a07
        __asm _emit 0x75
        __asm _emit 0x5D
        // 0x589729AA: mov eax, dword ptr [esi + 0x1b8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589729B0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x589729B2: je 0x58972a03
        __asm _emit 0x74
        __asm _emit 0x4F
        // 0x589729B4: mov eax, dword ptr [esi + 0x160]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589729BA: push edi
        __asm _emit 0x57
        // 0x589729BB: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x589729BD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x589729BF: jle 0x589729df
        __asm _emit 0x7E
        __asm _emit 0x1E
        // 0x589729C1: mov eax, dword ptr [esi + 0x1b8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589729C7: mov ecx, dword ptr [eax + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xB8
        // 0x589729CA: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x589729CC: je 0x589729d4
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x589729CE: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x589729D0: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x589729D2: call dword ptr [edx]
        __asm _emit 0xFF
        __asm _emit 0x12
        // 0x589729D4: mov eax, dword ptr [esi + 0x160]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589729DA: inc edi
        __asm _emit 0x47
        // 0x589729DB: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x589729DD: jl 0x589729c1
        __asm _emit 0x7C
        __asm _emit 0xE2
        // 0x589729DF: mov eax, dword ptr [esi + 0x1b8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589729E5: push eax
        __asm _emit 0x50
        // 0x589729E6: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58972A03..0x58972A0B; 8 mapped bytes.
extern "C" __declspec(naked) void FUN_589729a0_segment_01() {
    __asm {
        // 0x58972A03: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x58972A05: pop esi
        __asm _emit 0x5E
        // 0x58972A06: ret
        __asm _emit 0xC3
        // 0x58972A07: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58972A09: pop esi
        __asm _emit 0x5E
        // 0x58972A0A: ret
        __asm _emit 0xC3
    }
}
