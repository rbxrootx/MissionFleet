// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5861C3B0 .. +0x126 bytes.
extern "C" __declspec(naked) void FUN_5861c3b0_5861C3B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        add eax, 0e4h
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 02 01 00 00: je 0x5861c4d2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5861c3e2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 80h
        ; Exact mapped bytes 7D 27: jge 0x5861c412
        __asm _emit 0x7d
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 8]
        add edx, 0e4h
        push edx
        imul eax, dword ptr [ebp - 4], 18h
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 0fch]
        push edx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x5861c410
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x5861c412
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB C7: jmp 0x5861c3d9
        __asm _emit 0xeb
        __asm _emit 0xc7
        cmp dword ptr [ebp - 4], 80h
        ; Exact mapped bytes 0F 85 84 00 00 00: jne 0x5861c4a3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5861c431
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 80h
        ; Exact mapped bytes 7D 42: jge 0x5861c47c
        __asm _emit 0x7d
        __asm _emit 0x42
        imul ecx, dword ptr [ebp - 4], 18h
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 0fch]
        mov ecx, 1
        imul edx, ecx, 0
        ; Exact mapped bytes 0F BE 04 10: movsx eax, byte ptr [eax + edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 75 22: jne 0x5861c47a
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 8]
        add ecx, 0e4h
        push ecx
        imul edx, dword ptr [ebp - 4], 18h
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 0fch]
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB 02: jmp 0x5861c47c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB AC: jmp 0x5861c428
        __asm _emit 0xeb
        __asm _emit 0xac
        cmp dword ptr [ebp - 4], 80h
        ; Exact mapped bytes 75 1C: jne 0x5861c4a1
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes E8 66 AD EB FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xad
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 0
        push 0
        push 0
        push 1cdh
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D0 C8 EB FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xc8
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1C: jmp 0x5861c4bf
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 48 AD EB FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xad
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 0
        push 0
        push 0
        push 1cch
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B2 C8 EB FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xc8
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        mov edx, 1
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 8]
        mov byte ptr [ecx + eax + 0e4h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
