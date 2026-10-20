// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050F722 .. +0x159 bytes.
extern "C" __declspec(naked) void FUN_0050f722_0050F722() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x50f748
        __asm _emit 0x75
        __asm _emit 0x14
        push 13ch
        push 5c7374h
        ; Exact mapped bytes E8 BD 52 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50f748
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x50f72e
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx + 80h], 0
        ; Exact mapped bytes 74 51: je 0x50f7ab
        __asm _emit 0x74
        __asm _emit 0x51
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 7C 4E 03 00: call 0x5445e2
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x4e
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 07: jne 0x50f776
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 FC 00 00 00: jmp 0x50f872
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        push 3
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 0C 1E 5E 00: call dword ptr [0x5e1e0c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 FC 1D 5E 00: call dword ptr [0x5e1dfc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x1d
        __asm _emit 0x5e
        __asm _emit 0x00
        xor eax, eax
        cmp dword ptr [ebp - 14h], 0
        sete al
        ; Exact mapped bytes E9 C7 00 00 00: jmp 0x50f872
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 14h]
        lea eax, [edx + edx + 1]
        push eax
        ; Exact mapped bytes E8 08 DC FD FF: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xdc
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x50f7d6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 73 38: jae 0x50f816
        __asm _emit 0x73
        __asm _emit 0x38
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp - 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx]
        and edx, 0fh
        add edx, 41h
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + eax*2], dl
        mov edx, dword ptr [ebp + 10h]
        add edx, dword ptr [ebp - 0ch]
        xor eax, eax
        mov al, byte ptr [edx]
        sar eax, 4
        and eax, 0fh
        add eax, 41h
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + ecx*2 + 1], al
        ; Exact mapped bytes EB B7: jmp 0x50f7cd
        __asm _emit 0xeb
        __asm _emit 0xb7
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + eax*2], 0
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 94h], 0
        ; Exact mapped bytes 75 14: jne 0x50f840
        __asm _emit 0x75
        __asm _emit 0x14
        push 152h
        push 5c7374h
        ; Exact mapped bytes E8 C5 51 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50f840
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x50f820
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 3B FD FF FF: call 0x50f595
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 9D DB FD FF: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xdb
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
