// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E4560 .. +0xC5 bytes.
extern "C" __declspec(naked) void FUN_584e4560_584E4560() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov eax, dword ptr [ebp + 0ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp + 0ch], eax
        mov eax, dword ptr [ebp + 10h]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp + 10h], eax
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x584e45af
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 0ah
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 708h
        ; Exact mapped bytes 7D 69: jge 0x584e4621
        __asm _emit 0x7d
        __asm _emit 0x69
        mov eax, dword ptr [ebp - 4]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        lea edx, [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 87 F5 FF FF: call 0x584e3b50
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp + 0ch]
        add eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 09: jmp 0x584e45e0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        sub edx, dword ptr [ebp - 14h]
        cmp dword ptr [ebp - 8], edx
        ; Exact mapped bytes 7D 34: jge 0x584e461f
        __asm _emit 0x7d
        __asm _emit 0x34
        mov eax, dword ptr [ebp + 10h]
        neg eax
        add eax, 1
        cmp dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 7C 25: jl 0x584e461d
        __asm _emit 0x7c
        __asm _emit 0x25
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 1
        cmp dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes 7F 1A: jg 0x584e461d
        __asm _emit 0x7f
        __asm _emit 0x1a
        mov edx, dword ptr [ebp + 0ch]
        sub edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 0ch]
        shl eax, 1
        imul edx, eax
        add edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov al, byte ptr [ebp + 14h]
        mov byte ptr [ecx + edx], al
        ; Exact mapped bytes EB B8: jmp 0x584e45d7
        __asm _emit 0xeb
        __asm _emit 0xb8
        ; Exact mapped bytes EB 85: jmp 0x584e45a6
        __asm _emit 0xeb
        __asm _emit 0x85
        mov esp, ebp
        pop ebp
        ret
    }
}
