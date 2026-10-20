// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044DF52 .. +0x12F bytes.
extern "C" __declspec(naked) void FUN_0044df52_0044DF52() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b146h
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
        cmp dword ptr [eax + 0db8h], 0
        ; Exact mapped bytes 0F 85 B9 00 00 00: jne 0x44e04b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 0dbch], 1
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 10dch], 0
        push 182h
        push 5b7098h
        push 1a4h
        ; Exact mapped bytes E8 73 F0 09 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xf0
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 17: je 0x44dfea
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0c7ch]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 FB 83 FD FF: call 0x4263e0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x44dff1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 10h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0db8h], ecx
        ; Exact mapped bytes 66 8B 55 0C: mov dx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ecx + 0db8h]
        ; Exact mapped bytes E8 8C A6 03 00: call 0x4886ad
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xa6
        __asm _emit 0x03
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 18h]
        add eax, 0dc0h
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A3 A7 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xa7
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ec0h], edx
        ; Exact mapped bytes EB 1B: jmp 0x44e066
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 0dbch], 0
        mov ecx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ecx + 0db8h]
        ; Exact mapped bytes E8 37 90 03 00: call 0x48709d
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x90
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
        ; Exact mapped bytes E8 65 A7 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xa7
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
