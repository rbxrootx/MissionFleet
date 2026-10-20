// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5858C3E0 .. +0x16C bytes.
extern "C" __declspec(naked) void FUN_5858c3e0_5858C3E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 0c8h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 0c4h]
        ; Exact mapped bytes 7E 14: jle 0x5858c41a
        __asm _emit 0x7e
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c4h]
        mov dword ptr [eax + 0b4h], edx
        ; Exact mapped bytes EB 23: jmp 0x5858c43d
        __asm _emit 0xeb
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 0c8h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        cmp eax, 14h
        ; Exact mapped bytes 7D 0D: jge 0x5858c43d
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0b4h], 14h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 FE 00 00 00: je 0x5858c545
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 0c8h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov esi, eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5E FF FF FF: call 0x5858c3c0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 0F 84 DB 00 00 00: je 0x5858c545
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4E FF FF FF: call 0x5858c3c0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        imul edx, eax, 3e8h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0b4h], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 0b4h]
        sub eax, dword ptr [edx + 0c8h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0cch], 0
        ; Exact mapped bytes 7D 23: jge 0x5858c4c5
        __asm _emit 0x7d
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0b4h]
        cmp ecx, dword ptr [eax + 0c8h]
        ; Exact mapped bytes 7C 0D: jl 0x5858c4c3
        __asm _emit 0x7c
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0cch], 0
        ; Exact mapped bytes EB 21: jmp 0x5858c4e6
        __asm _emit 0xeb
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 0b4h]
        cmp edx, dword ptr [ecx + 0c8h]
        ; Exact mapped bytes 7F 0D: jg 0x5858c4e6
        __asm _emit 0x7f
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0cch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0cch]
        mov dword ptr [ebp - 0ch], edx
        imul ecx, dword ptr [ebp - 8], 0ah
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c4h]
        cdq
        mov esi, 64h
        idiv esi
        mov esi, eax
        mov eax, ecx
        cdq
        idiv esi
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 0cch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0cch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0cch]
        push ecx
        ; Exact mapped bytes E8 E1 4D F0 FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x4d
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 4
        cmp eax, 190h
        ; Exact mapped bytes 7E 0C: jle 0x5858c545
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 0cch], eax
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
