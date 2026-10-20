// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043291E .. +0xC2 bytes.
extern "C" __declspec(naked) void FUN_0043291e_0043291E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 370h
        cmp dword ptr [ecx + edx + 16bdch], 1
        ; Exact mapped bytes 75 04: jne 0x43295c
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 74: jmp 0x4329d0
        __asm _emit 0xeb
        __asm _emit 0x74
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16c04h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 6E 71 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 5F 71 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 06: je 0x43299c
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 04: jne 0x4329a0
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 30: jmp 0x4329d0
        __asm _emit 0xeb
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 48 03 00 00: mov ax, word ptr [edx + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffe0h
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 48 03 00 00: mov dx, word ptr [ecx + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        and edx, 0ffe0h
        cmp eax, edx
        ; Exact mapped bytes 75 07: jne 0x4329ce
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x4329d0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 06 5E 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x5e
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
