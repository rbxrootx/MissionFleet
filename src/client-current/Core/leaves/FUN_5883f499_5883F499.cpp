// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883F499 .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_5883f499_5883F499() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 05: jne 0x5883f4ab
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 5B: jmp 0x5883f506
        __asm _emit 0xeb
        __asm _emit 0x5b
        push 2
        pop eax
        imul eax, eax, 0
        mov ecx, dword ptr [ebp + 8]
        movzx eax, word ptr [ecx + eax]
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x5883f4d7
        __asm _emit 0x75
        __asm _emit 0x1b
        push 588f2f08h
        ; Exact mapped bytes E8 E7 D3 FF FF: call 0x5883c8ad
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 30 6C 02 00: call 0x58866100
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x6c
        __asm _emit 0x02
        __asm _emit 0x00
        pop ecx
        pop ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 2F: jmp 0x5883f506
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov eax, dword ptr [ebp + 8]
        movzx eax, word ptr [eax]
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x5883f503
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp + 8]
        movzx eax, word ptr [eax]
        movzx ecx, word ptr [ebp + 0ch]
        cmp eax, ecx
        ; Exact mapped bytes 75 0A: jne 0x5883f4f9
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 4D 10: mov cx, word ptr [ebp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        inc eax
        inc eax
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes EB D4: jmp 0x5883f4d7
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
