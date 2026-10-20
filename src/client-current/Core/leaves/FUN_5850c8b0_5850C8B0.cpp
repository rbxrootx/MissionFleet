// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850C8B0 .. +0x116 bytes.
extern "C" __declspec(naked) void FUN_5850c8b0_5850C8B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 0F 8C E5 00 00 00: jl 0x5850c9b4
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7F 0A: jg 0x5850c8db
        __asm _emit 0x7f
        __asm _emit 0x0a
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 86 D9 00 00 00: jbe 0x5850c9b4
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5D C9 FF FF: call 0x58509240
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7C 69: jl 0x5850c958
        __asm _emit 0x7c
        __asm _emit 0x69
        ; Exact mapped bytes 7F 06: jg 0x5850c8f7
        __asm _emit 0x7f
        __asm _emit 0x06
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 76 61: jbe 0x5850c958
        __asm _emit 0x76
        __asm _emit 0x61
        mov edx, dword ptr [ebp + 10h]
        cmp edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 7F 16: jg 0x5850c915
        __asm _emit 0x7f
        __asm _emit 0x16
        ; Exact mapped bytes 7C 08: jl 0x5850c909
        __asm _emit 0x7c
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 73 0C: jae 0x5850c915
        __asm _emit 0x73
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7F EA FF FF: call 0x5850b3a0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 C5 DD F9 FF: call 0x584aa6f0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xdd
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 10h]
        add edx, dword ptr [ebp + 8]
        mov dword ptr [ebp + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 10h]
        sbb ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp + 0ch], eax
        mov dword ptr [ebp + 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BB E9 FF FF: call 0x5850b310
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 57: jmp 0x5850c9af
        __asm _emit 0xeb
        __asm _emit 0x57
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 7F DE F9 FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xde
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 39 E6 FF FF: call 0x5850afb0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 02: je 0x5850c983
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 31: jmp 0x5850c9b4
        __asm _emit 0xeb
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 F4 8A FF FF: call 0x58505480
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x8a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp + 8]
        mov byte ptr [ecx], al
        mov edx, dword ptr [ebp + 8]
        add edx, 1
        mov dword ptr [ebp + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 1
        mov ecx, dword ptr [ebp + 10h]
        sbb ecx, 0
        mov dword ptr [ebp + 0ch], eax
        mov dword ptr [ebp + 10h], ecx
        ; Exact mapped bytes E9 11 FF FF FF: jmp 0x5850c8c5
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 18h]
        sub eax, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 14h]
        sbb edx, dword ptr [ebp + 10h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
