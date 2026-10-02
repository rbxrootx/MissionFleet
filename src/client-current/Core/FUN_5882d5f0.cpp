// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882D5F0 .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_5882d5f0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 0ch], ecx
        movzx eax, word ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax*4]
        mov dword ptr [ebp - 4], edx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 0F: jmp 0x5882d61e
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 46: je 0x5882d66a
        __asm _emit 0x74
        __asm _emit 0x46
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 3A: jne 0x5882d668
        __asm _emit 0x75
        __asm _emit 0x3a
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 12: jne 0x5882d646
        __asm _emit 0x75
        __asm _emit 0x12
        movzx edx, word ptr [ebp + 8]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 8]
        mov dword ptr [eax + edx*4], ecx
        ; Exact mapped bytes EB 0C: jmp 0x5882d652
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 10h], edx
        push 0ch
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 D1 39 00 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes EB 02: jmp 0x5882d66a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB A5: jmp 0x5882d60f
        __asm _emit 0xeb
        __asm _emit 0xa5
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
