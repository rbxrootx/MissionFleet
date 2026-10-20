// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B3140 .. +0xA8 bytes.
extern "C" __declspec(naked) void FUN_004b3140_004B3140() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        push ecx
        ; Exact mapped bytes E8 AE BC 00 00: call 0x4bee00
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp eax, 65h
        ; Exact mapped bytes 74 46: je 0x4b31a0
        __asm _emit 0x74
        __asm _emit 0x46
        mov edx, dword ptr [ebp + 8]
        add edx, 1
        mov dword ptr [ebp + 8], edx
        ; Exact mapped bytes 83 3D 88 18 5D 00 01: cmp dword ptr [0x5d1888], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E 16: jle 0x4b3182
        __asm _emit 0x7e
        __asm _emit 0x16
        push 4
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        push ecx
        ; Exact mapped bytes E8 F6 06 00 00: call 0x4b3870
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 18: jmp 0x4b319a
        __asm _emit 0xeb
        __asm _emit 0x18
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        ; Exact mapped bytes 8B 0D 7C 16 5D 00: mov ecx, dword ptr [0x5d167c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        xor edx, edx
        ; Exact mapped bytes 66 8B 14 41: mov dx, word ptr [ecx + eax*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x41
        and edx, 4
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 BA: jne 0x4b315a
        __asm _emit 0x75
        __asm _emit 0xba
        mov eax, dword ptr [ebp + 8]
        mov cl, byte ptr [eax]
        mov byte ptr [ebp - 8], cl
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes A0 8C 18 5D 00: mov al, byte ptr [0x5d188c]
        __asm _emit 0xa0
        __asm _emit 0x8c
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x00
        mov byte ptr [edx], al
        mov ecx, dword ptr [ebp + 8]
        add ecx, 1
        mov dword ptr [ebp + 8], ecx
        mov edx, dword ptr [ebp + 8]
        mov al, byte ptr [edx]
        mov byte ptr [ebp - 4], al
        mov ecx, dword ptr [ebp + 8]
        mov dl, byte ptr [ebp - 8]
        mov byte ptr [ecx], dl
        mov al, byte ptr [ebp - 4]
        mov byte ptr [ebp - 8], al
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        mov dword ptr [ebp + 8], eax
        test edx, edx
        ; Exact mapped bytes 75 D7: jne 0x4b31bb
        __asm _emit 0x75
        __asm _emit 0xd7
        mov esp, ebp
        pop ebp
        ret
    }
}
