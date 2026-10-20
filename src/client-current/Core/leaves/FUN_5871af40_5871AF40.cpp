// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5871AF40 .. +0xC9 bytes.
extern "C" __declspec(naked) void FUN_5871af40_5871AF40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 35 F8 04 96 58: mov esi, dword ptr [0x589604f8]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x96
        __asm _emit 0x58
        xor esi, 55555555h
        sub esi, 0c350h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a8h]
        ; Exact mapped bytes E8 46 A8 D7 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xa8
        __asm _emit 0xd7
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 8], esi
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7F 05: jg 0x5871af7a
        __asm _emit 0x7f
        __asm _emit 0x05
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x5871b002
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 70h]
        ; Exact mapped bytes E8 2B A8 D7 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xa8
        __asm _emit 0xd7
        __asm _emit 0xff
        movzx edx, word ptr [ebp + 8]
        add eax, edx
        cmp eax, 77359400h
        ; Exact mapped bytes 7E 19: jle 0x5871afab
        __asm _emit 0x7e
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 0ch], ecx
        push 77359400h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E8 01 0A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 57: jmp 0x5871b002
        __asm _emit 0xeb
        __asm _emit 0x57
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 70h]
        ; Exact mapped bytes E8 FA A7 D7 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xa7
        __asm _emit 0xd7
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 02: jne 0x5871afbd
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 45: jmp 0x5871b002
        __asm _emit 0xeb
        __asm _emit 0x45
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        ; Exact mapped bytes E8 E8 A7 D7 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xd7
        __asm _emit 0xff
        movzx ecx, word ptr [ebp + 8]
        add eax, ecx
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 7C 18: jl 0x5871afeb
        __asm _emit 0x7c
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A8 01 0A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 17: jmp 0x5871b002
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 14h], eax
        movzx ecx, word ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 4F FB 09 00: call 0x587bab50
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xfb
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
