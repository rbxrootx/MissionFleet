// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BABF0 .. +0x10C bytes.
extern "C" __declspec(naked) void FUN_587babf0_587BABF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 60h], 0
        ; Exact mapped bytes 7C 0B: jl 0x587bac0d
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 0B: jmp 0x587bac18
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
        ; Exact mapped bytes 7E 11: jle 0x587bac38
        __asm _emit 0x7e
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ch]
        mov dword ptr [ecx + 0e8h], eax
        ; Exact mapped bytes EB 3E: jmp 0x587bac76
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0e8h], 0
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 25: je 0x587bac76
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
        ; Exact mapped bytes EB D5: jmp 0x587bac4b
        __asm _emit 0xeb
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e8h]
        sub eax, 1
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 09: jmp 0x587bac90
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        sub ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7C 4B: jl 0x587bace1
        __asm _emit 0x7c
        __asm _emit 0x4b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e8h]
        sub eax, 1
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 74 0F: je 0x587bacb6
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 09: jne 0x587bacb6
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 0ah
        ; Exact mapped bytes EB 0E: jmp 0x587bacc4
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 0ch]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov dword ptr [ebp - 18h], edx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [eax + edx*4 + 68h], ecx
        mov eax, dword ptr [ebp - 0ch]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB A6: jmp 0x587bac87
        __asm _emit 0xeb
        __asm _emit 0xa6
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 60h], 0
        ; Exact mapped bytes 7D 0E: jge 0x587bacf8
        __asm _emit 0x7d
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 68h], 0bh
        mov esp, ebp
        pop ebp
        ret
    }
}
