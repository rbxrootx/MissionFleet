// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586CECE0 .. +0xEB bytes.
extern "C" __declspec(naked) void FUN_586cece0_586CECE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0d2h]
        cmp ecx, 0ch
        ; Exact mapped bytes 75 3D: jne 0x586ced35
        __asm _emit 0x75
        __asm _emit 0x3d
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586ced0a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 7D 20: jge 0x586ced30
        __asm _emit 0x7d
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 98h]
        mov dword ptr [ebp - 14h], edx
        movzx eax, byte ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B3 70 DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x70
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D1: jmp 0x586ced01
        __asm _emit 0xeb
        __asm _emit 0xd1
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x586cedc5
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0d2h]
        cmp edx, 0bh
        ; Exact mapped bytes 75 3A: jne 0x586ced7e
        __asm _emit 0x75
        __asm _emit 0x3a
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x586ced56
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 7D 20: jge 0x586ced7c
        __asm _emit 0x7d
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 98h]
        mov dword ptr [ebp - 18h], eax
        movzx ecx, byte ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 67 70 DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x70
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D1: jmp 0x586ced4d
        __asm _emit 0xeb
        __asm _emit 0xd1
        ; Exact mapped bytes EB 47: jmp 0x586cedc5
        __asm _emit 0xeb
        __asm _emit 0x47
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0d2h]
        cmp eax, 0ah
        ; Exact mapped bytes 75 38: jne 0x586cedc5
        __asm _emit 0x75
        __asm _emit 0x38
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x586ced9f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 4
        ; Exact mapped bytes 7D 20: jge 0x586cedc5
        __asm _emit 0x7d
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 98h]
        mov dword ptr [ebp - 1ch], ecx
        movzx edx, byte ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 1E 70 DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x70
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D1: jmp 0x586ced96
        __asm _emit 0xeb
        __asm _emit 0xd1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
