// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0057B540 .. +0x10C bytes.
extern "C" __declspec(naked) void FUN_0057b540_0057B540() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        sub eax, 70h
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ecx], 0
        mov esi, dword ptr [ebp + 0ch]
        mov ecx, 5
        lea edi, [ebp - 14h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov edx, dword ptr [ebp - 14h]
        and edx, 0ffffh
        cmp edx, 3
        ; Exact mapped bytes 75 0D: jne 0x57b583
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes 75 07: jne 0x57b583
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 1
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 75 24: jne 0x57b5b3
        __asm _emit 0x75
        __asm _emit 0x24
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 75 1B: jne 0x57b5b3
        __asm _emit 0x75
        __asm _emit 0x1b
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 8], -1
        ; Exact mapped bytes 75 12: jne 0x57b5b3
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 0ch], -1
        ; Exact mapped bytes 75 09: jne 0x57b5b3
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 10h], -1
        ; Exact mapped bytes 74 26: je 0x57b5d9
        __asm _emit 0x74
        __asm _emit 0x26
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 9D DC FF FF: call 0x57925c
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x57b5d9
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 80040064h
        ; Exact mapped bytes EB 6A: jmp 0x57b643
        __asm _emit 0xeb
        __asm _emit 0x6a
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 38h], 0
        ; Exact mapped bytes 75 18: jne 0x57b5fa
        __asm _emit 0x75
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 18h]
        add edx, 38h
        push edx
        ; Exact mapped bytes FF 15 94 C2 68 00: call dword ptr [0x68c294]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x57b5fa
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 8007000eh
        ; Exact mapped bytes EB 49: jmp 0x57b643
        __asm _emit 0xeb
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 75 14: jne 0x57b617
        __asm _emit 0x75
        __asm _emit 0x14
        push 543h
        push 67d108h
        ; Exact mapped bytes E8 2E D7 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xd7
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57b617
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x57b5fa
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 38h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 38h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
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
