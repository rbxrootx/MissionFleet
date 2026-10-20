// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E6A33 .. +0xD6 bytes.
extern "C" __declspec(naked) void FUN_004e6a33_004E6A33() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x4e6a5c
        __asm _emit 0x75
        __asm _emit 0x14
        push 18fh
        push 6733e0h
        ; Exact mapped bytes E8 E9 22 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e6a5c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4e6a3f
        __asm _emit 0x75
        __asm _emit 0xdd
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 E4 B3 04 00: call 0x531e4e
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xb3
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 4]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 74 37: je 0x4e6aaf
        __asm _emit 0x74
        __asm _emit 0x37
        lea edx, [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 D4 B5 68 00: call dword ptr [0x68b5d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb5
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e6aa9
        __asm _emit 0x75
        __asm _emit 0x14
        push 193h
        push 6733e0h
        ; Exact mapped bytes E8 9C 22 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x22
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e6aa9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 C9: jne 0x4e6a78
        __asm _emit 0x75
        __asm _emit 0xc9
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 74 37: je 0x4e6aef
        __asm _emit 0x74
        __asm _emit 0x37
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 D4 B5 68 00: call dword ptr [0x68b5d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb5
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e6ae9
        __asm _emit 0x75
        __asm _emit 0x14
        push 195h
        push 6733e0h
        ; Exact mapped bytes E8 5C 22 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x22
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e6ae9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C9: jne 0x4e6ab8
        __asm _emit 0x75
        __asm _emit 0xc9
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
