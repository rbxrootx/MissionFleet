// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00580225 .. +0xF9 bytes.
extern "C" __declspec(naked) void FUN_00580225_00580225() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], 4
        mov eax, dword ptr [ebp + 0ch]
        and eax, 0ffffh
        cmp eax, 0fh
        ; Exact mapped bytes 72 14: jb 0x580256
        __asm _emit 0x72
        __asm _emit 0x14
        push 218h
        push 67849ch
        ; Exact mapped bytes E8 EF 8A FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x8a
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x580256
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D9: jne 0x580235
        __asm _emit 0x75
        __asm _emit 0xd9
        mov edx, dword ptr [ebp + 0ch]
        and edx, 0ffffh
        mov eax, dword ptr [ebp - 4]
        add eax, dword ptr [edx*4 + 63a3d0h]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x58028c
        __asm _emit 0x75
        __asm _emit 0x14
        push 21fh
        push 67849ch
        ; Exact mapped bytes E8 B9 8A FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x8a
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x58028c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x580272
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        mov al, byte ptr [edx]
        test eax, eax
        ; Exact mapped bytes 74 75: je 0x580312
        __asm _emit 0x74
        __asm _emit 0x75
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        mov dl, byte ptr [ecx]
        cmp edx, 0ffh
        ; Exact mapped bytes 74 5B: je 0x580307
        __asm _emit 0x74
        __asm _emit 0x5b
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        and ecx, 40h
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x5802c3
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 63a40ch
        ; Exact mapped bytes EB 07: jmp 0x5802ca
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 63a448h
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        mov al, byte ptr [edx]
        and al, 0bfh
        cmp eax, 0fh
        ; Exact mapped bytes 72 14: jb 0x5802ec
        __asm _emit 0x72
        __asm _emit 0x14
        push 22bh
        push 67849ch
        ; Exact mapped bytes E8 59 8A FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x8a
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5802ec
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x5802ca
        __asm _emit 0x75
        __asm _emit 0xd8
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        mov al, byte ptr [edx]
        and al, 0bfh
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        add edx, dword ptr [ecx + eax*4]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes EB 80: jmp 0x580292
        __asm _emit 0xeb
        __asm _emit 0x80
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
