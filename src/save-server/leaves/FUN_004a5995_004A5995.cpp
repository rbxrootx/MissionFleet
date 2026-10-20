// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A5995 .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_004a5995_004A5995() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 68h], 0
        ; Exact mapped bytes 75 1B: jne 0x4a59c9
        __asm _emit 0x75
        __asm _emit 0x1b
        push 671494h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5F 6B 02 00: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x6b
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        or ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 32: jmp 0x4a59fb
        __asm _emit 0xeb
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 68h]
        push eax
        ; Exact mapped bytes FF 15 F8 B9 68 00: call dword ptr [0x68b9f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        add eax, edx
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 89 6F 02 00: call 0x4cc978
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        or ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
