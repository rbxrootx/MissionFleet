// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00409FAA .. +0x102 bytes.
extern "C" __declspec(naked) void FUN_00409faa_00409FAA() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 439d57h
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
        sub esp, 78h
        mov dword ptr [ebp - 84h], ecx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 2A 0F 00 00: call 0x40af00
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 B5 00 00 00: je 0x40a093
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 84h]
        push eax
        lea ecx, [ebp - 7ch]
        ; Exact mapped bytes E8 CE A2 02 00: call 0x4342bb
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xa2
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 0
        lea ecx, [ebp - 7ch]
        ; Exact mapped bytes E8 42 0E 00 00: call 0x40ae40
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 27h
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 64 A4 FF FF: call 0x404470
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        push 0bh
        ; Exact mapped bytes FF 15 44 C5 43 00: call dword ptr [0x43c544]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [ebp - 80h], eax
        push 0ch
        ; Exact mapped bytes FF 15 44 C5 43 00: call dword ptr [0x43c544]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 26 35 00 00: call 0x40d550
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 E7 0E 00 00: call 0x40af20
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 BF 0D 00 00: call 0x40ae00
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 80h]
        add eax, 1
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 C9 0D 00 00: call 0x40ae20
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 20h]
        add eax, 1
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 84h]
        mov eax, dword ptr [edx + 17ch]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        lea ecx, [ebp - 7ch]
        ; Exact mapped bytes E8 EE 0D 00 00: call 0x40ae70
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 7ch]
        ; Exact mapped bytes E8 9C A2 02 00: call 0x43432d
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xa2
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 0B: jmp 0x40a09e
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 22 0F 00 00: call 0x40afc0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
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
        ret
    }
}
