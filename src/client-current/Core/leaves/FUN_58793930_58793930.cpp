// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58793930 .. +0x11F bytes.
extern "C" __declspec(naked) void FUN_58793930_58793930() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 7ch], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58793954
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 64h
        ; Exact mapped bytes E8 E1 48 CF FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x48
        __asm _emit 0xcf
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 0F 83 E1 00 00 00: jae 0x58793a49
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        add eax, 64h
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 93 40 CF FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x40
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 7C 70 FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, byte ptr [eax + 0ah]
        cmp dword ptr [ebp + 8], edx
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x58793a1f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        add eax, 64h
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6A 40 CF FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x40
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 53 2A D5 FF: call 0x584e6400
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x2a
        __asm _emit 0xd5
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 25: jne 0x587939d9
        __asm _emit 0x75
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 8]
        add eax, 64h
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 47 40 CF FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x40
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 18h], edx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 B8 25 CF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x25
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        add eax, 64h
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 22 40 CF FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x40
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 2B 44 FF FF: call 0x58787e20
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 75 1D: jne 0x58793a1a
        __asm _emit 0x75
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 8]
        add eax, 64h
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 FE 3F CF FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x3f
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 F7 41 FF FF: call 0x58787c10
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 2C FF FF FF: jmp 0x5879394b
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        add edx, 64h
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 DC 3F CF FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x3f
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 28h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 4D 25 CF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x25
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 02 FF FF FF: jmp 0x5879394b
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
