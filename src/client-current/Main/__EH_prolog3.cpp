// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5897D540 .. +0x33 bytes.
// Source symbol alias: __EH_prolog3.
extern "C" __declspec(naked) void __EH_prolog3() {
    __asm {
        // 0x5897D540: push eax
        __asm _emit 0x50
        // 0x5897D541: push dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xFF
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897D548: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5897D54C: sub esp, dword ptr [esp + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5897D550: push ebx
        __asm _emit 0x53
        // 0x5897D551: push esi
        __asm _emit 0x56
        // 0x5897D552: push edi
        __asm _emit 0x57
        // 0x5897D553: mov dword ptr [eax], ebp
        __asm _emit 0x89
        __asm _emit 0x28
        // 0x5897D555: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x5897D557: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5897D55C: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xC5
        // 0x5897D55E: push eax
        __asm _emit 0x50
        // 0x5897D55F: push dword ptr [ebp - 4]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xFC
        // 0x5897D562: mov dword ptr [ebp - 4], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897D569: lea eax, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x5897D56C: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897D572: ret
        __asm _emit 0xC3
    }
}
