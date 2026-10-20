// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00417E03 .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_00417e03_00417E03() {
    __asm {
        push ebp
        mov ebp, esp
        mov ecx, dword ptr [ebp + 8]
        push ebx
        push edi
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 3C: call dword ptr [eax + 0x3c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp + 10h]
        mov edx, eax
        xor eax, eax
        cmp dword ptr [ecx], eax
        setne al
        test edx, edx
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes 74 4D: je 0x417e70
        __asm _emit 0x74
        __asm _emit 0x4d
        mov ebx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 4]
        cmp dword ptr [eax + 18h], -1
        ; Exact mapped bytes 74 3B: je 0x417e6a
        __asm _emit 0x74
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp + 10h]
        mov edi, dword ptr [ecx + 4]
        cmp dword ptr [eax + 4], edi
        ; Exact mapped bytes 75 27: jne 0x417e61
        __asm _emit 0x75
        __asm _emit 0x27
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [eax + 18h], ecx
        ; Exact mapped bytes 75 1F: jne 0x417e61
        __asm _emit 0x75
        __asm _emit 0x1f
        mov ecx, dword ptr [eax + 24h]
        cmp ecx, -1
        ; Exact mapped bytes 75 0E: jne 0x417e58
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 20h]
        cmp ecx, -1
        ; Exact mapped bytes 74 20: je 0x417e72
        __asm _emit 0x74
        __asm _emit 0x20
        cmp ecx, ebx
        ; Exact mapped bytes 74 1C: je 0x417e72
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes EB 09: jmp 0x417e61
        __asm _emit 0xeb
        __asm _emit 0x09
        cmp dword ptr [eax + 20h], ebx
        ; Exact mapped bytes 77 04: ja 0x417e61
        __asm _emit 0x77
        __asm _emit 0x04
        cmp ebx, ecx
        ; Exact mapped bytes 76 11: jbe 0x417e72
        __asm _emit 0x76
        __asm _emit 0x11
        add eax, 28h
        cmp dword ptr [eax + 18h], -1
        ; Exact mapped bytes 75 CB: jne 0x417e35
        __asm _emit 0x75
        __asm _emit 0xcb
        mov edx, dword ptr [edx]
        test edx, edx
        ; Exact mapped bytes 75 B6: jne 0x417e26
        __asm _emit 0x75
        __asm _emit 0xb6
        xor eax, eax
        pop edi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
