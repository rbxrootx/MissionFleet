// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00403A7F .. +0x190 bytes.
extern "C" __declspec(naked) void FUN_00403a7f_00403A7F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 210h
        mov dword ptr [ebp - 210h], ecx
        mov eax, dword ptr [ebp - 210h]
        mov dword ptr [eax + 18ch], 0ffffffffh
        lea ecx, [ebp - 4]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 210h]
        add edx, 18ch
        push edx
        push 4
        push 1
        mov eax, dword ptr [ebp - 210h]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        ; Exact mapped bytes E8 37 DE 00 00: call 0x4118fe
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 1ch]
        push eax
        push 448a44h
        lea ecx, [ebp - 108h]
        push ecx
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 0ch
        push -3
        lea edx, [ebp - 108h]
        push edx
        mov eax, dword ptr [ebp - 210h]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        ; Exact mapped bytes E8 F6 DD 00 00: call 0x4118f8
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov edx, dword ptr [ebp - 210h]
        mov eax, dword ptr [edx + 160h]
        push eax
        ; Exact mapped bytes E8 DA DD 00 00: call 0x4118f2
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        cmp ecx, 64h
        ; Exact mapped bytes 0F 84 E3 00 00 00: je 0x403c07
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 210h]
        cmp dword ptr [edx + 18ch], -1
        ; Exact mapped bytes 0F 8E D0 00 00 00: jle 0x403c07
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 210h]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        ; Exact mapped bytes E8 A3 DD 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 210h]
        cmp dword ptr [edx + 18ch], 0
        ; Exact mapped bytes 0F 8E AB 00 00 00: jle 0x403c07
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        push 1
        push 448a78h
        lea edx, [ebp - 20ch]
        push edx
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 10h
        push -3
        lea eax, [ebp - 20ch]
        push eax
        mov ecx, dword ptr [ebp - 210h]
        mov edx, dword ptr [ecx + 160h]
        push edx
        ; Exact mapped bytes E8 63 DD 00 00: call 0x4118f8
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 85 F4 FE FF FF: mov word ptr [ebp - 0x10c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 210h]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        ; Exact mapped bytes E8 3E DD 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 18h]
        push eax
        push 1
        push 448ab4h
        lea ecx, [ebp - 20ch]
        push ecx
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 10h
        push -3
        lea edx, [ebp - 20ch]
        push edx
        mov eax, dword ptr [ebp - 210h]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        ; Exact mapped bytes E8 11 DD 00 00: call 0x4118f8
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 85 F4 FE FF FF: mov word ptr [ebp - 0x10c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 210h]
        mov eax, dword ptr [edx + 160h]
        push eax
        ; Exact mapped bytes E8 EC DC 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x403c09
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
