// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00468280 .. +0x188 bytes.
extern "C" __declspec(naked) void FUN_00468280_00468280() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 63e768h
        push 46d504h
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
        add esp, -10h
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 2B: jne 0x4682d4
        __asm _emit 0x75
        __asm _emit 0x2b
        push 63e740h
        push 63310ch
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 A0 4B 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4682c9
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x4682a9
        __asm _emit 0x75
        __asm _emit 0xda
        ; Exact mapped bytes E9 3F 01 00 00: jmp 0x468413
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 9
        ; Exact mapped bytes E8 D5 85 00 00: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 8B 15 20 72 68 00: mov edx, dword ptr [0x687220]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ecx], edx
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x468302
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 5
        ; Exact mapped bytes 7D 1E: jge 0x468326
        __asm _emit 0x7d
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + ecx*4 + 18h], 0
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + eax*4 + 4], 0
        ; Exact mapped bytes EB D3: jmp 0x4682f9
        __asm _emit 0xeb
        __asm _emit 0xd3
        ; Exact mapped bytes 8B 15 20 72 68 00: mov edx, dword ptr [0x687220]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes EB 08: jmp 0x468339
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x4683e2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 14h]
        and eax, 0ffffh
        test eax, eax
        ; Exact mapped bytes 7C 66: jl 0x4683b8
        __asm _emit 0x7c
        __asm _emit 0x66
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 14h]
        and edx, 0ffffh
        cmp edx, 5
        ; Exact mapped bytes 7D 55: jge 0x4683b8
        __asm _emit 0x7d
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 14h]
        and ecx, 0ffffh
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + ecx*4 + 4]
        add eax, 1
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 14h]
        and edx, 0ffffh
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + edx*4 + 4], eax
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 14h]
        and eax, 0ffffh
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + eax*4 + 18h]
        mov eax, dword ptr [ebp - 20h]
        add edx, dword ptr [eax + 10h]
        mov ecx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ecx + 14h]
        and eax, 0ffffh
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + eax*4 + 18h], edx
        ; Exact mapped bytes EB 25: jmp 0x4683dd
        __asm _emit 0xeb
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 20h]
        push edx
        push 63e71ch
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 92 4A 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4683d7
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x4683b8
        __asm _emit 0x75
        __asm _emit 0xdb
        ; Exact mapped bytes E9 4F FF FF FF: jmp 0x468331
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 8B 15 28 72 68 00: mov edx, dword ptr [0x687228]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ecx + 2ch], edx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 8B 0D 1C 72 68 00: mov ecx, dword ptr [0x68721c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [eax + 30h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes E8 02 00 00 00: call 0x468408
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0B: jmp 0x468413
        __asm _emit 0xeb
        __asm _emit 0x0b
    }
}
