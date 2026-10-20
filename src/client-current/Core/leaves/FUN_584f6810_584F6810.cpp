// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F6810 .. +0xF8 bytes.
extern "C" __declspec(naked) void FUN_584f6810_584F6810() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        push edi
        mov dword ptr [ebp - 34h], ecx
        push 10e0h
        push 0
        push 5890bfd0h
        ; Exact mapped bytes E8 DA 65 35 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x65
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 0ch
        mov eax, 14h
        imul ecx, eax, 0ah
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + ecx + 8]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, 14h
        imul edx, ecx, 0ah
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax + edx + 14h]
        mov dword ptr [ebp - 40h], ecx
        xor edx, edx
        mov dword ptr [ebp - 28h], edx
        mov dword ptr [ebp - 24h], edx
        mov dword ptr [ebp - 20h], edx
        mov dword ptr [ebp - 1ch], edx
        mov dword ptr [ebp - 18h], edx
        mov dword ptr [ebp - 14h], edx
        mov dword ptr [ebp - 10h], edx
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 09: jmp 0x584f688c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 30h]
        add eax, 1
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        cmp ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 7D 62: jge 0x584f68f6
        __asm _emit 0x7d
        __asm _emit 0x62
        imul edx, dword ptr [ebp - 30h], 0e0h
        add edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 38h]
        ; Exact mapped bytes 66 8B 48 40: mov cx, word ptr [eax + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x40
        ; Exact mapped bytes 66 83 E1 3F: and cx, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x3f
        movzx edx, cx
        mov dword ptr [ebp - 2ch], edx
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 7C 06: jl 0x584f68be
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp - 2ch], 9
        ; Exact mapped bytes 7E 02: jle 0x584f68c0
        __asm _emit 0x7e
        __asm _emit 0x02
        ; Exact mapped bytes EB C3: jmp 0x584f6883
        __asm _emit 0xeb
        __asm _emit 0xc3
        imul eax, dword ptr [ebp - 2ch], 6900h
        mov ecx, dword ptr [ebp - 2ch]
        imul edx, dword ptr [ebp + ecx*4 - 28h], 0e0h
        lea edi, [eax + edx + 5890bfd0h]
        mov ecx, 38h
        mov esi, dword ptr [ebp - 38h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp + eax*4 - 28h]
        add ecx, 1
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp + edx*4 - 28h], ecx
        ; Exact mapped bytes EB 8D: jmp 0x584f6883
        __asm _emit 0xeb
        __asm _emit 0x8d
        mov al, 1
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 4C A7 33 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xa7
        __asm _emit 0x33
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
