// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054F8FB .. +0x10C bytes.
extern "C" __declspec(naked) void FUN_0054f8fb_0054F8FB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x54f91b
        __asm _emit 0x75
        __asm _emit 0x11
        push 64h
        push 5cf710h
        ; Exact mapped bytes E8 EA 50 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54f91b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x54f904
        __asm _emit 0x75
        __asm _emit 0xe3
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7C 11: jl 0x54f938
        __asm _emit 0x7c
        __asm _emit 0x11
        push 65h
        push 5cf710h
        ; Exact mapped bytes E8 CD 50 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54f938
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x54f921
        __asm _emit 0x75
        __asm _emit 0xe3
        mov edx, dword ptr [ebp + 0ch]
        sar edx, 1fh
        and edx, 1
        cmp edx, 1
        ; Exact mapped bytes 75 65: jne 0x54f9b1
        __asm _emit 0x75
        __asm _emit 0x65
        mov eax, dword ptr [ebp + 0ch]
        sar eax, 10h
        and eax, 1fffh
        cmp eax, 3
        ; Exact mapped bytes 75 55: jne 0x54f9b1
        __asm _emit 0x75
        __asm _emit 0x55
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 0ffffh
        cmp ecx, 100h
        ; Exact mapped bytes 7D 44: jge 0x54f9b1
        __asm _emit 0x7d
        __asm _emit 0x44
        mov edx, dword ptr [ebp + 0ch]
        and edx, 0ffffh
        test edx, edx
        ; Exact mapped bytes 75 11: jne 0x54f98b
        __asm _emit 0x75
        __asm _emit 0x11
        push 6eh
        push 5cf710h
        ; Exact mapped bytes E8 7A 50 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54f98b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DC: jne 0x54f96d
        __asm _emit 0x75
        __asm _emit 0xdc
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 0ffffh
        push ecx
        ; Exact mapped bytes E8 8E C2 FA FF: call 0x4fbc2e
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xc2
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp + 0ch]
        and edx, 0ffffh
        mov dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes EB 3B: jmp 0x54f9ec
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 7ffcff00h
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 77 1C: ja 0x54f9e5
        __asm _emit 0x77
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 24 95 07 FA 54 00: jmp dword ptr [edx*4 + 0x54fa07]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x07
        __asm _emit 0xfa
        __asm _emit 0x54
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0bh
        ; Exact mapped bytes EB 10: jmp 0x54f9ec
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x54f9ec
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 10h], eax
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
