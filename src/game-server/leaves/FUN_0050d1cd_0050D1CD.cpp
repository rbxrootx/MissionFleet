// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050D1CD .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_0050d1cd_0050D1CD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax], -1
        ; Exact mapped bytes 75 14: jne 0x50d1f5
        __asm _emit 0x75
        __asm _emit 0x14
        push 353h
        push 5cba5ch
        ; Exact mapped bytes E8 10 78 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50d1f5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DE: jne 0x50d1d9
        __asm _emit 0x75
        __asm _emit 0xde
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 75 04: jne 0x50d207
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 40: jmp 0x50d247
        __asm _emit 0xeb
        __asm _emit 0x40
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 28h
        ; Exact mapped bytes E8 F2 5A 02 00: call 0x532d08
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 585e68h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6A DE FE FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xde
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x50d23e
        __asm _emit 0x75
        __asm _emit 0x14
        push 358h
        push 5cba5ch
        ; Exact mapped bytes E8 C7 77 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50d23e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x50d219
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
