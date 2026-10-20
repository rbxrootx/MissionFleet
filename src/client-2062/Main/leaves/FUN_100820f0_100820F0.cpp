// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100820F0 .. +0x104 bytes.
extern "C" __declspec(naked) void FUN_100820f0_100820F0() {
    __asm {
        sub esp, 404h
        push ebx
        ; Exact mapped bytes 8B 1D B4 50 17 10: mov ebx, dword ptr [0x101750b4]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push ebp
        mov ebp, dword ptr [esp + 414h]
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        test edi, edi
        push 0ffd997h
        push -1
        ; Exact mapped bytes 75 0A: jne 0x10082120
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [esp + 420h]
        push eax
        ; Exact mapped bytes EB 05: jmp 0x10082125
        __asm _emit 0xeb
        __asm _emit 0x05
        push 101ace48h
        mov ecx, dword ptr [esi + 0c7ch]
        ; Exact mapped bytes E8 80 1B 08 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x1b
        __asm _emit 0x08
        __asm _emit 0x00
        push ebp
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, 0fffffc00h
        sub ecx, edi
        add eax, ecx
        test eax, eax
        ; Exact mapped bytes 7E 68: jle 0x100821ac
        __asm _emit 0x7e
        __asm _emit 0x68
        lea edx, [edi + ebp]
        push 400h
        lea eax, [esp + 14h]
        push edx
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 0F BE 8C 24 10 04 00 00: movsx ecx, byte ptr [esp + 0x410]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 80h
        ; Exact mapped bytes 7D 08: jge 0x1008216c
        __asm _emit 0x7d
        __asm _emit 0x08
        add edi, 400h
        ; Exact mapped bytes EB 0E: jmp 0x1008217a
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov byte ptr [esp + 410h], 0
        add edi, 3ffh
        mov ecx, dword ptr [esi + 0c80h]
        push 0ffffffh
        lea edx, [esp + 14h]
        push -1
        push edx
        ; Exact mapped bytes E8 1F 1B 08 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x1b
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c7ch]
        ; Exact mapped bytes E8 F4 25 08 00: call 0x10104790
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x25
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c80h]
        ; Exact mapped bytes E8 E9 25 08 00: call 0x10104790
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes E9 5F FF FF FF: jmp 0x1008210b
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add edi, ebp
        lea eax, [esp + 10h]
        push edi
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push 0ffffffh
        lea ecx, [esp + 14h]
        push -1
        push ecx
        mov ecx, dword ptr [esi + 0c80h]
        ; Exact mapped bytes E8 DF 1A 08 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x1a
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c7ch]
        ; Exact mapped bytes E8 B4 25 08 00: call 0x10104790
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x25
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c80h]
        ; Exact mapped bytes E8 A9 25 08 00: call 0x10104790
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x25
        __asm _emit 0x08
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 404h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
