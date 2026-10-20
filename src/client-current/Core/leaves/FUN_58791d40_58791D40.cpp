// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58791D40 .. +0xE1 bytes.
extern "C" __declspec(naked) void FUN_58791d40_58791D40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 11 01 00 00: call 0x58791e70
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 07: jne 0x58791d6d
        __asm _emit 0x75
        __asm _emit 0x07
        xor al, al
        ; Exact mapped bytes E9 A8 00 00 00: jmp 0x58791e15
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 B7 00 00 00: call 0x58791e30
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x58791d87
        __asm _emit 0x75
        __asm _emit 0x07
        xor al, al
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x58791e15
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 07: jne 0x58791d94
        __asm _emit 0x75
        __asm _emit 0x07
        xor al, al
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x58791e15
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        sub ecx, 1
        imul edx, ecx, 18h
        mov eax, dword ptr [ebp - 18h]
        lea ecx, [eax + edx + 0ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 8], eax
        movzx ecx, word ptr [ebp - 14h]
        movzx edx, word ptr [ebp + 0ch]
        cmp ecx, edx
        ; Exact mapped bytes 7D 06: jge 0x58791dcd
        __asm _emit 0x7d
        __asm _emit 0x06
        mov al, 1
        ; Exact mapped bytes EB 4A: jmp 0x58791e15
        __asm _emit 0xeb
        __asm _emit 0x4a
        ; Exact mapped bytes EB 46: jmp 0x58791e13
        __asm _emit 0xeb
        __asm _emit 0x46
        movzx eax, word ptr [ebp - 14h]
        movzx ecx, word ptr [ebp + 0ch]
        cmp eax, ecx
        ; Exact mapped bytes 75 12: jne 0x58791deb
        __asm _emit 0x75
        __asm _emit 0x12
        movzx edx, word ptr [ebp - 12h]
        movzx eax, word ptr [ebp + 0eh]
        cmp edx, eax
        ; Exact mapped bytes 7D 06: jge 0x58791deb
        __asm _emit 0x7d
        __asm _emit 0x06
        mov al, 1
        ; Exact mapped bytes EB 2C: jmp 0x58791e15
        __asm _emit 0xeb
        __asm _emit 0x2c
        ; Exact mapped bytes EB 28: jmp 0x58791e13
        __asm _emit 0xeb
        __asm _emit 0x28
        movzx ecx, word ptr [ebp - 14h]
        movzx edx, word ptr [ebp + 0ch]
        cmp ecx, edx
        ; Exact mapped bytes 75 1C: jne 0x58791e13
        __asm _emit 0x75
        __asm _emit 0x1c
        movzx eax, word ptr [ebp - 12h]
        movzx ecx, word ptr [ebp + 0eh]
        cmp eax, ecx
        ; Exact mapped bytes 75 10: jne 0x58791e13
        __asm _emit 0x75
        __asm _emit 0x10
        movzx edx, word ptr [ebp - 0eh]
        movzx eax, word ptr [ebp + 12h]
        cmp edx, eax
        ; Exact mapped bytes 7D 04: jge 0x58791e13
        __asm _emit 0x7d
        __asm _emit 0x04
        mov al, 1
        ; Exact mapped bytes EB 02: jmp 0x58791e15
        __asm _emit 0xeb
        __asm _emit 0x02
        xor al, al
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 31 F2 09 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xf2
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
    }
}
