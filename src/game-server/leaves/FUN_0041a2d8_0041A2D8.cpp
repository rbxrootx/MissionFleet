// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041A2D8 .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_0041a2d8_0041A2D8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 8A 00 00 00: mov cx, word ptr [eax + 0x8a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 5
        ; Exact mapped bytes 7C 04: jl 0x41a304
        __asm _emit 0x7c
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 43: jmp 0x41a347
        __asm _emit 0xeb
        __asm _emit 0x43
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x41a316
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 5
        ; Exact mapped bytes 7D 29: jge 0x41a345
        __asm _emit 0x7d
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + eax*8 + 8ch], 0
        ; Exact mapped bytes 75 17: jne 0x41a343
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + edx*8 + 90h], 0
        ; Exact mapped bytes 75 07: jne 0x41a343
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 04: jmp 0x41a347
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB C8: jmp 0x41a30d
        __asm _emit 0xeb
        __asm _emit 0xc8
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
