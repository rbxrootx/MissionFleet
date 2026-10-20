// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050B43E .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_0050b43e_0050B43E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 28h
        ; Exact mapped bytes E8 2C 77 02 00: call 0x532b81
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 52: jne 0x50b4ab
        __asm _emit 0x75
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 8]
        add ecx, 28h
        ; Exact mapped bytes E8 B8 C0 FD FF: call 0x4e751c
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xc0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 4bh
        push 5cba5ch
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 E9 FC FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        push 585e68h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0C FC FE FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x50b499
        __asm _emit 0x75
        __asm _emit 0x11
        push 4ch
        push 5cba5ch
        ; Exact mapped bytes E8 6C 95 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x95
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50b499
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x50b477
        __asm _emit 0x75
        __asm _emit 0xd8
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3ch], 0
        ; Exact mapped bytes EB 9F: jmp 0x50b44a
        __asm _emit 0xeb
        __asm _emit 0x9f
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
