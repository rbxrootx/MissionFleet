// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58861412 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_58861412() {
    __asm {
        // 0x58861412: cmp dword ptr [ecx], 0
        __asm _emit 0x83
        __asm _emit 0x39
        __asm _emit 0x00
        // 0x58861415: jne 0x5886142a
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x58861417: call 0x5886246f
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886141C: mov dword ptr [eax], 0x16
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58861422: call 0x58850fab
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0xFB
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58861427: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58861429: ret
        __asm _emit 0xC3
        // 0x5886142A: cmp dword ptr [ecx + 0x18], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5886142E: je 0x58861417
        __asm _emit 0x74
        __asm _emit 0xE7
        // 0x58861430: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x58861432: ret
        __asm _emit 0xC3
    }
}
