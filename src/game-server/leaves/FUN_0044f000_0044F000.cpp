// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044F000 .. +0xE7 bytes.
extern "C" __declspec(naked) void FUN_0044f000_0044F000() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b2a0h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 10h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 0fd4h], 1
        ; Exact mapped bytes 0F 85 90 00 00 00: jne 0x44f0cf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 0fd0h], 0
        ; Exact mapped bytes 0F 85 80 00 00 00: jne 0x44f0cf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 353h
        push 5b7098h
        push 1c0h
        ; Exact mapped bytes E8 D0 DF 09 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xdf
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 17: je 0x44f08d
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0c7ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 78 7C FE FF: call 0x436d00
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x7c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x44f094
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0fd0h], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 91 D8 10 00 00: mov dx, word ptr [ecx + 0x10d8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xd8
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        mov eax, dword ptr [ebp - 18h]
        add eax, 0fd8h
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ecx + 0fd0h]
        ; Exact mapped bytes E8 DE 95 03 00: call 0x4886ad
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x95
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        cmp ebp, esp
        ; Exact mapped bytes E8 FD 96 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x96
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
