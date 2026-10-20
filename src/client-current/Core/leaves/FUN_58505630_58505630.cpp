// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58505630 .. +0x126 bytes.
extern "C" __declspec(naked) void FUN_58505630_58505630() {
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
        ; Exact mapped bytes E8 00 52 FA FF: call 0x584aa850
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x52
        __asm _emit 0xfa
        __asm _emit 0xff
        sub eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 73 06: jae 0x5850565e
        __asm _emit 0x73
        __asm _emit 0x06
        ; Exact mapped bytes E8 13 4F FA FF: call 0x584aa570
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x4f
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
        ; Exact mapped bytes E8 34 04 FC FF: call 0x584c5ab0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x04
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 89 28 F8 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x28
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 99 3A FA FF: call 0x584a9130
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x3a
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8B 28 F8 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x28
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
        ; Exact mapped bytes E8 F0 1B F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x1b
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 1ch], 0fh
        ; Exact mapped bytes 76 50: jbe 0x5850571c
        __asm _emit 0x76
        __asm _emit 0x50
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 20h], eax
        movzx ecx, byte ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes E8 C2 1B F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x1b
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        push eax
        mov eax, dword ptr [ebp - 28h]
        push eax
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 02 21 00 00: call 0x58507800
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 21 4D FA FF: call 0x584aa430
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x4d
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], edx
        ; Exact mapped bytes EB 31: jmp 0x5850574d
        __asm _emit 0xeb
        __asm _emit 0x31
        movzx eax, byte ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 C3 20 00 00: call 0x58507800
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 76 16 F8 FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x16
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
