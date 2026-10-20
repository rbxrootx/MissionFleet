// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049D1A7 .. +0xBD bytes.
extern "C" __declspec(naked) void FUN_0049d1a7_0049D1A7() {
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
        cmp eax, 3
        ; Exact mapped bytes 74 30: je 0x49d1ee
        __asm _emit 0x74
        __asm _emit 0x30
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 0ffffh
        cmp ecx, 0ah
        ; Exact mapped bytes 74 22: je 0x49d1ee
        __asm _emit 0x74
        __asm _emit 0x22
        mov edx, dword ptr [ebp + 0ch]
        and edx, 0ffffh
        cmp edx, 0bh
        ; Exact mapped bytes 74 14: je 0x49d1ee
        __asm _emit 0x74
        __asm _emit 0x14
        push 12ch
        push 5cbe8ch
        ; Exact mapped bytes E8 17 78 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x78
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x49d1ee
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 BD: jne 0x49d1b1
        __asm _emit 0x75
        __asm _emit 0xbd
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 0ffffh
        cmp ecx, 0ah
        ; Exact mapped bytes 75 13: jne 0x49d215
        __asm _emit 0x75
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 C7 02 0A 00: mov word ptr [edx], 0xa
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], ecx
        ; Exact mapped bytes EB 43: jmp 0x49d258
        __asm _emit 0xeb
        __asm _emit 0x43
        mov edx, dword ptr [ebp + 0ch]
        and edx, 0ffffh
        cmp edx, 0bh
        ; Exact mapped bytes 75 24: jne 0x49d247
        __asm _emit 0x75
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 C7 00 0B 00: mov word ptr [eax], 0xb
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x0b
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 0B: jne 0x49d23c
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 C7 41 08 00 00: mov word ptr [ecx + 8], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x49d245
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 C7 42 08 FF FF: mov word ptr [edx + 8], 0xffff
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x42
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 11: jmp 0x49d258
        __asm _emit 0xeb
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 C7 00 03 00: mov word ptr [eax], 3
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
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
