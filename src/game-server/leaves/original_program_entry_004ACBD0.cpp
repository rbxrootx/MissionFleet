// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ACBD0 .. +0x14D bytes.
extern "C" __declspec(naked) void original_program_entry_004ACBD0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58c2e0h
        push 4b1298h
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
        add esp, -5ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], esp
        ; Exact mapped bytes FF 15 8C 23 5E 00: call dword ptr [0x5e238c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 5C ED 5D 00: mov dword ptr [0x5ded5c], eax
        __asm _emit 0xa3
        __asm _emit 0x5c
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes A1 5C ED 5D 00: mov eax, dword ptr [0x5ded5c]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        shr eax, 8
        and eax, 0ffh
        ; Exact mapped bytes A3 68 ED 5D 00: mov dword ptr [0x5ded68], eax
        __asm _emit 0xa3
        __asm _emit 0x68
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 5C ED 5D 00: mov ecx, dword ptr [0x5ded5c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        and ecx, 0ffh
        ; Exact mapped bytes 89 0D 64 ED 5D 00: mov dword ptr [0x5ded64], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 64 ED 5D 00: mov edx, dword ptr [0x5ded64]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        shl edx, 8
        ; Exact mapped bytes 03 15 68 ED 5D 00: add edx, dword ptr [0x5ded68]
        __asm _emit 0x03
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 89 15 60 ED 5D 00: mov dword ptr [0x5ded60], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes A1 5C ED 5D 00: mov eax, dword ptr [0x5ded5c]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        shr eax, 10h
        and eax, 0ffffh
        ; Exact mapped bytes A3 5C ED 5D 00: mov dword ptr [0x5ded5c], eax
        __asm _emit 0xa3
        __asm _emit 0x5c
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes E8 DD 8D 00 00: call 0x4b5a30
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x4acc64
        __asm _emit 0x75
        __asm _emit 0x0a
        push 1ch
        ; Exact mapped bytes E8 0F 01 00 00: call 0x4acd70
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes E8 57 61 00 00: call 0x4b2dc0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x4acc77
        __asm _emit 0x75
        __asm _emit 0x0a
        push 10h
        ; Exact mapped bytes E8 FC 00 00 00: call 0x4acd70
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes E8 7D CC 00 00: call 0x4b9900
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 A0 22 5E 00: call dword ptr [0x5e22a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 A8 04 5E 00: mov dword ptr [0x5e04a8], eax
        __asm _emit 0xa3
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes E8 4D CA 00 00: call 0x4b96e0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A3 24 ED 5D 00: mov dword ptr [0x5ded24], eax
        __asm _emit 0xa3
        __asm _emit 0x24
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 33 C5 00 00: call 0x4b91d0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 DE C3 00 00: call 0x4b9080
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 C9 37 00 00: call 0x4b0470
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 0
        lea ecx, [ebp - 5ch]
        push ecx
        ; Exact mapped bytes FF 15 A4 22 5E 00: call dword ptr [0x5e22a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes E8 03 C3 00 00: call 0x4b8fc0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 64h], eax
        mov edx, dword ptr [ebp - 30h]
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 74 0D: je 0x4accd7
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 2ch]
        and eax, 0ffffh
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x4accde
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0ah
        mov ecx, dword ptr [ebp - 6ch]
        push ecx
        mov edx, dword ptr [ebp - 64h]
        push edx
        push 0
        push 0
        ; Exact mapped bytes FF 15 3C 24 5E 00: call dword ptr [0x5e243c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 0A 05 02 00: call 0x4cd200
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 60h], eax
        mov eax, dword ptr [ebp - 60h]
        push eax
        ; Exact mapped bytes E8 AE 37 00 00: call 0x4b04b0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 68h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 68h]
        push edx
        ; Exact mapped bytes E8 E7 85 00 00: call 0x4b5300
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ret
    }
}
