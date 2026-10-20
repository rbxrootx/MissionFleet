// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58861EBC .. +0xAE bytes.
extern "C" __declspec(naked) void FUN_58861ebc_58861EBC() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 30h
        push ebx
        push esi
        push edi
        ; Exact mapped bytes E8 5C 67 FF FF: call 0x58858628
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        xor ebx, ebx
        push edi
        lea eax, [ebp - 30h]
        mov dword ptr [ebp - 30h], ebx
        push eax
        push dword ptr [ebp + 8]
        mov dword ptr [ebp - 2ch], ebx
        mov dword ptr [ebp - 28h], ebx
        mov dword ptr [ebp - 24h], ebx
        mov dword ptr [ebp - 20h], ebx
        mov byte ptr [ebp - 1ch], bl
        ; Exact mapped bytes E8 89 62 FF FF: call 0x58858178
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        add esp, 0ch
        test esi, esi
        ; Exact mapped bytes 74 0C: je 0x58861f04
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes E8 72 05 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], esi
        or esi, 0ffffffffh
        ; Exact mapped bytes EB 51: jmp 0x58861f55
        __asm _emit 0xeb
        __asm _emit 0x51
        push edi
        lea eax, [ebp - 18h]
        mov dword ptr [ebp - 18h], ebx
        push eax
        push dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 14h], ebx
        mov dword ptr [ebp - 10h], ebx
        mov dword ptr [ebp - 0ch], ebx
        mov dword ptr [ebp - 8], ebx
        mov byte ptr [ebp - 4], bl
        ; Exact mapped bytes E8 55 62 FF FF: call 0x58858178
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        add esp, 0ch
        test esi, esi
        ; Exact mapped bytes 74 0C: je 0x58861f38
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes E8 3E 05 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], esi
        or esi, 0ffffffffh
        ; Exact mapped bytes EB 0F: jmp 0x58861f47
        __asm _emit 0xeb
        __asm _emit 0x0f
        push dword ptr [ebp - 10h]
        push dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 E2 04 01 00: call 0x58872425
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        pop ecx
        mov esi, eax
        cmp byte ptr [ebp - 4], bl
        ; Exact mapped bytes 74 09: je 0x58861f55
        __asm _emit 0x74
        __asm _emit 0x09
        push dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BC AC 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        cmp byte ptr [ebp - 1ch], bl
        ; Exact mapped bytes 74 09: je 0x58861f63
        __asm _emit 0x74
        __asm _emit 0x09
        push dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 AE AC 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        leave
        ret
    }
}
