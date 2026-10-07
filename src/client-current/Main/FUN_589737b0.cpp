// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 83 bytes in 1 exact ranges.
// Source symbol alias: FUN_589737b0.

// Ghidra body range 0x589737B0..0x58973803; 83 mapped bytes.
extern "C" __declspec(naked) void FUN_589737b0_segment_00() {
    __asm {
        // 0x589737B0: push edi
        __asm _emit 0x57
        // 0x589737B1: mov edi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x589737B5: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x589737B7: je 0x589737ff
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x589737B9: mov eax, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x28
        // 0x589737BC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x589737BE: jne 0x589737ff
        __asm _emit 0x75
        __asm _emit 0x3F
        // 0x589737C0: mov eax, dword ptr [ecx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x30
        // 0x589737C3: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x589737C7: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x589737C9: jl 0x589737cd
        __asm _emit 0x7C
        __asm _emit 0x02
        // 0x589737CB: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x589737CD: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x589737D0: lea eax, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x40
        // 0x589737D3: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x589737D5: jl 0x589737d9
        __asm _emit 0x7C
        __asm _emit 0x02
        // 0x589737D7: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x589737D9: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x589737DB: jle 0x589737ff
        __asm _emit 0x7E
        __asm _emit 0x22
        // 0x589737DD: push ebx
        __asm _emit 0x53
        // 0x589737DE: push esi
        __asm _emit 0x56
        // 0x589737DF: mov esi, 0xfffffffe
        __asm _emit 0xBE
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589737E4: lea eax, [edi + 2]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x02
        // 0x589737E7: sub esi, edi
        __asm _emit 0x2B
        __asm _emit 0xF7
        // 0x589737E9: mov bl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x18
        // 0x589737EB: mov cl, byte ptr [eax - 2]
        __asm _emit 0x8A
        __asm _emit 0x48
        __asm _emit 0xFE
        // 0x589737EE: mov byte ptr [eax - 2], bl
        __asm _emit 0x88
        __asm _emit 0x58
        __asm _emit 0xFE
        // 0x589737F1: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x589737F3: add eax, 3
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x03
        // 0x589737F6: lea ecx, [esi + eax]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x06
        // 0x589737F9: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x589737FB: jl 0x589737e9
        __asm _emit 0x7C
        __asm _emit 0xEC
        // 0x589737FD: pop esi
        __asm _emit 0x5E
        // 0x589737FE: pop ebx
        __asm _emit 0x5B
        // 0x589737FF: pop edi
        __asm _emit 0x5F
        // 0x58973800: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
