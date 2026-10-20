// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D7FB0 .. +0x14E bytes.
extern "C" __declspec(naked) void FUN_004d7fb0_004D7FB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 9ch], 0
        ; Exact mapped bytes 75 05: jne 0x4d7fcd
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 28 01 00 00: jmp 0x4d80f5
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 9ch]
        push edx
        ; Exact mapped bytes FF 15 F8 B9 68 00: call dword ptr [0x68b9f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4d7ffa
        __asm _emit 0x75
        __asm _emit 0x14
        push 1fah
        push 6722d0h
        ; Exact mapped bytes E8 4B 0D 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x0d
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d7ffa
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4d7fe0
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 02: mov ax, word ptr [edx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x02
        mov ecx, dword ptr [ebp - 4]
        add ecx, eax
        push ecx
        ; Exact mapped bytes FF 15 E0 B7 68 00: call dword ptr [0x68b7e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 D4 00 00 00: jne 0x4d80f5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea edx, [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 B8 BF FA FF: call 0x483fe8
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xbf
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x4d8039
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 BC 00 00 00: jmp 0x4d80f5
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 98h], 0
        ; Exact mapped bytes 74 0F: je 0x4d8054
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 98h]
        push eax
        ; Exact mapped bytes E8 40 3F 01 00: call 0x4ebf94
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        push 0
        ; Exact mapped bytes E8 79 BF FA FF: call 0x483fe2
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xbf
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4d8086
        __asm _emit 0x7d
        __asm _emit 0x14
        push 209h
        push 6722d0h
        ; Exact mapped bytes E8 BF 0C 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x0c
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d8086
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4d806c
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        push 42h
        ; Exact mapped bytes FF 15 C8 B9 68 00: call dword ptr [0x68b9c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 98h], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 98h]
        push ecx
        ; Exact mapped bytes FF 15 F8 B9 68 00: call dword ptr [0x68b9f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        push 2
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        push 0
        ; Exact mapped bytes E8 17 BF FA FF: call 0x483fe2
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xbf
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 74 1C: je 0x4d80ec
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 98h]
        push eax
        ; Exact mapped bytes E8 B5 3E 01 00: call 0x4ebf94
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 98h], 0
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 E7 BE FA FF: call 0x483fdc
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xbe
        __asm _emit 0xfa
        __asm _emit 0xff
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
