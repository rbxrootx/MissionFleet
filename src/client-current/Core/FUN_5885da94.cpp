// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885DA94 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_5885da94() {
    __asm {
        // 0x5885DA94: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885DA96: push ebp
        __asm _emit 0x55
        // 0x5885DA97: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885DA99: push esi
        __asm _emit 0x56
        // 0x5885DA9A: mov esi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885DA9D: push edi
        __asm _emit 0x57
        // 0x5885DA9E: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5885DAA0: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5885DAA2: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        // 0x5885DAA4: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5885DAA7: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x5885DAAA: mov dword ptr [edi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x5885DAAD: mov dword ptr [edi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x0C
        // 0x5885DAB0: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5885DAB3: mov ecx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x5885DAB6: mov dword ptr [edi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x5885DAB9: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x5885DABC: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x5885DABF: mov dword ptr [edi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x5885DAC2: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x5885DAC4: and dword ptr [esi], 0
        __asm _emit 0x83
        __asm _emit 0x26
        __asm _emit 0x00
        // 0x5885DAC7: and dword ptr [esi + 0x18], 0
        __asm _emit 0x83
        __asm _emit 0x66
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5885DACB: pop edi
        __asm _emit 0x5F
        // 0x5885DACC: pop esi
        __asm _emit 0x5E
        // 0x5885DACD: pop ebp
        __asm _emit 0x5D
        // 0x5885DACE: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
