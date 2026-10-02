// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885ABF7 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_5885abf7() {
    __asm {
        // 0x5885ABF7: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885ABF9: push ebp
        __asm _emit 0x55
        // 0x5885ABFA: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885ABFC: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885ABFF: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x5885AC02: add eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x0C
        // 0x5885AC05: lock or dword ptr [eax], ecx
        __asm _emit 0xF0
        __asm _emit 0x09
        __asm _emit 0x08
        // 0x5885AC08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x5885AC0B: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5885AC0E: mov dword ptr [ecx + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x18
        // 0x5885AC11: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885AC14: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5885AC17: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x5885AC19: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885AC1C: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5885AC1F: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885AC22: and dword ptr [eax + 8], 0
        __asm _emit 0x83
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5885AC26: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885AC28: pop ebp
        __asm _emit 0x5D
        // 0x5885AC29: ret
        __asm _emit 0xC3
    }
}
