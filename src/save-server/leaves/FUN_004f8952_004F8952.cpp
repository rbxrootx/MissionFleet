// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F8952 .. +0x159 bytes.
extern "C" __declspec(naked) void FUN_004f8952_004F8952() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4f8978
        __asm _emit 0x75
        __asm _emit 0x14
        push 13ch
        push 6739a4h
        ; Exact mapped bytes E8 CD 03 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x03
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f8978
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4f895e
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx + 80h], 0
        ; Exact mapped bytes 74 51: je 0x4f89db
        __asm _emit 0x74
        __asm _emit 0x51
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 7C 6D 04 00: call 0x53f712
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x6d
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 07: jne 0x4f89a6
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 FC 00 00 00: jmp 0x4f8aa2
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
        ; Exact mapped bytes FF 15 A0 B2 68 00: call dword ptr [0x68b2a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 90 B2 68 00: call dword ptr [0x68b290]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        xor eax, eax
        cmp dword ptr [ebp - 14h], 0
        sete al
        ; Exact mapped bytes E9 C7 00 00 00: jmp 0x4f8aa2
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 14h]
        lea eax, [edx + edx + 1]
        push eax
        ; Exact mapped bytes E8 78 3A FD FF: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x3a
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x4f8a06
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 73 38: jae 0x4f8a46
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
        ; Exact mapped bytes EB B7: jmp 0x4f89fd
        __asm _emit 0xeb
        __asm _emit 0xb7
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + eax*2], 0
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 94h], 0
        ; Exact mapped bytes 75 14: jne 0x4f8a70
        __asm _emit 0x75
        __asm _emit 0x14
        push 152h
        push 6739a4h
        ; Exact mapped bytes E8 D5 02 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x02
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f8a70
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x4f8a50
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 3B FD FF FF: call 0x4f87c5
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
        ; Exact mapped bytes E8 0D 3A FD FF: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x3a
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
