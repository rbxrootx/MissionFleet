// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58635500 .. +0x13D bytes.
extern "C" __declspec(naked) void FUN_58635500_58635500() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 170h], 0
        ; Exact mapped bytes 0F 84 20 01 00 00: je 0x58635639
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5863552b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 0F 8D 04 01 00 00: jge 0x58635639
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 104h]
        ; Exact mapped bytes E8 2D B7 18 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xb7
        __asm _emit 0x18
        __asm _emit 0x00
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 170h]
        ; Exact mapped bytes E8 F9 7D ED FF: call 0x5850d350
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x7d
        __asm _emit 0xed
        __asm _emit 0xff
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 0F 83 A2 00 00 00: jae 0x58635602
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 170h]
        ; Exact mapped bytes E8 92 86 ED FF: call 0x5850dc00
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x86
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, byte ptr [eax + edx*4 + 300h]
        test eax, eax
        ; Exact mapped bytes 74 51: je 0x586355ce
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 170h]
        ; Exact mapped bytes E8 75 86 ED FF: call 0x5850dc00
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x86
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [eax + edx*4 + 302h]
        test eax, eax
        ; Exact mapped bytes 74 34: je 0x586355ce
        __asm _emit 0x74
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 80h]
        mov dword ptr [ebp - 10h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DC 09 E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x09
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 6ch]
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C5 09 E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x09
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 32: jmp 0x58635600
        __asm _emit 0xeb
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 6ch]
        mov dword ptr [ebp - 18h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 AB 09 E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x09
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 80h]
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 91 09 E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x09
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 32: jmp 0x58635634
        __asm _emit 0xeb
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 6ch]
        mov dword ptr [ebp - 20h], eax
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 77 09 E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x09
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 80h]
        mov dword ptr [ebp - 24h], eax
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 5D 09 E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x09
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 E9 FE FF FF: jmp 0x58635522
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
