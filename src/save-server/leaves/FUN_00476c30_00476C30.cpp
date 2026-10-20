// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00476C30 .. +0xA8 bytes.
extern "C" __declspec(naked) void FUN_00476c30_00476C30() {
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
        ; Exact mapped bytes E8 FE 53 00 00: call 0x47c040
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x53
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp eax, 65h
        ; Exact mapped bytes 74 46: je 0x476c90
        __asm _emit 0x74
        __asm _emit 0x46
        mov edx, dword ptr [ebp + 8]
        add edx, 1
        mov dword ptr [ebp + 8], edx
        ; Exact mapped bytes 83 3D CC E0 67 00 01: cmp dword ptr [0x67e0cc], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xcc
        __asm _emit 0xe0
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E 16: jle 0x476c72
        __asm _emit 0x7e
        __asm _emit 0x16
        push 4
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        push ecx
        ; Exact mapped bytes E8 56 9D FF FF: call 0x4709c0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 18: jmp 0x476c8a
        __asm _emit 0xeb
        __asm _emit 0x18
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        ; Exact mapped bytes 8B 0D C0 DE 67 00: mov ecx, dword ptr [0x67dec0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0xde
        __asm _emit 0x67
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
        ; Exact mapped bytes 75 BA: jne 0x476c4a
        __asm _emit 0x75
        __asm _emit 0xba
        mov eax, dword ptr [ebp + 8]
        mov cl, byte ptr [eax]
        mov byte ptr [ebp - 8], cl
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes A0 D0 E0 67 00: mov al, byte ptr [0x67e0d0]
        __asm _emit 0xa0
        __asm _emit 0xd0
        __asm _emit 0xe0
        __asm _emit 0x67
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
        ; Exact mapped bytes 75 D7: jne 0x476cab
        __asm _emit 0x75
        __asm _emit 0xd7
        mov esp, ebp
        pop ebp
        ret
    }
}
