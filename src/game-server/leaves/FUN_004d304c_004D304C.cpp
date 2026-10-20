// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D304C .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_004d304c_004D304C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 5ch]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 75 1B: jne 0x4d3083
        __asm _emit 0x75
        __asm _emit 0x1b
        push 5c4bbch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 05 A4 01 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        or edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 35: jmp 0x4d30b8
        __asm _emit 0xeb
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        ; Exact mapped bytes FF 15 A8 23 5E 00: call dword ptr [0x5e23a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 02: mov cx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x02
        mov edx, dword ptr [ebp - 4]
        add edx, ecx
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2B A8 01 00: call 0x4ed8d8
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xa8
        __asm _emit 0x01
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
