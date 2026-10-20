// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00516EDB .. +0xCF bytes.
extern "C" __declspec(naked) void FUN_00516edb_00516EDB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 0ch]
        and al, 0feh
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x516f04
        __asm _emit 0x74
        __asm _emit 0x14
        push 288h
        push 674cach
        ; Exact mapped bytes E8 41 1E 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x516f04
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x516ee7
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 23: je 0x516f33
        __asm _emit 0x74
        __asm _emit 0x23
        push -1
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 27 C5 F8 FF: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xc5
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x516f33
        __asm _emit 0x75
        __asm _emit 0x14
        push 289h
        push 674cach
        ; Exact mapped bytes E8 12 1E 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x516f33
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D1: jne 0x516f0a
        __asm _emit 0x75
        __asm _emit 0xd1
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 75 4A: jne 0x516f8c
        __asm _emit 0x75
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F4 FA FF FF: call 0x516a3e
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 78h
        ; Exact mapped bytes E8 41 5C FB FF: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x5c
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        add ecx, 78h
        ; Exact mapped bytes E8 43 DE 00 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 14h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        and al, 0feh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        or eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], eax
        ; Exact mapped bytes EB 15: jmp 0x516fa1
        __asm _emit 0xeb
        __asm _emit 0x15
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 46fh
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 98 46 01 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
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
