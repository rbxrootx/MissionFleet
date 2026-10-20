// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050D250 .. +0xA1 bytes.
extern "C" __declspec(naked) void FUN_0050d250_0050D250() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 23: je 0x50d285
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 28h
        ; Exact mapped bytes E8 14 59 02 00: call 0x532b81
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x59
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x50d285
        __asm _emit 0x74
        __asm _emit 0x14
        push 35fh
        push 5cba5ch
        ; Exact mapped bytes E8 80 77 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50d285
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D1: jne 0x50d25c
        __asm _emit 0x75
        __asm _emit 0xd1
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 68: call dword ptr [edx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x68
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 49: je 0x50d2e8
        __asm _emit 0x74
        __asm _emit 0x49
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        mov dword ptr [ebp - 8], eax
        push 366h
        push 5cba5ch
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 9C DE FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xde
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 1A: je 0x50d2e6
        __asm _emit 0x74
        __asm _emit 0x1a
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 90 F4 00 00 00: call dword ptr [eax + 0xf4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB B1: jmp 0x50d299
        __asm _emit 0xeb
        __asm _emit 0xb1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
