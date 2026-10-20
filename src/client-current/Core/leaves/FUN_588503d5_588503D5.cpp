// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588503D5 .. +0x99 bytes.
extern "C" __declspec(naked) void FUN_588503d5_588503D5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0ch]
        push edi
        test esi, esi
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x58850469
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi]
        xor ebx, ebx
        test edi, edi
        ; Exact mapped bytes 7E 71: jle 0x58850462
        __asm _emit 0x7e
        __asm _emit 0x71
        mov eax, dword ptr [ebp + 8]
        mov edx, ebx
        mov dword ptr [ebp - 4], ebx
        mov eax, dword ptr [eax + 1ch]
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [eax + 0ch]
        mov ecx, dword ptr [eax]
        add eax, 4
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 1ch], eax
        mov ecx, eax
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], eax
        test eax, eax
        ; Exact mapped bytes 7E 38: jle 0x58850454
        __asm _emit 0x7e
        __asm _emit 0x38
        mov eax, dword ptr [esi + 4]
        add eax, edx
        mov dword ptr [ebp - 18h], eax
        push dword ptr [ebp - 14h]
        push dword ptr [ecx]
        push eax
        ; Exact mapped bytes E8 54 FA FF FF: call 0x5884fe83
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x5885044f
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        dec eax
        add ecx, 4
        mov dword ptr [ebp - 8], eax
        test eax, eax
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 7F D7: jg 0x58850424
        __asm _emit 0x7f
        __asm _emit 0xd7
        ; Exact mapped bytes EB 02: jmp 0x58850451
        __asm _emit 0xeb
        __asm _emit 0x02
        mov bl, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 1ch]
        add edx, 10h
        mov dword ptr [ebp - 4], edx
        sub edi, 1
        ; Exact mapped bytes 75 AB: jne 0x5885040d
        __asm _emit 0x75
        __asm _emit 0xab
        pop edi
        pop esi
        mov al, bl
        pop ebx
        leave
        ret
        ; Exact mapped bytes E8 A2 22 01 00: call 0x58862710
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
    }
}
