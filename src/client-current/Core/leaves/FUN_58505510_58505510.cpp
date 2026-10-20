// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58505510 .. +0x116 bytes.
extern "C" __declspec(naked) void FUN_58505510_58505510() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [ebp - 0ch], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 20 53 FA FF: call 0x584aa850
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x53
        __asm _emit 0xfa
        __asm _emit 0xff
        sub eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 73 06: jae 0x5850553e
        __asm _emit 0x73
        __asm _emit 0x06
        ; Exact mapped bytes E8 33 50 FA FF: call 0x584aa570
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x50
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 0ch]
        add eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 54 05 FC FF: call 0x584c5ab0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A9 29 F8 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x29
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 B9 3B FA FF: call 0x584a9130
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x3b
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AB 29 F8 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x29
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax + 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [edx + 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 10 1D F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x1d
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 1ch], 0fh
        ; Exact mapped bytes 76 48: jbe 0x585055f4
        __asm _emit 0x76
        __asm _emit 0x48
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 20h], eax
        movzx ecx, byte ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 EA 1C F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x1c
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 CA 21 00 00: call 0x585077a0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 49 4E FA FF: call 0x584aa430
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x4e
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx], eax
        ; Exact mapped bytes EB 29: jmp 0x5850561d
        __asm _emit 0xeb
        __asm _emit 0x29
        movzx ecx, byte ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 93 21 00 00: call 0x585077a0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 A6 17 F8 FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x17
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
