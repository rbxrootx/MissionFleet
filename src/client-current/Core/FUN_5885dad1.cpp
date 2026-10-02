// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885DAD1 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_5885dad1() {
    __asm {
        // 0x5885DAD1: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885DAD3: push ebp
        __asm _emit 0x55
        // 0x5885DAD4: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885DAD6: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885DAD9: and dword ptr [ecx + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x61
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5885DADD: and dword ptr [ecx + 0x14], 0
        __asm _emit 0x83
        __asm _emit 0x61
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5885DAE1: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x5885DAE4: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        // 0x5885DAE6: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5885DAE9: mov dword ptr [ecx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x5885DAEC: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x5885DAEF: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5885DAF2: mov dword ptr [ecx + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x18
        // 0x5885DAF5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885DAF7: je 0x5885dafc
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x5885DAF9: mov byte ptr [eax], 1
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x5885DAFC: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5885DAFE: pop ebp
        __asm _emit 0x5D
        // 0x5885DAFF: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
