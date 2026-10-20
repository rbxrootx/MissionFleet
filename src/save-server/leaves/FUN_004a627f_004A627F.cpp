// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A627F .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_004a627f_004A627F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 5ch]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 75 1B: jne 0x4a62b6
        __asm _emit 0x75
        __asm _emit 0x1b
        push 671494h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 72 62 02 00: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        or edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 35: jmp 0x4a62eb
        __asm _emit 0xeb
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        ; Exact mapped bytes FF 15 F8 B9 68 00: call dword ptr [0x68b9f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        mov edx, dword ptr [ebp - 4]
        add edx, ecx
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 98 66 02 00: call 0x4cc978
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x66
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        or al, 1
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
