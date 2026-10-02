// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x588608EE .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_588608ee() {
    __asm {
        // 0x588608EE: mov eax, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x38
        // 0x588608F1: cmp eax, 9
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x588608F4: ja 0x58860937
        __asm _emit 0x77
        __asm _emit 0x41
        // 0x588608F6: jmp dword ptr [eax*4 + 0x5886093a]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x3A
        __asm _emit 0x09
        __asm _emit 0x86
        __asm _emit 0x58
        // 0x588608FD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588608FF: call 0x58860c95
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860904: ret
        __asm _emit 0xC3
        // 0x58860905: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58860907: jmp 0x588608ff
        __asm _emit 0xEB
        __asm _emit 0xF6
        // 0x58860909: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x5886090B: jmp 0x588608ff
        __asm _emit 0xEB
        __asm _emit 0xF2
        // 0x5886090D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5886090F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58860911: call 0x58860a36
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860916: ret
        __asm _emit 0xC3
        // 0x58860917: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58860919: push 0xa
        __asm _emit 0x6A
        __asm _emit 0x0A
        // 0x5886091B: jmp 0x58860911
        __asm _emit 0xEB
        __asm _emit 0xF4
        // 0x5886091D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5886091F: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x58860921: jmp 0x58860911
        __asm _emit 0xEB
        __asm _emit 0xEE
        // 0x58860923: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58860925: jmp 0x58860919
        __asm _emit 0xEB
        __asm _emit 0xF2
        // 0x58860927: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58860929: push 0x10
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x5886092B: jmp 0x58860911
        __asm _emit 0xEB
        __asm _emit 0xE4
        // 0x5886092D: jmp 0x588609d6
        __asm _emit 0xE9
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860932: jmp 0x588608c2
        __asm _emit 0xE9
        __asm _emit 0x8B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58860937: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58860939: ret
        __asm _emit 0xC3
    }
}
