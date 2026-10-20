// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58556220 .. +0x149 bytes.
extern "C" __declspec(naked) void FUN_58556220_58556220() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 180h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 184h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 178h]
        cmp ecx, dword ptr [eax + 180h]
        ; Exact mapped bytes 75 18: jne 0x5855627d
        __asm _emit 0x75
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 17ch]
        cmp ecx, dword ptr [eax + 184h]
        ; Exact mapped bytes 0F 84 E6 00 00 00: je 0x58556363
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 178h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 17ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 3c8h]
        cdq
        idiv dword ptr [ecx + 3cch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 180h]
        mov dword ptr [eax + edx*8 + 188h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3c8h]
        cdq
        idiv dword ptr [ecx + 3cch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 184h]
        mov dword ptr [eax + edx*8 + 18ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3c8h]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3c8h], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 2B: je 0x58556327
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 174h]
        cmp ecx, dword ptr [eax + 3cch]
        ; Exact mapped bytes 7D 15: jge 0x58556325
        __asm _emit 0x7d
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 174h]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 174h], eax
        ; Exact mapped bytes EB 21: jmp 0x58556348
        __asm _emit 0xeb
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 174h], 0
        ; Exact mapped bytes 7E 15: jle 0x58556348
        __asm _emit 0x7e
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 174h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 174h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 3c8h]
        sub edx, dword ptr [ecx + 174h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 170h], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
