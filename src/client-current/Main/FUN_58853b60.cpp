// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58853B60 .. +0x2B bytes.
// Source symbol alias: FUN_58853b60.
extern "C" __declspec(naked) void FUN_58853b60() {
    __asm {
        // 0x58853B60: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58853B64: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58853B66: jl 0x58853b77
        __asm _emit 0x7C
        __asm _emit 0x0F
        // 0x58853B68: mov ecx, dword ptr [ecx + 0x2bc]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853B6E: mov dword ptr [ecx + 0xbc], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853B74: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58853B77: cdq
        __asm _emit 0x99
        // 0x58853B78: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58853B7A: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58853B7C: mov edx, dword ptr [ecx + 0x2bc]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853B82: mov dword ptr [edx + 0xbc], eax
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853B88: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
