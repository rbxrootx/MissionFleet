// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EC620 .. +0x13A bytes.
extern "C" __declspec(naked) void FUN_584ec620_584EC620() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 09: je 0x584ec641
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 78h
        ; Exact mapped bytes EB 07: jmp 0x584ec648
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 90h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        add eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        add edx, 187h
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        add ecx, 19h
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        add eax, 19h
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 55 01 00 00: call 0x584ec7d0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 68h]
        ; Exact mapped bytes E8 4A FF FF FF: call 0x584ec5d0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x584ec712
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 30h]
        ; Exact mapped bytes E8 14 FA F9 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xfa
        __asm _emit 0xf9
        __asm _emit 0xff
        add eax, 12ch
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        ; Exact mapped bytes E8 11 A3 F9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xa3
        __asm _emit 0xf9
        __asm _emit 0xff
        add eax, 14ah
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 59 8F 2C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x8f
        __asm _emit 0x2c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 30h]
        ; Exact mapped bytes E8 D5 F9 F9 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xf9
        __asm _emit 0xf9
        __asm _emit 0xff
        add eax, 145h
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        ; Exact mapped bytes E8 D2 A2 F9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xa2
        __asm _emit 0xf9
        __asm _emit 0xff
        add eax, 163h
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 3A F9 FF FF: call 0x584ec040
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        ; Exact mapped bytes E8 BF FE FF FF: call 0x584ec5d0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 28h], edx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 09: je 0x584ec72a
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 0fh
        ; Exact mapped bytes EB 07: jmp 0x584ec731
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        movzx eax, byte ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 52 98 F9 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x98
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 2D 00 00 00: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
