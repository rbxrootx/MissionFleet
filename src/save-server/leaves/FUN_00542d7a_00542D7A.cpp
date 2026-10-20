// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00542D7A .. +0x132 bytes.
extern "C" __declspec(naked) void FUN_00542d7a_00542D7A() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 11h
        ; Exact mapped bytes 72 11: jb 0x542d97
        __asm _emit 0x72
        __asm _emit 0x11
        push 58h
        push 676978h
        ; Exact mapped bytes E8 AE 5F FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x5f
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x542d97
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x542d80
        __asm _emit 0x75
        __asm _emit 0xe3
        ; Exact mapped bytes 83 3D 5C 70 68 00 00: cmp dword ptr [0x68705c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 25: jne 0x542dcb
        __asm _emit 0x75
        __asm _emit 0x25
        ; Exact mapped bytes E8 35 FE FF FF: call 0x542be0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D 5C 70 68 00 00: cmp dword ptr [0x68705c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 11: jne 0x542dc5
        __asm _emit 0x75
        __asm _emit 0x11
        push 5eh
        push 676978h
        ; Exact mapped bytes E8 80 5F FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x5f
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x542dc5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x542dab
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes 83 3D 58 70 68 00 00: cmp dword ptr [0x687058], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x58
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 05: je 0x542dd9
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 CC 00 00 00: jmp 0x542ea5
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx*4 + 686e64h], 0
        ; Exact mapped bytes 75 71: jne 0x542e57
        __asm _emit 0x75
        __asm _emit 0x71
        push 686ea8h
        ; Exact mapped bytes FF 15 68 B9 68 00: call dword ptr [0x68b968]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax*4 + 686e64h], 0
        ; Exact mapped bytes 75 4E: jne 0x542e4c
        __asm _emit 0x75
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp + 8]
        imul ecx, ecx, 18h
        add ecx, 686ec0h
        push ecx
        ; Exact mapped bytes FF 15 74 B9 68 00: call dword ptr [0x68b974]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx*4 + 686e64h]
        add eax, 1
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx*4 + 686e64h], eax
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx*4 + 686e64h], 0
        ; Exact mapped bytes 75 11: jne 0x542e46
        __asm _emit 0x75
        __asm _emit 0x11
        push 6ch
        push 676978h
        ; Exact mapped bytes E8 FF 5E FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x5e
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x542e46
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C5: jne 0x542e11
        __asm _emit 0x75
        __asm _emit 0xc5
        push 686ea8h
        ; Exact mapped bytes FF 15 6C B9 68 00: call dword ptr [0x68b96c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        imul ecx, ecx, 18h
        add ecx, 686ec0h
        push ecx
        ; Exact mapped bytes FF 15 68 B9 68 00: call dword ptr [0x68b968]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx*4 + 686e20h]
        add eax, 1
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx*4 + 686e20h], eax
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx*4 + 686e20h], 0
        ; Exact mapped bytes 7F 11: jg 0x542e9f
        __asm _emit 0x7f
        __asm _emit 0x11
        push 74h
        push 676978h
        ; Exact mapped bytes E8 A6 5E FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x5e
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x542e9f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C5: jne 0x542e6a
        __asm _emit 0x75
        __asm _emit 0xc5
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
