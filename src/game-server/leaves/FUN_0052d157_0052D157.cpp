// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052D157 .. +0x7B bytes.
extern "C" __declspec(naked) void FUN_0052d157_0052D157() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52d16a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 F3: jne 0x52d163
        __asm _emit 0x75
        __asm _emit 0xf3
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 74 01: je 0x52d177
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 F3: jne 0x52d170
        __asm _emit 0x75
        __asm _emit 0xf3
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 74 01: je 0x52d184
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 F3: jne 0x52d17d
        __asm _emit 0x75
        __asm _emit 0xf3
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 88 FE FF FF: call 0x52d01e
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 28: je 0x52d1c7
        __asm _emit 0x74
        __asm _emit 0x28
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 55 1C FC FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 10000000h
        neg eax
        sbb eax, eax
        inc eax
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8B F3 FF FF: call 0x52c54b
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x52d1c9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
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
