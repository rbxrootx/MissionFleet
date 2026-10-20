// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5862CB10 .. +0x106 bytes.
extern "C" __declspec(naked) void FUN_5862cb10_5862CB10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 4], 200h
        ; Exact mapped bytes 0F 85 87 00 00 00: jne 0x5862cbb0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1b8h]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C0 7E E5 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x7e
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D1 8D E5 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x8d
        __asm _emit 0xe5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2E: je 0x5862cb81
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 1b8h]
        ; Exact mapped bytes E8 2F 8D E6 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x8d
        __asm _emit 0xe6
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 17: jne 0x5862cb7f
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1b8h]
        mov dword ptr [ebp - 14h], ecx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 62 93 E5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x93
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2D: jmp 0x5862cbae
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 1b8h]
        ; Exact mapped bytes E8 01 8D E6 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x8d
        __asm _emit 0xe6
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 17: jne 0x5862cbae
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1b8h]
        mov dword ptr [ebp - 18h], edx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 33 93 E5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x93
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 60: jmp 0x5862cc10
        __asm _emit 0xeb
        __asm _emit 0x60
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 4], 20ah
        ; Exact mapped bytes 75 54: jne 0x5862cc10
        __asm _emit 0x75
        __asm _emit 0x54
        mov dword ptr [ebp - 8], 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        shr edx, 10h
        and edx, 0ffffh
        ; Exact mapped bytes 0F BF C2: movsx eax, dx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc2
        test eax, eax
        ; Exact mapped bytes 7E 07: jle 0x5862cbe0
        __asm _emit 0x7e
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 1b8h]
        ; Exact mapped bytes E8 A2 8C E6 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x8c
        __asm _emit 0xe6
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 75 1A: jne 0x5862cc10
        __asm _emit 0x75
        __asm _emit 0x1a
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0B: je 0x5862cc07
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8C 01 00 00: call 0x5862cd90
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 09: jmp 0x5862cc10
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 41 01 00 00: call 0x5862cd50
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
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
