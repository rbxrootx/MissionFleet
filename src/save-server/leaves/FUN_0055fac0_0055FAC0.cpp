// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055FAC0 .. +0xFD bytes.
extern "C" __declspec(naked) void FUN_0055fac0_0055FAC0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f1b6h
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
        sub esp, 8
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax], 63c220h
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 0a8h]
        push edx
        ; Exact mapped bytes E8 02 E4 FE FF: call 0x54deff
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x55fb0f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ecx + 8ch]
        ; Exact mapped bytes 7D 3A: jge 0x55fb57
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 10h]
        imul eax, eax, 24h
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 88h]
        mov eax, dword ptr [edx + eax + 14h]
        push eax
        ; Exact mapped bytes E8 EA 77 F0 FF: call 0x467320
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x77
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 24h
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 88h]
        mov ecx, dword ptr [eax + ecx + 18h]
        push ecx
        ; Exact mapped bytes E8 CE 77 F0 FF: call 0x467320
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x77
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes EB AF: jmp 0x55fb06
        __asm _emit 0xeb
        __asm _emit 0xaf
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 88h]
        push eax
        ; Exact mapped bytes E8 BA 77 F0 FF: call 0x467320
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x77
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 84h], 0
        ; Exact mapped bytes 74 25: je 0x55fb9a
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 84h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 84h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 84h], 0
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C9: jne 0x55fb69
        __asm _emit 0x75
        __asm _emit 0xc9
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 81 CF FF FF: call 0x55cb30
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
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
