// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58848610 .. +0x61 bytes.
// Source symbol alias: FUN_58848610.
extern "C" __declspec(naked) void FUN_58848610() {
    __asm {
        // 0x58848610: push ebx
        __asm _emit 0x53
        // 0x58848611: push ebp
        __asm _emit 0x55
        // 0x58848612: push edi
        __asm _emit 0x57
        // 0x58848613: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58848615: mov ecx, dword ptr [edi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x68
        // 0x58848618: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5884861A: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5884861C: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5884861E: je 0x58848658
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x58848620: push esi
        __asm _emit 0x56
        // 0x58848621: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58848623: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58848625: mov esi, dword ptr [ecx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x50
        // 0x58848628: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5884862A: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5884862C: inc ebx
        __asm _emit 0x43
        // 0x5884862D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5884862F: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x58848631: je 0x5884863e
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58848633: movsx eax, word ptr [edi + 0xf0]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x87
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884863A: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x5884863C: jne 0x58848653
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x5884863E: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58848640: mov dword ptr [edi + 0x10c], ebp
        __asm _emit 0x89
        __asm _emit 0xAF
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848646: mov dword ptr [edi + 0x68], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x68
        // 0x58848649: mov dword ptr [edi + 0x64], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x64
        // 0x5884864C: mov word ptr [edi + 0xf0], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x97
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848653: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x58848655: jne 0x58848621
        __asm _emit 0x75
        __asm _emit 0xCA
        // 0x58848657: pop esi
        __asm _emit 0x5E
        // 0x58848658: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884865A: mov dword ptr [edi + 0x68], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x68
        // 0x5884865D: mov dword ptr [edi + 0x64], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x64
        // 0x58848660: mov dword ptr [edi + 0xfc], ebp
        __asm _emit 0x89
        __asm _emit 0xAF
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848666: mov word ptr [edi + 0xf0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884866D: pop edi
        __asm _emit 0x5F
        // 0x5884866E: pop ebp
        __asm _emit 0x5D
        // 0x5884866F: pop ebx
        __asm _emit 0x5B
        // 0x58848670: ret
        __asm _emit 0xC3
    }
}
