// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58831004 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_58831004() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes EB 0D: jmp 0x58831016
        __asm _emit 0xeb
        __asm _emit 0x0d
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5F 36 03 00: call 0x58864670
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x36
        __asm _emit 0x03
        __asm _emit 0x00
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x58831025
        __asm _emit 0x74
        __asm _emit 0x0f
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F2 85 02 00: call 0x58859610
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x00
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 E6: je 0x58831009
        __asm _emit 0x74
        __asm _emit 0xe6
        pop ebp
        ret
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 0F 84 DD 15 00 00: je 0x5883260c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 3C D7 FF FF: jmp 0x5882e770
        __asm _emit 0xe9
        __asm _emit 0x3c
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        push ebp
        mov ebp, esp
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 42 00 00 00: call 0x58831081
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ebp
        ret
        push ebp
        mov ebp, esp
        pop ebp
        ; Exact mapped bytes E9 B9 FF FF FF: jmp 0x58831004
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 31 00 00 00: jmp 0x58831081
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
