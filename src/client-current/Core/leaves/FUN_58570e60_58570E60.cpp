// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58570E60 .. +0x1D6 bytes.
extern "C" __declspec(naked) void FUN_58570e60_58570E60() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58883a8dh
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
        ; Exact mapped bytes E8 80 70 F1 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x70
        __asm _emit 0xf1
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
        sar ecx, 1
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx]
        sub ecx, dword ptr [eax]
        sar ecx, 1
        mov dword ptr [ebp - 30h], ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 74 EE 00 00: call 0x5857fd40
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 30h], eax
        ; Exact mapped bytes 75 06: jne 0x58570ed7
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes E8 6A 71 F1 FF: call 0x58488040
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x71
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 30h]
        add edx, 1
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 84 EC 00 00: call 0x5857fb70
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        lea ecx, [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 54 03 F9 FF: call 0x58501250
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*2 + 2]
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
        ; Exact mapped bytes E8 6D 63 F1 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x63
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*2]
        push eax
        ; Exact mapped bytes E8 58 63 F1 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x63
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 B1 01 00 00: call 0x58571120
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*2]
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx]
        ; Exact mapped bytes 75 1E: jne 0x58570fa8
        __asm _emit 0x75
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 9D 00 00 00: call 0x58571040
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes EB 43: jmp 0x58570feb
        __asm _emit 0xeb
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes E8 81 00 00 00: call 0x58571040
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*2 + 2]
        push edx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 58 00 00 00: call 0x58571040
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov dword ptr [ebp - 58h], 0
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 CA EB 00 00: call 0x5857fbd0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*2]
        mov dword ptr [ebp - 48h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 9E 02 00 00: call 0x585712c0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x02
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
