// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A3750 .. +0xE5 bytes.
extern "C" __declspec(naked) void FUN_004a3750_004A3750() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax], 589278h
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 18h], 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 8]
        add eax, 4
        mov ecx, dword ptr [edx]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [edx + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [edx + 0ch]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 14h], 0
        ; Exact mapped bytes E8 B8 17 0A 00: call 0x544f55
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x17
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 114h], 0
        ; Exact mapped bytes 75 0B: jne 0x4a37b7
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes E8 C1 70 0A 00: call 0x54a872
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x70
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x4a37b7
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 72: jmp 0x4a3829
        __asm _emit 0xeb
        __asm _emit 0x72
        mov edx, dword ptr [ebp - 8]
        add edx, 14h
        push edx
        push 58e480h
        push 0
        push 3
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 98 2A 5E 00: call dword ptr [0x5e2a98]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7C 54: jl 0x4a3829
        __asm _emit 0x7c
        __asm _emit 0x54
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 14h], 0
        ; Exact mapped bytes 75 11: jne 0x4a37ef
        __asm _emit 0x75
        __asm _emit 0x11
        push 2ch
        push 5ce698h
        ; Exact mapped bytes E8 16 12 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x12
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a37ef
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4a37d5
        __asm _emit 0x75
        __asm _emit 0xe0
        push 1
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 14h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 7D 1C: jge 0x4a3829
        __asm _emit 0x7d
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 14h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 14h], 0
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
