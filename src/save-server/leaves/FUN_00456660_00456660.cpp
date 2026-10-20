// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00456660 .. +0x121 bytes.
extern "C" __declspec(naked) void FUN_00456660_00456660() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 21: jne 0x45668d
        __asm _emit 0x75
        __asm _emit 0x21
        push 677764h
        push 0
        push 3a1h
        push 677614h
        push 2
        ; Exact mapped bytes E8 DC 67 01 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x45668d
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D3: jne 0x456666
        __asm _emit 0x75
        __asm _emit 0xd3
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 0ffffh
        and ecx, 4000h
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x4566b2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 20h], 1
        ; Exact mapped bytes EB 0A: jmp 0x4566bc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 20h], 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 30h]
        mov dword ptr [ecx + 14h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 20h]
        mov dword ptr [eax + 24h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 55 10: mov dx, word ptr [ebp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 51 30: mov word ptr [ecx + 0x30], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x30
        mov eax, dword ptr [ebp + 8]
        mov cl, byte ptr [ebp + 18h]
        mov byte ptr [eax + 32h], cl
        mov edx, dword ptr [ebp + 8]
        mov al, byte ptr [ebp + 1ch]
        mov byte ptr [edx + 33h], al
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 2ch], 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 24h]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], 0
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 0ch], 0
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 10h], 0
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 18h], 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [edx + 28h], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 1ch], 1
        cmp dword ptr [ebp + 28h], 0
        ; Exact mapped bytes 74 17: je 0x45675e
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 1ch]
        or al, 2
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 1ch], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 28h]
        mov dword ptr [edx + 8], eax
        cmp dword ptr [ebp + 2ch], 0
        ; Exact mapped bytes 74 18: je 0x45677c
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 1ch]
        or edx, 4
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 1ch], edx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 2ch]
        mov dword ptr [ecx + 0ch], edx
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
