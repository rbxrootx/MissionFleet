// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051A36B .. +0x133 bytes.
extern "C" __declspec(naked) void FUN_0051a36b_0051A36B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        mov dword ptr [ebp - 44h], ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 4B 7E 01 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], eax
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 C1 FC FF FF: call 0x51a057
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 84 80 01 00: call 0x532436
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x51a3be
        __asm _emit 0x75
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 DA 00 00 00: jmp 0x51a498
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x51a3d0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 8
        ; Exact mapped bytes 7D 4A: jge 0x51a420
        __asm _emit 0x7d
        __asm _emit 0x4a
        mov eax, 1
        mov ecx, dword ptr [ebp - 14h]
        shl eax, cl
        mov ecx, dword ptr [ebp - 18h]
        and ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 74 35: je 0x51a41e
        __asm _emit 0x74
        __asm _emit 0x35
        lea edx, [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 3B FD FF FF: call 0x51a134
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 21 80 01 00: call 0x532436
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x51a41e
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes EB 7A: jmp 0x51a498
        __asm _emit 0xeb
        __asm _emit 0x7a
        ; Exact mapped bytes EB A7: jmp 0x51a3c7
        __asm _emit 0xeb
        __asm _emit 0xa7
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 4]
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 75 66: jne 0x51a493
        __asm _emit 0x75
        __asm _emit 0x66
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 8
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 1ch], eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 FE 2E 00 00: call 0x51d350
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 4]
        and edx, 2
        or edx, 1
        test edx, edx
        ; Exact mapped bytes 74 0C: je 0x51a46e
        __asm _emit 0x74
        __asm _emit 0x0c
        push 1
        push 1
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 80 80 01 00: call 0x5324ee
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov eax, dword ptr [ebp - 40h]
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 AC 7F 01 00: call 0x532436
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x51a493
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 05: jmp 0x51a498
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 8
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
