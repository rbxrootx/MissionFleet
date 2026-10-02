// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58868DAB .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_58868dab() {
    __asm {
        // 0x58868DAB: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x58868DAD: push 0x588ed490
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0xD4
        __asm _emit 0x8E
        __asm _emit 0x58
        // 0x58868DB2: call 0x58832760
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x99
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x58868DB7: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x58868DBA: push dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x30
        // 0x58868DBC: call 0x58863c1c
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0xAE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58868DC1: pop ecx
        __asm _emit 0x59
        // 0x58868DC2: and dword ptr [ebp - 4], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xFC
        __asm _emit 0x00
        // 0x58868DC6: mov esi, 0x58969984
        __asm _emit 0xBE
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x58868DCB: mov edi, 0x58907460
        __asm _emit 0xBF
        __asm _emit 0x60
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x58868DD0: mov dword ptr [ebp - 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x58868DD3: cmp esi, 0x58969988
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0x88
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x58868DD9: je 0x58868def
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x58868DDB: cmp dword ptr [esi], edi
        __asm _emit 0x39
        __asm _emit 0x3E
        // 0x58868DDD: je 0x58868dea
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58868DDF: push edi
        __asm _emit 0x57
        // 0x58868DE0: push esi
        __asm _emit 0x56
        // 0x58868DE1: call 0x588762a7
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868DE6: pop ecx
        __asm _emit 0x59
        // 0x58868DE7: pop ecx
        __asm _emit 0x59
        // 0x58868DE8: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x58868DEA: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x58868DED: jmp 0x58868dd0
        __asm _emit 0xEB
        __asm _emit 0xE1
        // 0x58868DEF: mov dword ptr [ebp - 4], 0xfffffffe
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58868DF6: call 0x58868e0d
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868DFB: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF0
        // 0x58868DFE: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868E05: pop ecx
        __asm _emit 0x59
        // 0x58868E06: pop edi
        __asm _emit 0x5F
        // 0x58868E07: pop esi
        __asm _emit 0x5E
        // 0x58868E08: pop ebx
        __asm _emit 0x5B
        // 0x58868E09: leave
        __asm _emit 0xC9
        // 0x58868E0A: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
