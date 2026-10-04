// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587645F0 .. +0xAC bytes.
// Source symbol alias: FUN_587645f0.
extern "C" __declspec(naked) void FUN_587645f0() {
    __asm {
        // 0x587645F0: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587645F3: push ebx
        __asm _emit 0x53
        // 0x587645F4: push esi
        __asm _emit 0x56
        // 0x587645F5: push edi
        __asm _emit 0x57
        // 0x587645F6: mov edi, dword ptr [0x589cfc5c]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0x5C
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587645FC: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587645FE: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58764600: jne 0x58764617
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x58764602: push 0x200
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764607: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0xCF
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5876460C: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5876460E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58764611: mov dword ptr [0x589cfc5c], edi
        __asm _emit 0x89
        __asm _emit 0x3D
        __asm _emit 0x5C
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58764617: push 0x200
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876461C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5876461E: push edi
        __asm _emit 0x57
        // 0x5876461F: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0x86
        __asm _emit 0x21
        __asm _emit 0x00
        // 0x58764624: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58764628: push eax
        __asm _emit 0x50
        // 0x58764629: push 0x5898d0d4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5876462E: push 0x200
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764633: push edi
        __asm _emit 0x57
        // 0x58764634: call 0x5874ba60
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0x74
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58764639: mov ecx, dword ptr [0x589cfc5c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x5C
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5876463F: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58764642: push ecx
        __asm _emit 0x51
        // 0x58764643: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x58764646: call 0x5875f360
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0xAD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5876464B: mov edx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x64
        // 0x5876464E: mov ebx, dword ptr [edx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x58764651: mov ecx, dword ptr [0x589cfc5c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x5C
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58764657: mov edi, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x3B
        // 0x58764659: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5876465D: push eax
        __asm _emit 0x50
        // 0x5876465E: push ecx
        __asm _emit 0x51
        // 0x5876465F: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58764662: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58764668: mov edx, dword ptr [0x589cfc5c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x5C
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5876466E: push eax
        __asm _emit 0x50
        // 0x5876466F: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58764671: push edx
        __asm _emit 0x52
        // 0x58764672: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58764674: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58764676: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5876467A: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5876467D: cdq
        __asm _emit 0x99
        // 0x5876467E: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58764680: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x58764682: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58764684: add ecx, 0x109
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876468A: push ecx
        __asm _emit 0x51
        // 0x5876468B: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5876468E: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0xEC
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58764693: pop edi
        __asm _emit 0x5F
        // 0x58764694: pop esi
        __asm _emit 0x5E
        // 0x58764695: pop ebx
        __asm _emit 0x5B
        // 0x58764696: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58764699: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
