// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004139A9 .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_004139a9_004139A9() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push esi
        lea eax, [ebp - 2]
        push edi
        push eax
        mov esi, ecx
        lea eax, [ebp - 8]
        push 4
        push eax
        mov eax, dword ptr [esi + 8]
        push 2ch
        push dword ptr [eax + 4]
        ; Exact mapped bytes E8 C5 8B 01 00: call 0x42c58e
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x8b
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
        ; Exact mapped bytes 75 0A: jne 0x4139e1
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
        mov eax, dword ptr [esi + 88h]
        test eax, eax
        ; Exact mapped bytes 75 18: jne 0x413a03
        __asm _emit 0x75
        __asm _emit 0x18
        test byte ptr [ebp - 8], 2
        ; Exact mapped bytes 75 0E: jne 0x4139ff
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [esi]
        push 0
        push 3f4h
        mov ecx, esi
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        push 1
        ; Exact mapped bytes EB 33: jmp 0x413a36
        __asm _emit 0xeb
        __asm _emit 0x33
        cmp eax, 1
        ; Exact mapped bytes 75 18: jne 0x413a20
        __asm _emit 0x75
        __asm _emit 0x18
        test byte ptr [ebp - 8], 10h
        ; Exact mapped bytes 75 0E: jne 0x413a1c
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [esi]
        push 0
        push 3f5h
        mov ecx, esi
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        push 3
        ; Exact mapped bytes EB 16: jmp 0x413a36
        __asm _emit 0xeb
        __asm _emit 0x16
        test byte ptr [ebp - 8], 4
        ; Exact mapped bytes 75 0E: jne 0x413a34
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [esi]
        push 0
        push 401h
        mov ecx, esi
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        push 2
        pop eax
        pop edi
        pop esi
        leave
        ret
    }
}
