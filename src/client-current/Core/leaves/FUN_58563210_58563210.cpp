// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58563210 .. +0x123 bytes.
extern "C" __declspec(naked) void FUN_58563210_58563210() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 100h], 0
        ; Exact mapped bytes 0F 84 08 01 00 00: je 0x5856332f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 5ch], 0
        ; Exact mapped bytes 0F 85 FB 00 00 00: jne 0x5856332f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 10ch], 40000000h
        ; Exact mapped bytes 0F 85 E8 00 00 00: jne 0x5856332f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 11ch], 40000000h
        ; Exact mapped bytes 75 0F: jne 0x58563265
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0d8h], 1
        ; Exact mapped bytes EB 38: jmp 0x5856329d
        __asm _emit 0xeb
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 114h], 40000000h
        ; Exact mapped bytes 75 1C: jne 0x58563290
        __asm _emit 0x75
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 0cch]
        cdq
        sub eax, edx
        sar eax, 1
        add eax, 3
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0d8h], eax
        ; Exact mapped bytes EB 0D: jmp 0x5856329d
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0d8h], 3
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 0d8h]
        imul edx, dword ptr [ecx + 128h]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 0ach]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ach], edx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ach]
        cmp ecx, dword ptr [eax + 0b8h]
        ; Exact mapped bytes 7F 0C: jg 0x585632e2
        __asm _emit 0x7f
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0ach], 0
        ; Exact mapped bytes 7D 3A: jge 0x5856331c
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0ach], 0
        ; Exact mapped bytes 7D 0F: jge 0x585632fd
        __asm _emit 0x7d
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes EB 12: jmp 0x5856330f
        __asm _emit 0xeb
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [edx + 0ach], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10ch], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 92 03 00 00: call 0x585636c0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
