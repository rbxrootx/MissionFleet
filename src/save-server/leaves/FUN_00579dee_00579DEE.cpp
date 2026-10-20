// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00579DEE .. +0x118 bytes.
extern "C" __declspec(naked) void FUN_00579dee_00579DEE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        push 200h
        push 67d108h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 53 04 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x04
        __asm _emit 0xf6
        __asm _emit 0xff
        push 201h
        push 67d108h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 40 04 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0xf6
        __asm _emit 0xff
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 25: je 0x579e4b
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 8
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 33 96 F2 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x96
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x579e4b
        __asm _emit 0x75
        __asm _emit 0x14
        push 203h
        push 67d108h
        ; Exact mapped bytes E8 FA EE FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xee
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x579e4b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CF: jne 0x579e20
        __asm _emit 0x75
        __asm _emit 0xcf
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A9 00 00 00: call 0x579f06
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea edx, [ebp - 0ch]
        push edx
        ; Exact mapped bytes 66 A1 38 71 68 00: mov ax, word ptr [0x687138]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x38
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 25 E8 FE FF: call 0x568697
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 07 06 00 00: call 0x57a48d
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 0ch]
        push ecx
        ; Exact mapped bytes 66 8B 15 40 71 68 00: mov dx, word ptr [0x687140]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FB E7 FE FF: call 0x568697
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B4 02 00 00: call 0x57a15c
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 4F: je 0x579efd
        __asm _emit 0x74
        __asm _emit 0x4f
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FB 03 00 00: call 0x57a2b5
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x579efd
        __asm _emit 0x74
        __asm _emit 0x3f
        push 0
        lea edx, [ebp - 0ch]
        push edx
        ; Exact mapped bytes 66 A1 3C 71 68 00: mov ax, word ptr [0x68713c]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C4 E7 FE FF: call 0x568697
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A6 05 00 00: call 0x57a48d
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 0ch]
        push ecx
        ; Exact mapped bytes 66 8B 15 44 71 68 00: mov dx, word ptr [0x687144]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9A E7 FE FF: call 0x568697
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
