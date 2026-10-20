// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00418B50 .. +0x10A bytes.
extern "C" __declspec(naked) void FUN_00418b50_00418B50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 7ch
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 7ch]
        mov ecx, 1fh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 30h
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 10ch]
        ; Exact mapped bytes E8 94 86 FE FF: call 0x40121c
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x86
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 75 36: jne 0x418bc7
        __asm _emit 0x75
        __asm _emit 0x36
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 C7 40 0C 00 00: mov word ptr [eax + 0xc], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 48h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 8002040eh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 65 15 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 80 00 00 00: jmp 0x418c47
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 10ch]
        ; Exact mapped bytes E8 06 8D FE FF: call 0x4018e3
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x8d
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 3ch], 1
        ; Exact mapped bytes 74 33: je 0x418c16
        __asm _emit 0x74
        __asm _emit 0x33
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 C7 40 0C 02 00: mov word ptr [eax + 0xc], 2
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        push 0
        push 48h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 8002040eh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 13 15 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 31: jmp 0x418c47
        __asm _emit 0xeb
        __asm _emit 0x31
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 C7 40 0C 00 00: mov word ptr [eax + 0xc], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 48h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 8002040eh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E0 14 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        add esp, 7ch
        cmp ebp, esp
        ; Exact mapped bytes E8 9C C1 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xc1
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
