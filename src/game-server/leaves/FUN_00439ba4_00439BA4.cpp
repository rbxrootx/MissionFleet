// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00439BA4 .. +0x11D bytes.
extern "C" __declspec(naked) void FUN_00439ba4_00439BA4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 10h], 0
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 C2 57 09 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x57
        __asm _emit 0x09
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1e7ch
        ; Exact mapped bytes E8 CA 7A 0F 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x7a
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x439bf6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0ah
        ; Exact mapped bytes 7D 5C: jge 0x439c58
        __asm _emit 0x7d
        __asm _emit 0x5c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [esi + ecx*8 + 1f9ch]
        mov dword ptr [eax + edx*8 + 1f44h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [esi + ecx*8 + 1fa0h]
        mov dword ptr [eax + edx*8 + 1f48h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [eax + edx*8 + 1f9ch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [eax + edx*8 + 1fa0h]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 95: jmp 0x439bed
        __asm _emit 0xeb
        __asm _emit 0x95
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 1f94h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 1f98h], edx
        mov eax, dword ptr [ebp + 8]
        add eax, 0ach
        mov esi, esp
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1f30h
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 4E EB 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xeb
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes A1 7C CB 5D 00: mov eax, dword ptr [0x5dcb7c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 40c78h]
        mov dword ptr [edx + 1f24h], ecx
        mov dword ptr [ebp - 10h], 1
        mov eax, dword ptr [ebp - 10h]
        pop esi
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 25 EB 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xeb
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
