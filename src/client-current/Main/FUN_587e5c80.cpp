// Chat/channel-state field helper used by verified chat event and parser
// paths. It stores the first 16-bit argument at receiver +0x21CE4, sets
// receiver +0x20D24 iff that value is 3, and stores the second word at
// receiver +0x20D20. Field meanings remain uncertain; see
// docs/current-main-chat-channel-state.md.
// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587E5C80 .. +0x2C bytes.
// Source symbol alias: FUN_587e5c80.
extern "C" __declspec(naked) void FUN_587e5c80() {
    __asm {
        // 0x587E5C80: mov ax, word ptr [esp + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587E5C85: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587E5C87: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587E5C8B: sete dl
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC2
        // 0x587E5C8E: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x587E5C91: mov dword ptr [ecx + 0x21ce4], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xE4
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E5C97: mov dword ptr [ecx + 0x20d24], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x24
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E5C9D: mov dx, word ptr [esp + 8]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587E5CA2: mov word ptr [ecx + 0x20d20], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x20
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E5CA9: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
