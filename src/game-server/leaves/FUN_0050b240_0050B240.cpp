// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050B240 .. +0xCF bytes.
extern "C" __declspec(naked) void FUN_0050b240_0050B240() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57ebcdh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 79 CA FE FF: call 0x4f7ce0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xca
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1ch
        ; Exact mapped bytes E8 8E 5C 02 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 20h
        ; Exact mapped bytes E8 7F 5C 02 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        push 0ah
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 28h
        ; Exact mapped bytes E8 57 BD FD FF: call 0x4e6ff0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xbd
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 587c7ch
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 24h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 44h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 48h], 1
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4ch], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 28h
        ; Exact mapped bytes E8 A8 78 02 00: call 0x532b81
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x50b2ee
        __asm _emit 0x75
        __asm _emit 0x11
        push 2bh
        push 5cba5ch
        ; Exact mapped bytes E8 17 97 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x97
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50b2ee
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x50b2ce
        __asm _emit 0x75
        __asm _emit 0xda
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
