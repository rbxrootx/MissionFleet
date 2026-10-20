// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00456D80 .. +0x124 bytes.
extern "C" __declspec(naked) void FUN_00456d80_00456D80() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e0f9h
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
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 21: jne 0x456dc8
        __asm _emit 0x75
        __asm _emit 0x21
        push 677620h
        push 0
        push 0ab0h
        push 677614h
        push 2
        ; Exact mapped bytes E8 A1 60 01 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x456dc8
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D3: jne 0x456da1
        __asm _emit 0x75
        __asm _emit 0xd3
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 3A 01 00 00: call 0x456f10
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 8B 01 00 00: call 0x456f70
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 C1 05 00 00: call 0x4573b0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7D 1A: jge 0x456e12
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 23 01 00 00: call 0x456f30
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes EB 7F: jmp 0x456e91
        __asm _emit 0xeb
        __asm _emit 0x7f
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 36: jne 0x456e50
        __asm _emit 0x75
        __asm _emit 0x36
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 9C F5 FF FF: call 0x4563c0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7D 1A: jge 0x456e47
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 EE 00 00 00: call 0x456f30
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes EB 4A: jmp 0x456e91
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        mov byte ptr [eax + 4], 1
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 08 01 00 00: call 0x456f60
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 18h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 10h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        ; Exact mapped bytes E8 07 F6 FF FF: call 0x456480
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 A2 00 00 00: call 0x456f30
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
