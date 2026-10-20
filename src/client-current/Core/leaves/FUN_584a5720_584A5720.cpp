// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A5720 .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_584a5720_584A5720() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x584a5744
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 32: jge 0x584a577c
        __asm _emit 0x7d
        __asm _emit 0x32
        imul eax, dword ptr [ebp - 4], 38h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BF 54 01 18: movsx edx, word ptr [ecx + eax + 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x18
        cmp edx, 1
        ; Exact mapped bytes 75 1F: jne 0x584a577a
        __asm _emit 0x75
        __asm _emit 0x1f
        imul eax, dword ptr [ebp - 4], 38h
        xor ecx, ecx
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 4C 02 4C: mov word ptr [edx + eax + 0x4c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x4c
        imul eax, dword ptr [ebp - 4], 38h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 8]
        mov edx, dword ptr [edx + 4]
        mov dword ptr [ecx + eax + 44h], edx
        ; Exact mapped bytes EB BF: jmp 0x584a573b
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
