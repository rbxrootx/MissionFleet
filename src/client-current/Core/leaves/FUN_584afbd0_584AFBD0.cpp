// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AFBD0 .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_584afbd0_584AFBD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 8]
        mov byte ptr [eax], 0
        mov ecx, dword ptr [ebp + 0ch]
        mov byte ptr [ecx], 7dh
        movzx edx, word ptr [ebp + 10h]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 09: jmp 0x584afbf7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        movzx ecx, word ptr [ebp + 14h]
        cmp dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 7D 62: jge 0x584afc62
        __asm _emit 0x7d
        __asm _emit 0x62
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 85 00 00 00: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F6 FE FF FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 3D: je 0x584afc60
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 45 00 00 00: call 0x584afc70
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, al
        xor eax, 55h
        mov byte ptr [ebp - 1], al
        movzx ecx, byte ptr [ebp - 1]
        mov edx, dword ptr [ebp + 8]
        movzx eax, byte ptr [edx]
        cmp ecx, eax
        ; Exact mapped bytes 7E 08: jle 0x584afc4a
        __asm _emit 0x7e
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        mov dl, byte ptr [ebp - 1]
        mov byte ptr [ecx], dl
        movzx eax, byte ptr [ebp - 1]
        mov ecx, dword ptr [ebp + 0ch]
        movzx edx, byte ptr [ecx]
        cmp eax, edx
        ; Exact mapped bytes 7D 08: jge 0x584afc60
        __asm _emit 0x7d
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 0ch]
        mov cl, byte ptr [ebp - 1]
        mov byte ptr [eax], cl
        ; Exact mapped bytes EB 8C: jmp 0x584afbee
        __asm _emit 0xeb
        __asm _emit 0x8c
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
