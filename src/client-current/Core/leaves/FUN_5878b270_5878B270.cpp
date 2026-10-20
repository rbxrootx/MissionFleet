// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878B270 .. +0x163 bytes.
extern "C" __declspec(naked) void FUN_5878b270_5878B270() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 120h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10ch], ecx
        mov dword ptr [ebp - 108h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5878b2a4
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 108h]
        add eax, 1
        mov dword ptr [ebp - 108h], eax
        cmp dword ptr [ebp - 108h], 3
        ; Exact mapped bytes 7D 63: jge 0x5878b310
        __asm _emit 0x7d
        __asm _emit 0x63
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + ecx*4 + 0a8h]
        mov dword ptr [ebp - 110h], eax
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx + 4]
        add edx, 11eh
        push edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        add ecx, 47h
        push ecx
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 39 A3 02 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xa3
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + edx*4 + 0a8h]
        mov dword ptr [ebp - 114h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 83 AC CF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xac
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 85: jmp 0x5878b295
        __asm _emit 0xeb
        __asm _emit 0x85
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + 0a4h]
        mov dword ptr [ebp - 118h], eax
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx + 4]
        add edx, 126h
        push edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        add ecx, 4fh
        push ecx
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 DD A2 02 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xa2
        __asm _emit 0x02
        __asm _emit 0x00
        push 100h
        push 0
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes E8 BA 1A 0C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x1a
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 2A 6E D9 FF: call 0x58522190
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x6e
        __asm _emit 0xd9
        __asm _emit 0xff
        add esp, 4
        push eax
        push 588b68cch
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 11ch], ecx
        lea edx, [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 FD AC CF FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xac
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 120h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 CE AB CF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xab
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 83 5C 0A 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x5c
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
