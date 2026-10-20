// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AA340 .. +0xCA bytes.
extern "C" __declspec(naked) void FUN_587aa340_587AA340() {
    __asm {
        push ebp
        push esi
        imul esi, dword ptr [esp + 0ch], 2ch
        push edi
        ; Exact mapped bytes 03 35 90 9C 96 58: add esi, dword ptr [0x58969c90]
        __asm _emit 0x03
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [esi]
        mov cl, byte ptr [esi + 14h]
        and cl, 1
        lea edi, [eax - 5]
        cmove edi, eax
        movzx eax, cl
        lea ebp, [eax*2 + 5]
        lea eax, [esp + 10h]
        push eax
        push 40h
        push ebp
        push edi
        ; Exact mapped bytes FF 15 68 43 89 58: call dword ptr [0x58894368]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x587aa382
        __asm _emit 0x75
        __asm _emit 0x09
        pop edi
        pop esi
        mov eax, 0ah
        pop ebp
        ret
        push ebx
        mov ebx, dword ptr [esp + 18h]
        test ebx, ebx
        ; Exact mapped bytes 74 1D: je 0x587aa3a8
        __asm _emit 0x74
        __asm _emit 0x1d
        mov byte ptr [edi], 0e9h
        mov eax, dword ptr [esi + 4]
        sub eax, edi
        sub eax, 5
        mov dword ptr [edi + 1], eax
        test byte ptr [esi + 14h], 1
        ; Exact mapped bytes 74 2A: je 0x587aa3c9
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [esi]
        ; Exact mapped bytes 66 C7 00 EB F9: mov word ptr [eax], 0xf9eb
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0xeb
        __asm _emit 0xf9
        ; Exact mapped bytes EB 21: jmp 0x587aa3c9
        __asm _emit 0xeb
        __asm _emit 0x21
        mov eax, dword ptr [esi + 0ch]
        test byte ptr [esi + 14h], 1
        mov dword ptr [edi], eax
        ; Exact mapped bytes 74 10: je 0x587aa3c3
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 46 10: mov ax, word ptr [esi + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 47 04: mov word ptr [edi + 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x04
        mov al, byte ptr [esi + 12h]
        mov byte ptr [edi + 6], al
        ; Exact mapped bytes EB 06: jmp 0x587aa3c9
        __asm _emit 0xeb
        __asm _emit 0x06
        mov al, byte ptr [esi + 10h]
        mov byte ptr [edi + 4], al
        lea eax, [esp + 14h]
        push eax
        push dword ptr [esp + 18h]
        push ebp
        push edi
        ; Exact mapped bytes FF 15 68 43 89 58: call dword ptr [0x58894368]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push ebp
        push edi
        ; Exact mapped bytes FF 15 54 42 89 58: call dword ptr [0x58894254]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes FF 15 64 43 89 58: call dword ptr [0x58894364]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov cl, bl
        xor eax, eax
        add cl, cl
        shl bl, 2
        xor cl, byte ptr [esi + 14h]
        and cl, 2
        xor cl, byte ptr [esi + 14h]
        xor bl, cl
        and bl, 4
        xor bl, cl
        mov byte ptr [esi + 14h], bl
        pop ebx
        pop edi
        pop esi
        pop ebp
        ret
    }
}
