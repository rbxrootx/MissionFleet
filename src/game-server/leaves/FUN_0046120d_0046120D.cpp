// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046120D .. +0xB5 bytes.
extern "C" __declspec(naked) void FUN_0046120d_0046120D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        push edi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        mov esi, dword ptr [ebp - 14h]
        mov edi, esp
        ; Exact mapped bytes FF 15 F8 23 5E 00: call dword ptr [0x5e23f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp edi, esp
        ; Exact mapped bytes E8 A2 75 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x75
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        sub eax, dword ptr [ecx + 24h]
        xor edx, edx
        mov ecx, dword ptr [esi + 28h]
        sub ecx, eax
        mov eax, dword ptr [esi + 2ch]
        sbb eax, edx
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], eax
        push 0
        push 36ee80h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 76 B2 04 00: call 0x4ac4e0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xb2
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        push 0
        push 36ee80h
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 DF B1 04 00: call 0x4ac460
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xb1
        __asm _emit 0x04
        __asm _emit 0x00
        push 0
        push 0ea60h
        push edx
        push eax
        ; Exact mapped bytes E8 51 B2 04 00: call 0x4ac4e0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xb2
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        push 5baaf0h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 B4 D6 06 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xd6
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 10h
        mov eax, 1
        pop edi
        pop esi
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 24 75 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x75
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
