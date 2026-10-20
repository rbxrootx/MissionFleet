// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00412B2C .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_00412b2c_00412B2C() {
    __asm {
        push ebx
        mov bl, byte ptr [esp + 8]
        push esi
        mov esi, ecx
        test bl, 2
        ; Exact mapped bytes 74 24: je 0x412b5d
        __asm _emit 0x74
        __asm _emit 0x24
        push edi
        lea edi, [esi - 4]
        push 412b77h
        push dword ptr [edi]
        push 10h
        push esi
        ; Exact mapped bytes E8 B8 CC 00 00: call 0x41f804
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        test bl, 1
        ; Exact mapped bytes 74 07: je 0x412b58
        __asm _emit 0x74
        __asm _emit 0x07
        push edi
        ; Exact mapped bytes E8 BE AD 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xad
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov eax, edi
        pop edi
        ; Exact mapped bytes EB 15: jmp 0x412b72
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, esi
        ; Exact mapped bytes E8 13 00 00 00: call 0x412b77
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test bl, 1
        ; Exact mapped bytes 74 07: je 0x412b70
        __asm _emit 0x74
        __asm _emit 0x07
        push esi
        ; Exact mapped bytes E8 A6 AD 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xad
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov eax, esi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
