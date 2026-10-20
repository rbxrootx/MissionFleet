// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00457FFD .. +0x11A bytes.
extern "C" __declspec(naked) void FUN_00457ffd_00457FFD() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 11: jne 0x45801c
        __asm _emit 0x75
        __asm _emit 0x11
        push 55h
        push 6778c8h
        ; Exact mapped bytes E8 29 0D 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x0d
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x45801c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E1: jne 0x458003
        __asm _emit 0x75
        __asm _emit 0xe1
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 1E: jne 0x458046
        __asm _emit 0x75
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 22 49 0D 00: call 0x52c952
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x49
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp + 0ch], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 08: jne 0x458041
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 CF 00 00 00: jmp 0x458110
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 C8 00 00 00: jmp 0x45810e
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 AB 48 0D 00: call 0x52c8fb
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x48
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 27: jne 0x45807b
        __asm _emit 0x75
        __asm _emit 0x27
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 3D 4A 0D 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x4a
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 DA FE FF FF: call 0x457f40
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp + 0ch], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 08: je 0x458077
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 02: jne 0x458079
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB AF: jmp 0x458028
        __asm _emit 0xeb
        __asm _emit 0xaf
        ; Exact mapped bytes EB CB: jmp 0x458046
        __asm _emit 0xeb
        __asm _emit 0xcb
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 11: jne 0x458092
        __asm _emit 0x75
        __asm _emit 0x11
        push 6eh
        push 6778c8h
        ; Exact mapped bytes E8 B3 0C 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x0c
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x458092
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x45807b
        __asm _emit 0x75
        __asm _emit 0xe3
        push 2
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 59 48 0D 00: call 0x52c8fb
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x48
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp + 0ch], eax
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 22 FF FF FF: call 0x457fd0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 54: je 0x458109
        __asm _emit 0x74
        __asm _emit 0x54
        mov eax, dword ptr [ebp + 10h]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x4580cb
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 84 40 0D 00: call 0x52c14b
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x4580e1
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 2
        test ecx, ecx
        ; Exact mapped bytes 74 22: je 0x4580f7
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 54 E7 07 00: call 0x4d6831
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xe7
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x4580f7
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 0B FF FF FF: call 0x457ffd
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes EB 12: jmp 0x458109
        __asm _emit 0xeb
        __asm _emit 0x12
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 F7 FE FF FF: call 0x457ffd
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp + 0ch], eax
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes EB 02: jmp 0x458110
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 95: jmp 0x4580a5
        __asm _emit 0xeb
        __asm _emit 0x95
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
