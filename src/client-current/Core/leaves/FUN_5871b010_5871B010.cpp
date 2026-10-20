// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5871B010 .. +0xC9 bytes.
extern "C" __declspec(naked) void FUN_5871b010_5871B010() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 35 FC 04 96 58: mov esi, dword ptr [0x589604fc]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xfc
        __asm _emit 0x04
        __asm _emit 0x96
        __asm _emit 0x58
        xor esi, 55555555h
        sub esi, 0c350h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        ; Exact mapped bytes E8 76 A7 D7 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xa7
        __asm _emit 0xd7
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 8], esi
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7F 05: jg 0x5871b04a
        __asm _emit 0x7f
        __asm _emit 0x05
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x5871b0d2
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes E8 5B A7 D7 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xa7
        __asm _emit 0xd7
        __asm _emit 0xff
        movzx edx, word ptr [ebp + 8]
        add eax, edx
        cmp eax, 77359400h
        ; Exact mapped bytes 7E 19: jle 0x5871b07b
        __asm _emit 0x7e
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 0ch], ecx
        push 77359400h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 18 01 0A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 57: jmp 0x5871b0d2
        __asm _emit 0xeb
        __asm _emit 0x57
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 74h]
        ; Exact mapped bytes E8 2A A7 D7 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xa7
        __asm _emit 0xd7
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 02: jne 0x5871b08d
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 45: jmp 0x5871b0d2
        __asm _emit 0xeb
        __asm _emit 0x45
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes E8 18 A7 D7 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xa7
        __asm _emit 0xd7
        __asm _emit 0xff
        movzx ecx, word ptr [ebp + 8]
        add eax, ecx
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 7C 18: jl 0x5871b0bb
        __asm _emit 0x7c
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D8 00 0A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 17: jmp 0x5871b0d2
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 14h], eax
        movzx ecx, word ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 7F FA 09 00: call 0x587bab50
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xfa
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
