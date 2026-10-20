// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585033F0 .. +0x124 bytes.
extern "C" __declspec(naked) void FUN_585033f0_585033F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 E5 C5 FC FF: call 0x584cf9f0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xc5
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 10h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 14h]
        sub edx, dword ptr [ebp - 14h]
        cmp dword ptr [ebp + 10h], edx
        ; Exact mapped bytes 77 06: ja 0x58503428
        __asm _emit 0x77
        __asm _emit 0x06
        mov byte ptr [ebp - 1], 1
        ; Exact mapped bytes EB 04: jmp 0x5850342c
        __asm _emit 0xeb
        __asm _emit 0x04
        mov byte ptr [ebp - 1], 0
        mov al, byte ptr [ebp - 1]
        mov byte ptr [ebp - 2], al
        movzx ecx, byte ptr [ebp - 2]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 AE 00 00 00: je 0x585034ec
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        add edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 10h], edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 2E 70 FA FF: call 0x584aa480
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x70
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp + 10h]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 76 0B: jbe 0x58503474
        __asm _emit 0x76
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 18h]
        add eax, dword ptr [ebp - 14h]
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 76 08: jbe 0x5850347c
        __asm _emit 0x76
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 1A: jmp 0x58503496
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 77 09: ja 0x5850348d
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x58503496
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        sub eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 14h]
        sub ecx, dword ptr [ebp + 8]
        add ecx, 1
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 40 72 FA FF: call 0x584aa6f0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x72
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 2C 72 FA FF: call 0x584aa6f0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x72
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp + 10h]
        add edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 0C 72 FA FF: call 0x584aa6f0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x72
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes EB 22: jmp 0x5850350e
        __asm _emit 0xeb
        __asm _emit 0x22
        xor ecx, ecx
        mov byte ptr [ebp - 3], cl
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        movzx edx, byte ptr [ebp - 3]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B2 E2 FF FF: call 0x585017c0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
