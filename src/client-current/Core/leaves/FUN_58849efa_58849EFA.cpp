// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58849EFA .. +0x16D bytes.
extern "C" __declspec(naked) void FUN_58849efa_58849EFA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        xor ebx, ebx
        mov ecx, ebx
        mov al, bl
        mov dword ptr [ebp - 0ch], ecx
        mov byte ptr [ebp - 1], al
        cmp dword ptr [esi + 1af2ch], ebx
        ; Exact mapped bytes 0F 84 28 01 00 00: je 0x5884a045
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [esi + 9f2ch]
        push edi
        mov edi, dword ptr [ebp + 0ch]
        mov dword ptr [ebp + 8], edx
        test bl, 7
        ; Exact mapped bytes 75 0E: jne 0x58849f3d
        __asm _emit 0x75
        __asm _emit 0x0e
        mov al, byte ptr [ecx + esi + 19f2ch]
        inc ecx
        mov byte ptr [ebp - 1], al
        mov dword ptr [ebp - 0ch], ecx
        movzx ecx, byte ptr [esi + ebx + 1f2ch]
        inc ebx
        mov dword ptr [ebp - 8], ecx
        test al, 1
        ; Exact mapped bytes 75 19: jne 0x58849f66
        __asm _emit 0x75
        __asm _emit 0x19
        movzx eax, word ptr [edi + ecx*4 + 2]
        push eax
        movzx eax, word ptr [edi + ecx*4]
        push eax
        push esi
        ; Exact mapped bytes E8 CE 25 00 00: call 0x5884c52c
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 C7 00 00 00: jmp 0x5884a02d
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edi, byte ptr [ecx + esi + 1b3dh]
        mov ecx, dword ptr [ebp + 0ch]
        movzx eax, word ptr [ecx + edi*4 + 406h]
        push eax
        movzx eax, word ptr [ecx + edi*4 + 404h]
        push eax
        push esi
        ; Exact mapped bytes E8 A3 25 00 00: call 0x5884c52c
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi*4 + 588c1e10h]
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x58849fac
        __asm _emit 0x74
        __asm _emit 0x15
        push eax
        mov eax, dword ptr [ebp - 8]
        sub eax, dword ptr [esi + edi*4 + 1e40h]
        push eax
        push esi
        ; Exact mapped bytes E8 83 25 00 00: call 0x5884c52c
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        movzx edi, word ptr [eax]
        add eax, 2
        mov dword ptr [ebp + 8], eax
        cmp edi, 100h
        ; Exact mapped bytes 73 09: jae 0x58849fc9
        __asm _emit 0x73
        __asm _emit 0x09
        mov al, byte ptr [edi + esi + 1c3dh]
        ; Exact mapped bytes EB 0C: jmp 0x58849fd5
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, edi
        shr eax, 7
        mov al, byte ptr [eax + esi + 1d3dh]
        movzx eax, al
        cmp eax, 1eh
        mov dword ptr [ebp - 8], eax
        push 588c2470h
        setb al
        movzx eax, al
        push eax
        push esi
        ; Exact mapped bytes E8 A0 F5 FF FF: call 0x58849590
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 10h]
        movzx eax, word ptr [edx + ecx*4 + 2]
        push eax
        movzx eax, word ptr [edx + ecx*4]
        push eax
        push esi
        ; Exact mapped bytes E8 25 25 00 00: call 0x5884c52c
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        add esp, 18h
        mov ecx, dword ptr [eax*4 + 588c1e88h]
        test ecx, ecx
        ; Exact mapped bytes 74 12: je 0x5884a02a
        __asm _emit 0x74
        __asm _emit 0x12
        sub edi, dword ptr [esi + eax*4 + 1eb4h]
        push ecx
        push edi
        push esi
        ; Exact mapped bytes E8 05 25 00 00: call 0x5884c52c
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov edi, dword ptr [ebp + 0ch]
        mov al, byte ptr [ebp - 1]
        mov ecx, dword ptr [ebp - 0ch]
        shr al, 1
        mov byte ptr [ebp - 1], al
        cmp ebx, dword ptr [esi + 1af2ch]
        ; Exact mapped bytes 0F 82 E6 FE FF FF: jb 0x58849f2a
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xe6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        mov ecx, dword ptr [ebp + 0ch]
        movzx eax, word ptr [ecx + 402h]
        push eax
        movzx eax, word ptr [ecx + 400h]
        push eax
        push esi
        ; Exact mapped bytes E8 CE 24 00 00: call 0x5884c52c
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
