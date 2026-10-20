// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00489041 .. +0x149 bytes.
extern "C" __declspec(naked) void FUN_00489041_00489041() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57c477h
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
        sub esp, 20h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 2ch], ecx
        mov eax, dword ptr [ebp - 2ch]
        cmp dword ptr [eax + 0e0h], 0
        ; Exact mapped bytes 0F 84 E4 00 00 00: je 0x489170
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 73 7E 0A 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x7e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 1ch], 0
        push 8
        push 0
        lea ecx, [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 C1 02 02 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        lea edx, [ebp - 1ch]
        push edx
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 15 EF FF FF: call 0x487fd7
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x4890d4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 84 7E 0A 00: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x7e
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 7D 1C: jge 0x4890fd
        __asm _emit 0x7d
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 18h]
        push edx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 96 80 0A 00: call 0x531183
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE C0: movsx eax, al
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc0
        imul eax, eax, 1dh
        mov ecx, dword ptr [ebp - 24h]
        add ecx, eax
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes EB CE: jmp 0x4890cb
        __asm _emit 0xeb
        __asm _emit 0xce
        mov edx, dword ptr [ebp - 1ch]
        imul edx, edx, 1fh
        mov eax, dword ptr [ebp - 24h]
        add eax, edx
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 0d4h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 24h]
        xor eax, 7c8ba106h
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 20h]
        xor ecx, 0f3a91cd0h
        mov dword ptr [ebp - 20h], ecx
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        push 8002030dh
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 E9 E0 FF FF: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 D3 FC FF FF: call 0x488e29
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 28h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 E1 46 06 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x46
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes EB 02: jmp 0x489172
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 2ch
        cmp ebp, esp
        ; Exact mapped bytes E8 5A F6 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xf6
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
