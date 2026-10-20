// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047E13A .. +0x152 bytes.
extern "C" __declspec(naked) void FUN_0047e13a_0047E13A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 97 C2 F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xc2
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x47e164
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 18 01 00 00: jmp 0x47e27c
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 06: mov cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x06
        cmp ecx, 8000h
        ; Exact mapped bytes 75 05: jne 0x47e17a
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 00 01 00 00: jmp 0x47e27a
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F 85 EC 00 00 00: jne 0x47e27a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        add eax, 7ffef300h
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 7
        ; Exact mapped bytes 77 0A: ja 0x47e1b2
        __asm _emit 0x77
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 24 8D 8C E2 47 00: jmp dword ptr [ecx*4 + 0x47e28c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0xe2
        __asm _emit 0x47
        __asm _emit 0x00
        ; Exact mapped bytes E9 C3 00 00 00: jmp 0x47e27a
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B8 1E 00 00: call 0x480083
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 A7 00 00 00: jmp 0x47e27c
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 21 21 00 00: call 0x48030a
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x47e27c
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2C 24 00 00: call 0x480633
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 6E: jmp 0x47e27c
        __asm _emit 0xeb
        __asm _emit 0x6e
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 59 27 00 00: call 0x48097b
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 53: jmp 0x47e27c
        __asm _emit 0xeb
        __asm _emit 0x53
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D8 2A 00 00: call 0x480d15
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 38: jmp 0x47e27c
        __asm _emit 0xeb
        __asm _emit 0x38
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 67 2C 00 00: call 0x480ebf
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 1D: jmp 0x47e27c
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A4 31 00 00: call 0x481417
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x47e27c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 5A A5 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xa5
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
