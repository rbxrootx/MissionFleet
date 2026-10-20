// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004826D0 .. +0xBE bytes.
extern "C" __declspec(naked) void FUN_004826d0_004826D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 1E: jne 0x48270a
        __asm _emit 0x75
        __asm _emit 0x1e
        push 63edc4h
        push 0
        push 77h
        push 63fbe0h
        push 2
        ; Exact mapped bytes E8 5F A7 FE FF: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xa7
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x48270a
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D6: jne 0x4826e6
        __asm _emit 0x75
        __asm _emit 0xd6
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        and eax, 83h
        test eax, eax
        ; Exact mapped bytes 74 5B: je 0x48277a
        __asm _emit 0x74
        __asm _emit 0x5b
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 C8 DF FF FF: call 0x4806f0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 09 0A 00 00: call 0x483140
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        ; Exact mapped bytes E8 CA 08 00 00: call 0x483010
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 7D 09: jge 0x482756
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes EB 24: jmp 0x48277a
        __asm _emit 0xeb
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 74 1B: je 0x48277a
        __asm _emit 0x74
        __asm _emit 0x1b
        push 2
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes E8 F3 4B FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x4b
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 1ch], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0ch], 0
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
