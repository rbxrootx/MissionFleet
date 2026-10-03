// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587BABC0 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_587babc0() {
    __asm {
        // 0x587BABC0: push esi
        __asm _emit 0x56
        // 0x587BABC1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587BABC3: cmp dword ptr [esi + 0x134], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BABCA: jne 0x587bac17
        __asm _emit 0x75
        __asm _emit 0x4B
        // 0x587BABCC: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587BABD0: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587BABD2: shl eax, 0x10
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x10
        // 0x587BABD5: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587BABD7: cmp edx, 4
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x587BABDA: jne 0x587babf9
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x587BABDC: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587BABE2: mov edx, dword ptr [edx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BABE8: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587BABEA: je 0x587babf9
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587BABEC: mov ecx, dword ptr [edx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BABF2: movzx ecx, byte ptr [ecx + 0x35c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BABF9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BABFB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BABFD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BABFF: push ecx
        __asm _emit 0x51
        // 0x587BAC00: push eax
        __asm _emit 0x50
        // 0x587BAC01: push 0x80011002
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587BAC06: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587BAC08: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0x60
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BAC0D: mov dword ptr [esi + 0x134], 0x400
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BAC17: pop esi
        __asm _emit 0x5E
        // 0x587BAC18: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
