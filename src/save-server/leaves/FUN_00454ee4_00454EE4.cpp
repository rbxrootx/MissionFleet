// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00454EE4 .. +0x146 bytes.
extern "C" __declspec(naked) void FUN_00454ee4_00454EE4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        sub eax, 0d8h
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 10h], 0eh
        ; Exact mapped bytes 0F 85 1D 01 00 00: jne 0x45501f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 07: jne 0x454f1b
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 06 01 00 00: jmp 0x455021
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 75 14: jne 0x454f38
        __asm _emit 0x75
        __asm _emit 0x14
        push 0db3h
        push 67702ch
        ; Exact mapped bytes E8 0D 3E 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x3e
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x454f38
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x454f1b
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 54h], 0
        ; Exact mapped bytes 75 14: jne 0x454f5b
        __asm _emit 0x75
        __asm _emit 0x14
        push 0db4h
        push 67702ch
        ; Exact mapped bytes E8 EA 3D 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x3d
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x454f5b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x454f3e
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 50h]
        ; Exact mapped bytes E8 24 21 00 00: call 0x457090
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 54h]
        ; Exact mapped bytes E8 D8 03 00 00: call 0x455350
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 54h]
        ; Exact mapped bytes E8 2D 05 00 00: call 0x4554b0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 50h]
        ; Exact mapped bytes E8 02 21 00 00: call 0x457090
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 54h]
        ; Exact mapped bytes E8 D6 0E 00 00: call 0x455e70
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 54h]
        ; Exact mapped bytes E8 AB 0E 00 00: call 0x455e50
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 10h], eax
        ; Exact mapped bytes 74 72: je 0x45501f
        __asm _emit 0x74
        __asm _emit 0x72
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 54h]
        ; Exact mapped bytes E8 98 0E 00 00: call 0x455e50
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 10h], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 14h]
        push eax
        ; Exact mapped bytes FF 15 18 C3 68 00: call dword ptr [0x68c318]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 10h]
        imul edx, edx, 28h
        push edx
        ; Exact mapped bytes FF 15 20 C3 68 00: call dword ptr [0x68c320]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 14h], eax
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 14h], 0
        ; Exact mapped bytes 75 14: jne 0x454ffe
        __asm _emit 0x75
        __asm _emit 0x14
        push 0dbeh
        push 67702ch
        ; Exact mapped bytes E8 47 3D 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x3d
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x454ffe
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x454fe1
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 10h]
        imul edx, edx, 28h
        push edx
        push 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 14h]
        push ecx
        ; Exact mapped bytes E8 A4 08 01 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
