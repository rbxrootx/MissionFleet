// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00459736 .. +0x91 bytes.
extern "C" __declspec(naked) void FUN_00459736_00459736() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        and eax, 0ffffh
        cmp eax, 2
        ; Exact mapped bytes 74 22: je 0x45976f
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 0ffffh
        cmp ecx, 0bh
        ; Exact mapped bytes 74 14: je 0x45976f
        __asm _emit 0x74
        __asm _emit 0x14
        push 119h
        push 678664h
        ; Exact mapped bytes E8 D6 F5 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xf5
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x45976f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CB: jne 0x459740
        __asm _emit 0x75
        __asm _emit 0xcb
        mov eax, dword ptr [ebp + 0ch]
        and eax, 0ffffh
        cmp eax, 0bh
        ; Exact mapped bytes 75 26: jne 0x4597a8
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 C7 01 0B 00: mov word ptr [ecx], 0xb
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 55 08: movsx edx, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x08
        test edx, edx
        ; Exact mapped bytes 75 0B: jne 0x45979d
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 C7 40 08 00 00: mov word ptr [eax + 8], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x4597a6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 C7 41 08 FF FF: mov word ptr [ecx + 8], 0xffff
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 13: jmp 0x4597bb
        __asm _emit 0xeb
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 C7 02 02 00: mov word ptr [edx], 2
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 4D 08: mov cx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 48 08: mov word ptr [eax + 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x08
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
