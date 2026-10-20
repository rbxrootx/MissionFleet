// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042DE5B .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_0042de5b_0042DE5B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 40c50h]
        ; Exact mapped bytes E8 9D 02 00 00: call 0x42e130
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x42deab
        __asm _emit 0x75
        __asm _emit 0x14
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 40c50h]
        ; Exact mapped bytes E8 57 07 00 00: call 0x42e600
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 33: jmp 0x42dede
        __asm _emit 0xeb
        __asm _emit 0x33
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 40c54h]
        ; Exact mapped bytes E8 77 02 00 00: call 0x42e130
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x42ded1
        __asm _emit 0x75
        __asm _emit 0x14
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 40c50h]
        ; Exact mapped bytes E8 31 07 00 00: call 0x42e600
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x42dede
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 670990h
        ; Exact mapped bytes E8 3A 27 07 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x27
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 08 6F 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x6f
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
