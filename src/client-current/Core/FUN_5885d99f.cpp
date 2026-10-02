// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885D99F .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_5885d99f() {
    __asm {
        // 0x5885D99F: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885D9A1: push ebp
        __asm _emit 0x55
        // 0x5885D9A2: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885D9A4: mov edx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x6C
        // 0x5885D9A7: lea eax, [edx + 4]
        __asm _emit 0x8D
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5885D9AA: mov dword ptr [ecx + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x6C
        // 0x5885D9AD: mov ecx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x0A
        // 0x5885D9AF: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5885D9B1: jne 0x5885d9c7
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x5885D9B3: call 0x5886246f
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0x4A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D9B8: mov dword ptr [eax], 0x16
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D9BE: call 0x58850fab
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D9C3: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x5885D9C5: jmp 0x5885d9d0
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x5885D9C7: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885D9CA: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x5885D9CC: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        // 0x5885D9CE: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x5885D9D0: pop ebp
        __asm _emit 0x5D
        // 0x5885D9D1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
