// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B8C20 .. +0x1C7 bytes.
extern "C" __declspec(naked) void FUN_585b8c20_585B8C20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 90h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 88h], ecx
        mov eax, dword ptr [ebp - 88h]
        cmp dword ptr [eax + 60h], 0
        ; Exact mapped bytes 0F 84 90 01 00 00: je 0x585b8dd9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [ecx + 0e0ch], 2000h
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 0e10h]
        push eax
        push 588ab128h
        lea ecx, [ebp - 84h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes FF 15 A0 42 89 58: call dword ptr [0x588942a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov eax, dword ptr [ebp - 88h]
        cmp dword ptr [eax + 0e10h], 0
        ; Exact mapped bytes 75 25: jne 0x585b8cbd
        __asm _emit 0x75
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ecx + 0e10h], eax
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [ecx + 0e14h], 0
        push 0
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 0e10h]
        push eax
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 59 74 FF FF: call 0x585b0130
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 EC 00 00 00: je 0x585b8dcb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 88h]
        mov ecx, dword ptr [ecx + 0dc8h]
        ; Exact mapped bytes E8 70 BC EC FF: call 0x58484960
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xbc
        __asm _emit 0xec
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 31: je 0x585b8d28
        __asm _emit 0x74
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 0dc8h]
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 0dc8h]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 0dc8h]
        ; Exact mapped bytes E8 99 CD EC FF: call 0x58485ac0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xcd
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        push 0
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 0e10h]
        push edx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 EE 73 FF FF: call 0x585b0130
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 0e10h]
        mov dword ptr [ebp - 90h], ecx
        mov edx, dword ptr [ebp - 8ch]
        push edx
        mov eax, dword ptr [ebp - 90h]
        push eax
        push 588ab14ch
        lea ecx, [ebp - 84h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes FF 15 A0 42 89 58: call dword ptr [0x588942a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 0e10h]
        push ecx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 8C 73 FF FF: call 0x585b0130
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 88h]
        mov dword ptr [edx + 0e10h], eax
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 0e14h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 88h]
        mov dword ptr [edx + 0e14h], ecx
        push 0
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 78 F7 FF FF: call 0x585b8550
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 6D 82 27 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x82
        __asm _emit 0x27
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
