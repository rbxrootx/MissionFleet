// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00413913 .. +0x96 bytes.
extern "C" __declspec(naked) void FUN_00413913_00413913() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push esi
        mov esi, ecx
        lea eax, [ebp - 2]
        push edi
        push eax
        mov eax, dword ptr [esi + 8]
        push 3bh
        push dword ptr [eax + 4]
        ; Exact mapped bytes E8 9C 8C 01 00: call 0x42c5ca
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        mov eax, dword ptr [esi]
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 50 48: call dword ptr [eax + 0x48]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x48
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x413946
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [esi]
        push 0
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        movzx eax, word ptr [ebp - 2]
        test eax, eax
        mov dword ptr [esi + 0e0h], eax
        ; Exact mapped bytes 75 08: jne 0x41395c
        __asm _emit 0x75
        __asm _emit 0x08
        and dword ptr [esi + 0cch], eax
        ; Exact mapped bytes EB 49: jmp 0x4139a5
        __asm _emit 0xeb
        __asm _emit 0x49
        lea eax, [ebp - 4]
        push eax
        lea eax, [ebp - 24h]
        push 1eh
        push eax
        mov eax, dword ptr [esi + 8]
        push 0ah
        push dword ptr [eax + 4]
        ; Exact mapped bytes E8 1B 8C 01 00: call 0x42c58e
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        mov eax, dword ptr [esi]
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 50 48: call dword ptr [eax + 0x48]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x48
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x41398b
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [esi]
        push 0
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        cmp byte ptr [ebp - 24h], 30h
        ; Exact mapped bytes 75 14: jne 0x4139a5
        __asm _emit 0x75
        __asm _emit 0x14
        cmp byte ptr [ebp - 23h], 32h
        ; Exact mapped bytes 7D 0E: jge 0x4139a5
        __asm _emit 0x7d
        __asm _emit 0x0e
        mov eax, dword ptr [esi]
        push 0
        push 3fah
        mov ecx, esi
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        pop edi
        pop esi
        leave
        ret
    }
}
