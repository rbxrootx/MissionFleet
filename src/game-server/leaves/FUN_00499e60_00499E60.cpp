// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00499E60 .. +0x1CC bytes.
extern "C" __declspec(naked) void FUN_00499e60_00499E60() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e630h
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
        push ecx
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 21: jne 0x499ea9
        __asm _emit 0x75
        __asm _emit 0x21
        push 5cafcch
        push 0
        push 37ah
        push 5cae8ch
        push 2
        ; Exact mapped bytes E8 90 6C 01 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x499ea9
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D3: jne 0x499e82
        __asm _emit 0x75
        __asm _emit 0xd3
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 21: jne 0x499ed6
        __asm _emit 0x75
        __asm _emit 0x21
        push 5cafbch
        push 0
        push 37bh
        push 5cae8ch
        push 2
        ; Exact mapped bytes E8 63 6C 01 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x499ed6
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D3: jne 0x499eaf
        __asm _emit 0x75
        __asm _emit 0xd3
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 75 21: jne 0x499f03
        __asm _emit 0x75
        __asm _emit 0x21
        push 5cafach
        push 0
        push 37ch
        push 5cae8ch
        push 2
        ; Exact mapped bytes E8 36 6C 01 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x499f03
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D3: jne 0x499edc
        __asm _emit 0x75
        __asm _emit 0xd3
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 24h]
        neg ecx
        sbb ecx, ecx
        and ecx, 2
        add ecx, 2
        mov dword ptr [ebp - 20h], ecx
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp + 0ch]
        shl edx, 2
        push edx
        ; Exact mapped bytes E8 8A 34 05 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB 06: jmp 0x499f50
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, 499f50h
        ret
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 10: call dword ptr [ecx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x10
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 50: jge 0x499fd4
        __asm _emit 0x7d
        __asm _emit 0x50
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 4A: je 0x499fd4
        __asm _emit 0x74
        __asm _emit 0x4a
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x499f9c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7D 30: jge 0x499fd4
        __asm _emit 0x7d
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + ecx*4], 0
        ; Exact mapped bytes 74 22: je 0x499fd2
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + eax*4]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        push 5caf84h
        push 0
        push 2000h
        ; Exact mapped bytes E8 31 F4 FF FF: call 0x499400
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        ; Exact mapped bytes EB BF: jmp 0x499f93
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        ; Exact mapped bytes E8 26 34 05 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x499ff8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7D 1E: jge 0x49a01e
        __asm _emit 0x7d
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 1ch]
        imul edx, edx, 34h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + edx + 14h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes E8 F0 33 05 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x33
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB D1: jmp 0x499fef
        __asm _emit 0xeb
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
    }
}
