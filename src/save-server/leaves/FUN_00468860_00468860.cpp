// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00468860 .. +0x114 bytes.
extern "C" __declspec(naked) void FUN_00468860_00468860() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 5ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes EB 09: jmp 0x46887b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4ch]
        add eax, 1
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 10h], 10h
        ; Exact mapped bytes 7D 0B: jge 0x46888f
        __asm _emit 0x7d
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 10h]
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x468896
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 10h
        mov ecx, dword ptr [ebp - 4ch]
        cmp ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes 0F 8D 9A 00 00 00: jge 0x46893c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 4ch]
        mov al, byte ptr [edx + 20h]
        mov byte ptr [ebp - 50h], al
        ; Exact mapped bytes 83 3D CC E0 67 00 01: cmp dword ptr [0x67e0cc], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xcc
        __asm _emit 0xe0
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E 1C: jle 0x4688d3
        __asm _emit 0x7e
        __asm _emit 0x1c
        push 157h
        mov ecx, dword ptr [ebp - 50h]
        and ecx, 0ffh
        push ecx
        ; Exact mapped bytes E8 F5 80 00 00: call 0x4709c0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 1D: jmp 0x4688f0
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 50h]
        and edx, 0ffh
        ; Exact mapped bytes A1 C0 DE 67 00: mov eax, dword ptr [0x67dec0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0xde
        __asm _emit 0x67
        __asm _emit 0x00
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0C 50: mov cx, word ptr [eax + edx*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x50
        and ecx, 157h
        mov dword ptr [ebp - 58h], ecx
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 0E: je 0x468904
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 50h]
        and edx, 0ffh
        mov dword ptr [ebp - 5ch], edx
        ; Exact mapped bytes EB 07: jmp 0x46890b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 20h
        mov eax, dword ptr [ebp - 4ch]
        mov cl, byte ptr [ebp - 5ch]
        mov byte ptr [ebp + eax - 48h], cl
        mov edx, dword ptr [ebp - 50h]
        and edx, 0ffh
        push edx
        push 63e89ch
        mov eax, dword ptr [ebp - 4ch]
        imul eax, eax, 3
        lea ecx, [ebp + eax - 34h]
        push ecx
        ; Exact mapped bytes E8 0C 10 00 00: call 0x469940
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 36 FF FF FF: jmp 0x468872
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4ch]
        mov byte ptr [ebp + edx - 48h], 0
        lea eax, [ebp - 34h]
        push eax
        lea ecx, [ebp - 48h]
        push ecx
        push 63e88ch
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 02 45 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x468967
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D7: jne 0x468944
        __asm _emit 0x75
        __asm _emit 0xd7
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
