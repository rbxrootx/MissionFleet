// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A2B80 .. +0x96 bytes.
extern "C" __declspec(naked) void FUN_584a2b80_584A2B80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x584a2ba2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 7D 62: jge 0x584a2c0f
        __asm _emit 0x7d
        __asm _emit 0x62
        imul eax, dword ptr [ebp - 4], 38h
        mov ecx, dword ptr [ebp - 8]
        movzx edx, byte ptr [ecx + eax + 14h]
        test edx, edx
        ; Exact mapped bytes 75 02: jne 0x584a2bbf
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB DA: jmp 0x584a2b99
        __asm _emit 0xeb
        __asm _emit 0xda
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 14h], ecx
        push 0
        imul edx, dword ptr [ebp - 4], 38h
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 32 A4 FE FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx edx, ax
        xor edx, 55h
        mov dword ptr [ebp - 10h], edx
        imul eax, dword ptr [ebp - 4], 38h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 10h]
        sub edx, dword ptr [ecx + eax + 40h]
        test edx, edx
        ; Exact mapped bytes 7E 14: jle 0x584a2c0d
        __asm _emit 0x7e
        __asm _emit 0x14
        imul eax, dword ptr [ebp - 4], 38h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 10h]
        sub edx, dword ptr [ecx + eax + 40h]
        add edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 8A: jmp 0x584a2b99
        __asm _emit 0xeb
        __asm _emit 0x8a
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
