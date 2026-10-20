// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886D830 .. +0x94 bytes.
extern "C" __declspec(naked) void FUN_5886d830_5886D830() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        mov cl, byte ptr [ebp + 0ch]
        mov edx, dword ptr [ebp + 14h]
        movzx eax, cl
        add eax, 4
        cmp edx, eax
        ; Exact mapped bytes 73 0B: jae 0x5886d851
        __asm _emit 0x73
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 10h]
        push 0ch
        mov byte ptr [eax], 0
        pop eax
        leave
        ret
        test cl, cl
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 74 0D: je 0x5886d865
        __asm _emit 0x74
        __asm _emit 0x0d
        mov byte ptr [ecx], 2dh
        inc ecx
        mov byte ptr [ecx], 0
        cmp edx, -1
        ; Exact mapped bytes 74 01: je 0x5886d865
        __asm _emit 0x74
        __asm _emit 0x01
        dec edx
        mov eax, dword ptr [ebp + 8]
        push ebx
        push esi
        push edi
        movzx edi, byte ptr [ebp + 18h]
        lea ebx, [eax*4 - 4]
        xor edi, 1
        add edi, edi
        lea eax, [ebx + edi]
        mov esi, dword ptr [eax*4 + 588c58d0h]
        lea eax, [esi + 1]
        mov dword ptr [ebp - 4], eax
        mov al, byte ptr [esi]
        inc esi
        test al, al
        ; Exact mapped bytes 75 F9: jne 0x5886d88b
        __asm _emit 0x75
        __asm _emit 0xf9
        sub esi, dword ptr [ebp - 4]
        cmp esi, edx
        sbb eax, eax
        inc ebx
        add eax, ebx
        add eax, edi
        push dword ptr [eax*4 + 588c58d0h]
        push edx
        push ecx
        ; Exact mapped bytes E8 E4 9E FE FF: call 0x58857790
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x9e
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        pop edi
        pop esi
        pop ebx
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x5886d8b8
        __asm _emit 0x75
        __asm _emit 0x02
        leave
        ret
        xor eax, eax
        push eax
        push eax
        push eax
        push eax
        push eax
        ; Exact mapped bytes E8 15 37 FE FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x37
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
