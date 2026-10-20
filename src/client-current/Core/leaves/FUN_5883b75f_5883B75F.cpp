// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883B75F .. +0x96 bytes.
extern "C" __declspec(naked) void FUN_5883b75f_5883B75F() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0ch]
        push ebx
        mov ebx, dword ptr [ebp + 8]
        push esi
        push edi
        mov esi, ecx
        mov ecx, ebx
        push eax
        ; Exact mapped bytes E8 64 F9 FF FF: call 0x5883b0d9
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebx + 10h]
        mov ecx, dword ptr [ebp + 0ch]
        sub eax, ecx
        mov edi, dword ptr [ebp + 10h]
        cmp edi, eax
        cmova edi, eax
        cmp esi, ebx
        ; Exact mapped bytes 75 1A: jne 0x5883b7a3
        __asm _emit 0x75
        __asm _emit 0x1a
        lea eax, [ecx + edi]
        mov ecx, esi
        push eax
        ; Exact mapped bytes E8 DC 44 C9 FF: call 0x584cfc70
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x44
        __asm _emit 0xc9
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, esi
        push eax
        push 0
        ; Exact mapped bytes E8 CF F8 CC FF: call 0x5850b070
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xf8
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes EB 49: jmp 0x5883b7ec
        __asm _emit 0xeb
        __asm _emit 0x49
        push 0
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 BB FA FF FF: call 0x5883b268
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 3B: je 0x5883b7ec
        __asm _emit 0x74
        __asm _emit 0x3b
        cmp dword ptr [ebx + 14h], 10h
        ; Exact mapped bytes 72 02: jb 0x5883b7b9
        __asm _emit 0x72
        __asm _emit 0x02
        mov ebx, dword ptr [ebx]
        cmp dword ptr [esi + 14h], 10h
        ; Exact mapped bytes 72 04: jb 0x5883b7c3
        __asm _emit 0x72
        __asm _emit 0x04
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes EB 02: jmp 0x5883b7c5
        __asm _emit 0xeb
        __asm _emit 0x02
        mov ecx, esi
        test edi, edi
        ; Exact mapped bytes 74 10: je 0x5883b7d9
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 0ch]
        push edi
        add eax, ebx
        push eax
        push ecx
        ; Exact mapped bytes E8 BA 10 01 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [esi + 14h], 10h
        mov dword ptr [esi + 10h], edi
        ; Exact mapped bytes 72 04: jb 0x5883b7e6
        __asm _emit 0x72
        __asm _emit 0x04
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB 02: jmp 0x5883b7e8
        __asm _emit 0xeb
        __asm _emit 0x02
        mov eax, esi
        mov byte ptr [eax + edi], 0
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
