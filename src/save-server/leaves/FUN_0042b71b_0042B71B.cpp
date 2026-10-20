// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042B71B .. +0x28C bytes.
extern "C" __declspec(naked) void FUN_0042b71b_0042B71B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 48h], 0
        ; Exact mapped bytes 75 07: jne 0x42b74a
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 4E 02 00 00: jmp 0x42b998
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 1
        push 0
        push 0
        push 0
        push 1
        push 2
        ; Exact mapped bytes FF 15 58 C1 68 00: call dword ptr [0x68c158]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 8B 96 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 4], -1
        ; Exact mapped bytes 75 07: jne 0x42b77b
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 1D 02 00 00: jmp 0x42b998
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 48h]
        add ecx, 0c30h
        ; Exact mapped bytes E8 39 09 00 00: call 0x42c0d0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 33h
        push 464h
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 48h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 44 C1 68 00: call dword ptr [0x68c144]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 32 96 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x96
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 35: jne 0x42b7f8
        __asm _emit 0x75
        __asm _emit 0x35
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 80 C1 68 00: call dword ptr [0x68c180]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 15 96 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x96
        __asm _emit 0x03
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 84 C1 68 00: call dword ptr [0x68c184]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 FF 95 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x03
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 A0 01 00 00: jmp 0x42b998
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 10000h
        mov esi, esp
        push 4
        lea ecx, [ebp - 4]
        push ecx
        push 1001h
        push 0ffffh
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 54 C1 68 00: call dword ptr [0x68c154]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 CB 95 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x95
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 35: jne 0x42b85f
        __asm _emit 0x75
        __asm _emit 0x35
        mov esi, esp
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 80 C1 68 00: call dword ptr [0x68c180]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 AE 95 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x95
        __asm _emit 0x03
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 84 C1 68 00: call dword ptr [0x68c184]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 98 95 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x95
        __asm _emit 0x03
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 39 01 00 00: jmp 0x42b998
        __asm _emit 0xe9
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 8000h
        mov esi, esp
        push 4
        lea edx, [ebp - 8]
        push edx
        push 1002h
        push 0ffffh
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 54 C1 68 00: call dword ptr [0x68c154]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 64 95 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x95
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 35: jne 0x42b8c6
        __asm _emit 0x75
        __asm _emit 0x35
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 80 C1 68 00: call dword ptr [0x68c180]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 47 95 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x95
        __asm _emit 0x03
        __asm _emit 0x00
        mov esi, esp
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 84 C1 68 00: call dword ptr [0x68c184]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 31 95 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x95
        __asm _emit 0x03
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 D2 00 00 00: jmp 0x42b998
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 74 39: je 0x42b908
        __asm _emit 0x74
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 48h]
        mov eax, dword ptr [edx + 0bb4h]
        add eax, 1
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 48h]
        mov dword ptr [edx + 0bb4h], eax
        mov eax, dword ptr [ebp - 0ch]
        push eax
        push 0
        push 468h
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 48h]
        mov ecx, dword ptr [edx + 40h]
        ; Exact mapped bytes E8 36 FD 0F 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xfd
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes E9 8B 00 00 00: jmp 0x42b993
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 48h]
        mov ecx, dword ptr [edx + 0c28h]
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + 48h]
        mov eax, dword ptr [edx + 0c28h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        cmp esi, esp
        ; Exact mapped bytes E8 BE 94 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 36: jne 0x42b96d
        __asm _emit 0x75
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 48h]
        mov edx, dword ptr [ecx + 0bb4h]
        add edx, 1
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 48h]
        mov dword ptr [ecx + 0bb4h], edx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        push 0
        push 468h
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 48h]
        mov ecx, dword ptr [ecx + 40h]
        ; Exact mapped bytes E8 CE FC 0F 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xfc
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 26: jmp 0x42b993
        __asm _emit 0xeb
        __asm _emit 0x26
        push 0
        push 0
        push 0
        push 8002h
        push 0
        push 80000003h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 9B E7 FF FF: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 FE E5 FF FF: call 0x429f8d
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x42b998
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        pop esi
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 4D 94 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
