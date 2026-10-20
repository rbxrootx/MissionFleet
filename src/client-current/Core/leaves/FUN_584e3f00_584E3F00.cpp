// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E3F00 .. +0xE2 bytes.
extern "C" __declspec(naked) void FUN_584e3f00_584E3F00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov eax, dword ptr [ebp + 10h]
        sub eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 18h], ecx
        imul eax, dword ptr [ebp - 18h], 75h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 1ch]
        imul edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 18h]
        imul eax, dword ptr [ebp - 18h]
        add edx, eax
        push edx
        ; Exact mapped bytes E8 93 05 00 00: call 0x584e44d0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 2ch], edx
        mov dword ptr [ebp - 28h], 0
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], ecx
        mov dword ptr [ebp - 0ch], 5f5e100h
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x584e3f84
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 168h
        ; Exact mapped bytes 7D 4E: jge 0x584e3fdb
        __asm _emit 0x7d
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 1ch]
        sub eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 1ch]
        sub ecx, dword ptr [ebp - 24h]
        imul eax, ecx
        mov edx, dword ptr [ebp - 18h]
        sub edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 18h]
        sub ecx, dword ptr [ebp - 20h]
        imul edx, ecx
        add eax, edx
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7E 0C: jle 0x584e3fc4
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 10h], ecx
        imul edx, dword ptr [ebp - 4], 0ah
        push edx
        lea eax, [ebp - 24h]
        push eax
        lea ecx, [ebp - 2ch]
        push ecx
        ; Exact mapped bytes E8 7A FB FF FF: call 0x584e3b50
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes EB A0: jmp 0x584e3f7b
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov eax, dword ptr [ebp - 10h]
        mov esp, ebp
        pop ebp
        ret
    }
}
