// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5886DDA0 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_5886dda0() {
    __asm {
        // 0x5886DDA0: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5886DDA2: push ebp
        __asm _emit 0x55
        // 0x5886DDA3: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5886DDA5: sub esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x28
        // 0x5886DDA8: lea ecx, [ebp - 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xD8
        // 0x5886DDAB: push esi
        __asm _emit 0x56
        // 0x5886DDAC: push dword ptr [ebp + 0x14]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x5886DDAF: call 0x58850c9f
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0x2E
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x5886DDB4: lea eax, [ebp - 0x28]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xD8
        // 0x5886DDB7: push eax
        __asm _emit 0x50
        // 0x5886DDB8: push dword ptr [ebp + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x5886DDBB: push dword ptr [ebp + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5886DDBE: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5886DDC1: call 0x5886dc70
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5886DDC6: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5886DDC9: lea ecx, [ebp - 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xD8
        // 0x5886DDCC: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5886DDCE: call 0x58850ce7
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0x2F
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x5886DDD3: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5886DDD5: pop esi
        __asm _emit 0x5E
        // 0x5886DDD6: leave
        __asm _emit 0xC9
        // 0x5886DDD7: ret
        __asm _emit 0xC3
    }
}
