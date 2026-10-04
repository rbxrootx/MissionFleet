// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588F6660 .. +0x75 bytes.
// Source symbol alias: FUN_588f6660.
extern "C" __declspec(naked) void FUN_588f6660() {
    __asm {
        // 0x588F6660: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588F6662: push 0x5898a298
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0xA2
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F6667: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F666D: push eax
        __asm _emit 0x50
        // 0x588F666E: sub esp, 0x44
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x44
        // 0x588F6671: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588F6676: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588F6678: push eax
        __asm _emit 0x50
        // 0x588F6679: lea eax, [esp + 0x48]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x588F667D: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6683: push 0x12
        __asm _emit 0x6A
        __asm _emit 0x12
        // 0x588F6685: push 0x5898cab8
        __asm _emit 0x68
        __asm _emit 0xB8
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F668A: lea ecx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588F668E: mov dword ptr [esp + 0x24], 0xf
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6696: mov dword ptr [esp + 0x20], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F669E: mov byte ptr [esp + 0x10], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x588F66A3: call 0x58735000
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0xE9
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588F66A8: lea eax, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588F66AC: push eax
        __asm _emit 0x50
        // 0x588F66AD: lea ecx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588F66B1: mov dword ptr [esp + 0x54], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F66B9: call 0x58735360
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0xEC
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588F66BE: push 0x589abea8
        __asm _emit 0x68
        __asm _emit 0xA8
        __asm _emit 0xBE
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F66C3: lea ecx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588F66C7: push ecx
        __asm _emit 0x51
        // 0x588F66C8: mov dword ptr [esp + 0x28], 0x5898caa8
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0xA8
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F66D0: call 0x5897cc78
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0x65
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
