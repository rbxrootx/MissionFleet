// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5868DEB0 .. +0x113 bytes.
extern "C" __declspec(naked) void FUN_5868deb0_5868DEB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC 8A DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x8a
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B5 E5 DF FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xe5
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx eax, ax
        test eax, eax
        ; Exact mapped bytes 0F 84 BC 00 00 00: je 0x5868df92
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b4h]
        push edx
        mov eax, dword ptr [ebp - 4]
        add eax, 0b4h
        push eax
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EC FB EB FF: call 0x5854dae0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xfb
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 0b4h]
        cmp eax, dword ptr [edx + 0bch]
        ; Exact mapped bytes 7D 45: jge 0x5868df4e
        __asm _emit 0x7d
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0e8h]
        ; Exact mapped bytes E8 C9 90 EF FF: call 0x58586fe0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x90
        __asm _emit 0xef
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 74 2D: je 0x5868df4c
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d8h]
        mov dword ptr [ebp - 8], ecx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AB 7F DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x7f
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e8h]
        mov dword ptr [ebp - 0ch], eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 05 16 E1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x16
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 42: jmp 0x5868df90
        __asm _emit 0xeb
        __asm _emit 0x42
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0e8h]
        ; Exact mapped bytes E8 84 90 EF FF: call 0x58586fe0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0xef
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 2D: je 0x5868df90
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d8h]
        mov dword ptr [ebp - 10h], ecx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 67 7F DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x7f
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e8h]
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C1 15 E1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x15
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2D: jmp 0x5868dfbf
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d8h]
        mov dword ptr [ebp - 18h], edx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 38 7F DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x7f
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e8h]
        mov dword ptr [ebp - 1ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 92 15 E1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x15
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
