// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EFEA0 .. +0x9E bytes.
extern "C" __declspec(naked) void FUN_584efea0_584EFEA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 400h], 0
        xor ecx, ecx
        ; Exact mapped bytes 66 89 4D F8: mov word ptr [ebp - 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes EB 0C: jmp 0x584efeca
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 55 F8: mov dx, word ptr [ebp - 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes 66 83 C2 01: add dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 55 F8: mov word ptr [ebp - 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf8
        movzx eax, word ptr [ebp - 8]
        cmp eax, 100h
        ; Exact mapped bytes 7D 63: jge 0x584eff38
        __asm _emit 0x7d
        __asm _emit 0x63
        movzx ecx, word ptr [ebp - 8]
        shl ecx, 8
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        xor edx, edx
        ; Exact mapped bytes 66 89 55 F4: mov word ptr [ebp - 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf4
        ; Exact mapped bytes EB 0C: jmp 0x584efef4
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 45 F4: mov ax, word ptr [ebp - 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 66 83 C0 01: add ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        movzx ecx, word ptr [ebp - 0ch]
        cmp ecx, 8
        ; Exact mapped bytes 7D 2B: jge 0x584eff28
        __asm _emit 0x7d
        __asm _emit 0x2b
        movzx edx, word ptr [ebp - 4]
        and edx, 8000h
        ; Exact mapped bytes 74 12: je 0x584eff1b
        __asm _emit 0x74
        __asm _emit 0x12
        movzx eax, word ptr [ebp + 8]
        movzx ecx, word ptr [ebp - 4]
        shl ecx, 1
        xor eax, ecx
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes EB 0B: jmp 0x584eff26
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes 66 8B 55 FC: mov dx, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 66 D1 E2: shl dx, 1
        __asm _emit 0x66
        __asm _emit 0xd1
        __asm _emit 0xe2
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes EB C0: jmp 0x584efee8
        __asm _emit 0xeb
        __asm _emit 0xc0
        movzx eax, word ptr [ebp - 4]
        movzx ecx, word ptr [ebp - 8]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx*4], eax
        ; Exact mapped bytes EB 86: jmp 0x584efebe
        __asm _emit 0xeb
        __asm _emit 0x86
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
