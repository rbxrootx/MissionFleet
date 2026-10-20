// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58509D20 .. +0x5A bytes.
extern "C" __declspec(naked) void FUN_58509d20_58509D20() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes EB 1A: jmp 0x58509d40
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov eax, dword ptr [ebp + 1ch]
        sub eax, 1
        mov dword ptr [ebp + 1ch], eax
        lea ecx, [ebp + 10h]
        ; Exact mapped bytes E8 89 D7 F7 FF: call 0x584874c0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xd7
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 18h]
        add ecx, 1
        mov dword ptr [ebp + 18h], ecx
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 76 1F: jbe 0x58509d65
        __asm _emit 0x76
        __asm _emit 0x1f
        mov edx, dword ptr [ebp + 18h]
        mov al, byte ptr [edx]
        mov byte ptr [ebp - 1], al
        movzx ecx, byte ptr [ebp - 1]
        push ecx
        lea ecx, [ebp + 10h]
        ; Exact mapped bytes E8 65 D7 F7 FF: call 0x584874c0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xd7
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9E D6 FF FF: call 0x58507400
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C1: jmp 0x58509d26
        __asm _emit 0xeb
        __asm _emit 0xc1
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [edx], eax
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
