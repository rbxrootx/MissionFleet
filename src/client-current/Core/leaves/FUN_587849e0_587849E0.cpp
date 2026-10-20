// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587849E0 .. +0xCA bytes.
extern "C" __declspec(naked) void FUN_587849e0_587849E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], 0
        push 0b8h
        ; Exact mapped bytes E8 07 C6 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xc6
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 10h], edx
        push 0b8h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        push edx
        ; Exact mapped bytes E8 6F 7E 0C 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x7e
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax]
        shr eax, 1
        and eax, 1fh
        mov ecx, 18h
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 FF C5 0A 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xc5
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 14h], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        shr eax, 1
        and eax, 1fh
        imul ecx, eax, 18h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        push ecx
        ; Exact mapped bytes E8 20 7E 0C 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x7e
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        push 0e0h
        ; Exact mapped bytes E8 87 C5 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xc5
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx + 18h], eax
        push 0e0h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 18h]
        push eax
        ; Exact mapped bytes E8 EF 7D 0C 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x7d
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
