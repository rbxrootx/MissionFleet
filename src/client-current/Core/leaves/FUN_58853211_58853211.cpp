// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58853211 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_58853211_58853211() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        lea ecx, [edi + 3ch]
        mov esi, dword ptr [ecx + 404h]
        test esi, esi
        cmove esi, ecx
        ; Exact mapped bytes E8 81 E9 FF FF: call 0x58851bb1
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [ebp + 8]
        lea ecx, [esi - 1]
        mov esi, dword ptr [ebp + 0ch]
        add ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, ecx
        mov dword ptr [edi + 30h], ecx
        mov eax, dword ptr [edi + 24h]
        test eax, eax
        ; Exact mapped bytes 7F 09: jg 0x58853253
        __asm _emit 0x7f
        __asm _emit 0x09
        mov eax, ebx
        or eax, esi
        ; Exact mapped bytes 74 20: je 0x58853270
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [edi + 24h]
        dec eax
        mov dword ptr [edi + 24h], eax
        mov al, bl
        and al, 7
        shrd ebx, esi, 3
        add al, 30h
        mov byte ptr [ecx], al
        shr esi, 3
        dec dword ptr [edi + 30h]
        mov edx, dword ptr [edi + 30h]
        mov ecx, edx
        ; Exact mapped bytes EB D3: jmp 0x58853243
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov ecx, dword ptr [ebp - 8]
        lea eax, [edx + 1]
        sub ecx, edx
        mov dword ptr [edi + 34h], ecx
        mov dword ptr [edi + 30h], eax
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
