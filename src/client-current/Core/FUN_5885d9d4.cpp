// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885D9D4 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_5885d9d4() {
    __asm {
        // 0x5885D9D4: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885D9D6: push ebp
        __asm _emit 0x55
        // 0x5885D9D7: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885D9D9: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x64
        // 0x5885D9DC: lea eax, [edx + 4]
        __asm _emit 0x8D
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5885D9DF: mov dword ptr [ecx + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x64
        // 0x5885D9E2: mov edx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x12
        // 0x5885D9E4: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5885D9E6: jne 0x5885d9fc
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x5885D9E8: call 0x5886246f
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0x4A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D9ED: mov dword ptr [eax], 0x16
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D9F3: call 0x58850fab
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0x35
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D9F8: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x5885D9FA: jmp 0x5885da0b
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x5885D9FC: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885D9FF: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5885DA01: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x5885DA04: mov dword ptr [edx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5885DA07: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x5885DA09: mov dword ptr [edx], ecx
        __asm _emit 0x89
        __asm _emit 0x0A
        // 0x5885DA0B: pop ebp
        __asm _emit 0x5D
        // 0x5885DA0C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
