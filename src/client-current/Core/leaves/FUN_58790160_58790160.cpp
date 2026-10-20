// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58790160 .. +0x349 bytes.
extern "C" __declspec(naked) void FUN_58790160_58790160() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 198h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 168h], ecx
        lea eax, [ebp - 130h]
        mov dword ptr [ebp - 164h], eax
        mov dword ptr [ebp - 180h], 1
        push 12ch
        push 0
        mov ecx, dword ptr [ebp - 164h]
        push ecx
        ; Exact mapped bytes E8 6E CC 0B 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xcc
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        push 4
        lea edx, [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 164h]
        push eax
        ; Exact mapped bytes E8 D9 C6 0B 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xc6
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 164h]
        add ecx, 4
        mov dword ptr [ebp - 164h], ecx
        push 4
        lea edx, [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 164h]
        push eax
        ; Exact mapped bytes E8 B5 C6 0B 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xc6
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 164h]
        add ecx, 4
        mov dword ptr [ebp - 164h], ecx
        push 4
        lea edx, [ebp - 180h]
        push edx
        mov eax, dword ptr [ebp - 164h]
        push eax
        ; Exact mapped bytes E8 8E C6 0B 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xc6
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 164h]
        add ecx, 4
        mov dword ptr [ebp - 164h], ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        push 12ch
        mov eax, dword ptr [ebp - 164h]
        push eax
        ; Exact mapped bytes E8 57 3F 02 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x3f
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 164h]
        add ecx, 0c8h
        mov dword ptr [ebp - 164h], ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 178h], edx
        cmp dword ptr [ebp - 178h], 0
        ; Exact mapped bytes 0F 84 B2 01 00 00: je 0x58790406
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 178h], 1
        ; Exact mapped bytes 74 05: je 0x58790262
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 37 02 00 00: jmp 0x58790499
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 168h]
        mov ecx, dword ptr [eax + 0a8h]
        ; Exact mapped bytes E8 2D D7 F8 FF: call 0x5871d9a0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xd7
        __asm _emit 0xf8
        __asm _emit 0xff
        movzx ecx, al
        mov dword ptr [ebp - 170h], ecx
        cmp dword ptr [ebp - 170h], 0
        ; Exact mapped bytes 7F 05: jg 0x5879028a
        __asm _emit 0x7f
        __asm _emit 0x05
        ; Exact mapped bytes E9 0F 02 00 00: jmp 0x58790499
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 168h]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 184h], eax
        push 0
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 C7 45 F9 FF: call 0x58724870
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C0 30 D3 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x30
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 17ch], eax
        mov ecx, dword ptr [ebp - 168h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 188h], edx
        mov eax, dword ptr [ebp - 17ch]
        mov ecx, dword ptr [eax + 54h]
        shr ecx, 1
        and ecx, 7fffffffh
        push ecx
        mov edx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes 66 8B 42 0E: mov ax, word ptr [edx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        push ecx
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 FC 43 FF FF: call 0x587846f0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x43
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 85 8C FE FF FF: mov word ptr [ebp - 0x174], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 2
        lea edx, [ebp - 174h]
        push edx
        mov eax, dword ptr [ebp - 164h]
        push eax
        ; Exact mapped bytes E8 80 C5 0B 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xc5
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 164h]
        add ecx, 2
        mov dword ptr [ebp - 164h], ecx
        mov dword ptr [ebp - 16ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x5879033d
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 16ch]
        add edx, 1
        mov dword ptr [ebp - 16ch], edx
        mov eax, dword ptr [ebp - 16ch]
        cmp eax, dword ptr [ebp - 170h]
        ; Exact mapped bytes 7D 34: jge 0x5879037f
        __asm _emit 0x7d
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 168h]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 18ch], edx
        movzx eax, byte ptr [ebp - 16ch]
        push eax
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 E0 46 F9 FF: call 0x58724a50
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x46
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 16ch]
        mov dword ptr [ebp + ecx*4 - 160h], eax
        ; Exact mapped bytes EB AF: jmp 0x5879032e
        __asm _emit 0xeb
        __asm _emit 0xaf
        mov edx, dword ptr [ebp - 170h]
        shl edx, 2
        push edx
        lea eax, [ebp - 160h]
        push eax
        mov ecx, dword ptr [ebp - 164h]
        push ecx
        ; Exact mapped bytes E8 F4 C4 0B 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xc4
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 170h]
        mov eax, dword ptr [ebp - 164h]
        lea ecx, [eax + edx*4]
        mov dword ptr [ebp - 164h], ecx
        mov edx, dword ptr [ebp - 164h]
        lea eax, [ebp - 130h]
        sub edx, eax
        mov dword ptr [ebp - 190h], edx
        push 1
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 8B 03 00 00: call 0x58790760
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 190h]
        push ecx
        lea edx, [ebp - 130h]
        push edx
        mov eax, dword ptr [ebp - 170h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 80017101h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 90 C5 09 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xc5
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 93 00 00 00: jmp 0x58790499
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 168h]
        mov ecx, dword ptr [edx + 0ach]
        ; Exact mapped bytes E8 A9 D5 F8 FF: call 0x5871d9c0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xd5
        __asm _emit 0xf8
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 7E 7B: jle 0x58790499
        __asm _emit 0x7e
        __asm _emit 0x7b
        mov ecx, dword ptr [ebp - 168h]
        mov edx, dword ptr [ecx + 0ach]
        mov dword ptr [ebp - 194h], edx
        push 0
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 A3 73 F9 FF: call 0x587277e0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x73
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 198h], eax
        push 4
        lea eax, [ebp - 198h]
        push eax
        mov ecx, 1
        imul edx, ecx, 0d4h
        lea eax, [ebp + edx - 130h]
        push eax
        ; Exact mapped bytes E8 2C C4 0B 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xc4
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        push 1
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 EC 02 00 00: call 0x58790760
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0d8h
        lea ecx, [ebp - 130h]
        push ecx
        push 1
        mov edx, dword ptr [ebp + 8]
        push edx
        push 80017101h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F8 C4 09 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xc4
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 AD 0B 0A 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x0b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
