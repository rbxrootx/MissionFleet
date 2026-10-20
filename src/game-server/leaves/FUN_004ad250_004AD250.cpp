// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AD250 .. +0xFA bytes.
extern "C" __declspec(naked) void FUN_004ad250_004AD250() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push 19h
        ; Exact mapped bytes E8 93 7F 00 00: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 09: jmp 0x4ad271
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        mov al, byte ptr [edx]
        test eax, eax
        ; Exact mapped bytes 0F 84 B9 00 00 00: je 0x4ad339
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        mov dl, byte ptr [ecx]
        xor eax, eax
        mov al, byte ptr [edx + 5e03a1h]
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 61: je 0x4ad2f7
        __asm _emit 0x74
        __asm _emit 0x61
        push 1
        ; Exact mapped bytes 8B 0D 7C 02 5E 00: mov ecx, dword ptr [0x5e027c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        push ecx
        push 2
        lea edx, [ebp - 8]
        push edx
        push 2
        mov eax, dword ptr [ebp - 4]
        push eax
        push 100h
        ; Exact mapped bytes 8B 0D A4 04 5E 00: mov ecx, dword ptr [0x5e04a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 14 CE 00 00: call 0x4ba0d0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 0E: jne 0x4ad2d6
        __asm _emit 0x75
        __asm _emit 0x0e
        push 19h
        ; Exact mapped bytes E8 C1 7F 00 00: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        xor eax, eax
        ; Exact mapped bytes EB 70: jmp 0x4ad346
        __asm _emit 0xeb
        __asm _emit 0x70
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [ebp - 8]
        mov byte ptr [edx], al
        cmp dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes 7E 11: jle 0x4ad2f5
        __asm _emit 0x7e
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [ebp - 7]
        mov byte ptr [edx], al
        ; Exact mapped bytes EB 3D: jmp 0x4ad334
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        mov dl, byte ptr [ecx]
        xor eax, eax
        mov al, byte ptr [edx + 5e03a1h]
        and eax, 10h
        cmp eax, 10h
        ; Exact mapped bytes 75 14: jne 0x4ad322
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        mov dl, byte ptr [ecx]
        xor eax, eax
        mov al, byte ptr [edx + 5e02a0h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 0A: jmp 0x4ad32c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        mov dl, byte ptr [ecx]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [ebp - 10h]
        mov byte ptr [eax], cl
        ; Exact mapped bytes E9 2F FF FF FF: jmp 0x4ad268
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 19h
        ; Exact mapped bytes E8 50 7F 00 00: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
