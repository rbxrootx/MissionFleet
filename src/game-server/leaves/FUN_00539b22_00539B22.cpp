// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00539B22 .. +0x8C bytes.
extern "C" __declspec(naked) void FUN_00539b22_00539B22() {
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
        ; Exact mapped bytes 75 14: jne 0x539b4b
        __asm _emit 0x75
        __asm _emit 0x14
        push 334h
        push 581fc0h
        ; Exact mapped bytes E8 BA AE FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xae
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x539b4b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x539b2e
        __asm _emit 0x75
        __asm _emit 0xdd
        lea edx, [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 03 74 FF FF: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 44 74 FF FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 7C 1F 5E 00: call dword ptr [0x5e1f7c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x1f
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x539b8c
        __asm _emit 0x75
        __asm _emit 0x14
        push 336h
        push 581fc0h
        ; Exact mapped bytes E8 79 AE FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xae
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x539b8c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 BF: jne 0x539b51
        __asm _emit 0x75
        __asm _emit 0xbf
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BF BA FF FF: call 0x535661
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
