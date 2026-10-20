// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586BD8B0 .. +0x173 bytes.
extern "C" __declspec(naked) void FUN_586bd8b0_586BD8B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 10000000h
        ; Exact mapped bytes 0F 84 42 01 00 00: je 0x586bda0e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 24ch]
        ; Exact mapped bytes E8 D6 7E DD FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x7e
        __asm _emit 0xdd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 8E 1C 01 00 00: jle 0x586bd9fe
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2D 39 0C 00: call 0x58781220
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x39
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 EE 00 00 00: je 0x586bd9ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 68 5A E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x5a
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 10h], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586bd929
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 16: jge 0x586bd945
        __asm _emit 0x7d
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + eax*4 + 6ch]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + eax*4 + 6ch], edx
        ; Exact mapped bytes EB DB: jmp 0x586bd920
        __asm _emit 0xeb
        __asm _emit 0xdb
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586bd957
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 7D 1E: jge 0x586bd97b
        __asm _emit 0x7d
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 94 56 C0 00 00 00: mov dx, word ptr [esi + edx*2 + 0xc0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x56
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 94 41 C0 00 00 00: mov word ptr [ecx + eax*2 + 0xc0], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x41
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB D3: jmp 0x586bd94e
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [eax + 84h], edx
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 79 51 00 00: call 0x586c2b10
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x51
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24ch]
        ; Exact mapped bytes E8 0A 7E DD FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x7e
        __asm _emit 0xdd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7E 34: jle 0x586bd9de
        __asm _emit 0x7e
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CE 07 00 00: call 0x586be180
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x586bd9c5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [edx + 84h]
        ; Exact mapped bytes 7D 0B: jge 0x586bd9de
        __asm _emit 0x7d
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 05 5B 00 00: call 0x586c34e0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB DE: jmp 0x586bd9bc
        __asm _emit 0xeb
        __asm _emit 0xde
        push 1130h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D5 AE 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0E: jmp 0x586bd9fc
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 1135h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C5 AE 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0E: jmp 0x586bda0c
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 1137h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B5 AE 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0E: jmp 0x586bda1c
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 113ch
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A5 AE 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
