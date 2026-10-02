// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Grows the 24-byte-element vector and inserts a string at the current end.
// Indexed function extent: 0x58504CA0 .. +0x1E2 bytes.
extern "C" __declspec(naked) void FUN_58504ca0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888030dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 50h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 40 32 F8 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x32
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 2ch]
        add edx, 4
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp + 8]
        sub ecx, dword ptr [eax]
        mov eax, ecx
        cdq
        mov ecx, 18h
        idiv ecx
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx]
        sub ecx, dword ptr [eax]
        mov eax, ecx
        cdq
        mov ecx, 18h
        idiv ecx
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 54 F0 F9 FF: call 0x584a3d70
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xf0
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [ebp - 30h], eax
        ; Exact mapped bytes 75 06: jne 0x58504d27
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes E8 1A 33 F8 FF: call 0x58488040
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x33
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 30h]
        add edx, 1
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 C4 3C 00 00: call 0x58508a00
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        lea ecx, [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 D4 FB FF FF: call 0x58504920
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 10h], eax
        imul eax, dword ptr [ebp - 1ch], 18h
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 18h]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 58h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 4ch], ecx
        mov dword ptr [ebp - 4], 0
        lea edx, [ebp - 50h]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 1C 25 F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x25
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        imul ecx, dword ptr [ebp - 1ch], 18h
        add ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 09 25 F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x25
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov edx, dword ptr [ebp - 40h]
        push edx
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 C2 CC FF FF: call 0x58501a80
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        imul edx, dword ptr [ebp - 1ch], 18h
        add edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx]
        ; Exact mapped bytes 75 1E: jne 0x58504df5
        __asm _emit 0x75
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes E8 70 0B 00 00: call 0x58505960
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes EB 44: jmp 0x58504e39
        __asm _emit 0xeb
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 54 0B 00 00: call 0x58505960
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        imul edx, dword ptr [ebp - 1ch], 18h
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 18h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 2A 0B 00 00: call 0x58505960
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov dword ptr [ebp - 58h], 0
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 0C 3C 00 00: call 0x58508a60
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        imul edx, dword ptr [ebp - 1ch], 18h
        add edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 48h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 52 23 00 00: call 0x585071c0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
