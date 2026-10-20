// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00542C7B .. +0xFF bytes.
extern "C" __declspec(naked) void FUN_00542c7b_00542C7B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        ; Exact mapped bytes 83 3D 5C 70 68 00 00: cmp dword ptr [0x68705c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 E4 00 00 00: je 0x542d73
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 5C 70 68 00: mov eax, dword ptr [0x68705c]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        sub eax, 1
        ; Exact mapped bytes A3 5C 70 68 00: mov dword ptr [0x68705c], eax
        __asm _emit 0xa3
        __asm _emit 0x5c
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 5C 70 68 00 00: cmp dword ptr [0x68705c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 11: je 0x542cb6
        __asm _emit 0x74
        __asm _emit 0x11
        push 3fh
        push 676978h
        ; Exact mapped bytes E8 8F 60 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x60
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x542cb6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D3: jne 0x542c8f
        __asm _emit 0x75
        __asm _emit 0xd3
        ; Exact mapped bytes 83 3D 58 70 68 00 00: cmp dword ptr [0x687058], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x58
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 AA 00 00 00: jne 0x542d73
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 686ea8h
        ; Exact mapped bytes FF 15 70 B9 68 00: call dword ptr [0x68b970]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x542ce6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 11h
        ; Exact mapped bytes 0F 8D 83 00 00 00: jge 0x542d73
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax*4 + 686e20h], 0
        ; Exact mapped bytes 74 11: je 0x542d0e
        __asm _emit 0x74
        __asm _emit 0x11
        push 4ah
        push 676978h
        ; Exact mapped bytes E8 37 60 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x60
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x542d0e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DC: jne 0x542cf0
        __asm _emit 0x75
        __asm _emit 0xdc
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx*4 + 686e64h], 0
        ; Exact mapped bytes 74 4D: je 0x542d6e
        __asm _emit 0x74
        __asm _emit 0x4d
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 18h
        add eax, 686ec0h
        push eax
        ; Exact mapped bytes FF 15 70 B9 68 00: call dword ptr [0x68b970]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx*4 + 686e64h]
        sub edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax*4 + 686e64h], edx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx*4 + 686e64h], 0
        ; Exact mapped bytes 74 11: je 0x542d68
        __asm _emit 0x74
        __asm _emit 0x11
        push 4fh
        push 676978h
        ; Exact mapped bytes E8 DD 5F FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x5f
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x542d68
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C5: jne 0x542d33
        __asm _emit 0x75
        __asm _emit 0xc5
        ; Exact mapped bytes E9 6A FF FF FF: jmp 0x542cdd
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
