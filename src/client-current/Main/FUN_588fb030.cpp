// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588FB030 .. +0x31 bytes.
// Source symbol alias: FUN_588fb030.
extern "C" __declspec(naked) void FUN_588fb030() {
    __asm {
        // 0x588FB030: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588FB034: mov eax, 0x2aaaaaab
        __asm _emit 0xB8
        __asm _emit 0xAB
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0x2A
        // 0x588FB039: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588FB03B: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588FB03D: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588FB040: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588FB042: lea edx, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x40
        // 0x588FB045: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x588FB047: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588FB049: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588FB04B: je 0x588fb05c
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x588FB04D: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x588FB050: jg 0x588fb05c
        __asm _emit 0x7F
        __asm _emit 0x0A
        // 0x588FB052: cmp ecx, 0x12
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x12
        // 0x588FB055: jge 0x588fb05c
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x588FB057: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x588FB059: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588FB05C: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x588FB05E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
