// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F4870 .. +0x8C bytes.
extern "C" __declspec(naked) void FUN_585f4870_585F4870() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 4
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 9
        ; Exact mapped bytes 77 6E: ja 0x585f48fc
        __asm _emit 0x77
        __asm _emit 0x6e
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 24 95 04 49 5F 58: jmp dword ptr [edx*4 + 0x585f4904]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0x49
        __asm _emit 0x5f
        __asm _emit 0x58
        ; Exact mapped bytes C6 05 9C 75 94 58 01: mov byte ptr [0x5894759c], 1
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x9c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x01
        push 3
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 5894777ch
        ; Exact mapped bytes E8 E1 7F 25 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x7f
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 0ch
        mov eax, 3
        ; Exact mapped bytes EB 45: jmp 0x585f48fe
        __asm _emit 0xeb
        __asm _emit 0x45
        ; Exact mapped bytes EB 41: jmp 0x585f48fc
        __asm _emit 0xeb
        __asm _emit 0x41
        ; Exact mapped bytes C6 05 9D 75 94 58 01: mov byte ptr [0x5894759d], 1
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x9d
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x01
        xor eax, eax
        ; Exact mapped bytes EB 38: jmp 0x585f48fe
        __asm _emit 0xeb
        __asm _emit 0x38
        ; Exact mapped bytes EB 34: jmp 0x585f48fc
        __asm _emit 0xeb
        __asm _emit 0x34
        push 4
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 58903560h
        ; Exact mapped bytes E8 B8 7F 25 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x7f
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 0ch
        mov eax, 4
        ; Exact mapped bytes EB 1C: jmp 0x585f48fe
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes EB 18: jmp 0x585f48fc
        __asm _emit 0xeb
        __asm _emit 0x18
        ; Exact mapped bytes C6 05 9E 75 94 58 01: mov byte ptr [0x5894759e], 1
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x9e
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x01
        xor eax, eax
        ; Exact mapped bytes EB 0F: jmp 0x585f48fe
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes EB 0B: jmp 0x585f48fc
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes C6 05 9F 75 94 58 01: mov byte ptr [0x5894759f], 1
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x9f
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x01
        xor eax, eax
        ; Exact mapped bytes EB 02: jmp 0x585f48fe
        __asm _emit 0xeb
        __asm _emit 0x02
    }
}
