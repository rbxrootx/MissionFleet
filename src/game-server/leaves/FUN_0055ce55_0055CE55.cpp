// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055CE55 .. +0x97 bytes.
extern "C" __declspec(naked) void FUN_0055ce55_0055CE55() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5A 40 F9 FF: call 0x4f0ec1
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x40
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8ch], 0
        ; Exact mapped bytes 74 20: je 0x55ce93
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 88h], 0
        ; Exact mapped bytes 75 14: jne 0x55ce93
        __asm _emit 0x75
        __asm _emit 0x14
        push 504h
        push 5cebe0h
        ; Exact mapped bytes E8 72 7B FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x7b
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55ce93
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CE: jne 0x55ce67
        __asm _emit 0x75
        __asm _emit 0xce
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 90h], 0
        ; Exact mapped bytes 75 14: jne 0x55ceb9
        __asm _emit 0x75
        __asm _emit 0x14
        push 505h
        push 5cebe0h
        ; Exact mapped bytes E8 4C 7B FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x7b
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55ceb9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x55ce99
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 94h], 8
        ; Exact mapped bytes 7E 14: jle 0x55cedf
        __asm _emit 0x7e
        __asm _emit 0x14
        push 506h
        push 5cebe0h
        ; Exact mapped bytes E8 26 7B FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x7b
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55cedf
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x55cebf
        __asm _emit 0x75
        __asm _emit 0xda
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
