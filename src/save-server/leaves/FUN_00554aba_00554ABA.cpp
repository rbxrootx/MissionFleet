// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00554ABA .. +0xAF bytes.
extern "C" __declspec(naked) void FUN_00554aba_00554ABA() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 56eh
        push 67c1e0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 89 57 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x554af4
        __asm _emit 0x75
        __asm _emit 0x14
        push 56fh
        push 67c1e0h
        ; Exact mapped bytes E8 51 42 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x42
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x554af4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x554ad7
        __asm _emit 0x75
        __asm _emit 0xdd
        push 1
        push 8
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 5F E9 F4 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x554b1f
        __asm _emit 0x75
        __asm _emit 0x14
        push 570h
        push 67c1e0h
        ; Exact mapped bytes E8 26 42 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x42
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x554b1f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x554afa
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 0ch], -1
        ; Exact mapped bytes 75 09: jne 0x554b34
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2ch]
        mov dword ptr [ebp + 0ch], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 48: call dword ptr [edx + 0x48]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 30h], eax
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        cmp dword ptr [edx + 30h], 0
        sete al
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
