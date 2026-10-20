// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004988BF .. +0x146 bytes.
extern "C" __declspec(naked) void FUN_004988bf_004988BF() {
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
        ; Exact mapped bytes 0F 85 1D 01 00 00: jne 0x4989fa
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
        ; Exact mapped bytes 75 07: jne 0x4988f6
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 06 01 00 00: jmp 0x4989fc
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 75 14: jne 0x498913
        __asm _emit 0x75
        __asm _emit 0x14
        push 0db3h
        push 5ca8a4h
        ; Exact mapped bytes E8 F2 C0 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xc0
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x498913
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4988f6
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 54h], 0
        ; Exact mapped bytes 75 14: jne 0x498936
        __asm _emit 0x75
        __asm _emit 0x14
        push 0db4h
        push 5ca8a4h
        ; Exact mapped bytes E8 CF C0 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xc0
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x498936
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x498919
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 50h]
        ; Exact mapped bytes E8 29 21 00 00: call 0x49aa70
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 54h]
        ; Exact mapped bytes E8 DD 03 00 00: call 0x498d30
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 54h]
        ; Exact mapped bytes E8 32 05 00 00: call 0x498e90
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 50h]
        ; Exact mapped bytes E8 07 21 00 00: call 0x49aa70
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 54h]
        ; Exact mapped bytes E8 DB 0E 00 00: call 0x499850
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 54h]
        ; Exact mapped bytes E8 B0 0E 00 00: call 0x499830
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 10h], eax
        ; Exact mapped bytes 74 72: je 0x4989fa
        __asm _emit 0x74
        __asm _emit 0x72
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 54h]
        ; Exact mapped bytes E8 9D 0E 00 00: call 0x499830
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 10h], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 14h]
        push eax
        ; Exact mapped bytes FF 15 84 2A 5E 00: call dword ptr [0x5e2a84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 10h]
        imul edx, edx, 28h
        push edx
        ; Exact mapped bytes FF 15 80 2A 5E 00: call dword ptr [0x5e2a80]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 14h], eax
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 14h], 0
        ; Exact mapped bytes 75 14: jne 0x4989d9
        __asm _emit 0x75
        __asm _emit 0x14
        push 0dbeh
        push 5ca8a4h
        ; Exact mapped bytes E8 2C C0 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xc0
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4989d9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4989bc
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
        ; Exact mapped bytes E8 79 09 01 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x09
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
