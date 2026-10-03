// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x589086F0 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_589086f0() {
    __asm {
        // 0x589086F0: push edi
        __asm _emit 0x57
        // 0x589086F1: mov edi, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589086F7: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x589086F9: jne 0x58908706
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x589086FB: mov eax, dword ptr [ecx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x78
        // 0x589086FE: mov dword ptr [ecx + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58908704: pop edi
        __asm _emit 0x5F
        // 0x58908705: ret
        __asm _emit 0xC3
        // 0x58908706: push ebx
        __asm _emit 0x53
        // 0x58908707: mov ebx, dword ptr [edi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5F
        __asm _emit 0x14
        // 0x5890870A: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5890870C: je 0x58908746
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x5890870E: mov eax, dword ptr [ecx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x78
        // 0x58908711: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58908713: push esi
        __asm _emit 0x56
        // 0x58908714: mov esi, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890871A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5890871C: je 0x5890872c
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5890871E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58908720: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58908722: je 0x5890872f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58908724: mov eax, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x14
        // 0x58908727: inc edx
        __asm _emit 0x42
        // 0x58908728: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5890872A: jne 0x58908720
        __asm _emit 0x75
        __asm _emit 0xF4
        // 0x5890872C: or edx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCA
        __asm _emit 0xFF
        // 0x5890872F: sub esi, edx
        __asm _emit 0x2B
        __asm _emit 0xF2
        // 0x58908731: imul esi, dword ptr [ecx + 0x5c]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x71
        __asm _emit 0x5C
        // 0x58908735: mov edx, dword ptr [ecx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x20
        // 0x58908738: sub edx, dword ptr [ecx + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x51
        __asm _emit 0x18
        // 0x5890873B: cmp esi, edx
        __asm _emit 0x3B
        __asm _emit 0xF2
        // 0x5890873D: pop esi
        __asm _emit 0x5E
        // 0x5890873E: jl 0x58908746
        __asm _emit 0x7C
        __asm _emit 0x06
        // 0x58908740: mov dword ptr [ecx + 0x80], ebx
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58908746: pop ebx
        __asm _emit 0x5B
        // 0x58908747: pop edi
        __asm _emit 0x5F
        // 0x58908748: ret
        __asm _emit 0xC3
    }
}
