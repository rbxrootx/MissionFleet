// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042EBEC .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_0042ebec_0042EBEC() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push esi
        push edi
        ; Exact mapped bytes E8 BB 70 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, edi
        cmp dword ptr [eax + 4], edi
        ; Exact mapped bytes 75 04: jne 0x42ec03
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 3B: jmp 0x42ec3e
        __asm _emit 0xeb
        __asm _emit 0x3b
        ; Exact mapped bytes E8 53 68 FE FF: call 0x41545b
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, edi
        mov esi, 0e146h
        ; Exact mapped bytes 74 17: je 0x42ec28
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [eax]
        lea ecx, [ebp - 8]
        push ecx
        push edi
        push edi
        push esi
        mov ecx, eax
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x42ec28
        __asm _emit 0x74
        __asm _emit 0x05
        push 1
        pop eax
        ; Exact mapped bytes EB 16: jmp 0x42ec3e
        __asm _emit 0xeb
        __asm _emit 0x16
        ; Exact mapped bytes E8 86 70 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        lea ecx, [ebp - 8]
        push ecx
        push edi
        mov edx, dword ptr [eax]
        push edi
        push esi
        mov ecx, eax
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        pop edi
        pop esi
        leave
        ret
    }
}
