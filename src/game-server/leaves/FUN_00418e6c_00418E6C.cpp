// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00418E6C .. +0x19B bytes.
extern "C" __declspec(naked) void FUN_00418e6c_00418E6C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 68 01 00 00: je 0x418ff6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp + 10h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        add eax, 108h
        push eax
        ; Exact mapped bytes E8 86 0B 09 00: call 0x4a9a30
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x0b
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 4], 0
        mov esi, esp
        push 0
        push 80h
        push 3
        push 0
        push 0
        push 40000000h
        mov ecx, dword ptr [ebp + 8]
        add ecx, 4
        push ecx
        ; Exact mapped bytes FF 15 F4 21 5E 00: call dword ptr [0x5e21f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 04 F9 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xf9
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 0F 84 06 01 00 00: je 0x418fef
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        add edx, 108h
        push edx
        ; Exact mapped bytes E8 D8 04 09 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x04
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 10h]
        mov byte ptr [eax + 108h], 0dh
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 109h], 0ah
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 10ah], 0
        mov esi, esp
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 104h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 9A F8 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xf8
        __asm _emit 0x08
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 108h
        push ecx
        ; Exact mapped bytes E8 73 04 09 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x04
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        push eax
        mov edx, dword ptr [ebp + 8]
        add edx, 108h
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 64 F8 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xf8
        __asm _emit 0x08
        __asm _emit 0x00
        mov esi, esp
        push 2
        push 0
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 4B F8 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xf8
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 104h], eax
        mov esi, esp
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 29 F8 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xf8
        __asm _emit 0x08
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea ecx, [ebp - 8]
        push ecx
        push 4
        mov edx, dword ptr [ebp + 8]
        add edx, 104h
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 04 F8 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xf8
        __asm _emit 0x08
        __asm _emit 0x00
        mov esi, esp
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F1 F7 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xf7
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x418ff8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 DD F7 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xf7
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
