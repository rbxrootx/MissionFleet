// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0058770F .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_0058770f_0058770F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x587738
        __asm _emit 0x75
        __asm _emit 0x14
        push 15eh
        push 67d938h
        ; Exact mapped bytes E8 0D 16 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x16
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x587738
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x58771b
        __asm _emit 0x75
        __asm _emit 0xdd
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 08 A7 FA FF: call 0x531e4e
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xa7
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 75 1B: jne 0x58776a
        __asm _emit 0x75
        __asm _emit 0x1b
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 D4 B5 68 00: call dword ptr [0x68b5d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb5
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 19: jmp 0x587783
        __asm _emit 0xeb
        __asm _emit 0x19
        lea edx, [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes FF 15 D4 B5 68 00: call dword ptr [0x68b5d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb5
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], eax
        mov eax, dword ptr [ebp + 8]
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
