// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 117 bytes in 1 exact ranges.
// Source symbol alias: FUN_588fac50.

// Ghidra body range 0x588FAC50..0x588FACC5; 117 mapped bytes.
extern "C" __declspec(naked) void FUN_588fac50_segment_00() {
    __asm {
        // 0x588FAC50: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588FAC52: push 0x5898a298
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0xA2
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588FAC57: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FAC5D: push eax
        __asm _emit 0x50
        // 0x588FAC5E: sub esp, 0x44
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x44
        // 0x588FAC61: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588FAC66: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588FAC68: push eax
        __asm _emit 0x50
        // 0x588FAC69: lea eax, [esp + 0x48]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x588FAC6D: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FAC73: push 0x11
        __asm _emit 0x6A
        __asm _emit 0x11
        // 0x588FAC75: push 0x589a21bc
        __asm _emit 0x68
        __asm _emit 0xBC
        __asm _emit 0x21
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588FAC7A: lea ecx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588FAC7E: mov dword ptr [esp + 0x24], 0xf
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FAC86: mov dword ptr [esp + 0x20], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FAC8E: mov byte ptr [esp + 0x10], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x588FAC93: call 0x58735000
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0xA3
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588FAC98: lea eax, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588FAC9C: push eax
        __asm _emit 0x50
        // 0x588FAC9D: lea ecx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588FACA1: mov dword ptr [esp + 0x54], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FACA9: call 0x58735360
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0xA6
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588FACAE: push 0x589abea8
        __asm _emit 0x68
        __asm _emit 0xA8
        __asm _emit 0xBE
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588FACB3: lea ecx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588FACB7: push ecx
        __asm _emit 0x51
        // 0x588FACB8: mov dword ptr [esp + 0x28], 0x5898caa8
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0xA8
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588FACC0: call 0x5897cc78
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0x1F
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
