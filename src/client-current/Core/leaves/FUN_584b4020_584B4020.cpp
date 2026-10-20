// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B4020 .. +0xF5 bytes.
extern "C" __declspec(naked) void FUN_584b4020_584B4020() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 0ch], ecx
        push 0b7h
        ; Exact mapped bytes 8B 0D D8 06 96 58: mov ecx, dword ptr [0x589606d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB 0A FD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x0a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 DC 1E FD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x1e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c4h]
        mov dword ptr [ebp - 14h], ecx
        push 0bh
        ; Exact mapped bytes 8B 0D D8 06 96 58: mov ecx, dword ptr [0x589606d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 63 0A FD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x0a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E4 2B FD FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x2b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 1ch], ecx
        push 0b6h
        ; Exact mapped bytes 8B 0D D8 06 96 58: mov ecx, dword ptr [0x589606d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 88 0A FD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x0a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 89 1E FD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x1e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1e8h]
        mov dword ptr [ebp - 24h], ecx
        push 0ddh
        ; Exact mapped bytes 8B 0D D8 06 96 58: mov ecx, dword ptr [0x589606d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5D 0A FD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x0a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 5E 1E FD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x1e
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 16ch]
        test ecx, ecx
        ; Exact mapped bytes 75 19: jne 0x584b40fa
        __asm _emit 0x75
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1e8h]
        mov dword ptr [ebp - 28h], eax
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 E9 1D FD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x584b4111
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1e8h]
        mov dword ptr [ebp - 2ch], edx
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 D0 1D FD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x1d
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
