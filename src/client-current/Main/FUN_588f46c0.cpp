// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 67 bytes in 1 exact ranges.
// Source symbol alias: FUN_588f46c0.

// Ghidra body range 0x588F46C0..0x588F4703; 67 mapped bytes.
extern "C" __declspec(naked) void FUN_588f46c0_segment_00() {
    __asm {
        // 0x588F46C0: push ebx
        __asm _emit 0x53
        // 0x588F46C1: push esi
        __asm _emit 0x56
        // 0x588F46C2: push edi
        __asm _emit 0x57
        // 0x588F46C3: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x588F46C5: mov esi, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x04
        // 0x588F46C8: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588F46CA: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x588F46CC: je 0x588f46e4
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588F46CE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588F46D0: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F46D2: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588F46D4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F46D6: mov esi, dword ptr [esi + 0xce4]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xE4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F46DC: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F46DE: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F46E0: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x588F46E2: jne 0x588f46d0
        __asm _emit 0x75
        __asm _emit 0xEC
        // 0x588F46E4: lea ecx, [edi + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x588F46E7: mov dword ptr [edi + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x04
        // 0x588F46EA: mov dword ptr [edi + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x08
        // 0x588F46ED: mov dword ptr [edi + 0x30], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x30
        // 0x588F46F0: mov dword ptr [edi + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x0C
        // 0x588F46F3: call 0x587ccaa0
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x588F46F8: lea ecx, [edi + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x20
        // 0x588F46FB: pop edi
        __asm _emit 0x5F
        // 0x588F46FC: pop esi
        __asm _emit 0x5E
        // 0x588F46FD: pop ebx
        __asm _emit 0x5B
        // 0x588F46FE: jmp 0x587ccaa0
        __asm _emit 0xE9
        __asm _emit 0x9D
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0xFF
    }
}
