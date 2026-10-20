// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D13B8 .. +0x150 bytes.
extern "C" __declspec(naked) void FUN_004d13b8_004D13B8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x4d13de
        __asm _emit 0x75
        __asm _emit 0x14
        push 18fh
        push 5c7f78h
        ; Exact mapped bytes E8 27 36 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x36
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d13de
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4d13c4
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3C 36 02 00: call 0x4f4a34
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x36
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x4d1406
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 F9 00 00 00: jmp 0x4d14ff
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 25fh
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 6
        ; Exact mapped bytes 0F 87 D2 00 00 00: ja 0x4d14fd
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 24 95 08 15 4D 00: jmp dword ptr [edx*4 + 0x4d1508]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0x15
        __asm _emit 0x4d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 E4 00 00 00: call dword ptr [edx + 0xe4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 B2 00 00 00: jmp 0x4d14ff
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 E8 00 00 00: call dword ptr [edx + 0xe8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 9A 00 00 00: jmp 0x4d14ff
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 EC 00 00 00: call dword ptr [edx + 0xec]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 82 00 00 00: jmp 0x4d14ff
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 90 D8 00 00 00: call dword ptr [eax + 0xd8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], eax
        mov eax, 1
        ; Exact mapped bytes EB 61: jmp 0x4d14ff
        __asm _emit 0xeb
        __asm _emit 0x61
        push 0
        push 0e146h
        push 111h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 27 A7 06 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xa7
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4d14c7
        __asm _emit 0x75
        __asm _emit 0x11
        push 0
        push 0
        push 365h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 12 A7 06 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xa7
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 31: jmp 0x4d14ff
        __asm _emit 0xeb
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 90 DC 00 00 00: call dword ptr [eax + 0xdc]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], eax
        mov eax, 1
        ; Exact mapped bytes EB 17: jmp 0x4d14ff
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 90 F0 00 00 00: call dword ptr [eax + 0xf0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x4d14ff
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
