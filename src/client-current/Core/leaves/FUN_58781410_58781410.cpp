// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58781410 .. +0xAE bytes.
extern "C" __declspec(naked) void FUN_58781410_58781410() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 0ch], ecx
        movzx eax, word ptr [ebp + 14h]
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x58781453
        __asm _emit 0x74
        __asm _emit 0x32
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58781433
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7D 16: jge 0x58781451
        __asm _emit 0x7d
        __asm _emit 0x16
        imul eax, dword ptr [ebp - 8], 180h
        add eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D2 F9 FF FF: call 0x58780e20
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D9: jmp 0x5878142a
        __asm _emit 0xeb
        __asm _emit 0xd9
        ; Exact mapped bytes EB 65: jmp 0x587814b8
        __asm _emit 0xeb
        __asm _emit 0x65
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A1 FE FF FF: call 0x58781300
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58781474
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7D 3C: jge 0x587814b8
        __asm _emit 0x7d
        __asm _emit 0x3c
        imul ecx, dword ptr [ebp - 4], 180h
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 44 0A 0E: mov ax, word ptr [edx + ecx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E8 0B: shr ax, 0xb
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x0b
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 71 E6 D2 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xe6
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        imul edx, dword ptr [ebp - 4], 180h
        add edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 6B D5 D7 FF: call 0x584fea20
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xd5
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B3: jmp 0x5878146b
        __asm _emit 0xeb
        __asm _emit 0xb3
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
