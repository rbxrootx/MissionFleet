// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00544B50 .. +0xED bytes.
extern "C" __declspec(naked) void FUN_00544b50_00544B50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 11ch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 1E 54 F2 FF: call 0x469f80
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x54
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, eax
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 A2 00 00 00: je 0x544c26
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov byte ptr [eax], 0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 F9 41 F1 FF: call 0x458d90
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x41
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 8], eax
        lea eax, [ebp - 11ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 80000000h
        ; Exact mapped bytes FF 15 A8 B2 68 00: call dword ptr [0x68b2a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x544bb9
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 6D: jmp 0x544c26
        __asm _emit 0xeb
        __asm _emit 0x6d
        mov dword ptr [ebp - 0ch], 105h
        mov dword ptr [ebp - 10h], 0
        mov edx, dword ptr [ebp - 0ch]
        push edx
        lea eax, [ebp - 118h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 11ch]
        push ecx
        ; Exact mapped bytes FF 15 AC B2 68 00: call dword ptr [0x68b2ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x544bec
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 1
        mov edx, dword ptr [ebp - 11ch]
        push edx
        ; Exact mapped bytes FF 15 90 B2 68 00: call dword ptr [0x68b290]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 02: je 0x544c01
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 25: jmp 0x544c26
        __asm _emit 0xeb
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 4]
        push eax
        push 80000000h
        ; Exact mapped bytes FF 15 8C B2 68 00: call dword ptr [0x68b28c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        push 5ch
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 EC C6 EB FF: call 0x401307
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xc6
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 54 FF FF FF: jmp 0x544b7a
        __asm _emit 0xe9
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 F1 26 F2 FF: call 0x467320
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x26
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
