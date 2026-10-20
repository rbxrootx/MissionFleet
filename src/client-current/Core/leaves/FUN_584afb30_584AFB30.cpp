// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AFB30 .. +0x95 bytes.
extern "C" __declspec(naked) void FUN_584afb30_584AFB30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 8]
        mov byte ptr [eax], 0
        mov ecx, dword ptr [ebp + 0ch]
        mov byte ptr [ecx], 7dh
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x584afb57
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 7D 62: jge 0x584afbbf
        __asm _emit 0x7d
        __asm _emit 0x62
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 28 01 00 00: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 99 FF FF FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 3D: je 0x584afbbd
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E8 00 00 00: call 0x584afc70
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, al
        xor ecx, 55h
        mov byte ptr [ebp - 1], cl
        movzx edx, byte ptr [ebp - 1]
        mov eax, dword ptr [ebp + 8]
        movzx ecx, byte ptr [eax]
        cmp edx, ecx
        ; Exact mapped bytes 7E 08: jle 0x584afba7
        __asm _emit 0x7e
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 8]
        mov al, byte ptr [ebp - 1]
        mov byte ptr [edx], al
        movzx ecx, byte ptr [ebp - 1]
        mov edx, dword ptr [ebp + 0ch]
        movzx eax, byte ptr [edx]
        cmp ecx, eax
        ; Exact mapped bytes 7D 08: jge 0x584afbbd
        __asm _emit 0x7d
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 0ch]
        mov dl, byte ptr [ebp - 1]
        mov byte ptr [ecx], dl
        ; Exact mapped bytes EB 8F: jmp 0x584afb4e
        __asm _emit 0xeb
        __asm _emit 0x8f
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
