// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5897D7BC .. +0x45 bytes.
// Source symbol alias: __SEH_prolog4.
extern "C" __declspec(naked) void __SEH_prolog4() {
    __asm {
        // 0x5897D7BC: push 0x5897d815
        __asm _emit 0x68
        __asm _emit 0x15
        __asm _emit 0xD8
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5897D7C1: push dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xFF
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897D7C8: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5897D7CC: mov dword ptr [esp + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5897D7D0: lea ebp, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5897D7D4: sub esp, eax
        __asm _emit 0x2B
        __asm _emit 0xE0
        // 0x5897D7D6: push ebx
        __asm _emit 0x53
        // 0x5897D7D7: push esi
        __asm _emit 0x56
        // 0x5897D7D8: push edi
        __asm _emit 0x57
        // 0x5897D7D9: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5897D7DE: xor dword ptr [ebp - 4], eax
        __asm _emit 0x31
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x5897D7E1: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xC5
        // 0x5897D7E3: push eax
        __asm _emit 0x50
        // 0x5897D7E4: mov dword ptr [ebp - 0x18], esp
        __asm _emit 0x89
        __asm _emit 0x65
        __asm _emit 0xE8
        // 0x5897D7E7: push dword ptr [ebp - 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xF8
        // 0x5897D7EA: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x5897D7ED: mov dword ptr [ebp - 4], 0xfffffffe
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897D7F4: mov dword ptr [ebp - 8], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x5897D7F7: lea eax, [ebp - 0x10]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x5897D7FA: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897D800: ret
        __asm _emit 0xC3
    }
}
