// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00438A9E .. +0x207 bytes.
extern "C" __declspec(naked) void FUN_00438a9e_00438A9E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 114h
        push esi
        push edi
        lea edi, [ebp - 114h]
        mov ecx, 45h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        push 5b5be0h
        ; Exact mapped bytes E8 84 09 00 00: call 0x439449
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 CA 01 00 00: call 0x438ca5
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        push edx
        push 5b5c1ch
        ; Exact mapped bytes E8 5A 09 00 00: call 0x439449
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 10h]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        push 104h
        lea edx, [ebp - 114h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        ; Exact mapped bytes E8 B8 04 00 00: call 0x438fca
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        lea edx, [ebp - 114h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        push eax
        push 5b5c38h
        ; Exact mapped bytes E8 14 09 00 00: call 0x439449
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 8], edx
        push 5b5c5ch
        ; Exact mapped bytes E8 FE 08 00 00: call 0x439449
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 9ch]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0a0h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0a8h]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0ach]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0a4h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0b0h]
        push edx
        push 5b5c6ch
        ; Exact mapped bytes E8 B5 08 00 00: call 0x439449
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0b8h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0bch]
        push eax
        push 5b5ca4h
        ; Exact mapped bytes E8 94 08 00 00: call 0x439449
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0b4h]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0c4h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0c8h]
        push eax
        push 5b5cb8h
        ; Exact mapped bytes E8 69 08 00 00: call 0x439449
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 90h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 94h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 98h]
        push edx
        push 5b5cd4h
        ; Exact mapped bytes E8 34 08 00 00: call 0x439449
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0c0h]
        push ecx
        push 5b5cf8h
        ; Exact mapped bytes E8 1D 08 00 00: call 0x439449
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 A9 08 00 00: call 0x4394dd
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 22: jne 0x438c5a
        __asm _emit 0x75
        __asm _emit 0x22
        mov esi, esp
        push 5b5d04h
        ; Exact mapped bytes FF 15 44 24 5E 00: call dword ptr [0x5e2444]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 94 FB 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xfb
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 AB 04 00 00: call 0x439100
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 38: jmp 0x438c92
        __asm _emit 0xeb
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 CD 05 00 00: call 0x439230
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov esi, esp
        ; Exact mapped bytes FF 15 48 24 5E 00: call dword ptr [0x5e2448]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 6B FB 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xfb
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, esp
        push eax
        ; Exact mapped bytes FF 15 54 30 5D 00: call dword ptr [0x5d3054]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x30
        __asm _emit 0x5d
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 5B FB 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xfb
        __asm _emit 0x06
        __asm _emit 0x00
        push 5b5d34h
        ; Exact mapped bytes E8 BA 07 00 00: call 0x439449
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        pop edi
        pop esi
        add esp, 114h
        cmp ebp, esp
        ; Exact mapped bytes E8 3F FB 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xfb
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
