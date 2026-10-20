// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5858F720 .. +0x118 bytes.
extern "C" __declspec(naked) void FUN_5858f720_5858F720() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 0ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 0dh], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 14h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 18h], 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 1ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 20h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 24h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 28h]
        mov dword ptr [ebp - 0ch], eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 0A 11 00 00: call 0x58590890
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2ch], 64h
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5858f7a2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 74 1A: je 0x5858f7c2
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 38h]
        mov dword ptr [ebp - 10h], edx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D1 B9 22 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xb9
        __asm _emit 0x22
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB D7: jmp 0x5858f799
        __asm _emit 0xeb
        __asm _emit 0xd7
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 14h], ecx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 BB B9 22 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xb9
        __asm _emit 0x22
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 54h]
        mov dword ptr [ebp - 18h], edx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 9F B9 22 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xb9
        __asm _emit 0x22
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 54h]
        mov dword ptr [ebp - 1ch], edx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 83 B9 22 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x22
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        mov dword ptr [ebp - 20h], ecx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 70 B9 22 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xb9
        __asm _emit 0x22
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 24h], eax
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 5D B9 22 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xb9
        __asm _emit 0x22
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
