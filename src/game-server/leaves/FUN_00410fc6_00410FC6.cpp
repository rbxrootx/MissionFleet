// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00410FC6 .. +0x16C bytes.
extern "C" __declspec(naked) void FUN_00410fc6_00410FC6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 36 01 00 00: je 0x411120
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0ch]
        add ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [edx + 8]
        ; Exact mapped bytes 7D 61: jge 0x41105c
        __asm _emit 0x7d
        __asm _emit 0x61
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 75 25: jne 0x411026
        __asm _emit 0x75
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0ch]
        mov edx, dword ptr [ebp + 8]
        mov dl, byte ptr [edx]
        mov byte ptr [ecx + eax], dl
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0ch]
        add ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0ch], ecx
        ; Exact mapped bytes EB 2C: jmp 0x411052
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 10h]
        add eax, dword ptr [ecx + 0ch]
        push eax
        ; Exact mapped bytes E8 E0 7F 09 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x7f
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0ch]
        add eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0ch], eax
        mov eax, 1
        ; Exact mapped bytes E9 C6 00 00 00: jmp 0x411122
        __asm _emit 0xe9
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0ch]
        add eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 8], eax
        push 37h
        push 5a0e78h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes E8 B5 BF 0D 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xbf
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 7F 7F 09 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x7f
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 53 C3 0D 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xc3
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], edx
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 75 25: jne 0x4110ed
        __asm _emit 0x75
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0ch]
        mov edx, dword ptr [ebp + 8]
        mov dl, byte ptr [edx]
        mov byte ptr [ecx + eax], dl
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0ch]
        add ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0ch], ecx
        ; Exact mapped bytes EB 2C: jmp 0x411119
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 10h]
        add eax, dword ptr [ecx + 0ch]
        push eax
        ; Exact mapped bytes E8 19 7F 09 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x7f
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0ch]
        add eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0ch], eax
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x411122
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 B4 76 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x76
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
