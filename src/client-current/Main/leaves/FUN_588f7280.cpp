// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F7280 .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_588f7280() {
    __asm {
        ; Exact mapped bytes A1 F4 45 A2 58: mov eax, dword ptr [0x58a245f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [ecx + 4], eax
        mov eax, dword ptr [esp + 4]
        sub eax, 1
        ; Exact mapped bytes 74 31: je 0x588f72c2
        __asm _emit 0x74
        __asm _emit 0x31
        sub eax, 1
        ; Exact mapped bytes 74 1F: je 0x588f72b5
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ecx + 4]
        push ecx
        push 23h
        push 589a1a18h
        push 2711h
        ; Exact mapped bytes E8 45 48 E7 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x48
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7E DA E6 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xda
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [esp + 4], 589a1a50h
        ; Exact mapped bytes E9 6E FF FF FF: jmp 0x588f7230
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esp + 4], 589a1a3ch
        ; Exact mapped bytes E9 61 FF FF FF: jmp 0x588f7230
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
