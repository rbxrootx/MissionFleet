// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00433AEB .. +0xDF bytes.
extern "C" __declspec(naked) void FUN_00433aeb_00433AEB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        imul eax, eax, 9ch
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 14 01: mov dx, word ptr [ecx + eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x01
        ; Exact mapped bytes 66 C1 EA 05: shr dx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 66 81 E2 FF 07: and dx, 0x7ff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0x07
        and edx, 0ffffh
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        cmp edx, eax
        ; Exact mapped bytes 75 18: jne 0x433b60
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0ffffh
        imul ecx, ecx, 9ch
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 78h]
        ; Exact mapped bytes EB 64: jmp 0x433bc4
        __asm _emit 0xeb
        __asm _emit 0x64
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ecx + 0a0h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 8]
        sub ecx, 1
        mov dword ptr [ebp - 8], ecx
        test eax, eax
        ; Exact mapped bytes 74 40: je 0x433bc2
        __asm _emit 0x74
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 8]
        imul edx, edx, 9ch
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 0C 10: mov cx, word ptr [eax + edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x10
        ; Exact mapped bytes 66 C1 E9 05: shr cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x05
        ; Exact mapped bytes 66 81 E1 FF 07: and cx, 0x7ff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0x07
        and ecx, 0ffffh
        mov edx, dword ptr [ebp + 8]
        and edx, 0ffffh
        cmp ecx, edx
        ; Exact mapped bytes 75 12: jne 0x433bc0
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 8]
        imul eax, eax, 9ch
        mov ecx, dword ptr [ebp - 4]
        lea eax, [ecx + eax + 78h]
        ; Exact mapped bytes EB 04: jmp 0x433bc4
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB B0: jmp 0x433b72
        __asm _emit 0xeb
        __asm _emit 0xb0
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
