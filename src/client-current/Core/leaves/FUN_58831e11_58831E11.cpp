// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58831E11 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_58831e11_58831E11() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 0
        ; Exact mapped bytes 74 33: je 0x58831e4f
        __asm _emit 0x74
        __asm _emit 0x33
        sub eax, 1
        ; Exact mapped bytes 74 20: je 0x58831e41
        __asm _emit 0x74
        __asm _emit 0x20
        sub eax, 1
        ; Exact mapped bytes 74 11: je 0x58831e37
        __asm _emit 0x74
        __asm _emit 0x11
        sub eax, 1
        ; Exact mapped bytes 74 05: je 0x58831e30
        __asm _emit 0x74
        __asm _emit 0x05
        xor eax, eax
        inc eax
        ; Exact mapped bytes EB 30: jmp 0x58831e60
        __asm _emit 0xeb
        __asm _emit 0x30
        ; Exact mapped bytes E8 79 F9 FF FF: call 0x588317ae
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 05: jmp 0x58831e3c
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 53 F9 FF FF: call 0x5883178f
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, al
        ; Exact mapped bytes EB 1F: jmp 0x58831e60
        __asm _emit 0xeb
        __asm _emit 0x1f
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 18 00 00 00: call 0x58831e64
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes EB 10: jmp 0x58831e5f
        __asm _emit 0xeb
        __asm _emit 0x10
        cmp dword ptr [ebp + 10h], 0
        setne al
        movzx eax, al
        push eax
        ; Exact mapped bytes E8 0F 01 00 00: call 0x58831f6e
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
