// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050A47F .. +0xED bytes.
extern "C" __declspec(naked) void FUN_0050a47f_0050A47F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 2ch], ecx
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 0F 85 B3 00 00 00: jne 0x50a545
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 CB 49 FE FF: call 0x4eee65
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x49
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 8C 25 5E 00: call dword ptr [0x5e258c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        cmp dword ptr [ecx + 40h], -1
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x50a543
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 0ch]
        sub ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 8]
        sub ecx, dword ptr [eax]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 69 B1 02 00: call 0x535640
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xb1
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 4ch
        ; Exact mapped bytes E8 CB B2 02 00: call 0x5357c5
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 14h], edx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 25 B1 02 00: call 0x535632
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xb1
        __asm _emit 0x02
        __asm _emit 0x00
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 29 FA FF FF: call 0x509f42
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7E 0F: jle 0x50a52e
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        add edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7E 0F: jle 0x50a543
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        add edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes EB 21: jmp 0x50a566
        __asm _emit 0xeb
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 18 49 FE FF: call 0x4eee65
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x49
        __asm _emit 0xfe
        __asm _emit 0xff
        and ah, 0fdh
        push eax
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 A3 48 FE FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 8C 25 5E 00: call dword ptr [0x5e258c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
