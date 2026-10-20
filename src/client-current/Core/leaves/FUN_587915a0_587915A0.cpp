// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587915A0 .. +0x10C bytes.
extern "C" __declspec(naked) void FUN_587915a0_587915A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 74 05: je 0x587915ba
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 EA 00 00 00: jmp 0x587916a4
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0b4h]
        ; Exact mapped bytes 75 26: jne 0x587915ee
        __asm _emit 0x75
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 60h], 1
        ; Exact mapped bytes 7E 16: jle 0x587915e7
        __asm _emit 0x7e
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        sub edx, 1
        push edx
        ; Exact mapped bytes 8B 0D 58 06 96 58: mov ecx, dword ptr [0x58960658]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA E8 FF FF: call 0x5878fee0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        xor eax, eax
        ; Exact mapped bytes E9 B8 00 00 00: jmp 0x587916a6
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0b8h]
        ; Exact mapped bytes 75 26: jne 0x58791622
        __asm _emit 0x75
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 60h], 64h
        ; Exact mapped bytes 7D 16: jge 0x5879161b
        __asm _emit 0x7d
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        add ecx, 1
        push ecx
        ; Exact mapped bytes 8B 0D 58 06 96 58: mov ecx, dword ptr [0x58960658]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C6 E8 FF FF: call 0x5878fee0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        xor eax, eax
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x587916a6
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0bch]
        ; Exact mapped bytes 75 2C: jne 0x58791663
        __asm _emit 0x75
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 60h], 1
        ; Exact mapped bytes 7E 1F: jle 0x5879165f
        __asm _emit 0x7e
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 60h], 0ah
        ; Exact mapped bytes 7E 16: jle 0x5879165f
        __asm _emit 0x7e
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        sub ecx, 1
        push ecx
        ; Exact mapped bytes 8B 0D 58 06 96 58: mov ecx, dword ptr [0x58960658]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 82 E8 FF FF: call 0x5878fee0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        xor eax, eax
        ; Exact mapped bytes EB 43: jmp 0x587916a6
        __asm _emit 0xeb
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0c0h]
        ; Exact mapped bytes 75 33: jne 0x587916a4
        __asm _emit 0x75
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 60h], 64h
        ; Exact mapped bytes 7D 26: jge 0x587916a0
        __asm _emit 0x7d
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 4]
        mov eax, 64h
        sub eax, dword ptr [edx + 60h]
        cmp eax, 0ah
        ; Exact mapped bytes 7C 16: jl 0x587916a0
        __asm _emit 0x7c
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        add edx, 1
        push edx
        ; Exact mapped bytes 8B 0D 58 06 96 58: mov ecx, dword ptr [0x58960658]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 41 E8 FF FF: call 0x5878fee0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        xor eax, eax
        ; Exact mapped bytes EB 02: jmp 0x587916a6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
