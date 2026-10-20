// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054BDC0 .. +0xC6 bytes.
extern "C" __declspec(naked) void FUN_0054bdc0_0054BDC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x54bdd8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 4ch
        ; Exact mapped bytes 73 29: jae 0x54be07
        __asm _emit 0x73
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx*8 + 587f00h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 CE 08 F5 FF: call 0x49c6c0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x08
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x54be05
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx*8 + 587f04h]
        ; Exact mapped bytes EB 7B: jmp 0x54be80
        __asm _emit 0xeb
        __asm _emit 0x7b
        ; Exact mapped bytes EB C8: jmp 0x54bdcf
        __asm _emit 0xeb
        __asm _emit 0xc8
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 06: mov ax, word ptr [edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x06
        push eax
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 04: mov dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        push ecx
        push 5cc74ch
        push 5debb0h
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 14h
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x54be46
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 7D 2F: jge 0x54be7b
        __asm _emit 0x7d
        __asm _emit 0x2f
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax + 8]
        push ecx
        push 5cc760h
        lea edx, [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 8]
        push eax
        push 5debb0h
        ; Exact mapped bytes FF 15 90 23 5E 00: call dword ptr [0x5e2390]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB C2: jmp 0x54be3d
        __asm _emit 0xeb
        __asm _emit 0xc2
        mov eax, 5debb0h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
