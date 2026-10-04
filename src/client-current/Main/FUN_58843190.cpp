// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58843190 .. +0x6A bytes.
// Source symbol alias: FUN_58843190.
extern "C" __declspec(naked) void FUN_58843190() {
    __asm {
        // 0x58843190: push ebx
        __asm _emit 0x53
        // 0x58843191: push ebp
        __asm _emit 0x55
        // 0x58843192: push edi
        __asm _emit 0x57
        // 0x58843193: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58843195: mov ecx, dword ptr [edi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884319B: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5884319D: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5884319F: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x588431A1: je 0x588431e1
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x588431A3: push esi
        __asm _emit 0x56
        // 0x588431A4: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588431A6: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588431A8: mov esi, dword ptr [ecx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x50
        // 0x588431AB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588431AD: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588431AF: inc ebx
        __asm _emit 0x43
        // 0x588431B0: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588431B2: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x588431B4: je 0x588431c1
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588431B6: movsx eax, word ptr [edi + 0xfa]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x87
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588431BD: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x588431BF: jne 0x588431dc
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x588431C1: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588431C3: mov dword ptr [edi + 0x144], ebp
        __asm _emit 0x89
        __asm _emit 0xAF
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588431C9: mov dword ptr [edi + 0x134], ebp
        __asm _emit 0x89
        __asm _emit 0xAF
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588431CF: mov dword ptr [edi + 0x130], ebp
        __asm _emit 0x89
        __asm _emit 0xAF
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588431D5: mov word ptr [edi + 0xfa], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x97
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588431DC: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x588431DE: jne 0x588431a4
        __asm _emit 0x75
        __asm _emit 0xC4
        // 0x588431E0: pop esi
        __asm _emit 0x5E
        // 0x588431E1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588431E3: mov dword ptr [edi + 0x134], ebp
        __asm _emit 0x89
        __asm _emit 0xAF
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588431E9: mov dword ptr [edi + 0x130], ebp
        __asm _emit 0x89
        __asm _emit 0xAF
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588431EF: mov word ptr [edi + 0xfa], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588431F6: pop edi
        __asm _emit 0x5F
        // 0x588431F7: pop ebp
        __asm _emit 0x5D
        // 0x588431F8: pop ebx
        __asm _emit 0x5B
        // 0x588431F9: ret
        __asm _emit 0xC3
    }
}
