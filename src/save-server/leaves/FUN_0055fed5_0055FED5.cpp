// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055FED5 .. +0x97 bytes.
extern "C" __declspec(naked) void FUN_0055fed5_0055FED5() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0A EF F6 FF: call 0x4cedf1
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xef
        __asm _emit 0xf6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8ch], 0
        ; Exact mapped bytes 74 20: je 0x55ff13
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 88h], 0
        ; Exact mapped bytes 75 14: jne 0x55ff13
        __asm _emit 0x75
        __asm _emit 0x14
        push 504h
        push 67b3b8h
        ; Exact mapped bytes E8 32 8E FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x8e
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55ff13
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CE: jne 0x55fee7
        __asm _emit 0x75
        __asm _emit 0xce
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 90h], 0
        ; Exact mapped bytes 75 14: jne 0x55ff39
        __asm _emit 0x75
        __asm _emit 0x14
        push 505h
        push 67b3b8h
        ; Exact mapped bytes E8 0C 8E FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x8e
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55ff39
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x55ff19
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 94h], 8
        ; Exact mapped bytes 7E 14: jle 0x55ff5f
        __asm _emit 0x7e
        __asm _emit 0x14
        push 506h
        push 67b3b8h
        ; Exact mapped bytes E8 E6 8D FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x8d
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55ff5f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x55ff3f
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
