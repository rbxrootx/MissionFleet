// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58848680 .. +0x5A bytes.
// Source symbol alias: FUN_58848680.
extern "C" __declspec(naked) void FUN_58848680() {
    __asm {
        // 0x58848680: push ebx
        __asm _emit 0x53
        // 0x58848681: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58848683: cmp word ptr [ebx + 0xf2], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884868B: jle 0x588486d8
        __asm _emit 0x7E
        __asm _emit 0x4B
        // 0x5884868D: mov ecx, dword ptr [ebx + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x70
        // 0x58848690: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58848692: je 0x588486d8
        __asm _emit 0x74
        __asm _emit 0x44
        // 0x58848694: push esi
        __asm _emit 0x56
        // 0x58848695: push edi
        __asm _emit 0x57
        // 0x58848696: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58848698: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5884869A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5884869C: mov esi, dword ptr [ecx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x50
        // 0x5884869F: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588486A1: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588486A3: inc edi
        __asm _emit 0x47
        // 0x588486A4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588486A6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588486A8: je 0x588486b5
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588486AA: movsx eax, word ptr [ebx + 0xf2]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x83
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588486B1: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588486B3: jne 0x58848698
        __asm _emit 0x75
        __asm _emit 0xE3
        // 0x588486B5: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588486B7: pop edi
        __asm _emit 0x5F
        // 0x588486B8: mov dword ptr [ebx + 0x108], 0
        __asm _emit 0xC7
        __asm _emit 0x83
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588486C2: mov dword ptr [ebx + 0x70], 0
        __asm _emit 0xC7
        __asm _emit 0x43
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588486C9: mov dword ptr [ebx + 0x6c], 0
        __asm _emit 0xC7
        __asm _emit 0x43
        __asm _emit 0x6C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588486D0: mov word ptr [ebx + 0xf2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8B
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588486D7: pop esi
        __asm _emit 0x5E
        // 0x588486D8: pop ebx
        __asm _emit 0x5B
        // 0x588486D9: ret
        __asm _emit 0xC3
    }
}
