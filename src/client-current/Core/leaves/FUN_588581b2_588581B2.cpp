// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588581B2 .. +0xE7 bytes.
extern "C" __declspec(naked) void FUN_588581b2_588581B2() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 24ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        push edi
        mov edi, dword ptr [ebp + 0ch]
        test edi, edi
        ; Exact mapped bytes 75 18: jne 0x588581ea
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes E8 98 A2 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 C9 8D FF FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 A2 00 00 00: jmp 0x5885828c
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        push ebx
        push dword ptr [ebp + 10h]
        mov dword ptr [ebp - 24ch], ecx
        mov dword ptr [ebp - 248h], ecx
        mov dword ptr [ebp - 244h], ecx
        mov dword ptr [ebp - 240h], ecx
        mov dword ptr [ebp - 23ch], ecx
        mov byte ptr [ebp - 238h], cl
        lea ecx, [ebp - 24ch]
        push ecx
        push eax
        ; Exact mapped bytes E8 57 FF FF FF: call 0x58858178
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 32: jne 0x5885825a
        __asm _emit 0x75
        __asm _emit 0x32
        lea eax, [ebp - 234h]
        push eax
        push dword ptr [ebp - 244h]
        ; Exact mapped bytes E8 5F 00 00 00: call 0x58858299
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, eax
        pop ecx
        pop ecx
        cmp ebx, -1
        ; Exact mapped bytes 74 17: je 0x5885825a
        __asm _emit 0x74
        __asm _emit 0x17
        push dword ptr [ebp + 10h]
        lea eax, [ebp - 234h]
        push edi
        push eax
        ; Exact mapped bytes E8 FD 02 00 00: call 0x58858550
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test al, al
        ; Exact mapped bytes 75 1A: jne 0x58858274
        __asm _emit 0x75
        __asm _emit 0x1a
        cmp byte ptr [ebp - 238h], 0
        ; Exact mapped bytes 74 0C: je 0x5885826f
        __asm _emit 0x74
        __asm _emit 0x0c
        push dword ptr [ebp - 244h]
        ; Exact mapped bytes E8 A2 49 01 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 17: jmp 0x5885828b
        __asm _emit 0xeb
        __asm _emit 0x17
        cmp byte ptr [ebp - 238h], 0
        ; Exact mapped bytes 74 0C: je 0x58858289
        __asm _emit 0x74
        __asm _emit 0x0c
        push dword ptr [ebp - 244h]
        ; Exact mapped bytes E8 88 49 01 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov eax, ebx
        pop ebx
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        pop edi
        ; Exact mapped bytes E8 B9 8D FD FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x8d
        __asm _emit 0xfd
        __asm _emit 0xff
        leave
        ret
    }
}
