// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0057A754 .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_0057a754_0057A754() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 31ah
        push 67d108h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 EF FA F5 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xfa
        __asm _emit 0xf5
        __asm _emit 0xff
        push 0
        push 14h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 E8 8C F2 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x57a796
        __asm _emit 0x75
        __asm _emit 0x14
        push 31bh
        push 67d108h
        ; Exact mapped bytes E8 AF E5 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xe5
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57a796
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x57a771
        __asm _emit 0x75
        __asm _emit 0xd5
        push 1
        push 0ch
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 BD 8C F2 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x8c
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x57a7c1
        __asm _emit 0x75
        __asm _emit 0x14
        push 31ch
        push 67d108h
        ; Exact mapped bytes E8 84 E5 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xe5
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57a7c1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x57a79c
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 0ch], -1
        ; Exact mapped bytes 74 04: je 0x57a7d4
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 27: jmp 0x57a7fb
        __asm _emit 0xeb
        __asm _emit 0x27
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        cmp ecx, 3
        ; Exact mapped bytes 75 18: jne 0x57a7f9
        __asm _emit 0x75
        __asm _emit 0x18
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 A4 00 00 00: call dword ptr [edx + 0xa4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x57a7fb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
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
