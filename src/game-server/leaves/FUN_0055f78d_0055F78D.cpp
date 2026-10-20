// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055F78D .. +0xDC bytes.
extern "C" __declspec(naked) void FUN_0055f78d_0055F78D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 355h
        push 5cff18h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 B4 B9 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xb9
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x55f7c9
        __asm _emit 0x75
        __asm _emit 0x14
        push 356h
        push 5cff18h
        ; Exact mapped bytes E8 3C 52 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x52
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55f7c9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x55f7ac
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A9 86 FF FF: call 0x557e80
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x86
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 4
        ; Exact mapped bytes 74 14: je 0x55f7f0
        __asm _emit 0x74
        __asm _emit 0x14
        push 357h
        push 5cff18h
        ; Exact mapped bytes E8 15 52 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x52
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55f7f0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x55f7cf
        __asm _emit 0x75
        __asm _emit 0xd9
        push 58e460h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 20h]
        push edx
        ; Exact mapped bytes E8 7F C6 FE FF: call 0x54be86
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xc6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 0C: jne 0x55f81c
        __asm _emit 0x75
        __asm _emit 0x0c
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 19 37 FF FF: call 0x552f33
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 46: jmp 0x55f862
        __asm _emit 0xeb
        __asm _emit 0x46
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 51 18: call dword ptr [ecx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 30h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 30h], 0
        ; Exact mapped bytes 7D 0C: jge 0x55f84f
        __asm _emit 0x7d
        __asm _emit 0x0c
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E6 36 FF FF: call 0x552f33
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 13: jmp 0x55f862
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 4ch], 4
        ; Exact mapped bytes 75 0A: jne 0x55f862
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 4ch], 3
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
