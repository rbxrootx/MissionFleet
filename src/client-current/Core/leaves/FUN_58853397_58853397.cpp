// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58853397 .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_58853397_58853397() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov edi, ecx
        lea ecx, [edi + 3ch]
        mov esi, dword ptr [ecx + 404h]
        test esi, esi
        cmove esi, ecx
        ; Exact mapped bytes E8 12 E8 FF FF: call 0x58851bc9
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [ebp + 0ch]
        lea esi, [esi + eax*2]
        add esi, -2
        mov dword ptr [ebp - 8], esi
        mov ecx, esi
        mov dword ptr [edi + 30h], esi
        mov dword ptr [ebp - 4], esi
        mov esi, dword ptr [ebp + 8]
        mov edx, dword ptr [edi + 24h]
        test edx, edx
        ; Exact mapped bytes 7F 06: jg 0x588533db
        __asm _emit 0x7f
        __asm _emit 0x06
        mov eax, esi
        or eax, ebx
        ; Exact mapped bytes 74 4A: je 0x58853425
        __asm _emit 0x74
        __asm _emit 0x4a
        push ebx
        push 0
        push 0ah
        push ebx
        lea eax, [edx - 1]
        push esi
        mov dword ptr [edi + 24h], eax
        ; Exact mapped bytes E8 33 9C 02 00: call 0x5887d020
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x9c
        __asm _emit 0x02
        __asm _emit 0x00
        pop ebx
        nop
        add ecx, 30h
        mov esi, eax
        movzx ecx, cx
        mov ebx, edx
        cmp ecx, 39h
        ; Exact mapped bytes 76 11: jbe 0x5885340f
        __asm _emit 0x76
        __asm _emit 0x11
        mov al, byte ptr [ebp + 10h]
        xor al, 1
        shl al, 5
        add al, 7
        add al, cl
        ; Exact mapped bytes 66 98: cbw
        __asm _emit 0x66
        __asm _emit 0x98
        movzx ecx, ax
        ; Exact mapped bytes 66 0F BE C1: movsx ax, cl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 01: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        add dword ptr [edi + 30h], -2
        mov ecx, dword ptr [edi + 30h]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB A9: jmp 0x588533ce
        __asm _emit 0xeb
        __asm _emit 0xa9
        mov esi, dword ptr [ebp - 8]
        lea eax, [ecx + 2]
        sub esi, ecx
        sar esi, 1
        mov dword ptr [edi + 34h], esi
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
