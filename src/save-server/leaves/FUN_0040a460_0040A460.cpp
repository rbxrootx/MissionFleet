// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040A460 .. +0x124 bytes.
extern "C" __declspec(naked) void FUN_0040a460_0040A460() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 48h]
        mov ecx, 12h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0ffffffffh
        push 888h
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        ; Exact mapped bytes E8 29 B4 05 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xb4
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 110h]
        ; Exact mapped bytes E8 CF 72 FF FF: call 0x40177b
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 0F 84 AC 00 00 00: je 0x40a565
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 900h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ecx + 110h]
        ; Exact mapped bytes E8 C7 6D FF FF: call 0x40129e
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x40a561
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 73: jne 0x40a55d
        __asm _emit 0x75
        __asm _emit 0x73
        mov esi, esp
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        add eax, 84h
        push eax
        ; Exact mapped bytes FF 15 E0 B7 68 00: call dword ptr [0x68b7e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E7 A8 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xa8
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 49: jne 0x40a556
        __asm _emit 0x75
        __asm _emit 0x49
        mov esi, esp
        push 18h
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 21h
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        add eax, 84h
        push eax
        ; Exact mapped bytes FF 15 EC B7 68 00: call dword ptr [0x68b7ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 BF A8 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xa8
        __asm _emit 0x05
        __asm _emit 0x00
        push 900h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ecx + 110h]
        ; Exact mapped bytes E8 BA 70 FF FF: call 0x401609
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 3
        ; Exact mapped bytes EB 1B: jmp 0x40a571
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov eax, 2
        ; Exact mapped bytes EB 14: jmp 0x40a571
        __asm _emit 0xeb
        __asm _emit 0x14
        xor eax, eax
        ; Exact mapped bytes EB 10: jmp 0x40a571
        __asm _emit 0xeb
        __asm _emit 0x10
        xor eax, eax
        ; Exact mapped bytes EB 0C: jmp 0x40a571
        __asm _emit 0xeb
        __asm _emit 0x0c
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 75 04: jne 0x40a56f
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 02: jmp 0x40a571
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 48h
        cmp ebp, esp
        ; Exact mapped bytes E8 72 A8 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xa8
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
