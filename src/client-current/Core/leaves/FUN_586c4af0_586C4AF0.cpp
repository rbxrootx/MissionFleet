// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C4AF0 .. +0xF1 bytes.
extern "C" __declspec(naked) void FUN_586c4af0_586C4AF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 98h
        ; Exact mapped bytes E8 E9 35 DC FF: call 0x584880f0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0a4h
        ; Exact mapped bytes E8 6A 42 00 00: call 0x586c8d80
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x586c4b6f
        __asm _emit 0x74
        __asm _emit 0x55
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586c4b2c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0a4h
        ; Exact mapped bytes E8 46 42 00 00: call 0x586c8d80
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 73 30: jae 0x586c4b6f
        __asm _emit 0x73
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 4]
        add ecx, 98h
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 0a4h
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 6D 81 FF FF: call 0x586bccd0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F4 41 00 00: call 0x586c8d60
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB B4: jmp 0x586c4b23
        __asm _emit 0xeb
        __asm _emit 0xb4
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586c4b81
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 73 25: jae 0x586c4bae
        __asm _emit 0x73
        __asm _emit 0x25
        imul eax, dword ptr [ebp - 8], 22h
        add eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 98h
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 B5 41 00 00: call 0x586c8d60
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CA: jmp 0x586c4b78
        __asm _emit 0xeb
        __asm _emit 0xca
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 70h], 0ffffffffh
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 6ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B8 39 00 00: call 0x586c8580
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 50 0E 00 00: call 0x586c5a20
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 96 08 00 00: call 0x586c5470
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x08
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
