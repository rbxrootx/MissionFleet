// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58508640 .. +0x1EE bytes.
extern "C" __declspec(naked) void FUN_58508640_58508640() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588807f0h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 480h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 478h], 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 588a3ae0h
        lea ecx, [ebp - 50h]
        push ecx
        ; Exact mapped bytes E8 D9 44 00 00: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push 0
        push 0
        push 3
        push 0
        push 3
        push 0
        lea edx, [ebp - 50h]
        push edx
        ; Exact mapped bytes FF 15 00 42 89 58: call dword ptr [0x58894200]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 47ch], eax
        cmp dword ptr [ebp - 47ch], -1
        ; Exact mapped bytes 75 24: jne 0x585086d3
        __asm _emit 0x75
        __asm _emit 0x24
        push 588a3aa6h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 14 14 FA FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x14
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 478h]
        or eax, 1
        mov dword ptr [ebp - 478h], eax
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 42 01 00 00: jmp 0x58508815
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ch
        push 0
        lea ecx, [ebp - 45ch]
        push ecx
        ; Exact mapped bytes E8 2D 47 34 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x47
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 45ch], 0
        mov dword ptr [ebp - 458h], 0
        mov dword ptr [ebp - 484h], 0
        push 0
        lea edx, [ebp - 484h]
        push edx
        push 400h
        lea eax, [ebp - 450h]
        push eax
        push 0ch
        lea ecx, [ebp - 45ch]
        push ecx
        push 2d1400h
        mov edx, dword ptr [ebp - 47ch]
        push edx
        ; Exact mapped bytes FF 15 F8 41 89 58: call dword ptr [0x588941f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 488h], eax
        mov eax, dword ptr [ebp - 47ch]
        push eax
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        cmp dword ptr [ebp - 488h], 0
        ; Exact mapped bytes 75 24: jne 0x58508775
        __asm _emit 0x75
        __asm _emit 0x24
        push 588a3aa7h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 72 13 FA FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x13
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 478h]
        or ecx, 1
        mov dword ptr [ebp - 478h], ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 A0 00 00 00: jmp 0x58508815
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 450h]
        mov dword ptr [ebp - 480h], edx
        mov eax, dword ptr [ebp - 480h]
        cmp dword ptr [eax + 18h], 0
        ; Exact mapped bytes 75 21: jne 0x585087ae
        __asm _emit 0x75
        __asm _emit 0x21
        push 588a3addh
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 36 13 FA FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x13
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 478h]
        or ecx, 1
        mov dword ptr [ebp - 478h], ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 67: jmp 0x58508815
        __asm _emit 0xeb
        __asm _emit 0x67
        mov edx, dword ptr [ebp - 480h]
        mov eax, dword ptr [edx + 18h]
        lea ecx, [ebp + eax - 450h]
        mov dword ptr [ebp - 48ch], ecx
        mov edx, dword ptr [ebp - 48ch]
        push edx
        lea ecx, [ebp - 474h]
        ; Exact mapped bytes E8 FA 12 FA FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x12
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 474h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 53 01 00 00: call 0x58508940
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 478h]
        or edx, 1
        mov dword ptr [ebp - 478h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 474h]
        ; Exact mapped bytes E8 1F 15 FA FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x15
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 26 88 32 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x88
        __asm _emit 0x32
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
