// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004985BF .. +0x105 bytes.
extern "C" __declspec(naked) void FUN_004985bf_004985BF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        sub eax, 0d8h
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp + 20h]
        mov dword ptr [ebp - 38h], ecx
        cmp dword ptr [ebp - 38h], 4
        ; Exact mapped bytes 77 35: ja 0x49861b
        __asm _emit 0x77
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 24 95 C4 86 49 00: jmp dword ptr [edx*4 + 0x4986c4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xc4
        __asm _emit 0x86
        __asm _emit 0x49
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 22: jmp 0x49861b
        __asm _emit 0xeb
        __asm _emit 0x22
        mov dword ptr [ebp - 4], 4
        ; Exact mapped bytes EB 19: jmp 0x49861b
        __asm _emit 0xeb
        __asm _emit 0x19
        mov dword ptr [ebp - 4], 6
        ; Exact mapped bytes EB 10: jmp 0x49861b
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dword ptr [ebp - 4], 5
        ; Exact mapped bytes EB 07: jmp 0x49861b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 7
        cmp dword ptr [ebp - 4], 7
        ; Exact mapped bytes 75 74: jne 0x498695
        __asm _emit 0x75
        __asm _emit 0x74
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 30h], ecx
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 07: jne 0x49863a
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x4986bb
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 30h]
        cmp dword ptr [edx + 44h], 0
        ; Exact mapped bytes 75 52: jne 0x498695
        __asm _emit 0x75
        __asm _emit 0x52
        mov eax, dword ptr [ebp - 30h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 75 14: jne 0x498660
        __asm _emit 0x75
        __asm _emit 0x14
        push 0d49h
        push 5ca8a4h
        ; Exact mapped bytes E8 A5 C3 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xc3
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x498660
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x498643
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx + 44h]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ecx + 44h], 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 80 DE FF FF: call 0x496501
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [edx + 44h], eax
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        push 3
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 F1 21 00 00: call 0x49a890
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], 6
        lea ecx, [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 3A AB FF FF: call 0x4931f2
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
