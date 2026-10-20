// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00571363 .. +0x119 bytes.
extern "C" __declspec(naked) void FUN_00571363_00571363() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f23ch
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
        sub esp, 14h
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 75 0D: jne 0x571391
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [eax*8 + 63c638h]
        mov dword ptr [ebp + 1ch], ecx
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 75 2A: jne 0x5713c1
        __asm _emit 0x75
        __asm _emit 0x2a
        ; Exact mapped bytes E8 C7 F2 FC FF: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xf2
        __asm _emit 0xfc
        __asm _emit 0xff
        xor edx, edx
        mov dl, byte ptr [eax + 14h]
        test edx, edx
        ; Exact mapped bytes 75 0F: jne 0x5713b4
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [eax*8 + 63c63ch]
        mov dword ptr [ebp + 20h], ecx
        ; Exact mapped bytes EB 0D: jmp 0x5713c1
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [edx*8 + 63c664h]
        mov dword ptr [ebp + 20h], eax
        push 0ah
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 35 F8 FF FF: call 0x570c00
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 8C F9 FF FF: call 0x570d7d
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x571410
        __asm _emit 0x75
        __asm _emit 0x1b
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 48 F8 FF FF: call 0x570c53
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes EB 5C: jmp 0x57146c
        __asm _emit 0xeb
        __asm _emit 0x5c
        push 80000000h
        push 0ah
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 41 04 00 00: call 0x571860
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp + 1ch]
        push eax
        ; Exact mapped bytes E8 53 00 00 00: call 0x57147c
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 22: je 0x571454
        __asm _emit 0x74
        __asm _emit 0x22
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 74 1C: je 0x571454
        __asm _emit 0x74
        __asm _emit 0x1c
        push 80000000h
        push 0ah
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 19 04 00 00: call 0x571860
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 20h]
        push ecx
        ; Exact mapped bytes E8 2B 00 00 00: call 0x57147c
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 20h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 EA F7 FF FF: call 0x570c53
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
