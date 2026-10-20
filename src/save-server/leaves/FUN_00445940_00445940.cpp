// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00445940 .. +0xD4 bytes.
extern "C" __declspec(naked) void FUN_00445940_00445940() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 28h], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 24h]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 29: je 0x445988
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 74 1E: je 0x445988
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 24h]
        mov dl, byte ptr [ecx]
        mov byte ptr [eax], dl
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB CF: jmp 0x445957
        __asm _emit 0xeb
        __asm _emit 0xcf
        mov edx, dword ptr [ebp - 24h]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 61: jne 0x4459f1
        __asm _emit 0x75
        __asm _emit 0x61
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 74 4E: je 0x4459ef
        __asm _emit 0x74
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 08: jne 0x4459be
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 2ch], edx
        ; Exact mapped bytes EB 17: jmp 0x4459d5
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 91 02 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 0ch]
        sub eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 4]
        sub edx, eax
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 4], ecx
        ; Exact mapped bytes EB 1A: jmp 0x445a0b
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov dl, byte ptr [ebp - 20h]
        mov byte ptr [ebp - 1ch], dl
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 75 21 00 00: call 0x447b80
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
