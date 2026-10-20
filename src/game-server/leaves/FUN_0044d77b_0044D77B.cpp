// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044D77B .. +0xE1 bytes.
extern "C" __declspec(naked) void FUN_0044d77b_0044D77B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 06: mov cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x06
        cmp ecx, 8000h
        ; Exact mapped bytes 75 05: jne 0x44d7af
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 98 00 00 00: jmp 0x44d847
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 06: mov ax, word ptr [edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x06
        cmp eax, 8001h
        ; Exact mapped bytes 75 4F: jne 0x44d80e
        __asm _emit 0x75
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 800100f0h
        ; Exact mapped bytes 74 02: je 0x44d7d3
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 39: jmp 0x44d80c
        __asm _emit 0xeb
        __asm _emit 0x39
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 10h], 69h
        ; Exact mapped bytes 75 16: jne 0x44d7f2
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1B 04 00 00: call 0x44dc0b
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1A: jmp 0x44d80c
        __asm _emit 0xeb
        __asm _emit 0x1a
        push 0
        push 0
        push 0
        push 8002h
        push 4
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 26 9A 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x9a
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 39: jmp 0x44d847
        __asm _emit 0xeb
        __asm _emit 0x39
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 06: mov dx, word ptr [ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x06
        cmp edx, 8002h
        ; Exact mapped bytes 75 28: jne 0x44d847
        __asm _emit 0x75
        __asm _emit 0x28
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 80020010h
        ; Exact mapped bytes 74 02: je 0x44d833
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 14: jmp 0x44d847
        __asm _emit 0xeb
        __asm _emit 0x14
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 15 00 00 00: call 0x44d85c
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 8A AF 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
