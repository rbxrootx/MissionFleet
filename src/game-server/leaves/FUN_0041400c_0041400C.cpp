// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041400C .. +0xFF bytes.
extern "C" __declspec(naked) void FUN_0041400c_0041400C() {
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
        mov dword ptr [ebp - 10h], ecx
        mov esi, esp
        push 0
        push 80h
        push 3
        push 0
        push 3
        push 0c0000000h
        mov eax, dword ptr [ebp - 10h]
        add eax, 4
        push eax
        ; Exact mapped bytes FF 15 F4 21 5E 00: call dword ptr [0x5e21f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 91 47 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x47
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 0F 84 9B 00 00 00: je 0x4140f7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0ffffffffh
        mov esi, esp
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        add ecx, 4ch
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 5F 47 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x47
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea eax, [ebp - 4]
        push eax
        push 4
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 40 47 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x47
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        add eax, 50h
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 22 47 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x47
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea edx, [ebp - 4]
        push edx
        push 4
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 03 47 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x47
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F0 46 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x46
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 03: jmp 0x4140fa
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        pop esi
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 DB 46 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x46
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
