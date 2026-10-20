// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004785A0 .. +0x193 bytes.
extern "C" __declspec(naked) void FUN_004785a0_004785A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0a8h
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 0a0h]
        push ecx
        lea edx, [ebp - 0a8h]
        push edx
        lea eax, [ebp - 9ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 75 02 00 00: call 0x478840
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4785d9
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 56 01 00 00: jmp 0x47872f
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 132h
        push 63f37ch
        push 2
        lea edx, [ebp - 9ch]
        push edx
        ; Exact mapped bytes E8 4F D1 FE FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xd1
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        add eax, 1
        push eax
        ; Exact mapped bytes E8 C3 E1 FE FF: call 0x4667c0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xe1
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 07: jne 0x478610
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 1F 01 00 00: jmp 0x47872f
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        imul eax, eax, 0ch
        mov ecx, dword ptr [eax + 68049ch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx*4 + 687538h]
        mov dword ptr [ebp - 4], eax
        push 6
        mov ecx, dword ptr [ebp + 8]
        imul ecx, ecx, 6
        add ecx, 687590h
        push ecx
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 BC CC FE FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xcc
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes A1 50 75 68 00: mov eax, dword ptr [0x687550]
        __asm _emit 0xa1
        __asm _emit 0x50
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp - 9ch]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 11 D3 FE FF: call 0x465970
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xd3
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp + 8]
        imul ecx, ecx, 0ch
        mov dword ptr [ecx + 68049ch], eax
        mov edx, dword ptr [ebp - 0a8h]
        and edx, 0ffffh
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax*4 + 687538h], edx
        push 6
        lea ecx, [ebp - 0a8h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        imul edx, edx, 6
        add edx, 687590h
        push edx
        ; Exact mapped bytes E8 61 CC FE FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xcc
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 75 0B: jne 0x4786b3
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes A3 50 75 68 00: mov dword ptr [0x687550], eax
        __asm _emit 0xa3
        __asm _emit 0x50
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 0C: jne 0x4786c5
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes 89 0D 54 75 68 00: mov dword ptr [0x687554], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        imul edx, edx, 0ch
        ; Exact mapped bytes FF 92 A0 04 68 00: call dword ptr [edx + 0x6804a0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa0
        __asm _emit 0x04
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x47870c
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [ebp + 8]
        imul eax, eax, 0ch
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 68049ch], ecx
        push 2
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 71 EC FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax*4 + 687538h], ecx
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 89 15 50 75 68 00: mov dword ptr [0x687550], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 23: jmp 0x47872f
        __asm _emit 0xeb
        __asm _emit 0x23
        cmp dword ptr [ebp - 0ch], 68038ch
        ; Exact mapped bytes 74 0E: je 0x478723
        __asm _emit 0x74
        __asm _emit 0x0e
        push 2
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 40 EC FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp + 8]
        imul ecx, ecx, 0ch
        mov eax, dword ptr [ecx + 68049ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
