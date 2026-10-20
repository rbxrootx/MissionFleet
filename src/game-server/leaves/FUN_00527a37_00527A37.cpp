// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00527A37 .. +0xB4 bytes.
extern "C" __declspec(naked) void FUN_00527a37_00527A37() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push esi
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 09: jne 0x527a50
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 8
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 20h]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        and ecx, 10h
        test ecx, ecx
        ; Exact mapped bytes 75 7B: jne 0x527ae1
        __asm _emit 0x75
        __asm _emit 0x7b
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 8]
        sub ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 79 8F F8 FF: call 0x4b09f0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x8f
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov esi, eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 0ch]
        sub ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes E8 62 8F F8 FF: call 0x4b09f0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x8f
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        cmp esi, eax
        ; Exact mapped bytes 7D 19: jge 0x527aae
        __asm _emit 0x7d
        __asm _emit 0x19
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 8]
        sub ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 4A 8F F8 FF: call 0x4b09f0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x8f
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 18: jmp 0x527ac6
        __asm _emit 0xeb
        __asm _emit 0x18
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 0ch]
        sub ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes E8 30 8F F8 FF: call 0x4b09f0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x8f
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        shl eax, 1
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 7E 0B: jle 0x527ae1
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 8]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
