// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58856217 .. +0xA4 bytes.
extern "C" __declspec(naked) void FUN_58856217_58856217() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 5ch
        push esi
        push dword ptr [ebp + 18h]
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 74 AA FF FF: call 0x58850c9f
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 1ch]
        mov edx, dword ptr [ebp + 10h]
        mov esi, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], esi
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], ecx
        test edx, edx
        ; Exact mapped bytes 75 23: jne 0x58856270
        __asm _emit 0x75
        __asm _emit 0x23
        lea eax, [ebp - 5ch]
        mov byte ptr [ebp - 40h], 1
        push eax
        xor eax, eax
        mov dword ptr [ebp - 44h], 16h
        push eax
        push eax
        push eax
        push eax
        push eax
        ; Exact mapped bytes E8 C6 AC FF FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        or esi, 0ffffffffh
        ; Exact mapped bytes EB 3E: jmp 0x588562ae
        __asm _emit 0xeb
        __asm _emit 0x3e
        test esi, esi
        ; Exact mapped bytes 74 D9: je 0x5885624d
        __asm _emit 0x74
        __asm _emit 0xd9
        lea eax, [ebp - 8]
        mov dword ptr [ebp - 14h], edx
        mov dword ptr [ebp - 34h], eax
        lea ecx, [ebp - 1]
        lea eax, [ebp - 5ch]
        mov dword ptr [ebp - 18h], edx
        mov dword ptr [ebp - 30h], eax
        lea eax, [ebp - 20h]
        mov dword ptr [ebp - 2ch], eax
        lea eax, [ebp - 0ch]
        mov dword ptr [ebp - 28h], eax
        lea eax, [ebp - 10h]
        mov dword ptr [ebp - 24h], eax
        lea eax, [ebp - 14h]
        push eax
        lea eax, [ebp - 34h]
        push eax
        lea eax, [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 05 B2 FF FF: call 0x588514b1
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 31 AA FF FF: call 0x58850ce7
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        pop esi
        leave
        ret
    }
}
