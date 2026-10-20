// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58589F20 .. +0x146 bytes.
extern "C" __declspec(naked) void FUN_58589f20_58589F20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 60h], 0
        ; Exact mapped bytes 7C 0B: jl 0x58589f3d
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 0B: jmp 0x58589f48
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        neg ecx
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 5ch], 0
        ; Exact mapped bytes 7E 11: jle 0x58589f68
        __asm _emit 0x7e
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ch]
        mov dword ptr [ecx + 0e8h], eax
        ; Exact mapped bytes EB 3E: jmp 0x58589fa6
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0e8h], 0
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 25: je 0x58589fa6
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 10h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e8h]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0e8h], eax
        ; Exact mapped bytes EB D5: jmp 0x58589f7b
        __asm _emit 0xeb
        __asm _emit 0xd5
        mov dword ptr [ebp - 18h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e8h]
        sub eax, 1
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 09: jmp 0x58589fc7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        sub ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 8C 91 00 00 00: jl 0x5858a062
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e8h]
        sub eax, 1
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 74 06: je 0x58589fe8
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 17: je 0x58589fff
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 0ch]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 68h], edx
        ; Exact mapped bytes EB 50: jmp 0x5858a04f
        __asm _emit 0xeb
        __asm _emit 0x50
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0fch], 1
        ; Exact mapped bytes 75 36: jne 0x5858a041
        __asm _emit 0x75
        __asm _emit 0x36
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 30: jne 0x5858a041
        __asm _emit 0x75
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 60h], 0
        ; Exact mapped bytes 7D 10: jge 0x5858a02a
        __asm _emit 0x7d
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 68h], 0bh
        ; Exact mapped bytes EB 0E: jmp 0x5858a038
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 68h], 0ch
        mov dword ptr [ebp - 18h], 1
        ; Exact mapped bytes EB 0E: jmp 0x5858a04f
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 68h], 0ah
        mov eax, dword ptr [ebp - 0ch]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes E9 5C FF FF FF: jmp 0x58589fbe
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
