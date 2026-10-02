// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58861372 .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_58861372() {
    __asm {
        // 0x58861372: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58861374: push ebp
        __asm _emit 0x55
        // 0x58861375: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58861377: mov edx, dword ptr [ecx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5886137A: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x5886137D: add edx, -1
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0xFF
        // 0x58861380: push esi
        __asm _emit 0x56
        // 0x58861381: mov esi, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x14
        // 0x58861384: adc esi, -1
        __asm _emit 0x83
        __asm _emit 0xD6
        __asm _emit 0xFF
        // 0x58861387: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5886138A: or eax, dword ptr [ecx + 0xc]
        __asm _emit 0x0B
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5886138D: mov dword ptr [ecx + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0x14
        // 0x58861390: je 0x5886139e
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x58861392: cmp esi, dword ptr [ecx + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x71
        __asm _emit 0x0C
        // 0x58861395: ja 0x588613b4
        __asm _emit 0x77
        __asm _emit 0x1D
        // 0x58861397: jb 0x5886139e
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58861399: cmp edx, dword ptr [ecx + 8]
        __asm _emit 0x3B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5886139C: ja 0x588613b4
        __asm _emit 0x77
        __asm _emit 0x16
        // 0x5886139E: mov al, byte ptr [ebp + 8]
        __asm _emit 0x8A
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x588613A1: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x588613A3: je 0x588613b4
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x588613A5: cmp al, 0xff
        __asm _emit 0x3C
        __asm _emit 0xFF
        // 0x588613A7: je 0x588613b4
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588613A9: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x588613AB: movsx eax, al
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xC0
        // 0x588613AE: push eax
        __asm _emit 0x50
        // 0x588613AF: call 0x588613d7
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588613B4: pop esi
        __asm _emit 0x5E
        // 0x588613B5: pop ebp
        __asm _emit 0x5D
        // 0x588613B6: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
