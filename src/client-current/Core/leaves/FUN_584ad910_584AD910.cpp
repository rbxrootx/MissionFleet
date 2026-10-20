// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AD910 .. +0x11A bytes.
extern "C" __declspec(naked) void FUN_584ad910_584AD910() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 8
        ; Exact mapped bytes 0F 8D 01 01 00 00: jge 0x584ada24
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 10bcch]
        xor edx, 55555555h
        add edx, dword ptr [ebp + 8]
        xor edx, 55555555h
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 10bcch], edx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 10bcch]
        xor ecx, 55555555h
        ; Exact mapped bytes 7D 51: jge 0x584ad9b2
        __asm _emit 0x7d
        __asm _emit 0x51
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 10bcch]
        xor ecx, 55555555h
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 10bcch], ecx
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 10bcch], 0
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 10bcch]
        xor edx, 55555555h
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 10bcch], edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 03 90 FD FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x90
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EC F5 FD FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xf5
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 75 5B: jne 0x584ada24
        __asm _emit 0x75
        __asm _emit 0x5b
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 20fc8h]
        ; Exact mapped bytes E8 D9 7D FE FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x7d
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 7E 2F: jle 0x584ada0d
        __asm _emit 0x7e
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20fc8h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 20fc8h]
        ; Exact mapped bytes E8 B8 7D FE FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x7d
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B6 FE FF FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x584ada24
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20fc8h]
        mov dword ptr [ebp - 10h], edx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9D FE FF FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
