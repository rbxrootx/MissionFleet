// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58505760 .. +0x11E bytes.
extern "C" __declspec(naked) void FUN_58505760_58505760() {
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
        ; Exact mapped bytes E8 D0 50 FA FF: call 0x584aa850
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x50
        __asm _emit 0xfa
        __asm _emit 0xff
        sub eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 73 06: jae 0x5850578e
        __asm _emit 0x73
        __asm _emit 0x06
        ; Exact mapped bytes E8 E3 4D FA FF: call 0x584aa570
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x4d
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
        ; Exact mapped bytes E8 04 03 FC FF: call 0x584c5ab0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 59 27 F8 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x27
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 69 39 FA FF: call 0x584a9130
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x39
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5B 27 F8 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x27
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
        ; Exact mapped bytes E8 C0 1A F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x1a
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 1ch], 0fh
        ; Exact mapped bytes 76 4C: jbe 0x58505848
        __asm _emit 0x76
        __asm _emit 0x4c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 20h], eax
        movzx ecx, byte ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 96 1A F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x1a
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        push eax
        mov edx, dword ptr [ebp - 28h]
        push edx
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 36 20 00 00: call 0x58507860
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 F5 4B FA FF: call 0x584aa430
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x4b
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 2D: jmp 0x58505875
        __asm _emit 0xeb
        __asm _emit 0x2d
        movzx edx, byte ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 28h]
        push eax
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 FB 1F 00 00: call 0x58507860
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 4E 15 F8 FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
