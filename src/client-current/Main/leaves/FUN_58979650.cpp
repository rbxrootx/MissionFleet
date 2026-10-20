// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58979650 .. +0xBB bytes.
extern "C" __declspec(naked) void FUN_58979650() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov ecx, dword ptr [esi + 18h]
        mov edi, dword ptr [esi + 15ch]
        mov eax, dword ptr [esi + 138h]
        mov edx, dword ptr [ecx]
        mov dword ptr [esp + 0ch], eax
        mov dword ptr [edi + 10h], edx
        mov eax, dword ptr [esi + 18h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edi + 14h], ecx
        mov eax, dword ptr [esi + 0bch]
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x58979695
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [edi + 44h]
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x58979695
        __asm _emit 0x75
        __asm _emit 0x0d
        mov edx, dword ptr [edi + 48h]
        push edx
        push edi
        ; Exact mapped bytes E8 4E FC FF FF: call 0x589792e0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [esi + 100h]
        push ebx
        xor ebx, ebx
        test eax, eax
        ; Exact mapped bytes 7E 31: jle 0x589796d3
        __asm _emit 0x7e
        __asm _emit 0x31
        push ebp
        mov ebp, dword ptr [esp + 18h]
        mov eax, dword ptr [ebp]
        ; Exact mapped bytes 66 8B 4C 24 14: mov cx, word ptr [esp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        push 1
        ; Exact mapped bytes 66 8B 10: mov dx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 66 D3 FA: sar dx, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xfa
        ; Exact mapped bytes 0F BF C2: movsx eax, dx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc2
        push eax
        push edi
        ; Exact mapped bytes E8 AF FA FF FF: call 0x58979170
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 100h]
        add esp, 0ch
        inc ebx
        add ebp, 4
        cmp ebx, eax
        ; Exact mapped bytes 7C D5: jl 0x589796a7
        __asm _emit 0x7c
        __asm _emit 0xd5
        pop ebp
        mov ecx, dword ptr [esi + 18h]
        mov edx, dword ptr [edi + 10h]
        pop ebx
        mov dword ptr [ecx], edx
        mov eax, dword ptr [esi + 18h]
        mov ecx, dword ptr [edi + 14h]
        mov dword ptr [eax + 4], ecx
        mov esi, dword ptr [esi + 0bch]
        test esi, esi
        ; Exact mapped bytes 74 17: je 0x58979706
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [edi + 44h]
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x58979703
        __asm _emit 0x75
        __asm _emit 0x0d
        mov edx, dword ptr [edi + 48h]
        mov dword ptr [edi + 44h], esi
        inc edx
        and edx, 7
        mov dword ptr [edi + 48h], edx
        dec dword ptr [edi + 44h]
        pop edi
        mov al, 1
        pop esi
        ret
    }
}
