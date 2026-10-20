// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00539992 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_00539992_00539992() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 14: jne 0x5399bb
        __asm _emit 0x75
        __asm _emit 0x14
        push 31eh
        push 581fc0h
        ; Exact mapped bytes E8 4A B0 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5399bb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x53999e
        __asm _emit 0x75
        __asm _emit 0xdd
        lea edx, [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes FF 15 7C 1F 5E 00: call dword ptr [0x5e1f7c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x1f
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5399f2
        __asm _emit 0x75
        __asm _emit 0x14
        push 320h
        push 581fc0h
        ; Exact mapped bytes E8 13 B0 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5399f2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 C9: jne 0x5399c1
        __asm _emit 0x75
        __asm _emit 0xc9
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 59 BC FF FF: call 0x535661
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
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
