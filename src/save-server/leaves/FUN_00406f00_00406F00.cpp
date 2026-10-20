// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00406F00 .. +0x11C bytes.
extern "C" __declspec(naked) void FUN_00406f00_00406F00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 50h]
        mov ecx, 14h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], ecx
        mov esi, esp
        push 0
        push 80h
        push 3
        push 0
        push 3
        push 80000000h
        mov eax, dword ptr [ebp - 4]
        add eax, 8
        push eax
        ; Exact mapped bytes FF 15 D0 B7 68 00: call dword ptr [0x68b7d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 9C DE 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xde
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 0F 84 A5 00 00 00: je 0x407006
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        add ecx, 4ch
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 71 DE 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xde
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea eax, [ebp - 10h]
        push eax
        push 4
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 C8 B7 68 00: call dword ptr [0x68b7c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 52 DE 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xde
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x406fa9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 1
        mov dword ptr [ebp + 0ch], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7E 3F: jle 0x406fee
        __asm _emit 0x7e
        __asm _emit 0x3f
        mov esi, esp
        push 0
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 4ch
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 23 DE 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xde
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea eax, [ebp - 10h]
        push eax
        push 4
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 C8 B7 68 00: call dword ptr [0x68b7c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 04 DE 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xde
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB B2: jmp 0x406fa0
        __asm _emit 0xeb
        __asm _emit 0xb2
        mov esi, esp
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 C4 B7 68 00: call dword ptr [0x68b7c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 EF DD 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes EB 03: jmp 0x407009
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        pop edi
        pop esi
        pop ebx
        add esp, 50h
        cmp ebp, esp
        ; Exact mapped bytes E8 DA DD 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
