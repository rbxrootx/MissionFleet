// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587D6E50 .. +0x16D bytes.
extern "C" __declspec(naked) void FUN_587d6e50() {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov esi, ecx
        mov eax, dword ptr [esi + 4f4h]
        test edi, edi
        ; Exact mapped bytes 75 26: jne 0x587d6e88
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 4f8h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov esi, dword ptr [esi + 4fch]
        mov eax, ecx
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, 1
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 4f8h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 4fch]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        xor ecx, ecx
        mov eax, edi
        mov edx, 0ch
        mul edx
        seto cl
        push ebp
        neg ecx
        or ecx, eax
        push ecx
        ; Exact mapped bytes E8 70 A6 19 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xa6
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 18h]
        mov ebp, eax
        lea eax, [edi + edi*2]
        add eax, eax
        add eax, eax
        push eax
        push ecx
        push ebp
        ; Exact mapped bytes E8 79 5E 1A 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x5e
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4fch]
        add esp, 10h
        ; Exact mapped bytes E8 0F 19 13 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x19
        __asm _emit 0x13
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 0F 86 C5 00 00 00: jbe 0x587d6fae
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov dword ptr [esp + 14h], edi
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ebx, ebp
        mov eax, dword ptr [ebx]
        dec eax
        cmp eax, 0eh
        ; Exact mapped bytes 0F 87 9D 00 00 00: ja 0x587d6f9f
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 C0 6F 7D 58: jmp dword ptr [eax*4 + 0x587d6fc0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0x6f
        __asm _emit 0x7d
        __asm _emit 0x58
        push -1
        push 5899b7f4h
        ; Exact mapped bytes EB 7C: jmp 0x587d6f8e
        __asm _emit 0xeb
        __asm _emit 0x7c
        push -1
        push 5899b7c0h
        ; Exact mapped bytes EB 73: jmp 0x587d6f8e
        __asm _emit 0xeb
        __asm _emit 0x73
        push -1
        push 5899b794h
        ; Exact mapped bytes EB 6A: jmp 0x587d6f8e
        __asm _emit 0xeb
        __asm _emit 0x6a
        push -1
        push 5899b758h
        ; Exact mapped bytes EB 61: jmp 0x587d6f8e
        __asm _emit 0xeb
        __asm _emit 0x61
        push -1
        push 5899b730h
        ; Exact mapped bytes EB 58: jmp 0x587d6f8e
        __asm _emit 0xeb
        __asm _emit 0x58
        push -1
        push 5899b700h
        ; Exact mapped bytes EB 4F: jmp 0x587d6f8e
        __asm _emit 0xeb
        __asm _emit 0x4f
        push -1
        push 5899b6cch
        ; Exact mapped bytes EB 46: jmp 0x587d6f8e
        __asm _emit 0xeb
        __asm _emit 0x46
        push -1
        push 5899b6a0h
        ; Exact mapped bytes EB 3D: jmp 0x587d6f8e
        __asm _emit 0xeb
        __asm _emit 0x3d
        push -1
        push 5899b674h
        ; Exact mapped bytes EB 34: jmp 0x587d6f8e
        __asm _emit 0xeb
        __asm _emit 0x34
        push -1
        push 5899b654h
        ; Exact mapped bytes EB 2B: jmp 0x587d6f8e
        __asm _emit 0xeb
        __asm _emit 0x2b
        push -1
        push 5899b62ch
        ; Exact mapped bytes EB 22: jmp 0x587d6f8e
        __asm _emit 0xeb
        __asm _emit 0x22
        push -1
        push 5899b600h
        ; Exact mapped bytes EB 19: jmp 0x587d6f8e
        __asm _emit 0xeb
        __asm _emit 0x19
        push -1
        push 5899b5d4h
        ; Exact mapped bytes EB 10: jmp 0x587d6f8e
        __asm _emit 0xeb
        __asm _emit 0x10
        push -1
        push 5899b5a8h
        ; Exact mapped bytes EB 07: jmp 0x587d6f8e
        __asm _emit 0xeb
        __asm _emit 0x07
        push -1
        push 5899b57ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 4fch]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 91 31 11 00: call 0x588ea130
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x31
        __asm _emit 0x11
        __asm _emit 0x00
        add ebx, 0ch
        sub dword ptr [esp + 14h], 1
        ; Exact mapped bytes 0F 85 49 FF FF FF: jne 0x587d6ef6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebx
        push ebp
        ; Exact mapped bytes E8 72 5E 1A 00: call 0x5897ce26
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x5e
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        pop ebp
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
