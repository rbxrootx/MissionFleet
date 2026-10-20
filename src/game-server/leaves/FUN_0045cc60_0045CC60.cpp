// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045CC60 .. +0xD1 bytes.
extern "C" __declspec(naked) void FUN_0045cc60_0045CC60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1ch
        ; Exact mapped bytes E8 85 42 0D 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x42
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0bh
        ; Exact mapped bytes 0F 87 8C 00 00 00: ja 0x45cd1e
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 24 8D 31 CD 45 00: jmp dword ptr [ecx*4 + 0x45cd31]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x31
        __asm _emit 0xcd
        __asm _emit 0x45
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], 0
        ; Exact mapped bytes EB 77: jmp 0x45cd1e
        __asm _emit 0xeb
        __asm _emit 0x77
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 1
        ; Exact mapped bytes EB 6C: jmp 0x45cd1e
        __asm _emit 0xeb
        __asm _emit 0x6c
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], 2
        ; Exact mapped bytes EB 61: jmp 0x45cd1e
        __asm _emit 0xeb
        __asm _emit 0x61
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], 3
        ; Exact mapped bytes EB 56: jmp 0x45cd1e
        __asm _emit 0xeb
        __asm _emit 0x56
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 4
        ; Exact mapped bytes EB 4B: jmp 0x45cd1e
        __asm _emit 0xeb
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], 5
        ; Exact mapped bytes EB 40: jmp 0x45cd1e
        __asm _emit 0xeb
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], 6
        ; Exact mapped bytes EB 35: jmp 0x45cd1e
        __asm _emit 0xeb
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 7
        ; Exact mapped bytes EB 2A: jmp 0x45cd1e
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], 8
        ; Exact mapped bytes EB 1F: jmp 0x45cd1e
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], 9
        ; Exact mapped bytes EB 14: jmp 0x45cd1e
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 0ah
        ; Exact mapped bytes EB 09: jmp 0x45cd1e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], 0bh
        mov eax, dword ptr [ebp - 4]
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 B5 BA 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
