// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054F2AB .. +0x6F bytes.
extern "C" __declspec(naked) void FUN_0054f2ab_0054F2AB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 1c7h
        push 67bee8h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 96 AF F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xaf
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x54f2e7
        __asm _emit 0x75
        __asm _emit 0x14
        push 1c8h
        push 67bee8h
        ; Exact mapped bytes E8 5E 9A FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x9a
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54f2e7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x54f2ca
        __asm _emit 0x75
        __asm _emit 0xdd
        push 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 10h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 20: call dword ptr [edx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x20
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 09: je 0x54f313
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 80 F1 FF FF: call 0x54e493
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
