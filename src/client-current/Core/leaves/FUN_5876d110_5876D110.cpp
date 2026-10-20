// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876D110 .. +0xB7 bytes.
extern "C" __declspec(naked) void FUN_5876d110_5876D110() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 5f09h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5876d135
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 73 60: jae 0x5876d19b
        __asm _emit 0x73
        __asm _emit 0x60
        mov edx, dword ptr [ebp - 4]
        add edx, 34ch
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 0D FF D1 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xff
        __asm _emit 0xd1
        __asm _emit 0xff
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 74 3F: je 0x5876d199
        __asm _emit 0x74
        __asm _emit 0x3f
        mov edx, dword ptr [ebp - 4]
        add edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 21ch]
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x5876d183
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 5f09h]
        or edx, 20h
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 5f09h], dl
        ; Exact mapped bytes EB 16: jmp 0x5876d199
        __asm _emit 0xeb
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 5f09h]
        or edx, 10h
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 5f09h], dl
        ; Exact mapped bytes EB 91: jmp 0x5876d12c
        __asm _emit 0xeb
        __asm _emit 0x91
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 5f09h]
        mov byte ptr [ecx + 5f08h], al
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 0F B6 91 08 5F 00 00: movzx dx, byte ptr [ecx + 0x5f08]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x91
        __asm _emit 0x08
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 16 5F 00 00: mov word ptr [eax + 0x5f16], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x16
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
