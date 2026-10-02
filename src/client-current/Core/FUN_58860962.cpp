// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58860962 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_58860962() {
    __asm {
        // 0x58860962: mov eax, dword ptr [ecx + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x40
        // 0x58860965: cmp eax, 9
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x58860968: ja 0x588609ab
        __asm _emit 0x77
        __asm _emit 0x41
        // 0x5886096A: jmp dword ptr [eax*4 + 0x588609ae]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xAE
        __asm _emit 0x09
        __asm _emit 0x86
        __asm _emit 0x58
        // 0x58860971: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58860973: call 0x58860cdd
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860978: ret
        __asm _emit 0xC3
        // 0x58860979: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5886097B: jmp 0x58860973
        __asm _emit 0xEB
        __asm _emit 0xF6
        // 0x5886097D: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x5886097F: jmp 0x58860973
        __asm _emit 0xEB
        __asm _emit 0xF2
        // 0x58860981: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58860983: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58860985: call 0x58860a9b
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886098A: ret
        __asm _emit 0xC3
        // 0x5886098B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5886098D: push 0xa
        __asm _emit 0x6A
        __asm _emit 0x0A
        // 0x5886098F: jmp 0x58860985
        __asm _emit 0xEB
        __asm _emit 0xF4
        // 0x58860991: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58860993: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x58860995: jmp 0x58860985
        __asm _emit 0xEB
        __asm _emit 0xEE
        // 0x58860997: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58860999: jmp 0x5886098d
        __asm _emit 0xEB
        __asm _emit 0xF2
        // 0x5886099B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5886099D: push 0x10
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x5886099F: jmp 0x58860985
        __asm _emit 0xEB
        __asm _emit 0xE4
        // 0x588609A1: jmp 0x58860a06
        __asm _emit 0xE9
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588609A6: jmp 0x588608d6
        __asm _emit 0xE9
        __asm _emit 0x2B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588609AB: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x588609AD: ret
        __asm _emit 0xC3
    }
}
