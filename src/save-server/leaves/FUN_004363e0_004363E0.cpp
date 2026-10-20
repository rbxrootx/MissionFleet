// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004363E0 .. +0x176 bytes.
extern "C" __declspec(naked) void FUN_004363e0_004363E0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58bc44h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 15ch
        push edi
        lea eax, [ebp - 128h]
        mov dword ptr [ebp - 15ch], eax
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 124h], 0
        mov dword ptr [ebp - 120h], 0
        push 0
        mov ecx, dword ptr [ebp - 15ch]
        push ecx
        lea ecx, [ebp - 11ch]
        ; Exact mapped bytes E8 D6 67 00 00: call 0x43cc10
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov edi, dword ptr [ebp + 8]
        or ecx, 0ffffffffh
        xor eax, eax
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        not ecx
        add ecx, -1
        mov edx, dword ptr [ebp + 8]
        add edx, ecx
        mov dword ptr [ebp - 158h], edx
        mov al, byte ptr [ebp - 130h]
        mov byte ptr [ebp - 12ch], al
        mov ecx, dword ptr [ebp - 158h]
        mov dword ptr [ebp - 154h], ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 150h], edx
        mov al, byte ptr [ebp - 13ch]
        mov byte ptr [ebp - 138h], al
        mov ecx, dword ptr [ebp - 154h]
        sub ecx, dword ptr [ebp - 150h]
        mov dword ptr [ebp - 134h], ecx
        mov edx, dword ptr [ebp - 134h]
        add edx, 1
        push edx
        lea ecx, [ebp - 124h]
        ; Exact mapped bytes E8 F4 9D 00 00: call 0x4402a0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 124h]
        mov dword ptr [ebp - 148h], eax
        mov ecx, dword ptr [ebp - 154h]
        mov dword ptr [ebp - 144h], ecx
        mov edx, dword ptr [ebp - 150h]
        mov dword ptr [ebp - 140h], edx
        mov eax, dword ptr [ebp - 148h]
        push eax
        mov ecx, dword ptr [ebp - 144h]
        push ecx
        mov edx, dword ptr [ebp - 140h]
        push edx
        ; Exact mapped bytes E8 50 AD FC FF: call 0x40123a
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xad
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 120h], eax
        mov eax, dword ptr [ebp - 120h]
        mov byte ptr [eax], 0
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 124h]
        mov dword ptr [ebp - 160h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 160h]
        push edx
        lea ecx, [ebp - 118h]
        ; Exact mapped bytes E8 CE 00 00 00: call 0x4365f0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 118h], 634554h
        mov dword ptr [ebp - 118h], 63459ch
        push 64b740h
        lea eax, [ebp - 118h]
        push eax
        ; Exact mapped bytes E8 D9 F3 02 00: call 0x465920
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xf3
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        mov esp, ebp
        pop ebp
        ret
    }
}
