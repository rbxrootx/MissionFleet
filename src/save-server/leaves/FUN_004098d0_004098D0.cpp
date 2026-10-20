// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004098D0 .. +0x19D bytes.
extern "C" __declspec(naked) void FUN_004098d0_004098D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        push ebx
        push esi
        push edi
        lea edi, [ebp - 50h]
        mov ecx, 14h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 68 01 00 00: je 0x409a5a
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
        ; Exact mapped bytes E8 B2 BE 05 00: call 0x4657c0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xbe
        __asm _emit 0x05
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
        ; Exact mapped bytes FF 15 D0 B7 68 00: call dword ptr [0x68b7d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B0 B4 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xb4
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 0F 84 06 01 00 00: je 0x409a53
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        add edx, 108h
        push edx
        ; Exact mapped bytes E8 E4 BD 05 00: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xbd
        __asm _emit 0x05
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
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 46 B4 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xb4
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 108h
        push ecx
        ; Exact mapped bytes E8 7F BD 05 00: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xbd
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        push eax
        mov edx, dword ptr [ebp + 8]
        add edx, 108h
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 10 B4 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xb4
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 2
        push 0
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F7 B3 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xb3
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 104h], eax
        mov esi, esp
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D5 B3 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xb3
        __asm _emit 0x05
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
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B0 B3 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xb3
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 C4 B7 68 00: call dword ptr [0x68b7c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 9D B3 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xb3
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x409a5c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 50h
        cmp ebp, esp
        ; Exact mapped bytes E8 87 B3 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xb3
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
