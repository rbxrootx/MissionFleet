// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00406291 .. +0xB5 bytes.
extern "C" __declspec(naked) void FUN_00406291_00406291() {
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
        push 1
        push 80000000h
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
        ; Exact mapped bytes E8 0C 25 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x25
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 74 55: je 0x406332
        __asm _emit 0x74
        __asm _emit 0x55
        mov esi, esp
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        add ecx, 48h
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E5 24 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x24
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea eax, [ebp - 0ch]
        push eax
        push 4
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 F0 21 5E 00: call dword ptr [0x5e21f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C6 24 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x24
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B3 24 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x24
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 03: jmp 0x406335
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        pop esi
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 A0 24 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x24
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
