// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5858F690 .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_5858f690_5858F690() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3C C7 0E 00: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xc7
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x5858f6fd
        __asm _emit 0x74
        __asm _emit 0x55
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2D C7 0E 00: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xc7
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        push 588aaf18h
        ; Exact mapped bytes E8 30 29 F9 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x29
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        push 9fh
        push 0
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 27 F2 F6 FF: call 0x584fe900
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xf2
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC C6 0E 00: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xc6
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        push 10101h
        push 1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 06 F2 F6 FF: call 0x584fe900
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xf2
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 10: jmp 0x5858f70d
        __asm _emit 0xeb
        __asm _emit 0x10
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 64 51 05 00: call 0x585e4870
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x51
        __asm _emit 0x05
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
