// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044E42A .. +0x13E bytes.
extern "C" __declspec(naked) void FUN_0044e42a_0044E42A() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b1cah
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 10h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 0db4h], 0
        ; Exact mapped bytes 0F 85 C8 00 00 00: jne 0x44e532
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 10e0h], 1
        push 1ddh
        push 5b7098h
        push 1c8h
        ; Exact mapped bytes E8 A8 EB 09 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xeb
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 17: je 0x44e4b5
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0c7ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 80 DC 01 00: call 0x46c130
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x44e4bc
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0db4h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 0c7ch]
        mov eax, dword ptr [edx + 40cc4h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 0db4h]
        mov dword ptr [eax + 2ch], edx
        ; Exact mapped bytes 66 8B 45 0C: mov ax, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + 0db4h]
        ; Exact mapped bytes E8 A6 A1 03 00: call 0x4886ad
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xa1
        __asm _emit 0x03
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 10e4h
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 BC A2 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xa2
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 11e4h], eax
        ; Exact mapped bytes EB 1B: jmp 0x44e54d
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 10e0h], 0
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + 0db4h]
        ; Exact mapped bytes E8 50 8B 03 00: call 0x48709d
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x8b
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        add esp, 1ch
        cmp ebp, esp
        ; Exact mapped bytes E8 7E A2 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xa2
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
