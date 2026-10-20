// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056885B .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_0056885b_0056885B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 25: je 0x568892
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 14h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 EC AB F3 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xab
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x568892
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f6h
        push 67b070h
        ; Exact mapped bytes E8 B3 04 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x04
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x568892
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CF: jne 0x568867
        __asm _emit 0x75
        __asm _emit 0xcf
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 1F: jne 0x5688bd
        __asm _emit 0x75
        __asm _emit 0x1f
        lea edx, [ebp - 18h]
        push edx
        ; Exact mapped bytes 66 8B 45 08: mov ax, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 3E 3D FE FF: call 0x54c5ee
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x3d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp + 0ch], eax
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 10h], 1
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x5688d3
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 55 08: mov dx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 11: mov word ptr [ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x11
        push 1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 75 FB FF FF: call 0x568456
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 0ch
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 14h
        push ecx
        ; Exact mapped bytes E8 CC CF EF FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xcf
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 0ch
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
