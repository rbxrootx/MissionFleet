// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E5490 .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_585e5490_585E5490() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        movzx eax, word ptr [ebp + 8]
        cmp eax, 3
        ; Exact mapped bytes 75 09: jne 0x585e54ab
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 07: jmp 0x585e54b2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 20efch], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 4D 0C: mov cx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 88 F8 0E 02 00: mov word ptr [eax + 0x20ef8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xf8
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        movzx edx, word ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 21ebch], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
