// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886A300 .. +0x9C bytes.
extern "C" __declspec(naked) void FUN_5886a300() {
    __asm {
        push ebx
        push ebp
        mov ebx, ecx
        mov eax, dword ptr [ebx + 100h]
        mov eax, dword ptr [eax + 80h]
        push esi
        push edi
        xor edi, edi
        test eax, eax
        ; Exact mapped bytes 74 57: je 0x5886a36f
        __asm _emit 0x74
        __asm _emit 0x57
        ; Exact mapped bytes 8B 2D A8 C1 98 58: mov ebp, dword ptr [0x5898c1a8]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov edi, eax
        inc edi
        cmp edi, 2
        ; Exact mapped bytes 7E 6F: jle 0x5886a398
        __asm _emit 0x7e
        __asm _emit 0x6f
        mov ecx, dword ptr [ebx + 100h]
        mov eax, dword ptr [ecx + 80h]
        push eax
        xor esi, esi
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        test eax, eax
        ; Exact mapped bytes 74 2D: je 0x5886a36b
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edi, edi
        mov edx, dword ptr [ebx + 100h]
        mov ecx, dword ptr [edx + 80h]
        mov al, byte ptr [ecx + esi]
        cmp al, 20h
        ; Exact mapped bytes 74 45: je 0x5886a398
        __asm _emit 0x74
        __asm _emit 0x45
        cmp al, 27h
        ; Exact mapped bytes 74 41: je 0x5886a398
        __asm _emit 0x74
        __asm _emit 0x41
        cmp al, 1
        ; Exact mapped bytes 7C 04: jl 0x5886a35f
        __asm _emit 0x7c
        __asm _emit 0x04
        cmp al, 1fh
        ; Exact mapped bytes 7E 39: jle 0x5886a398
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp al, 7fh
        ; Exact mapped bytes 74 35: je 0x5886a398
        __asm _emit 0x74
        __asm _emit 0x35
        push ecx
        inc esi
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        cmp esi, eax
        ; Exact mapped bytes 75 D5: jne 0x5886a340
        __asm _emit 0x75
        __asm _emit 0xd5
        test edi, edi
        ; Exact mapped bytes 75 22: jne 0x5886a391
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [ebx + 100h]
        ; Exact mapped bytes E8 C6 55 EF FF: call 0x5875f940
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x55
        __asm _emit 0xef
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 3e6h
        ; Exact mapped bytes E8 66 17 F0 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x17
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9F A9 EF FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xa9
        __asm _emit 0xef
        __asm _emit 0xff
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        xor edi, edi
        ; Exact mapped bytes EB D3: jmp 0x5886a36f
        __asm _emit 0xeb
        __asm _emit 0xd3
    }
}
