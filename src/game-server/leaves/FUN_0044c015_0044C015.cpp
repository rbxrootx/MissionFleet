// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044C015 .. +0xC6 bytes.
extern "C" __declspec(naked) void FUN_0044c015_0044C015() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 10h], 31h
        mov dword ptr [ebp - 14h], 0
        lea eax, [ebp - 10h]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        lea edx, [ebp + 8]
        push edx
        ; Exact mapped bytes E8 3C 9E FC FF: call 0x415e90
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x9e
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x44c05f
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 6C: jmp 0x44c0cb
        __asm _emit 0xeb
        __asm _emit 0x6c
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 8]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16bdch]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 1B B6 FF FF: call 0x4476a2
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 04: jne 0x44c094
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 37: jmp 0x44c0cb
        __asm _emit 0xeb
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes A1 7C CB 5D 00: mov eax, dword ptr [0x5dcb7c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 40cc8h]
        mov ecx, dword ptr [ecx + 0ca0h]
        ; Exact mapped bytes E8 32 69 FE FF: call 0x4329e0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x69
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 64h]
        imul eax, eax, 3e8h
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 73 04: jae 0x44c0c6
        __asm _emit 0x73
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x44c0cb
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 0B C7 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
