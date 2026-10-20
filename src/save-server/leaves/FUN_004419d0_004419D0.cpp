// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004419D0 .. +0xEB bytes.
extern "C" __declspec(naked) void FUN_004419d0_004419D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push edi
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F 82 85 00 00 00: jb 0x441a75
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BE 45 14: movsx eax, byte ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0x14
        mov edi, dword ptr [ebp + 8]
        mov edx, ecx
        mov bl, al
        mov bh, bl
        mov eax, ebx
        shl eax, 10h
        ; Exact mapped bytes 66 8B C3: mov ax, bx
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xc3
        shr ecx, 2
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, edx
        and ecx, 3
        ; Exact mapped bytes F3 AA: rep stosb byte ptr es:[edi], al
        __asm _emit 0xf3
        __asm _emit 0xaa
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 4E: je 0x441a73
        __asm _emit 0x74
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4]
        sub eax, dword ptr [ebp + 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 08: jne 0x441a42
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes EB 17: jmp 0x441a59
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 0D 42 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x42
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp + 0ch]
        sub edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, edx
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 4], eax
        ; Exact mapped bytes EB 3B: jmp 0x441ab0
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 45 14: movsx eax, byte ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0x14
        mov edi, dword ptr [ebp + 8]
        mov edx, ecx
        mov bl, al
        mov bh, bl
        mov eax, ebx
        shl eax, 10h
        ; Exact mapped bytes 66 8B C3: mov ax, bx
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xc3
        shr ecx, 2
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, edx
        and ecx, 3
        ; Exact mapped bytes F3 AA: rep stosb byte ptr es:[edi], al
        __asm _emit 0xf3
        __asm _emit 0xaa
        mov al, byte ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A0 F4 FF FF: call 0x440f50
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        pop edi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
