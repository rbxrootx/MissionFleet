// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5886132B .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_5886132b() {
    __asm {
        // 0x5886132B: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5886132D: push ebp
        __asm _emit 0x55
        // 0x5886132E: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58861330: mov edx, dword ptr [ecx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58861333: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x58861336: add edx, -1
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0xFF
        // 0x58861339: push esi
        __asm _emit 0x56
        // 0x5886133A: mov esi, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x14
        // 0x5886133D: adc esi, -1
        __asm _emit 0x83
        __asm _emit 0xD6
        __asm _emit 0xFF
        // 0x58861340: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58861343: or eax, dword ptr [ecx + 0xc]
        __asm _emit 0x0B
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58861346: mov dword ptr [ecx + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0x14
        // 0x58861349: je 0x58861357
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5886134B: cmp esi, dword ptr [ecx + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x71
        __asm _emit 0x0C
        // 0x5886134E: ja 0x5886136d
        __asm _emit 0x77
        __asm _emit 0x1D
        // 0x58861350: jb 0x58861357
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58861352: cmp edx, dword ptr [ecx + 8]
        __asm _emit 0x3B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58861355: ja 0x5886136d
        __asm _emit 0x77
        __asm _emit 0x16
        // 0x58861357: mov al, byte ptr [ebp + 8]
        __asm _emit 0x8A
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5886135A: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5886135C: je 0x5886136d
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x5886135E: cmp al, 0xff
        __asm _emit 0x3C
        __asm _emit 0xFF
        // 0x58861360: je 0x5886136d
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58861362: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x58861364: movsx eax, al
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xC0
        // 0x58861367: push eax
        __asm _emit 0x50
        // 0x58861368: call 0x588613b9
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886136D: pop esi
        __asm _emit 0x5E
        // 0x5886136E: pop ebp
        __asm _emit 0x5D
        // 0x5886136F: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
