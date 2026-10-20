// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004335CE .. +0xF0 bytes.
extern "C" __declspec(naked) void FUN_004335ce_004335CE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        mov esi, esp
        push 0
        push 80h
        push 2
        push 0
        push 0
        push 40000000h
        push 5b58cch
        ; Exact mapped bytes FF 15 F4 21 5E 00: call dword ptr [0x5e21f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 CE 51 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x51
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x4336af
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 09: jmp 0x433631
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0ah
        ; Exact mapped bytes 7D 65: jge 0x43369c
        __asm _emit 0x7d
        __asm _emit 0x65
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + eax*4 + 7ch]
        shl ecx, 2
        mov dword ptr [ebp - 10h], ecx
        mov esi, esp
        push 0
        lea edx, [ebp - 4]
        push edx
        push 4
        lea eax, [ebp - 10h]
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
        ; Exact mapped bytes E8 74 51 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x51
        __asm _emit 0x07
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea edx, [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + eax*4 + 2ch]
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
        ; Exact mapped bytes E8 46 51 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x51
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 8C: jmp 0x433628
        __asm _emit 0xeb
        __asm _emit 0x8c
        mov esi, esp
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 31 51 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x51
        __asm _emit 0x07
        __asm _emit 0x00
        pop esi
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 26 51 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x51
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
