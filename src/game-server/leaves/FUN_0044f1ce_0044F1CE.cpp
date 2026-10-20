// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044F1CE .. +0x103 bytes.
extern "C" __declspec(naked) void FUN_0044f1ce_0044F1CE() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b2e2h
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
        mov eax, 0cccccccch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 10e0h], 1
        ; Exact mapped bytes 0F 85 AC 00 00 00: jne 0x44f2b9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 0db4h], 0
        ; Exact mapped bytes 0F 85 9C 00 00 00: jne 0x44f2b9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 365h
        push 5b7098h
        push 1c8h
        ; Exact mapped bytes E8 02 DE 09 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xde
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 17: je 0x44f25b
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0c7ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 DA CE 01 00: call 0x46c130
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x44f262
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
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 88 E4 11 00 00: mov cx, word ptr [eax + 0x11e4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xe4
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov edx, dword ptr [ebp - 18h]
        add edx, 10e4h
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0db4h]
        ; Exact mapped bytes E8 F4 93 03 00: call 0x4886ad
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x93
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
        add esp, 1ch
        cmp ebp, esp
        ; Exact mapped bytes E8 13 95 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x95
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
