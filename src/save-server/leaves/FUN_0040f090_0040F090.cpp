// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040F090 .. +0xC8 bytes.
extern "C" __declspec(naked) void FUN_0040f090_0040F090() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58ab21h
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
        sub esp, 44h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 50h]
        mov ecx, 11h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 5
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18ch
        ; Exact mapped bytes E8 9F AB 09 00: call 0x4a9c76
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xab
        __asm _emit 0x09
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 4
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 150h
        ; Exact mapped bytes E8 C8 C4 09 00: call 0x4ab5b1
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xc4
        __asm _emit 0x09
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 114h
        ; Exact mapped bytes E8 5D C1 09 00: call 0x4ab258
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xc1
        __asm _emit 0x09
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0d8h
        ; Exact mapped bytes E8 4B C1 09 00: call 0x4ab258
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xc1
        __asm _emit 0x09
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 9ch
        ; Exact mapped bytes E8 39 C1 09 00: call 0x4ab258
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xc1
        __asm _emit 0x09
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 60h
        ; Exact mapped bytes E8 49 1B 10 00: call 0x510c77
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x1b
        __asm _emit 0x10
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1D EA 0B 00: call 0x4cdb5a
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xea
        __asm _emit 0x0b
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
        pop edi
        pop esi
        pop ebx
        add esp, 50h
        cmp ebp, esp
        ; Exact mapped bytes E8 9C 5C 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x5c
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
