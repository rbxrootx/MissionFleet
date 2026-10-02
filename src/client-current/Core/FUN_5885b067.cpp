// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885B067 .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_5885b067() {
    __asm {
        // 0x5885B067: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885B069: push ebp
        __asm _emit 0x55
        // 0x5885B06A: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885B06C: push ecx
        __asm _emit 0x51
        // 0x5885B06D: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x5885B070: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5885B072: push ebx
        __asm _emit 0x53
        // 0x5885B073: push esi
        __asm _emit 0x56
        // 0x5885B074: push edi
        __asm _emit 0x57
        // 0x5885B075: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x5885B078: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885B07A: pop edx
        __asm _emit 0x5A
        // 0x5885B07B: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x5885B07E: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5885B081: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5885B083: sbb ebx, edx
        __asm _emit 0x1B
        __asm _emit 0xDA
        // 0x5885B085: add ecx, 0x12b
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x2B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B08B: push edx
        __asm _emit 0x52
        // 0x5885B08C: push 0x190
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B091: adc eax, edx
        __asm _emit 0x13
        __asm _emit 0xC2
        // 0x5885B093: push eax
        __asm _emit 0x50
        // 0x5885B094: push ecx
        __asm _emit 0x51
        // 0x5885B095: call 0x5887d0e0
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5885B09A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885B09C: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x5885B09E: push ebx
        __asm _emit 0x53
        // 0x5885B09F: push dword ptr [ebp - 4]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xFC
        // 0x5885B0A2: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5885B0A4: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x5885B0A6: call 0x5887d0e0
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5885B0AB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885B0AD: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5885B0AF: push ebx
        __asm _emit 0x53
        // 0x5885B0B0: push dword ptr [ebp - 4]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xFC
        // 0x5885B0B3: sub esi, eax
        __asm _emit 0x2B
        __asm _emit 0xF0
        // 0x5885B0B5: sbb edi, edx
        __asm _emit 0x1B
        __asm _emit 0xFA
        // 0x5885B0B7: call 0x5887d0e0
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5885B0BC: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xC6
        // 0x5885B0BE: adc edx, edi
        __asm _emit 0x13
        __asm _emit 0xD7
        // 0x5885B0C0: sub eax, 0x11
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x11
        // 0x5885B0C3: pop edi
        __asm _emit 0x5F
        // 0x5885B0C4: pop esi
        __asm _emit 0x5E
        // 0x5885B0C5: sbb edx, 0
        __asm _emit 0x83
        __asm _emit 0xDA
        __asm _emit 0x00
        // 0x5885B0C8: pop ebx
        __asm _emit 0x5B
        // 0x5885B0C9: leave
        __asm _emit 0xC9
        // 0x5885B0CA: ret
        __asm _emit 0xC3
    }
}
