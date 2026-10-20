// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851D0D0 .. +0xFD bytes.
extern "C" __declspec(naked) void FUN_5851d0d0_5851D0D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 29 65 FE FF: call 0x58503610
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x65
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 76 06: jbe 0x5851d0f2
        __asm _emit 0x76
        __asm _emit 0x06
        ; Exact mapped bytes E8 7F D4 F8 FF: call 0x584aa570
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xd4
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 16 AE F6 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xae
        __asm _emit 0xf6
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
        ; Exact mapped bytes E8 08 52 F8 FF: call 0x584a2320
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x52
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 0ch], 7
        ; Exact mapped bytes 77 30: ja 0x5851d14f
        __asm _emit 0x77
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 10h], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 14h], 7
        push 8
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 5F 5C FE FF: call 0x58502da0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x5c
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        lea ecx, [ebp - 1]
        ; Exact mapped bytes E8 E4 AD F6 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xad
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 78: jmp 0x5851d1c7
        __asm _emit 0xeb
        __asm _emit 0x78
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B9 64 FE FF: call 0x58503610
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 7
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 BD 58 FE FF: call 0x58502a20
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x58
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 10h], eax
        lea edx, [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 FA 40 FE FF: call 0x58501270
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x40
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 37 9C F6 FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x9c
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 10h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx + 14h], eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 FE A0 F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xa0
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        push eax
        ; Exact mapped bytes E8 E5 5B FE FF: call 0x58502da0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x5b
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        lea ecx, [ebp - 1]
        ; Exact mapped bytes E8 6A AD F6 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xad
        __asm _emit 0xf6
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
