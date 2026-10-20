// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584FE900 .. +0xD0 bytes.
extern "C" __declspec(naked) void FUN_584fe900_584FE900() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 264h], 0
        ; Exact mapped bytes 75 05: jne 0x584fe91a
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 B0 00 00 00: jmp 0x584fe9ca
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 264h]
        ; Exact mapped bytes E8 88 D7 F8 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xd7
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp eax, 7fh
        ; Exact mapped bytes 7C 05: jl 0x584fe932
        __asm _emit 0x7c
        __asm _emit 0x05
        ; Exact mapped bytes E9 98 00 00 00: jmp 0x584fe9ca
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 88h
        ; Exact mapped bytes E8 C8 26 33 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x26
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], edx
        push 4
        push 0
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 BB E4 34 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xe4
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 80h
        ; Exact mapped bytes 7C 21: jl 0x584fe98a
        __asm _emit 0x7c
        __asm _emit 0x21
        push 7eh
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 0C 43 89 58: call dword ptr [0x5889430c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, 1
        imul edx, ecx, 7fh
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + edx], 0
        ; Exact mapped bytes EB 0F: jmp 0x584fe999
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 80h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx + 84h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 264h]
        mov dword ptr [ebp - 10h], edx
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B7 EB FF FF: call 0x584fd580
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
