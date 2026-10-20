// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58501310 .. +0x140 bytes.
extern "C" __declspec(naked) void FUN_58501310_58501310() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E9 22 00 00: call 0x58503610
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 76 06: jbe 0x58501332
        __asm _emit 0x76
        __asm _emit 0x06
        ; Exact mapped bytes E8 3F 92 FA FF: call 0x584aa570
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x92
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D6 6B F8 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x6b
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        xor ecx, ecx
        mov byte ptr [ebp - 2], cl
        lea edx, [ebp - 2]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        lea ecx, [ebp - 1]
        ; Exact mapped bytes E8 C8 0F FA FF: call 0x584a2320
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x0f
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 0ch], 7
        ; Exact mapped bytes 77 51: ja 0x585013b0
        __asm _emit 0x77
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 10h], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 14h], 7
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 1D 1A 00 00: call 0x58502da0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        xor edx, edx
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*2]
        push eax
        ; Exact mapped bytes E8 41 E8 FC FF: call 0x584cfbe0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        lea ecx, [ebp - 1]
        ; Exact mapped bytes E8 86 6B F8 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x6b
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 9A 00 00 00: jmp 0x5850144a
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 58 22 00 00: call 0x58503610
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 7
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 5C 16 00 00: call 0x58502a20
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 18h], eax
        lea edx, [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 99 FE FF FF: call 0x58501270
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 D6 59 F8 FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x59
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 10h], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [edx + 14h], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 A0 5E F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x5e
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        push eax
        ; Exact mapped bytes E8 87 19 00 00: call 0x58502da0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        xor ecx, ecx
        ; Exact mapped bytes 66 89 4D FA: mov word ptr [ebp - 6], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfa
        lea edx, [ebp - 6]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 81 5E F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x5e
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [eax + ecx*2]
        push edx
        ; Exact mapped bytes E8 A2 E7 FC FF: call 0x584cfbe0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xe7
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        lea ecx, [ebp - 1]
        ; Exact mapped bytes E8 E7 6A F8 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x6a
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
