// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585017C0 .. +0x124 bytes.
extern "C" __declspec(naked) void FUN_585017c0_585017C0() {
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
        ; Exact mapped bytes E8 70 90 FA FF: call 0x584aa850
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x90
        __asm _emit 0xfa
        __asm _emit 0xff
        sub eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 73 06: jae 0x585017ee
        __asm _emit 0x73
        __asm _emit 0x06
        ; Exact mapped bytes E8 83 8D FA FF: call 0x584aa570
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x8d
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
        ; Exact mapped bytes E8 A4 42 FC FF: call 0x584c5ab0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x42
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F9 66 F8 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x66
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 09 79 FA FF: call 0x584a9130
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x79
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FB 66 F8 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x66
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
        ; Exact mapped bytes E8 60 5A F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x5a
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 1ch], 0fh
        ; Exact mapped bytes 76 4F: jbe 0x585018ab
        __asm _emit 0x76
        __asm _emit 0x4f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes E8 33 5A F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x5a
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        push eax
        mov eax, dword ptr [ebp - 28h]
        push eax
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 33 08 00 00: call 0x585020c0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 92 8B FA FF: call 0x584aa430
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x8b
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], edx
        ; Exact mapped bytes EB 30: jmp 0x585018db
        __asm _emit 0xeb
        __asm _emit 0x30
        mov eax, dword ptr [ebp + 18h]
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
        ; Exact mapped bytes E8 F5 07 00 00: call 0x585020c0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 E8 54 F8 FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x54
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
