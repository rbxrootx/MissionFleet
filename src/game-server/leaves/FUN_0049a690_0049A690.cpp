// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049A690 .. +0xD0 bytes.
extern "C" __declspec(naked) void FUN_0049a690_0049A690() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + 14h]
        cmp edx, dword ptr [ecx + 10h]
        ; Exact mapped bytes 72 21: jb 0x49a6cb
        __asm _emit 0x72
        __asm _emit 0x21
        push 5cb010h
        push 0
        push 0a7ch
        push 5cae8ch
        push 2
        ; Exact mapped bytes E8 6E 64 01 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x49a6cb
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CB: jne 0x49a69c
        __asm _emit 0x75
        __asm _emit 0xcb
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 74 0E: je 0x49a6e5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp + 1ch]
        sub edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 07: jmp 0x49a6ec
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 0E: je 0x49a700
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp + 18h]
        sub ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 07: jmp 0x49a707
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        push 0
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp + 14h]
        sub edx, dword ptr [ecx + 8]
        push edx
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes 66 8B 4D 0C: mov cx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 14h]
        imul ecx, ecx, 34h
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0ch]
        add eax, ecx
        push eax
        ; Exact mapped bytes E8 FB F8 FF FF: call 0x49a040
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 2ch
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 14h]
        add edx, 1
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 14h], edx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
