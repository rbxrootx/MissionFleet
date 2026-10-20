// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588638E6 .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_588638e6_588638E6() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        mov ebx, dword ptr [ebp + 8]
        lea eax, [ebp + 10h]
        push esi
        mov esi, dword ptr [ebp + 0ch]
        push edi
        xor edi, edi
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [ebp - 0ch], ebx
        mov edx, edi
        mov dword ptr [ebp - 8], eax
        mov al, byte ptr [ebx]
        cmp al, byte ptr [edx + 588c41f0h]
        ; Exact mapped bytes 74 08: je 0x58863919
        __asm _emit 0x74
        __asm _emit 0x08
        cmp al, byte ptr [edx + 588c41f4h]
        ; Exact mapped bytes 75 5C: jne 0x58863975
        __asm _emit 0x75
        __asm _emit 0x5c
        mov eax, dword ptr [esi]
        mov cl, byte ptr [eax]
        inc eax
        inc edx
        mov dword ptr [esi], eax
        mov byte ptr [ebp - 4], cl
        mov byte ptr [ebx], cl
        cmp edx, 3
        ; Exact mapped bytes 75 DC: jne 0x58863907
        __asm _emit 0x75
        __asm _emit 0xdc
        push dword ptr [ebp - 4]
        mov ecx, esi
        ; Exact mapped bytes E8 0B 25 FF FF: call 0x58855e40
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        mov dword ptr [ebp + 10h], eax
        mov cl, byte ptr [eax]
        inc eax
        mov dword ptr [esi], eax
        mov byte ptr [ebx], cl
        cmp cl, byte ptr [edi + 588c41f8h]
        ; Exact mapped bytes 74 08: je 0x58863951
        __asm _emit 0x74
        __asm _emit 0x08
        cmp cl, byte ptr [edi + 588c4200h]
        ; Exact mapped bytes 75 30: jne 0x58863981
        __asm _emit 0x75
        __asm _emit 0x30
        mov eax, dword ptr [esi]
        mov cl, byte ptr [eax]
        inc eax
        inc edi
        mov dword ptr [esi], eax
        mov byte ptr [ebp - 4], cl
        mov byte ptr [ebx], cl
        cmp edi, 5
        ; Exact mapped bytes 75 DE: jne 0x58863941
        __asm _emit 0x75
        __asm _emit 0xde
        push dword ptr [ebp - 4]
        mov ecx, esi
        ; Exact mapped bytes E8 D3 24 FF FF: call 0x58855e40
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        push 3
        pop eax
        pop edi
        pop esi
        pop ebx
        leave
        ret
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 97 01 00 00: call 0x58863b14
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 7
        ; Exact mapped bytes EB EE: jmp 0x5886396f
        __asm _emit 0xeb
        __asm _emit 0xee
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 8B 01 00 00: call 0x58863b14
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, al
        xor eax, 1
        lea eax, [eax*4 + 3]
        ; Exact mapped bytes EB D8: jmp 0x58863970
        __asm _emit 0xeb
        __asm _emit 0xd8
    }
}
