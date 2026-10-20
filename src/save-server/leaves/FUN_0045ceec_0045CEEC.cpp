// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045CEEC .. +0x9F bytes.
extern "C" __declspec(naked) void FUN_0045ceec_0045CEEC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9F E6 0E 00: call 0x54b59f
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xe6
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x45cf18
        __asm _emit 0x74
        __asm _emit 0x14
        push 7e0h
        push 678664h
        ; Exact mapped bytes E8 2D BE 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xbe
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x45cf18
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x45cef8
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 79 E6 0E 00: call 0x54b59f
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xe6
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x45cf3e
        __asm _emit 0x74
        __asm _emit 0x14
        push 7e1h
        push 678664h
        ; Exact mapped bytes E8 07 BE 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xbe
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x45cf3e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x45cf1e
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [edx]
        push ecx
        ; Exact mapped bytes E8 35 F9 FF FF: call 0x45c888
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes DD 5D F4: fstp qword ptr [ebp - 0xc]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf4
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [edx]
        push ecx
        ; Exact mapped bytes E8 23 F9 FF FF: call 0x45c888
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes DC 5D F4: fcomp qword ptr [ebp - 0xc]
        __asm _emit 0xdc
        __asm _emit 0x5d
        __asm _emit 0xf4
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 1
        ; Exact mapped bytes 74 09: je 0x45cf78
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes EB 07: jmp 0x45cf7f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 10h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
