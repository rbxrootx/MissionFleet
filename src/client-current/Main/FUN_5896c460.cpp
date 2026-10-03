// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5896C460 .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_5896c460() {
    __asm {
        // 0x5896C460: push esi
        __asm _emit 0x56
        // 0x5896C461: push edi
        __asm _emit 0x57
        // 0x5896C462: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5896C464: push edi
        __asm _emit 0x57
        // 0x5896C465: push edi
        __asm _emit 0x57
        // 0x5896C466: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5896C468: call 0x58907a90
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0xB6
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x5896C46D: push edi
        __asm _emit 0x57
        // 0x5896C46E: push edi
        __asm _emit 0x57
        // 0x5896C46F: push edi
        __asm _emit 0x57
        // 0x5896C470: push edi
        __asm _emit 0x57
        // 0x5896C471: mov dword ptr [esi], 0x589a2e34
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x34
        __asm _emit 0x2E
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5896C477: mov dword ptr [esi + 4], 3
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896C47E: call dword ptr [0x5898c1ac]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xAC
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5896C484: mov dword ptr [esi + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x20
        // 0x5896C487: mov dword ptr [esi + 0x24], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x24
        // 0x5896C48A: mov dword ptr [esi + 0x28], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x28
        // 0x5896C48D: mov dword ptr [esi + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x5896C490: mov dword ptr [esi + 0x30], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x30
        // 0x5896C493: mov dword ptr [esi + 0x34], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x34
        // 0x5896C496: mov dword ptr [esi + 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x38
        // 0x5896C499: mov dword ptr [esi + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x50
        // 0x5896C49C: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x5896C49F: mov dword ptr [esi + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x2C
        // 0x5896C4A2: pop edi
        __asm _emit 0x5F
        // 0x5896C4A3: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5896C4A5: pop esi
        __asm _emit 0x5E
        // 0x5896C4A6: ret
        __asm _emit 0xC3
    }
}
