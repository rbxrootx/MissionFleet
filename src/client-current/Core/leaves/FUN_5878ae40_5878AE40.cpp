// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878AE40 .. +0xBE bytes.
extern "C" __declspec(naked) void FUN_5878ae40_5878AE40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [ebp + 8]
        mov byte ptr [eax + 68h], cl
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [ebp + 0ch]
        mov byte ptr [edx + 69h], al
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 64h], 0
        ; Exact mapped bytes 74 21: je 0x5878ae85
        __asm _emit 0x74
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 0ch], eax
        push 10h
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 BC 61 0A 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x61
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 64h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 60h], ecx
        mov eax, dword ptr [ebp + 10h]
        mov edx, 10h
        mul edx
        mov ecx, 0ffffffffh
        cmovb eax, ecx
        push eax
        ; Exact mapped bytes E8 9C 61 0A 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x61
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx + 64h], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5878aec7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 7D 29: jge 0x5878aef8
        __asm _emit 0x7d
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 8]
        shl eax, 4
        add eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 14h], eax
        push 10h
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        shl edx, 4
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 64h]
        push edx
        ; Exact mapped bytes E8 9D 19 0C 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x19
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB C6: jmp 0x5878aebe
        __asm _emit 0xeb
        __asm _emit 0xc6
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
