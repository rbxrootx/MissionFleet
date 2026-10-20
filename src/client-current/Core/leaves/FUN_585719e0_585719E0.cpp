// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585719E0 .. +0x112 bytes.
extern "C" __declspec(naked) void FUN_585719e0_585719E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        add ecx, 10h
        push ecx
        ; Exact mapped bytes E8 4A F6 2B 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xf6
        __asm _emit 0x2b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 4], 0
        push 4
        mov eax, dword ptr [ebp + 8]
        add eax, 4
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 73 AE 2D 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xae
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        add edx, 4
        mov dword ptr [ebp - 4], edx
        push 4
        mov eax, dword ptr [ebp + 8]
        add eax, 8
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 52 AE 2D 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xae
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        add edx, 4
        mov dword ptr [ebp - 4], edx
        push 4
        mov eax, dword ptr [ebp + 8]
        add eax, 0ch
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 31 AE 2D 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xae
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        add edx, 4
        mov dword ptr [ebp - 4], edx
        push 4
        mov eax, dword ptr [ebp + 8]
        add eax, 10h
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 10 AE 2D 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xae
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        add edx, 4
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 ED AD 2D 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xad
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 10h]
        add edx, 10h
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        push 0
        push 9
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B0 AE 00 00: call 0x5857c970
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 19: je 0x58571ae0
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 75 F5 2B 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xf5
        __asm _emit 0x2b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 25 DD 00 00: call 0x5857f810
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
