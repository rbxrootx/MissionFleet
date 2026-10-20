// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00417AE5 .. +0x117 bytes.
extern "C" __declspec(naked) void FUN_00417ae5_00417AE5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 07: jne 0x417b0f
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 DD 00 00 00: jmp 0x417bec
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 0ch], 4
        mov dword ptr [ebp - 10h], 0
        lea ecx, [ebp - 0ch]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        lea eax, [ebp - 4]
        push eax
        ; Exact mapped bytes E8 50 E3 FF FF: call 0x415e90
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x417b4e
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 9E 00 00 00: jmp 0x417bec
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [edx + eax*4 + 78h], -1
        ; Exact mapped bytes 75 1A: jne 0x417b7b
        __asm _emit 0x75
        __asm _emit 0x1a
        push 2
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 99 F0 FF FF: call 0x416c10
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 71: jmp 0x417bec
        __asm _emit 0xeb
        __asm _emit 0x71
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4 + 78h]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 04: je 0x417b94
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 58: jmp 0x417bec
        __asm _emit 0xeb
        __asm _emit 0x58
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4 + 78h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 42 35 03 00: call 0x44b0ef
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x35
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1A: jne 0x417bcb
        __asm _emit 0x75
        __asm _emit 0x1a
        push 3
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 49 F0 FF FF: call 0x416c10
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 21: jmp 0x417bec
        __asm _emit 0xeb
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 1D 00 00 00: call 0x417bfc
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x417be7
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x417bec
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 EA 0B 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x0b
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
