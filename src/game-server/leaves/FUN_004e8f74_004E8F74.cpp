// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E8F74 .. +0xA4 bytes.
extern "C" __declspec(naked) void FUN_004e8f74_004E8F74() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        push 0dch
        push 5c4f6ch
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 D0 21 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 75 04: jne 0x4e8f9d
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 75: jmp 0x4e9012
        __asm _emit 0xeb
        __asm _emit 0x75
        ; Exact mapped bytes 66 8B 55 08: mov dx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 36 03 00 00: call 0x4e92e0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        xor edx, edx
        div dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        lea edx, [ecx + edx*4]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 08: jmp 0x4e8fd0
        __asm _emit 0xeb
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 3A: je 0x4e9010
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 04: mov dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        cmp edx, eax
        ; Exact mapped bytes 75 1D: jne 0x4e9008
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B1 FD FF FF: call 0x4e8db2
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 0A: jmp 0x4e9012
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB B8: jmp 0x4e8fc8
        __asm _emit 0xeb
        __asm _emit 0xb8
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
