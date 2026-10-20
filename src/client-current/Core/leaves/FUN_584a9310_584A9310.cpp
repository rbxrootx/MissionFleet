// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A9310 .. +0xFD bytes.
extern "C" __declspec(naked) void FUN_584a9310_584A9310() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 29 15 00 00: call 0x584aa850
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 76 06: jbe 0x584a9332
        __asm _emit 0x76
        __asm _emit 0x06
        ; Exact mapped bytes E8 3F 12 00 00: call 0x584aa570
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D6 EB FD FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xeb
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        xor ecx, ecx
        mov byte ptr [ebp - 2], cl
        lea edx, [ebp - 2]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        lea ecx, [ebp - 1]
        ; Exact mapped bytes E8 C8 8F FF FF: call 0x584a2320
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x8f
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 0ch], 0fh
        ; Exact mapped bytes 77 30: ja 0x584a938f
        __asm _emit 0x77
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 10h], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 14h], 0fh
        push 10h
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 6F 13 00 00: call 0x584aa6f0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 1]
        ; Exact mapped bytes E8 A4 EB FD FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xeb
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 78: jmp 0x584a9407
        __asm _emit 0xeb
        __asm _emit 0x78
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B9 14 00 00: call 0x584aa850
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 0fh
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 FD 0F 00 00: call 0x584aa3a0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 10h], eax
        lea edx, [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 7A FD FF FF: call 0x584a9130
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 F7 D9 FD FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xd9
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 10h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx + 14h], eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 BE DE FD FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xde
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        push eax
        ; Exact mapped bytes E8 F5 12 00 00: call 0x584aa6f0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 1]
        ; Exact mapped bytes E8 2A EB FD FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xeb
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
