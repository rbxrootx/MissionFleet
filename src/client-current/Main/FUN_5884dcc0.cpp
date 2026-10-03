// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5884DCC0 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_5884dcc0() {
    __asm {
        // 0x5884DCC0: mov dx, word ptr [esp + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5884DCC5: mov ecx, 0x589cc878
        __asm _emit 0xB9
        __asm _emit 0x78
        __asm _emit 0xC8
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5884DCCA: push esi
        __asm _emit 0x56
        // 0x5884DCCB: jmp 0x5884dcd0
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5884DCCD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x5884DCD0: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5884DCD2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884DCD4: je 0x5884dce8
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5884DCD6: movzx esi, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xF2
        // 0x5884DCD9: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x5884DCDB: je 0x5884dcee
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5884DCDD: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5884DCE0: cmp ecx, 0x589ccc78
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x78
        __asm _emit 0xCC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5884DCE6: jl 0x5884dcd0
        __asm _emit 0x7C
        __asm _emit 0xE8
        // 0x5884DCE8: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x5884DCEA: pop esi
        __asm _emit 0x5E
        // 0x5884DCEB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5884DCEE: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x5884DCF0: pop esi
        __asm _emit 0x5E
        // 0x5884DCF1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
