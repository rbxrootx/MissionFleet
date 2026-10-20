// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045FB40 .. +0x103 bytes.
extern "C" __declspec(naked) void FUN_0045fb40_0045FB40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 0ch], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x45fb72
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 CA 00 00 00: jmp 0x45fc3c
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 21: jne 0x45fb99
        __asm _emit 0x75
        __asm _emit 0x21
        push 67ad1ch
        push 0
        push 0eah
        push 676fb8h
        push 2
        ; Exact mapped bytes E8 D0 D2 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x45fb99
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D3: jne 0x45fb72
        __asm _emit 0x75
        __asm _emit 0xd3
        mov ecx, dword ptr [ebp - 8]
        push ecx
        push 40h
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 5E DA FE FF: call 0x44d610
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xda
        __asm _emit 0xfe
        __asm _emit 0xff
        push 26h
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 20h
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 40h
        push edx
        ; Exact mapped bytes E8 39 57 00 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 8]
        push eax
        push 40h
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 46h
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 66h
        push edx
        ; Exact mapped bytes E8 2D DA FE FF: call 0x44d610
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xda
        __asm _emit 0xfe
        __asm _emit 0xff
        push 2eh
        mov eax, dword ptr [ebp + 0ch]
        add eax, 66h
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 0a6h
        push ecx
        ; Exact mapped bytes E8 05 57 00 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 26: mov ax, word ptr [edx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x26
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x45fc30
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 26: mov dx, word ptr [ecx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x26
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 94h
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 0d4h
        push ecx
        ; Exact mapped bytes E8 D3 56 00 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 C7 42 44 D4 00: mov word ptr [edx + 0x44], 0xd4
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x42
        __asm _emit 0x44
        __asm _emit 0xd4
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
