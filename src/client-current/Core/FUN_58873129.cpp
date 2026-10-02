// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58873129 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_58873129() {
    __asm {
        // 0x58873129: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5887312B: push ebp
        __asm _emit 0x55
        // 0x5887312C: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5887312E: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58873131: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x58873133: pop eax
        __asm _emit 0x58
        // 0x58873134: mov dword ptr [ebp - 8], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x58873137: lea ecx, [ebp - 1]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xFF
        // 0x5887313A: mov dword ptr [ebp - 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x5887313D: lea eax, [ebp - 8]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x58873140: push eax
        __asm _emit 0x50
        // 0x58873141: lea eax, [ebp - 1]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xFF
        // 0x58873144: push eax
        __asm _emit 0x50
        // 0x58873145: lea eax, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x58873148: push eax
        __asm _emit 0x50
        // 0x58873149: call 0x58873057
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5887314E: leave
        __asm _emit 0xC9
        // 0x5887314F: ret
        __asm _emit 0xC3
    }
}
