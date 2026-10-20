// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588308A0 .. +0xEC bytes.
extern "C" __declspec(naked) void FUN_588308a0_588308A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        mov ebx, dword ptr [ebp + 8]
        push esi
        mov esi, dword ptr [ebp + 0ch]
        push edi
        test esi, esi
        ; Exact mapped bytes 75 0F: jne 0x588308c2
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes E8 61 38 03 00: call 0x58864119
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        mov edi, dword ptr [eax + 8]
        ; Exact mapped bytes E8 34 38 03 00: call 0x588640f4
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x588308c7
        __asm _emit 0xeb
        __asm _emit 0x05
        mov edi, dword ptr [esi + 0ch]
        mov eax, dword ptr [esi]
        mov dword ptr [ebp - 0ch], eax
        test edi, edi
        ; Exact mapped bytes 75 13: jne 0x588308e1
        __asm _emit 0x75
        __asm _emit 0x13
        lea eax, [ebx - 41h]
        cmp eax, 19h
        lea ecx, [ebx + 20h]
        cmova ecx, ebx
        mov eax, ecx
        ; Exact mapped bytes E9 A6 00 00 00: jmp 0x58830987
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, 100h
        ; Exact mapped bytes 73 18: jae 0x58830901
        __asm _emit 0x73
        __asm _emit 0x18
        test esi, esi
        ; Exact mapped bytes 75 0B: jne 0x588308f8
        __asm _emit 0x75
        __asm _emit 0x0b
        push ebx
        ; Exact mapped bytes E8 7D 37 03 00: call 0x58864070
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x37
        __asm _emit 0x03
        __asm _emit 0x00
        pop ecx
        test eax, eax
        ; Exact mapped bytes EB 07: jmp 0x588308ff
        __asm _emit 0xeb
        __asm _emit 0x07
        mov eax, dword ptr [esi + 4]
        test byte ptr [eax + ebx*2], 1
        ; Exact mapped bytes 74 70: je 0x58830971
        __asm _emit 0x74
        __asm _emit 0x70
        mov edx, ebx
        sar edx, 8
        mov dword ptr [ebp - 10h], edx
        test esi, esi
        ; Exact mapped bytes 75 18: jne 0x58830925
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes E8 0D 36 03 00: call 0x58863f1f
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x36
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov ecx, eax
        movzx eax, dl
        movzx eax, word ptr [ecx + eax*2]
        and eax, 8000h
        ; Exact mapped bytes EB 0D: jmp 0x58830932
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [esi + 4]
        movzx ecx, dl
        movzx eax, word ptr [eax + ecx*2]
        shr eax, 0fh
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x58830945
        __asm _emit 0x74
        __asm _emit 0x0f
        push 2
        mov byte ptr [ebp - 4], dl
        mov byte ptr [ebp - 3], bl
        mov byte ptr [ebp - 2], 0
        pop eax
        ; Exact mapped bytes EB 0A: jmp 0x5883094f
        __asm _emit 0xeb
        __asm _emit 0x0a
        xor eax, eax
        mov byte ptr [ebp - 4], bl
        mov byte ptr [ebp - 3], 0
        inc eax
        push 1
        push dword ptr [ebp - 0ch]
        lea ecx, [ebp - 8]
        push 3
        push ecx
        push eax
        lea eax, [ebp - 4]
        push eax
        push 100h
        push edi
        ; Exact mapped bytes E8 AC 04 00 00: call 0x58830e16
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x58830975
        __asm _emit 0x75
        __asm _emit 0x04
        mov eax, ebx
        ; Exact mapped bytes EB 12: jmp 0x58830987
        __asm _emit 0xeb
        __asm _emit 0x12
        cmp eax, 1
        movzx eax, byte ptr [ebp - 8]
        ; Exact mapped bytes 74 09: je 0x58830987
        __asm _emit 0x74
        __asm _emit 0x09
        movzx ecx, byte ptr [ebp - 7]
        shl eax, 8
        or eax, ecx
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
