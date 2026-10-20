// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040F5D0 .. +0x13D bytes.
extern "C" __declspec(naked) void FUN_0040f5d0_0040F5D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 44h]
        mov ecx, 11h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0F E3 11 00: call 0x52d908
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xe3
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 60h
        push ecx
        push 3fdh
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 E0 8E 0E 00: call 0x4f84ee
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x8e
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 9ch
        push eax
        push 3f5h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 C9 8E 0E 00: call 0x4f84ee
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x8e
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 0d8h
        push edx
        push 3f6h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 B1 8E 0E 00: call 0x4f84ee
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x8e
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 114h
        push ecx
        push 3f3h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 99 8E 0E 00: call 0x4f84ee
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x8e
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 150h
        push eax
        push 3e8h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 82 8E 0E 00: call 0x4f84ee
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x8e
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 18ch
        push edx
        push 3f2h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 6A 8E 0E 00: call 0x4f84ee
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x8e
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1c8h
        push ecx
        push 3ebh
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 02 82 0E 00: call 0x4f789e
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x82
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 1cch
        push eax
        push 3ech
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 EB 81 0E 00: call 0x4f789e
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x81
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 1d0h
        push edx
        push 3eeh
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 D3 81 0E 00: call 0x4f789e
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x81
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1d4h
        push ecx
        push 3e9h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 BB 81 0E 00: call 0x4f789e
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x81
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 1d8h
        push eax
        push 3edh
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 A4 81 0E 00: call 0x4f789e
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x81
        __asm _emit 0x0e
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 E9 56 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
