// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587617A0 .. +0x256 bytes.
extern "C" __declspec(naked) void FUN_587617a0_587617A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 58h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 3D 02 00 00: je 0x587619f0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 8E 2D 02 00 00: jle 0x587619f0
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x2d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 85 13 D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x13
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, dword ptr [eax + 14h]
        and eax, 3ffh
        xor eax, 55h
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 7C 65: jl 0x58761850
        __asm _emit 0x7c
        __asm _emit 0x65
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 5D 13 D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x13
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 4]
        add eax, 34ch
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 43 13 D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x13
        __asm _emit 0xd4
        __asm _emit 0xff
        add eax, 14h
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 14h]
        and eax, 3ffh
        xor eax, 55h
        sub eax, dword ptr [ebp - 8]
        xor eax, 55h
        and eax, 3ffh
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        and edx, 0fffffc00h
        or edx, eax
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax], edx
        ; Exact mapped bytes EB 57: jmp 0x587618a7
        __asm _emit 0xeb
        __asm _emit 0x57
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 F8 12 D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x12
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, dword ptr [eax + 14h]
        and eax, 3ffh
        xor eax, 55h
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 D2 12 D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x12
        __asm _emit 0xd4
        __asm _emit 0xff
        add eax, 14h
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        and ecx, 0fffffc00h
        or ecx, 55h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp - 4]
        add eax, 34ch
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 A2 12 D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x12
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov edx, dword ptr [ebp - 4]
        add edx, 34ch
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 87 12 D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x12
        __asm _emit 0xd4
        __asm _emit 0xff
        add eax, 14h
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx + 14h]
        shr edx, 0ah
        and edx, 3ffh
        xor edx, 55h
        add edx, dword ptr [ebp - 8]
        xor edx, 55h
        and edx, 3ffh
        shl edx, 0ah
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        and ecx, 0fff003ffh
        or ecx, edx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp - 4]
        add eax, 34ch
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 37 12 D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x12
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov edx, dword ptr [ebp - 4]
        add edx, 34ch
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 4C 09 D6 FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x09
        __asm _emit 0xd6
        __asm _emit 0xff
        add eax, 14h
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4ch]
        mov edx, dword ptr [ecx + 14h]
        and edx, 3ffh
        and edx, 3ffh
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        and ecx, 0fffffc00h
        or ecx, edx
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp - 4]
        add eax, 34ch
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 DB 11 D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x11
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        mov edx, dword ptr [ebp - 4]
        add edx, 34ch
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 F0 08 D6 FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x08
        __asm _emit 0xd6
        __asm _emit 0xff
        add eax, 14h
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx + 14h]
        shr edx, 0ah
        and edx, 3ffh
        and edx, 3ffh
        shl edx, 0ah
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax]
        and ecx, 0fff003ffh
        or ecx, edx
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [edx], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E5 4F D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x4f
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 10: jne 0x587619f0
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 71 C1 00 00: call 0x5876db60
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
