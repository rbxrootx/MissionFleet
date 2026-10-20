// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58669FC0 .. +0x7B bytes.
extern "C" __declspec(naked) void FUN_58669fc0_58669FC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 4D 08: mov cx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 88 AC 00 00 00: mov word ptr [eax + 0xac], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 74h
        mov dword ptr [ebp - 0ch], edx
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 94 E0 E1 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xe0
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x58669ffe
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea ecx, [ebp - 14h]
        push ecx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 83 DA E1 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xda
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        add edx, 74h
        mov dword ptr [ebp - 10h], edx
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7D E1 E1 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xe1
        __asm _emit 0xe1
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 B4 D9 E1 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xd9
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 12: je 0x5866a035
        __asm _emit 0x74
        __asm _emit 0x12
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 15 DA E1 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xda
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 BE 62 FB FF: call 0x586202f0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x62
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BA: jmp 0x58669fef
        __asm _emit 0xeb
        __asm _emit 0xba
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
