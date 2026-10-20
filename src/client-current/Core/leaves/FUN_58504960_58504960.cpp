// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58504960 .. +0x138 bytes.
extern "C" __declspec(naked) void FUN_58504960_58504960() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D9 5E FA FF: call 0x584aa850
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x5e
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 76 06: jbe 0x58504982
        __asm _emit 0x76
        __asm _emit 0x06
        ; Exact mapped bytes E8 EF 5B FA FF: call 0x584aa570
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x5b
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 86 35 F8 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x35
        __asm _emit 0xf8
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
        ; Exact mapped bytes E8 78 D9 F9 FF: call 0x584a2320
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xd9
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 0ch], 0fh
        ; Exact mapped bytes 77 4D: ja 0x585049fc
        __asm _emit 0x77
        __asm _emit 0x4d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 10h], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 14h], 0fh
        movzx edx, byte ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 EC 56 00 00: call 0x5850a0c0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 3], 0
        lea edx, [ebp - 3]
        push edx
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 F5 5B FA FF: call 0x584aa5e0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x5b
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        lea ecx, [ebp - 1]
        ; Exact mapped bytes E8 3A 35 F8 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 96 00 00 00: jmp 0x58504a92
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 4C 5E FA FF: call 0x584aa850
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x5e
        __asm _emit 0xfa
        __asm _emit 0xff
        push eax
        push 0fh
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 90 59 FA FF: call 0x584aa3a0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x59
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 14h], eax
        lea edx, [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 0D 47 FA FF: call 0x584a9130
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x47
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 8A 23 F8 FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x23
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 10h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + 14h], eax
        movzx ecx, byte ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 53 28 F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x28
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        push eax
        ; Exact mapped bytes E8 5A 56 00 00: call 0x5850a0c0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 36 28 F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x28
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        add eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 5A 5B FA FF: call 0x584aa5e0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x5b
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        lea ecx, [ebp - 1]
        ; Exact mapped bytes E8 9F 34 F8 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x34
        __asm _emit 0xf8
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
