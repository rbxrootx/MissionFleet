// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58720910 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_58720910_58720910() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 8], ecx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 61 56 D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x56
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ebp - 0ch], eax
        push 0fh
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 4B 56 D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x56
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 19ch]
        cmp edx, 8
        ; Exact mapped bytes 75 11: jne 0x58720966
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, 4
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 9C 01 00 00: mov word ptr [ecx + 0x19c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 2A: jmp 0x58720990
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 19ch]
        cmp eax, 9
        ; Exact mapped bytes 75 1B: jne 0x58720990
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, 4
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A 9C 01 00 00: mov word ptr [edx + 0x19c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 81 DA E5 FF: call 0x5857e410
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xda
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
