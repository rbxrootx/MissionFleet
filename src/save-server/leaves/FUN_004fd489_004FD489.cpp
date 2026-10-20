// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FD489 .. +0x1F6 bytes.
extern "C" __declspec(naked) void FUN_004fd489_004FD489() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        mov dword ptr [ebp - 38h], ecx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 90 04 01 00 00: call dword ptr [eax + 0x104]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 14 4D 03 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x4d
        __asm _emit 0x03
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 92 24 01 00 00: call dword ptr [edx + 0x124]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 C3 8D FD FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x8d
        __asm _emit 0xfd
        __asm _emit 0xff
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x4fd4d7
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 A2 01 00 00: jmp 0x4fd679
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 1
        ; Exact mapped bytes 75 22: jne 0x4fd4ff
        __asm _emit 0x75
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 7ch]
        mov eax, dword ptr [ecx + 8]
        cdq
        sub eax, edx
        sar eax, 1
        push eax
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 90 D8 00 00 00: call dword ptr [eax + 0xd8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 7A 01 00 00: jmp 0x4fd679
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 75 22: jne 0x4fd527
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 78h]
        mov eax, dword ptr [edx + 8]
        cdq
        sub eax, edx
        sar eax, 1
        push eax
        mov eax, dword ptr [ebp - 38h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 92 DC 00 00 00: call dword ptr [edx + 0xdc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 52 01 00 00: jmp 0x4fd679
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 65h
        ; Exact mapped bytes 7C 4F: jl 0x4fd57c
        __asm _emit 0x7c
        __asm _emit 0x4f
        cmp dword ptr [ebp - 14h], 73h
        ; Exact mapped bytes 7F 49: jg 0x4fd57c
        __asm _emit 0x7f
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 14h]
        sub eax, 65h
        mov dword ptr [ebp - 1ch], eax
        push 0
        lea ecx, [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 90 E8 00 00 00: call dword ptr [eax + 0xe8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x4fd565
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 1ch]
        cmp ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 75 09: jne 0x4fd565
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 92 E0 00 00 00: call dword ptr [edx + 0xe0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 FD 00 00 00: jmp 0x4fd679
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0c9h
        ; Exact mapped bytes 7C 54: jl 0x4fd5d9
        __asm _emit 0x7c
        __asm _emit 0x54
        cmp dword ptr [ebp - 14h], 0d7h
        ; Exact mapped bytes 7F 4B: jg 0x4fd5d9
        __asm _emit 0x7f
        __asm _emit 0x4b
        mov eax, dword ptr [ebp - 14h]
        sub eax, 0c9h
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 20h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 90 E8 00 00 00: call dword ptr [eax + 0xe8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x4fd5c2
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 24h]
        cmp ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 75 09: jne 0x4fd5c2
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 92 E4 00 00 00: call dword ptr [edx + 0xe4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 A0 00 00 00: jmp 0x4fd679
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 12dh
        ; Exact mapped bytes 0F 8C 93 00 00 00: jl 0x4fd679
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 20dh
        ; Exact mapped bytes 0F 8F 86 00 00 00: jg 0x4fd679
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        sub eax, 12dh
        cdq
        mov ecx, 0fh
        idiv ecx
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 14h]
        sub eax, 12dh
        cdq
        mov ecx, 0fh
        idiv ecx
        mov dword ptr [ebp - 30h], edx
        lea edx, [ebp - 28h]
        push edx
        lea eax, [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 92 E8 00 00 00: call dword ptr [edx + 0xe8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x4fd655
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 28h]
        cmp eax, dword ptr [ebp - 30h]
        ; Exact mapped bytes 75 09: jne 0x4fd644
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 1
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 2ch]
        cmp edx, dword ptr [ebp - 34h]
        ; Exact mapped bytes 75 09: jne 0x4fd655
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 34h]
        add eax, 1
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 90 E0 00 00 00: call dword ptr [eax + 0xe0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 90 E4 00 00 00: call dword ptr [eax + 0xe4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
