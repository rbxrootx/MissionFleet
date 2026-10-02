// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Copies string bytes using inline storage below 16 bytes and heap storage otherwise.
// Indexed function extent: 0x584A91D0 .. +0x136 bytes.
extern "C" __declspec(naked) void FUN_584a91d0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 69 16 00 00: call 0x584aa850
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 76 06: jbe 0x584a91f2
        __asm _emit 0x76
        __asm _emit 0x06
        ; Exact mapped bytes E8 7F 13 00 00: call 0x584aa570
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 16 ED FD FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xed
        __asm _emit 0xfd
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
        ; Exact mapped bytes E8 08 91 FF FF: call 0x584a2320
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x91
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 0ch], 0fh
        ; Exact mapped bytes 77 4C: ja 0x584a926b
        __asm _emit 0x77
        __asm _emit 0x4c
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 10h], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 14h], 0fh
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 AD 14 00 00: call 0x584aa6f0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 3], 0
        lea edx, [ebp - 3]
        push edx
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 86 13 00 00: call 0x584aa5e0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        lea ecx, [ebp - 1]
        ; Exact mapped bytes E8 CB EC FD FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xec
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 95 00 00 00: jmp 0x584a9300
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 DD 15 00 00: call 0x584aa850
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 0fh
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 21 11 00 00: call 0x584aa3a0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 14h], eax
        lea edx, [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 9E FE FF FF: call 0x584a9130
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 1B DB FD FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xdb
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 10h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + 14h], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 E5 DF FD FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xdf
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        push eax
        ; Exact mapped bytes E8 1C 14 00 00: call 0x584aa6f0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 C8 DF FD FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xdf
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        add eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 EC 12 00 00: call 0x584aa5e0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        lea ecx, [ebp - 1]
        ; Exact mapped bytes E8 31 EC FD FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xec
        __asm _emit 0xfd
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
