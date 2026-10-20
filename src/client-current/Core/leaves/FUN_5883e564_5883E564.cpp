// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883E564 .. +0x8B bytes.
extern "C" __declspec(naked) void FUN_5883e564_5883E564() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        mov ebx, dword ptr [ebp + 0ch]
        mov eax, ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        shr eax, 1
        push eax
        push edi
        push 0
        ; Exact mapped bytes E8 79 FB FF FF: call 0x5883e0f6
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [ebp + 0ch]
        add esp, 0ch
        movzx edx, ax
        mov eax, 5a4dh
        ; Exact mapped bytes 66 39 07: cmp word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x07
        ; Exact mapped bytes 75 0E: jne 0x5883e59e
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [edi + 3ch]
        add eax, edi
        cmp dword ptr [eax], 4550h
        cmove esi, eax
        test esi, esi
        ; Exact mapped bytes 75 04: jne 0x5883e5a6
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 44: jmp 0x5883e5ea
        __asm _emit 0xeb
        __asm _emit 0x44
        mov ecx, dword ptr [esi + 58h]
        ; Exact mapped bytes 66 3B D1: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 72 07: jb 0x5883e5b5
        __asm _emit 0x72
        __asm _emit 0x07
        movzx eax, cx
        sub edx, eax
        ; Exact mapped bytes EB 06: jmp 0x5883e5bb
        __asm _emit 0xeb
        __asm _emit 0x06
        sub edx, ecx
        movzx edx, dx
        dec edx
        shr ecx, 10h
        ; Exact mapped bytes 66 3B D1: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 72 04: jb 0x5883e5c7
        __asm _emit 0x72
        __asm _emit 0x04
        sub edx, ecx
        ; Exact mapped bytes EB 06: jmp 0x5883e5cd
        __asm _emit 0xeb
        __asm _emit 0x06
        sub edx, ecx
        movzx edx, dx
        dec edx
        test bl, 1
        ; Exact mapped bytes 74 07: je 0x5883e5d9
        __asm _emit 0x74
        __asm _emit 0x07
        movzx ecx, byte ptr [edi + ebx - 1]
        add edx, ecx
        mov ecx, dword ptr [ebp + 14h]
        add edx, ebx
        mov eax, esi
        mov dword ptr [ecx], edx
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [esi + 58h]
        mov dword ptr [ecx], edx
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
