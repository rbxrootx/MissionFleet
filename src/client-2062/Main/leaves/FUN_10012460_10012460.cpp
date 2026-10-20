// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10012460 .. +0x1AC bytes.
extern "C" __declspec(naked) void FUN_10012460_10012460() {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 14h]
        push ebx
        xor ebx, ebx
        push ebp
        push esi
        cmp eax, ebx
        push edi
        mov esi, ecx
        ; Exact mapped bytes 74 06: je 0x10012477
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [esi + 84h], eax
        ; Exact mapped bytes 66 8B 46 7C: mov ax, word ptr [esi + 0x7c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x7c
        ; Exact mapped bytes 66 3D 02 00: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 7D 20: jge 0x100124a1
        __asm _emit 0x7d
        __asm _emit 0x20
        mov eax, dword ptr [esp + 20h]
        mov ecx, dword ptr [esp + 1ch]
        mov edx, dword ptr [esp + 18h]
        push ebx
        push eax
        push ecx
        push ebx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 57 FE FF FF: call 0x100122f0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C0: movsx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc0
        inc eax
        mov dword ptr [esp + 24h], ebx
        push eax
        ; Exact mapped bytes E8 F1 A2 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xa2
        __asm _emit 0x15
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 1ch]
        add esp, 4
        mov edi, eax
        ; Exact mapped bytes 0F BF 4E 7C: movsx ecx, word ptr [esi + 0x7c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4e
        __asm _emit 0x7c
        mov eax, dword ptr [esp + 24h]
        push ebp
        mov dword ptr [esp + 1ch], eax
        add eax, ecx
        mov dword ptr [esp + 28h], eax
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 24h]
        cmp ecx, eax
        ; Exact mapped bytes 0F 87 E4 00 00 00: ja 0x100125c1
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ecx + ebp]
        test al, al
        ; Exact mapped bytes 7C 33: jl 0x10012517
        __asm _emit 0x7c
        __asm _emit 0x33
        cmp al, 7fh
        ; Exact mapped bytes 7F 2F: jg 0x10012517
        __asm _emit 0x7f
        __asm _emit 0x2f
        ; Exact mapped bytes 0F BF 56 7C: movsx edx, word ptr [esi + 0x7c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x56
        __asm _emit 0x7c
        mov eax, dword ptr [esp + 18h]
        inc edx
        add eax, ebp
        push edx
        push eax
        push edi
        ; Exact mapped bytes FF 15 B4 50 17 10: call dword ptr [0x101750b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 20h]
        mov edx, dword ptr [esp + 1ch]
        push 0
        push ecx
        push edx
        push ebx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 DF FD FF FF: call 0x100122f0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        inc ebx
        ; Exact mapped bytes E9 99 00 00 00: jmp 0x100125b0
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 1
        mov dword ptr [esp + 10h], 1
        ; Exact mapped bytes 72 1C: jb 0x10012540
        __asm _emit 0x72
        __asm _emit 0x1c
        lea edx, [ecx + ebp - 1]
        mov al, byte ptr [edx]
        test al, al
        ; Exact mapped bytes 7E 04: jle 0x10012532
        __asm _emit 0x7e
        __asm _emit 0x04
        cmp al, 7fh
        ; Exact mapped bytes 7E 0E: jle 0x10012540
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [esp + 10h]
        inc eax
        dec edx
        cmp eax, ecx
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 76 E8: jbe 0x10012528
        __asm _emit 0x76
        __asm _emit 0xe8
        mov eax, dword ptr [esp + 10h]
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x10012550
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        ; Exact mapped bytes 74 2C: je 0x1001257e
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 0F BF 4E 7C: movsx ecx, word ptr [esi + 0x7c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4e
        __asm _emit 0x7c
        mov edx, dword ptr [esp + 18h]
        inc ecx
        add edx, ebp
        push ecx
        push edx
        push edi
        ; Exact mapped bytes FF 15 B4 50 17 10: call dword ptr [0x101750b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esp + 20h]
        mov ecx, dword ptr [esp + 1ch]
        push 0
        push eax
        push ecx
        push ebx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 75 FD FF FF: call 0x100122f0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        inc ebx
        ; Exact mapped bytes EB 32: jmp 0x100125b0
        __asm _emit 0xeb
        __asm _emit 0x32
        ; Exact mapped bytes 0F BF 56 7C: movsx edx, word ptr [esi + 0x7c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x56
        __asm _emit 0x7c
        mov eax, dword ptr [esp + 18h]
        push edx
        add eax, ebp
        push eax
        push edi
        ; Exact mapped bytes FF 15 B4 50 17 10: call dword ptr [0x101750b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 20h]
        mov edx, dword ptr [esp + 1ch]
        push 0
        push ecx
        push edx
        push ebx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 4A FD FF FF: call 0x100122f0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 24h]
        inc ebx
        dec eax
        mov dword ptr [esp + 24h], eax
        cmp ebx, 0ah
        ; Exact mapped bytes 0F 85 FF FE FF FF: jne 0x100124b8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        push ebp
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        sub eax, dword ptr [esp + 18h]
        ; Exact mapped bytes 74 36: je 0x10012604
        __asm _emit 0x74
        __asm _emit 0x36
        push ebp
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, eax
        mov eax, dword ptr [esp + 18h]
        mov edx, 1
        sub edx, eax
        add eax, ebp
        add ecx, edx
        push ecx
        push eax
        push edi
        ; Exact mapped bytes FF 15 B4 50 17 10: call dword ptr [0x101750b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esp + 20h]
        mov ecx, dword ptr [esp + 1ch]
        push 0
        push eax
        push ecx
        push ebx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 EC FC FF FF: call 0x100122f0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
