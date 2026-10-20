// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B1430 .. +0xBF bytes.
extern "C" __declspec(naked) void FUN_584b1430_584B1430() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov byte ptr [ebp - 2], 0
        mov byte ptr [ebp - 1], 7dh
        mov eax, dword ptr [ebp - 8]
        movzx ecx, word ptr [eax + 16ah]
        cmp ecx, 0bh
        ; Exact mapped bytes 75 26: jne 0x584b1476
        __asm _emit 0x75
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 8]
        movzx eax, word ptr [edx + 16ch]
        cmp eax, 2
        ; Exact mapped bytes 75 17: jne 0x584b1476
        __asm _emit 0x75
        __asm _emit 0x17
        push 1
        push 0
        lea ecx, [ebp - 1]
        push ecx
        lea edx, [ebp - 2]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5D E7 FF FF: call 0x584afbd0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 11: jmp 0x584b1487
        __asm _emit 0xeb
        __asm _emit 0x11
        lea eax, [ebp - 1]
        push eax
        lea ecx, [ebp - 2]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AA E6 FF FF: call 0x584afb30
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 17ah]
        movzx ecx, byte ptr [ebp - 1]
        cmp eax, ecx
        ; Exact mapped bytes 7E 21: jle 0x584b14ba
        __asm _emit 0x7e
        __asm _emit 0x21
        ; Exact mapped bytes E8 52 5D 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x5d
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        push 0
        push 0
        push 0
        push 19ah
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 BC 78 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes EB 35: jmp 0x584b14ed
        __asm _emit 0xeb
        __asm _emit 0x35
        ; Exact mapped bytes EB 31: jmp 0x584b14eb
        __asm _emit 0xeb
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 17bh]
        movzx ecx, byte ptr [ebp - 2]
        cmp eax, ecx
        ; Exact mapped bytes 7D 1F: jge 0x584b14eb
        __asm _emit 0x7d
        __asm _emit 0x1f
        ; Exact mapped bytes E8 1F 5D 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x5d
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        push 0
        push 0
        push 0
        push 199h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 89 78 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes EB 02: jmp 0x584b14ed
        __asm _emit 0xeb
        __asm _emit 0x02
        mov al, 1
        mov esp, ebp
    }
}
