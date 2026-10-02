// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885A7D5 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_5885a7d5() {
    __asm {
        // 0x5885A7D5: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885A7D7: push ebp
        __asm _emit 0x55
        // 0x5885A7D8: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885A7DA: push ecx
        __asm _emit 0x51
        // 0x5885A7DB: push ebx
        __asm _emit 0x53
        // 0x5885A7DC: push esi
        __asm _emit 0x56
        // 0x5885A7DD: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5885A7DF: push edi
        __asm _emit 0x57
        // 0x5885A7E0: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5885A7E2: mov edi, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x5885A7E5: mov ebx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x18
        // 0x5885A7E7: push ebx
        __asm _emit 0x53
        // 0x5885A7E8: call 0x5886e252
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0x3A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5885A7ED: push dword ptr [esi + 4]
        __asm _emit 0xFF
        __asm _emit 0x76
        __asm _emit 0x04
        // 0x5885A7F0: mov byte ptr [ebp - 4], al
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x5885A7F3: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5885A7F5: push dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x30
        // 0x5885A7F7: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5885A7FA: push dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x30
        // 0x5885A7FC: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5885A7FF: push dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x30
        // 0x5885A801: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5885A804: push dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x30
        // 0x5885A806: call 0x5885a898
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A80B: push edi
        __asm _emit 0x57
        // 0x5885A80C: push ebx
        __asm _emit 0x53
        // 0x5885A80D: push dword ptr [ebp - 4]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xFC
        // 0x5885A810: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5885A812: call 0x5886e2fd
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0x3A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5885A817: add esp, 0x24
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x24
        // 0x5885A81A: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5885A81C: pop edi
        __asm _emit 0x5F
        // 0x5885A81D: pop esi
        __asm _emit 0x5E
        // 0x5885A81E: pop ebx
        __asm _emit 0x5B
        // 0x5885A81F: leave
        __asm _emit 0xC9
        // 0x5885A820: ret
        __asm _emit 0xC3
    }
}
