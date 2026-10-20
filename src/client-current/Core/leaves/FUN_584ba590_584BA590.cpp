// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BA590 .. +0x1F7 bytes.
extern "C" __declspec(naked) void FUN_584ba590_584BA590() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887e7cdh
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
        ; Exact mapped bytes E8 50 D9 FC FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xd9
        __asm _emit 0xfc
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
        mov ecx, 808h
        idiv ecx
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx]
        sub ecx, dword ptr [eax]
        mov eax, ecx
        cdq
        mov ecx, 808h
        idiv ecx
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 44 1D 00 00: call 0x584bc350
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 30h], eax
        ; Exact mapped bytes 75 06: jne 0x584ba617
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes E8 2A DA FC FF: call 0x58488040
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xda
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 30h]
        add edx, 1
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 D4 16 00 00: call 0x584bbd00
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        lea ecx, [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 E4 FA FF FF: call 0x584ba120
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 10h], eax
        imul eax, dword ptr [ebp - 1ch], 808h
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 808h]
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
        ; Exact mapped bytes E8 26 CC FC FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xcc
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        imul ecx, dword ptr [ebp - 1ch], 808h
        add ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 10 CC FC FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xcc
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov edx, dword ptr [ebp - 40h]
        push edx
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 A9 07 00 00: call 0x584bae60
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        imul edx, dword ptr [ebp - 1ch], 808h
        add edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx]
        ; Exact mapped bytes 75 1E: jne 0x584ba6f1
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
        ; Exact mapped bytes E8 94 05 00 00: call 0x584bac80
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes EB 4A: jmp 0x584ba73b
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 78 05 00 00: call 0x584bac80
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        imul edx, dword ptr [ebp - 1ch], 808h
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 808h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 48 05 00 00: call 0x584bac80
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x05
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
        ; Exact mapped bytes E8 6A 16 00 00: call 0x584bbdc0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        imul edx, dword ptr [ebp - 1ch], 808h
        add edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 48h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 7D 08 00 00: call 0x584baff0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x08
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
