// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048882B .. +0x28C bytes.
extern "C" __declspec(naked) void FUN_0048882b_0048882B() {
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
        ; Exact mapped bytes 75 07: jne 0x48885a
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 4E 02 00 00: jmp 0x488aa8
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
        ; Exact mapped bytes FF 15 10 29 5E 00: call dword ptr [0x5e2910]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 6B FF 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 4], -1
        ; Exact mapped bytes 75 07: jne 0x48888b
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 1D 02 00 00: jmp 0x488aa8
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
        ; Exact mapped bytes E8 39 09 00 00: call 0x4891e0
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
        ; Exact mapped bytes FF 15 34 29 5E 00: call dword ptr [0x5e2934]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 12 FF 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 35: jne 0x488908
        __asm _emit 0x75
        __asm _emit 0x35
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 54 29 5E 00: call dword ptr [0x5e2954]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F5 FE 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xfe
        __asm _emit 0x01
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 58 29 5E 00: call dword ptr [0x5e2958]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 DF FE 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xfe
        __asm _emit 0x01
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 A0 01 00 00: jmp 0x488aa8
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
        ; Exact mapped bytes FF 15 0C 29 5E 00: call dword ptr [0x5e290c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 AB FE 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xfe
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 35: jne 0x48896f
        __asm _emit 0x75
        __asm _emit 0x35
        mov esi, esp
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 54 29 5E 00: call dword ptr [0x5e2954]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 8E FE 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0x01
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 58 29 5E 00: call dword ptr [0x5e2958]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 78 FE 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0x01
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 39 01 00 00: jmp 0x488aa8
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
        ; Exact mapped bytes FF 15 0C 29 5E 00: call dword ptr [0x5e290c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 44 FE 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xfe
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 35: jne 0x4889d6
        __asm _emit 0x75
        __asm _emit 0x35
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 54 29 5E 00: call dword ptr [0x5e2954]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 27 FE 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xfe
        __asm _emit 0x01
        __asm _emit 0x00
        mov esi, esp
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 58 29 5E 00: call dword ptr [0x5e2958]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 11 FE 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xfe
        __asm _emit 0x01
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 D2 00 00 00: jmp 0x488aa8
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 74 39: je 0x488a18
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
        ; Exact mapped bytes E8 C6 31 0B 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x31
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes E9 8B 00 00 00: jmp 0x488aa3
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
        ; Exact mapped bytes E8 9E FD 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xfd
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 36: jne 0x488a7d
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
        ; Exact mapped bytes E8 5E 31 0B 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x31
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes EB 26: jmp 0x488aa3
        __asm _emit 0xeb
        __asm _emit 0x26
        push 0
        push 0
        push 0
        push 8002h
        push 0
        push 80000003h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 9B E7 FF FF: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 FE E5 FF FF: call 0x48709d
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x488aa8
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        pop esi
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 2D FD 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xfd
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
