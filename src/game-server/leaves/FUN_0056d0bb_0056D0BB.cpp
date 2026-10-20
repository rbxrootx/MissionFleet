// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056D0BB .. +0x90 bytes.
extern "C" __declspec(naked) void FUN_0056d0bb_0056D0BB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 6cah
        push 5d053ch
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 86 E0 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xe0
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes 75 14: jne 0x56d0fa
        __asm _emit 0x75
        __asm _emit 0x14
        push 6cdh
        push 5d053ch
        ; Exact mapped bytes E8 0B 79 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x79
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56d0fa
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x56d0da
        __asm _emit 0x75
        __asm _emit 0xda
        push 58e430h
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0ach]
        push ecx
        ; Exact mapped bytes E8 72 ED FD FF: call 0x54be86
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xed
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 04: jne 0x56d121
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 23: jmp 0x56d144
        __asm _emit 0xeb
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 34: call dword ptr [eax + 0x34]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x34
        neg eax
        sbb eax, eax
        inc eax
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
